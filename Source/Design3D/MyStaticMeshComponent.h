// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RuntimeMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MyStaticMeshComponent.generated.h"
/**
 * 
 */


UENUM()
enum class EPathType : uint8
{
	Absolute,
	Relative
};

USTRUCT()
struct FMeshInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		TArray<FVector> Vertices;

	UPROPERTY()
		TArray<int32> Triangles;

	UPROPERTY()
		TArray<FVector> Normals;

	UPROPERTY()
		TArray<FVector2D> UV0;

	// procedural mesh使用FLinearColor
	UPROPERTY()
		TArray<FLinearColor> VertexColors;

	// RMC使用FColor
	UPROPERTY()
		TArray<FColor> VertexFColors;

	UPROPERTY()
		TArray<FRuntimeMeshTangent> Tangents;

	UPROPERTY()
		FTransform RelativeTransform;
};

USTRUCT()
struct FReturnedData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		bool bSuccess;

	UPROPERTY()
		int32 NumMeshes;

	UPROPERTY()
		TArray<FMeshInfo> meshInfo;

	UPROPERTY()
		int32 Id;

	bool bTextureSuccess;

	TArray<uint8> PixelData;

	int32 InSizeX;

	int32 InSizeY;

	EPixelFormat InFormat;
};


UCLASS()
class DESIGN3D_API UMyStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// 使用默认构造函数和析构函数
	UMyStaticMeshComponent(const FObjectInitializer& ObjectInitializer);
	UMyStaticMeshComponent();
	~UMyStaticMeshComponent();

public:

	//~ Begin UPrimitiveComponent Interface
	// 原来的文件中，该函数是重写基类的虚函数
	UFUNCTION()
	void GetMyMaterials(UStaticMeshComponent* MyStaticMeshComponent, TArray<UMaterialInterface*>& OutMaterials);
	
	// GetUsedMaterials被BuildTextureStreamingData调用
	UFUNCTION()
	void BuildMyTextureStreamingData(UWorld* InWorld, UStaticMeshComponent* MyStaticMeshComponent);

	static bool EditorBuildTextureStreaming(UWorld* InWorld, EViewModeIndex SelectedViewMode = VMI_Unknown);

	// 从磁盘中读取图片生成纹理
	UFUNCTION()
	static void LoadTextureFromImage(const FString& ImagePath, FReturnedData& result);
	
	// 声明IImageWrapperModule
	static IImageWrapperModule& ImageWrapperModule;

	// 使用assimp读取模型数据
	UFUNCTION()
	static FReturnedData LoadMeshFromFile(FString filepath, EPathType type = EPathType::Absolute);

	// 获取RMC所需的信息
	UFUNCTION()
	bool SetRMCInfo(USceneComponent* RootComponent, UStaticMeshComponent* MyStaticMeshComponent, URuntimeMeshComponent* RMComponent, UMaterial* RMCMaterial);

	// 动态加载mesh
	bool DynamicDrawMesh(UStaticMeshComponent* MyStaticMeshComponent, URuntimeMeshComponent* RMComponent);

	// 从磁盘文件中获取纹理
	UTexture2D* GetTexture2DFromDiskFile(const FString& FilePath, int meshid);

	template <typename ParameterType, typename ExpressionType>
	//bool UpdateParameterSet(TArray<ParameterType>& Parameters, UMaterial* ParentMaterial);
	bool UpdateParameterSet(TArray<ParameterType>& Parameters, UMaterial* ParentMaterial)
	{
		bool bChanged = false;

		// Loop through all of the parameters and try to either establish a reference to the 
		// expression the parameter represents, or check to see if the parameter's name has changed.
		for (int32 ParameterIdx = 0; ParameterIdx < Parameters.Num(); ParameterIdx++)
		{
			bool bTryToFindByName = true;

			ParameterType& Parameter = Parameters[ParameterIdx];

			if (Parameter.ExpressionGUID.IsValid())
			{
				ExpressionType* Expression = nullptr;
				FindClosestExpressionByGUIDRecursive<ExpressionType>(Parameter.ParameterInfo.Name, Parameter.ExpressionGUID, ParentMaterial->Expressions, Expression);

				// Check to see if the parameter name was changed.
				if (Expression)
				{
					bTryToFindByName = false;

					if (Parameter.ParameterInfo.Name != Expression->ParameterName)
					{
						Parameter.ParameterInfo.Name = Expression->ParameterName;
						bChanged = true;
					}
				}
			}

			// No reference to the material expression exists, so try to find one in the material expression's array if we are in the editor.
			//if (bTryToFindByName && GIsEditor && !FApp::IsGame())
			{
				for (UMaterialExpression* Expression : ParentMaterial->Expressions)
				{
					//if (Expression->IsA<ExpressionType>())
					if (true)
					{
						ExpressionType* ParameterExpression = CastChecked<ExpressionType>(Expression);
						if (ParameterExpression->ParameterName == Parameter.ParameterInfo.Name)
						{
							Parameter.ExpressionGUID = ParameterExpression->ExpressionGUID;
							bChanged = true;
							break;
						}
					}
					else if (UMaterialExpressionMaterialFunctionCall* FunctionCall = Cast<UMaterialExpressionMaterialFunctionCall>(Expression))
					{
						if (FunctionCall->MaterialFunction && FunctionCall->MaterialFunction->UpdateParameterSet<ParameterType, ExpressionType>(Parameter))
						{
							bChanged = true;
							break;
						}
					}
					else if (UMaterialExpressionMaterialAttributeLayers* LayersExpression = Cast<UMaterialExpressionMaterialAttributeLayers>(Expression))
					{
						const TArray<UMaterialFunctionInterface*> Layers = LayersExpression->GetLayers();
						const TArray<UMaterialFunctionInterface*> Blends = LayersExpression->GetBlends();

						for (auto* Layer : Layers)
						{
							if (Layer && Layer->UpdateParameterSet<ParameterType, ExpressionType>(Parameter))
							{
								bChanged = true;
								break;
							}
						}

						if (!bChanged)
						{
							for (auto* Blend : Blends)
							{
								if (Blend && Blend->UpdateParameterSet<ParameterType, ExpressionType>(Parameter))
								{
									bChanged = true;
									break;
								}
							}
						}

						if (bChanged)
						{
							break;
						}
					}
				}
			}
		}

		return bChanged;
	}
	// 将模型数据加载到RMC
	//UFUNCTION()
	//static FReturnedData AddMesh(FReturnedData& result);


	// 将unpacked的信息生成流纹理数据
	//static void PackMyStreamingTextureData(ULevel* Level, TArray<FStreamingTexturePrimitiveInfo>& UnpackedData, TArray<FStreamingTextureBuildInfo>& Out_StreamingTextureData, const FBoxSphereBounds& RefBounds);


	//UFUNCTION()
	//void BuildMyTextureStreamingData(UStaticMeshComponent* MyStaticMeshComponent);

	// 原来的文件中，该函数是重写基类的虚函数
	// 未识别类型 'ENUM or STRUCT' - 类型必须是 UCLASS, USTRUCT or UENUM ". 
	// 移除UFUNCTION()可以编译通过,但调试时出现uobject的断点错误，跟材质实例化一样，why？
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	//UFUNCTION()
	//FPrimitiveSceneProxy* CreateMySceneProxy(UStaticMeshComponent* MyStaticMeshComponent);
	//~ End UPrimitiveComponent Interface

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MultiplePass")
	UMaterialInterface* SecondPassMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MultiplePass")
	bool NeedSecondPass;

	// 初始化mesh的相关变量
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RMCVariable")
	int32 NumMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RMCVariable")
	bool ManualMode;

private:
	int32 MeshLoaded;
	bool needRelease;
	TMap<int32, TFuture<FReturnedData>> ReturnedDataMap;
	TMap<int32, URuntimeMeshComponent *> MeshComponentMap;
	UMaterial* BaseMat;

private:

	// 3D Model的路径
	FString PathOfMesh;

	// 绑定Mesh和Texture
	bool BindMeshAndTexture(FReturnedData mesh, URuntimeMeshComponent * meshComponent, int meshid);
	TFuture<bool>  BindMeshAndTextureAsync(UObject* Outer, FReturnedData & mesh, URuntimeMeshComponent * meshComponent, int meshid, TFunction<void()> CompletionCallback);

	// 加载mesh
	TFuture<FReturnedData> LoadMeshFromDiskAsync(UObject* Outer, const FString& MeshPath, TFunction<void()> CompletionCallback);
	//TFuture<FReturnedData> LoadMeshFromDiskAsync(const FString& MeshPath);
	UTexture2D* CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat InFormat, FName BaseName);
};
