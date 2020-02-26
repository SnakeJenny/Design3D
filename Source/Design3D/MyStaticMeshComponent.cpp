// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStaticMeshComponent.h"
#include "Engine/StaticMesh.h"	//staticmesh引用
#include "MyStaticMeshSceneProxy.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstance.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "ModuleManager.h"
#include "FileHelper.h"
#include "Engine/TextureStreamingTypes.h"	//FStreamingTexturePrimitiveInfo引用
#include "Core/Public/Math/BoxSphereBounds.h"
#include "assimp/scene.h"  // Output data structure
#include "assimp/postprocess.h" // Post processing flags
#include "assimp/Importer.hpp"
#include "Core/Public/Async/Async.h"
#include "RenderCore/Public/RenderUtils.h"
#include "RuntimeMeshLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInstance.h"
// 添加外部lib文件，只添加头文件的话，Importer报错
#pragma comment (lib, "assimp-vc140-mt.lib")

UMyStaticMeshComponent::UMyStaticMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PathOfMesh = FString(R"(D:\Github\master_szu\ue4_project\Design3D\3D_Models)");
	MeshLoaded = 0;
	NumMeshes = 2;
	ManualMode = true;
	NeedSecondPass = false;
	SecondPassMaterial = nullptr;
	needRelease = false;
}

UMyStaticMeshComponent::UMyStaticMeshComponent()
{

}


UMyStaticMeshComponent::~UMyStaticMeshComponent()
{

}

void UMyStaticMeshComponent::GetMyMaterials(UStaticMeshComponent* MyStaticMeshComponent, TArray<UMaterialInterface*>& OutMaterials)
{
	//----------------------------------------------------------------------
	// https://zhuanlan.zhihu.com/p/69156465，
	// 基于插件的StaticMesh多Pass绘制方案。
	//----------------------------------------------------------------------

	UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MyStaticMeshComponent);
	UStaticMesh* MyStaticMesh = StaticMeshComponent->GetStaticMesh();
	if (MyStaticMesh && MyStaticMesh->RenderData)
	{
		TMap<int32, UMaterialInterface*> MapOfMaterials;
		for (int32 LODIndex = 0; LODIndex < MyStaticMesh->RenderData->LODResources.Num(); LODIndex++)
		{
			FStaticMeshLODResources& LODResources = MyStaticMesh->RenderData->LODResources[LODIndex];
			int32 MaterialNum = 0;
			for (int32 SectionIndex = 0; SectionIndex < LODResources.Sections.Num(); SectionIndex++)
			{
				// Get the material for each element at the current lod index
				int32 MaterialIndex = LODResources.Sections[SectionIndex].MaterialIndex;
				if (!MapOfMaterials.Contains(MaterialIndex))
				{
					MapOfMaterials.Add(MaterialIndex, StaticMeshComponent->GetMaterial(MaterialIndex));
					MaterialNum++;
				}
			}

			if (NeedSecondPass)
			{
				bool NeedAddMaterial = true;
				for (int i = 0; i < MapOfMaterials.Num(); ++i)
				{
					if (MapOfMaterials[i] == SecondPassMaterial)
					{
						NeedAddMaterial = false;
					}
				}
				if (NeedAddMaterial)
				{
					MapOfMaterials.Add(MaterialNum, SecondPassMaterial);
				}
			}
		}
		if (MapOfMaterials.Num() > 0)
		{
			//We need to output the material in the correct order (follow the material index)
			//So we sort the map with the material index
			MapOfMaterials.KeySort([](int32 A, int32 B) {
				return A < B; // sort keys in order
			});

			//Preadd all the material item in the array
			OutMaterials.AddZeroed(MapOfMaterials.Num());
			//Set the value in the correct order
			int32 MaterialIndex = 0;
			for (auto Kvp : MapOfMaterials)
			{
				OutMaterials[MaterialIndex++] = Kvp.Value;
			}
		}
	}
}

// 复制StaticMeshComponent.cpp中的静态函数
/**
 *	Pack the texture into data ready for saving. Also ensures a single entry per texture.
 *
 *	@param	LevelTextures			[in,out]	The list of textures referred by all component of a level. The array index maps to UTexture2D::LevelIndex.
 *	@param	UnpackedData			[in,out]	The unpacked data, emptied after the function executes.
 *	@param	StreamingTextureData	[out]		The resulting packed data.
 *	@param	RefBounds				[in]		The reference bounds used to packed the relative bounds.
 */
static void PackMyStreamingTextureData(ULevel* Level, TArray<FStreamingTexturePrimitiveInfo>& UnpackedData, TArray<FStreamingTextureBuildInfo>& Out_StreamingTextureData, const FBoxSphereBounds& RefBounds)
{
	Out_StreamingTextureData.Empty();

	while (UnpackedData.Num())
	{
		FStreamingTexturePrimitiveInfo Info = UnpackedData[0];
		UnpackedData.RemoveAtSwap(0);

		// Merge with any other lod section using the same texture.
		for (int32 Index = 0; Index < UnpackedData.Num(); ++Index)
		{
			const FStreamingTexturePrimitiveInfo& CurrInfo = UnpackedData[Index];

			if (CurrInfo.Texture == Info.Texture)
			{
				Info.Bounds = Union(Info.Bounds, CurrInfo.Bounds);
				// Take the max scale since it relates to higher texture resolution.
				Info.TexelFactor = FMath::Max<float>(Info.TexelFactor, CurrInfo.TexelFactor);

				UnpackedData.RemoveAtSwap(Index);
				--Index;
			}
		}

		FStreamingTextureBuildInfo PackedInfo;
		PackedInfo.PackFrom(Level, RefBounds, Info);
		Out_StreamingTextureData.Push(PackedInfo);
	}
}

#define LOCTEXT_NAMESPACE "TextureStreamingBuild"
void UMyStaticMeshComponent::BuildMyTextureStreamingData(UWorld* OnWorld, UStaticMeshComponent* MyStaticMeshComponent)
{
	// Generate the build reference guids
	// World.h文件中的GWorld全局变量直接获取当前的World，防止GetWorld()返回NULL。
	UWorld* InWorld;
	InWorld = GWorld;
	if (!InWorld)
	{
		return;
	}

	// EditorBuildUtils.cpp 1098行，编辑器生成流数据的初始化设置
	const EMaterialQualityLevel::Type QualityLevel = EMaterialQualityLevel::High;
	// RHI出现无法解释的外部符号，要重新编译UE4源代码，生成lib文件；
	//const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel;
	const ERHIFeatureLevel::Type FeatureLevel = InWorld->Scene->GetFeatureLevel();

	// 测试时固定为MapBuild
	ETextureStreamingBuildType BuildType = TSB_MapBuild;

	// StaticMeshComponent.cpp 766行 抽取其中部分代码
	// TextureStreamingBuild.cpp 29行 抽取其中部分代码BuildTextureStreamingData调用;
	UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MyStaticMeshComponent);
	UStaticMesh* MyStaticMesh = StaticMeshComponent->GetStaticMesh();

	// 可以从world中加载staticmesh
	//AStaticMeshActor* StaticMeshActor = InWorld->SpawnActor<AStaticMeshActor>(ActorItr->GetActorLocation(), ActorItr->GetActorRotation());
	//staticMeshActor->GetStaticMeshComponent()->SetStaticMesh(ActorItr->GetLandscapeMeshProxyComponent()->GetStaticMesh());
	
	const double StartTime = FPlatformTime::Seconds();

	// 获取当前level，源代码是遍历全部level，TextureStreamingBuild.cpp 63行
	ULevel* Level = InWorld->GetLevel(0);
	// StreamingTextureGuids，由FStreamingTextureBuildInfo::TextureLevelIndex获取到的每个纹理的Guid
	// TextureStreamingResourceGuids，在最后一个纹理流构建中使用的所有材质和网格的Guid列表。用于了解流数据是否需要重新生成，仅用于persistent level
	const bool bHadBuildData = Level->StreamingTextureGuids.Num() > 0 || Level->TextureStreamingResourceGuids.Num() > 0;
	bool bFullRebuild = true;
	bool bBuildDataValid = false;
	bool bBuildFirst = true; // 临时设置的，以后要删除
	if (bFullRebuild)
	{
		Level->bTextureStreamingRotationChanged = false;
		Level->StreamingTextureGuids.Empty();
		Level->TextureStreamingResourceGuids.Empty();
		Level->NumTextureStreamingDirtyResources = 0; // This is persistent in order to be able to notify if a rebuild is required when running a cooked build.
	}

	TSet<FGuid> ResourceGuids;
	TSet<FGuid> DummyResourceGuids;

	// 获取当前World的所有levels的所有Actors
	//TArray<AActor*> Actors;
	//UGameplayStatics::GetAllActorsOfClass(InWorld, AActor::StaticClass(), Actors);
	for (AActor* Actor : Level->Actors)
	{
		// 为了简便演示流程，这里本应该遍历level->Actors改为level(0)-actor("MyActor")
		if (Actor)
		{
			// 按照编辑器中世界大纲视图中的tag[MyActor]获取actor对象
			if (Actor->GetName().Contains("MyActor", ESearchCase::CaseSensitive))
			{
				TInlineComponentArray<UPrimitiveComponent*> Primitives;
				Actor->GetComponents<UPrimitiveComponent>(Primitives);

				// 遍历Actor的所有组件
				for (UPrimitiveComponent* Primitive : Primitives)
				{
					if (!Primitive)
					{
						continue;
					}
					else if (!Primitive->HasAnyFlags(RF_Transactional) || bBuildDataValid || bBuildFirst)
					{
						if (BuildType == TSB_MapBuild)
						{
							ULevel* CurrentLevel = Actor ? Actor->GetLevel() : nullptr;
							if (CurrentLevel)
							{
								// Get the data without any component scaling as the built data does not include scale.
								//UMeshComponent* UMeshComp = NewObject<UMeshComponent>();
								//FStreamingTextureLevelContext LevelContext = FStreamingTextureLevelContext(QualityLevel, FeatureLevel, true); // Use the boxes that were just computed!
								//FStreamingTextureLevelContext LevelContext(QualityLevel, FeatureLevel, true);
								//LevelContext.GetQualityLevel = QualityLevel;
								//LevelContext.GetFeatureLevel = FeatureLevel;
								//TArray<FStreamingTexturePrimitiveInfo> UnpackedData;
								// 为所有的materials生产streaming data
								//GetStreamingTextureInfoInner(LevelContext, nullptr, 1.f, UnpackedData);
								// 将texture数据packed并保存成streaming data
								//UStaticMeshComponent* UStaticMeshComp = NewObject<UStaticMeshComponent>();
								//PackMyStreamingTextureData(Level, UnpackedData, StreamingTextureData, Bounds);
							}
						}

						// RF_Transactional(控制UObject是否能回撤)和依赖的UObject链必须存在GetTransientPackage()
						// For non transactional primitives, like the one created from blueprints, we tolerate fails and we also don't store the guids.
						//Primitive->BuildTextureStreamingData(bFullRebuild ? TSB_MapBuild : TSB_ViewMode, QualityLevel, FeatureLevel, DummyResourceGuids);
						if (StreamingTextureData.Num() || bBuildFirst)
						{
							// 如果直接用GetStaticMesh()为NULL，必须改为MyStaticMeshComponent，why？
							DummyResourceGuids.Add(MyStaticMesh->GetLightingGuid());
							TArray<UMaterialInterface*> UsedMaterials;
							GetMyMaterials(MyStaticMeshComponent, UsedMaterials);
							for (UMaterialInterface* UsedMaterial : UsedMaterials)
							{
								// Materials not having the RF_Public are instances created dynamically.
								if (UsedMaterial && UsedMaterial->UseAnyStreamingTexture() && UsedMaterial->GetOutermost() != GetTransientPackage() && UsedMaterial->HasAnyFlags(RF_Public))
								{
									// 在编辑器中更改材质后，才会进入循环
									TArray<FGuid> MaterialGuids;
									// 实际调用OutGuids.Add(LightingGuid)，WITH_EDITORONLY_DATA
									UsedMaterial->GetLightingGuidChain(false, MaterialGuids);
									DummyResourceGuids.Append(MaterialGuids);
									bBuildDataValid = true;
								}
							}
						}

						// 演示默认它是transactional primitive，执行这句
						if (bBuildDataValid)
						{
							++Level->NumTextureStreamingUnbuiltComponents;
						}
					}
				}
			}
		}
	}

	// Used to reset per level index for textures.
	TArray<UTexture2D*> AllTextures;
	for (FObjectIterator Iter(UTexture2D::StaticClass()); Iter && bFullRebuild; ++Iter)
	{
		UTexture2D* Texture2D = Cast<UTexture2D>(*Iter);
		if (Texture2D)
		{
			AllTextures.Add(Texture2D);
		}
	}


	if (bFullRebuild)
	{
		// Reset LevelIndex to default for next use and build the level Guid array.
		for (UTexture2D* Texture2D : AllTextures)
		{
			checkSlow(Texture2D);
			Texture2D->LevelIndex = INDEX_NONE;
		}

		// Cleanup the asset references.
		DummyResourceGuids.Remove(FGuid()); // Remove the invalid guid.
		for (const FGuid& ResourceGuid : DummyResourceGuids)
		{
			Level->TextureStreamingResourceGuids.Add(ResourceGuid);
		}

		// Mark for resave if and only if rebuilding everything and also if data was updated.
		const bool bHasBuildData = Level->StreamingTextureGuids.Num() > 0 || Level->TextureStreamingResourceGuids.Num() > 0;
		if (bHadBuildData || bHasBuildData)
		{
			Level->MarkPackageDirty();
		}
	}

	// Update TextureStreamer
	ULevel::BuildStreamingData(InWorld);

	UE_LOG(TextureStreamingBuild, Display, TEXT("Build Texture Streaming took %.3f seconds."), FPlatformTime::Seconds() - StartTime);
	return;
}
#undef LOCTEXT_NAMESPACE

bool UMyStaticMeshComponent::EditorBuildTextureStreaming(UWorld* InWorld, EViewModeIndex SelectedViewMode)
{
	if (!InWorld)
		return false;

	const bool bNeedsMaterialData = SelectedViewMode == VMI_MaterialTextureScaleAccuracy || SelectedViewMode == VMI_Unknown;

	//CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
	return true;
}


FPrimitiveSceneProxy* UMyStaticMeshComponent::CreateSceneProxy()
{

	//----------------------------------------------------------------------
	// 不同的UPrimitiveComponent类通过重载CreateSceneProxy()来创建自己的FPrimitiveSceneProxy。
	// UCableComponent等每个派生的component都会改写CreateSceneProxy函数，这个函数返回component的场景代理，当需要将这个component加入到场景里面的时候就会生成一个proxy。
	// 非常的直观，在CreateSceneProxy()中直接创建FCableSceneProxy，然后进行初始化。
	// 然后在SendRenderDyamicData_Concurrent()中将数据发送到渲染线程并借由SetDynamicData_RenderThread进行数据构造。
	//----------------------------------------------------------------------

	if (GetStaticMesh() == nullptr || GetStaticMesh()->RenderData == nullptr)
	{
		return nullptr;
	}

	const TIndirectArray<FStaticMeshLODResources>& LODResources = GetStaticMesh()->RenderData->LODResources;
	if (LODResources.Num() == 0 || LODResources[FMath::Clamp<int32>(GetStaticMesh()->MinLOD.Default, 0, LODResources.Num() - 1)].VertexBuffers.StaticMeshVertexBuffer.GetNumVertices() == 0)
	{
		return nullptr;
	}

	FPrimitiveSceneProxy* Proxy = ::new FMyStaticMeshSceneProxy(this, false);
#if STATICMESH_ENABLE_DEBUG_RENDERING
	SendRenderDebugPhysics(Proxy);
#endif

	return Proxy;
}

IImageWrapperModule& UMyStaticMeshComponent::ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(TEXT("ImageWrapper"));

void UMyStaticMeshComponent::LoadTextureFromImage(const FString& ImagePath, FReturnedData& result)
{
	// 检查文件路径
	if (!FPaths::FileExists(ImagePath))
	{
		result.bTextureSuccess = false;
		return;
	}

	TArray<uint8> FileData;
	if (!FFileHelper::LoadFileToArray(FileData, *ImagePath))
	{
		result.bTextureSuccess = false;
		return;
	}

	// 使用ImageWrapper加载图片
	//IImageWrapperModule & ImageWrapperModule = FModuleManager::LoadModuleChecked< IImageWrapperModule >(FName("ImageWrapper"));
	EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(FileData.GetData(), FileData.Num());
	if (ImageFormat == EImageFormat::Invalid)
	{
		result.bTextureSuccess = false;
		return;
	}

	// Create an image wrapper for the detected image format
	IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
	if (!ImageWrapper.IsValid())
	{
		result.bTextureSuccess = false;
		return;
	}

	// Decompress the image data
	const TArray<uint8>* RawData = nullptr;
	ImageWrapper->SetCompressed(FileData.GetData(), FileData.Num());
	ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData);
	if (RawData == nullptr)
	{
		result.bTextureSuccess = false;
		return;
	}
	result.InSizeX = ImageWrapper->GetWidth();
	result.InSizeY = ImageWrapper->GetHeight();
	result.PixelData = *RawData;
	result.InFormat = EPixelFormat::PF_B8G8R8A8;
	result.bTextureSuccess = true;

}

void FindMeshInfo(const aiScene* scene, aiNode* node, FReturnedData& result)
{

	for (uint32 i = 0; i < node->mNumMeshes; i++)
	{
		std::string TestString = node->mName.C_Str();
		FString Fs = FString(TestString.c_str());
		UE_LOG(LogTemp, Warning, TEXT("FindMeshInfo. %s\n"), *Fs);
		int meshidx = *node->mMeshes;
		aiMesh *mesh = scene->mMeshes[meshidx];
		FMeshInfo &mi = result.meshInfo[meshidx];

		//transform.
		aiMatrix4x4 tempTrans = node->mTransformation;
		FMatrix tempMatrix;
		tempMatrix.M[0][0] = tempTrans.a1; tempMatrix.M[0][1] = tempTrans.b1; tempMatrix.M[0][2] = tempTrans.c1; tempMatrix.M[0][3] = tempTrans.d1;
		tempMatrix.M[1][0] = tempTrans.a2; tempMatrix.M[1][1] = tempTrans.b2; tempMatrix.M[1][2] = tempTrans.c2; tempMatrix.M[1][3] = tempTrans.d2;
		tempMatrix.M[2][0] = tempTrans.a3; tempMatrix.M[2][1] = tempTrans.b3; tempMatrix.M[2][2] = tempTrans.c3; tempMatrix.M[2][3] = tempTrans.d3;
		tempMatrix.M[3][0] = tempTrans.a4; tempMatrix.M[3][1] = tempTrans.b4; tempMatrix.M[3][2] = tempTrans.c4; tempMatrix.M[3][3] = tempTrans.d4;
		mi.RelativeTransform = FTransform(tempMatrix);

		//vet
		for (uint32 j = 0; j < mesh->mNumVertices; ++j)
		{

			FVector vertex = FVector(
				mesh->mVertices[j].x,
				mesh->mVertices[j].y,
				mesh->mVertices[j].z);

			vertex = mi.RelativeTransform.TransformFVector4(vertex);

			mi.Vertices.Push(vertex);

			//Normal
			if (mesh->HasNormals())
			{
				FVector normal = FVector(
					mesh->mNormals[j].x,
					mesh->mNormals[j].y,
					mesh->mNormals[j].z);

				//normal = mi.RelativeTransform.TransformFVector4(normal);
				mi.Normals.Push(normal);
			}
			else
			{
				mi.Normals.Push(FVector::ZeroVector);
			}

			//UV Coordinates - inconsistent coordinates
			if (mesh->HasTextureCoords(0))
			{
				FVector2D uv = FVector2D(mesh->mTextureCoords[0][j].x, -mesh->mTextureCoords[0][j].y);
				mi.UV0.Add(uv);
			}

			//Tangent
			if (mesh->HasTangentsAndBitangents())
			{
				FRuntimeMeshTangent meshTangent = FRuntimeMeshTangent(
					mesh->mTangents[j].x,
					mesh->mTangents[j].y,
					mesh->mTangents[j].z
				);
				mi.Tangents.Push(meshTangent);
			}

			//Vertex color
			if (mesh->HasVertexColors(0))
			{
				FLinearColor color = FLinearColor(
					mesh->mColors[0][j].r,
					mesh->mColors[0][j].g,
					mesh->mColors[0][j].b,
					mesh->mColors[0][j].a
				);

				FColor fcolor = FColor(
					FMath::FloorToInt(mesh->mColors[0][j].r * 255.999f),
					FMath::FloorToInt(mesh->mColors[0][j].g * 255.999f),
					FMath::FloorToInt(mesh->mColors[0][j].b * 255.999f),
					FMath::FloorToInt(mesh->mColors[0][j].a * 255.999f)
				);

				// 所有的现存UTextures都把UseLegacyGamma标识设置为true,所有的新贴图都将被设置为false。
				//FColor fcolor = color.ToFColor(false);
				mi.VertexColors.Push(color);
				mi.VertexFColors.Push(fcolor);
			}

		}
	}
}

void FindMesh(const aiScene* scene, aiNode* node, FReturnedData& retdata)
{
	FindMeshInfo(scene, node, retdata);

	for (uint32 m = 0; m < node->mNumChildren; ++m)
	{
		FindMesh(scene, node->mChildren[m], retdata);
	}
}

FReturnedData UMyStaticMeshComponent::LoadMeshFromFile(FString filepath, EPathType type)
{
	FReturnedData result;
	result.bSuccess = false;
	result.meshInfo.Empty();
	result.NumMeshes = 0;


	if (filepath.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Runtime Mesh Loader: filepath is empty.\n"));
		return result;
	}

	std::string file;
	switch (type)
	{
	case EPathType::Absolute:
		file = TCHAR_TO_UTF8(*filepath);
		break;
	case EPathType::Relative:
		file = TCHAR_TO_UTF8(*FPaths::Combine(FPaths::ProjectContentDir(), filepath));
		break;
	}

	Assimp::Importer mImporter;

	//const aiScene* mScenePtr = mImporter.ReadFile(file, 
	//	//aiProcess_FindDegenerates |
	//	aiProcess_FindInvalidData |
	//	//aiProcess_ImproveCacheLocality |
	//	aiProcess_JoinIdenticalVertices |
	//	aiProcess_OptimizeGraph |
	//	aiProcess_OptimizeMeshes | 
	//	//aiProcess_PreTransformVertices |
	//	aiProcess_Triangulate | aiProcess_MakeLeftHanded | aiProcess_CalcTangentSpace | aiProcess_GenSmoothNormals | aiProcess_OptimizeMeshes);

	/*
	// aiProcess_CalcTangentSpace 计算导入的网格的切线和切线
	// aiProcess_GenNormals	为所有网格的所有面生成法线
	// aiProcess_GenSmoothNormals 为网格中的所有顶点生成平滑法线
	// aiProcess_JoinIdenticalVertices 标识并合并相同的顶点数据集
	// aiProcess_MakeLeftHanded 将导入的数据转换为左手坐标空间,Direct X
	// aiProcess_Triangulate 对所有网格的所有面进行三角剖分
	// aiProcess_RemoveComponent 删除数据结构的某些部分（动画，材质，光源，相机，纹理，顶点组件）
	// aiProcess_ValidateDataStructure 确保所有索引均有效，所有动画和骨骼均正确链接，所有材质参考均正确
	// aiProcess_FindInvalidData 搜索无效数据
	// aiProcess_OptimizeMeshes	减少网格数量的后处理步骤 	
	// aiProcess_OptimizeGraph 后处理步骤以优化场景层次
	*/

	// aiProcessPreset_TargetRealtime_Quality
	
	const aiScene* mScenePtr = mImporter.ReadFile(file, aiProcess_GenUVCoords | aiProcess_TransformUVCoords | aiProcess_MakeLeftHanded | aiProcess_OptimizeGraph | aiProcess_OptimizeMeshes | aiProcess_JoinIdenticalVertices | aiProcess_FindInvalidData | aiProcess_Triangulate);

	if (mScenePtr == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Runtime Mesh Loader: Read mesh file failure.\n"));
		return result;
	}

	if (mScenePtr->HasMeshes())
	{
		result.meshInfo.SetNum(mScenePtr->mNumMeshes, false);

		FindMesh(mScenePtr, mScenePtr->mRootNode, result);

		/*
		aiMesh类的成员mNumFaces为多边形的个数，而mFaces数组包含了顶点的索引。
		确保每个多边形的顶点数都为3，而不是四边形或其它多边形
		*/
		for (uint32 i = 0; i < mScenePtr->mNumMeshes; ++i)
		{
			//Triangle number
			for (uint32 l = 0; l < mScenePtr->mMeshes[i]->mNumFaces; ++l)
			{
				const aiFace& Face = mScenePtr->mMeshes[i]->mFaces[l];
				assert(Face.mNumIndices == 3);
				for (uint32 m = 0; m < mScenePtr->mMeshes[i]->mFaces[l].mNumIndices; ++m)
				{
					result.meshInfo[i].Triangles.Push(mScenePtr->mMeshes[i]->mFaces[l].mIndices[m]);
				}
			}
		}

		//FString texturePath = FPaths::ChangeExtension(filepath, "ppm");
		//FString texturePath = "tile_1_0_0_tex_tex0.png";
		FString texturePath = FPaths::GetPath(filepath) + R"(\)" + "tile_1_0_0_tex_tex0.png";
		LoadTextureFromImage(texturePath, result);
		

		result.bSuccess = true;
	}

	return result;
}

TFuture<bool> UMyStaticMeshComponent::BindMeshAndTextureAsync(UObject* Outer, FReturnedData & mesh, URuntimeMeshComponent * meshComponent, int meshid, TFunction<void()> CompletionCallback)
{
	return Async<bool>(EAsyncExecution::ThreadPool, [=]() -> bool { return BindMeshAndTexture(mesh, meshComponent, meshid); }, CompletionCallback);
}

bool UMyStaticMeshComponent::BindMeshAndTexture(FReturnedData mesh, URuntimeMeshComponent * meshComponent, int meshid)
{
	int32 index = 0;
	for (FMeshInfo m : mesh.meshInfo) {


		TArray<FVector> Vertices(m.Vertices);
		for (int32 j = 0; j < Vertices.Num(); ++j) {
			Vertices[j] *= 1000;
		}
		TArray<int32> Triangles(m.Triangles);
		TArray<FVector> Normals(m.Normals);
		TArray<FVector2D> UV0(m.UV0);
		TArray<FLinearColor> VertexColors(m.VertexColors);
		TArray<FColor> VertexFColors(m.VertexFColors);
		TArray<FRuntimeMeshTangent> Tangents(m.Tangents);



		//meshComponent->CreateMeshSection(index, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);
		meshComponent->CreateMeshSection(index, Vertices, m.Triangles, m.Normals, m.UV0, VertexFColors, m.Tangents, true);
		index++;
	}


	if (mesh.bTextureSuccess && meshComponent != nullptr) {
		FString textureBaseName = TEXT("Texture_") + FString::FromInt(meshid);
		//UTexture2D* meshTexture = CreateTexture(this, mesh.PixelData, mesh.InSizeX, mesh.InSizeY, mesh.InFormat, FName(*textureBaseName));

		FString texturePath = PathOfMesh + R"(\tile_0_0_0_tex_children\)" + "tile_1_0_0_tex_tex0.png";
		UTexture2D* meshTexture_ = GetTexture2DFromDiskFile(texturePath, meshid);

		UMaterialInstanceConstant* umc = (UMaterialInstanceConstant*)UMaterialInstanceDynamic::Create(BaseMat, this);
		UMaterialInstanceDynamic* materialInst = (UMaterialInstanceDynamic*)(umc);
		//UTexture2D* meshTexture = CreateTexture(this, mesh.PixelData, mesh.InSizeX, mesh.InSizeY, mesh.InFormat, FName(*textureBaseName));
		//UMaterialInstanceDynamic * materialInst = UMaterialInstanceDynamic::Create(BaseMat, this);
		materialInst->SetTextureParameterValue("baseColor", meshTexture_);
		meshComponent->SetMaterial(0, materialInst);

	}

	return true;
}

TFuture<FReturnedData> UMyStaticMeshComponent::LoadMeshFromDiskAsync(UObject* Outer, const FString& MeshPath, TFunction<void()> CompletionCallback)
{
	TArray<FString> FoundFiles;
	// 搜索所有文件
	FString SearchedFiles = PathOfMesh + R"(\tile_0_0_0_tex_children\tile_0_0_0_tex_children)" + "*.obj";
	FString ProcessFile = PathOfMesh + R"(\tile_0_0_0_tex_children\)" + "right.obj";

	IFileManager::Get().FindFiles(FoundFiles, *SearchedFiles, true, false);

	return Async<FReturnedData>(EAsyncExecution::ThreadPool, [=]() -> FReturnedData { return UMyStaticMeshComponent::LoadMeshFromFile(ProcessFile, EPathType::Absolute); }, CompletionCallback);

	//return Async<FReturnedData>(EAsyncExecution::ThreadPool, [=]() -> FReturnedData { return UMyStaticMeshComponent::LoadMeshFromFile(PathOfMesh + R"(\)" + FoundFiles[FMath::RandRange(0, FoundFiles.Num() - 1)], EPathType::Absolute); }, CompletionCallback);

	//return Async<FReturnedData>(EAsyncExecution::ThreadPool, [=]() -> FReturnedData { return ULoaderBPFunctionLibrary::LoadMesh(PathOfMesh, EPathType::Absolute);}, CompletionCallback);
}

UTexture2D* UMyStaticMeshComponent::CreateTexture(UObject* Outer, const TArray<uint8>& PixelData, int32 InSizeX, int32 InSizeY, EPixelFormat InFormat, FName BaseName)
{
	// 参考UTexture2D.cpp中CreateTransient的实现

	// 这里报外部符号错误，可以查询RenderUtils.h中的对照表，将具体的值赋给GPixelFormats格式
	// 将GPixelFormats[InFormat].BlockSizeX/Y/Bytes) 用 BlockSizeX/Y/Bytes代替
	int32 BlockSizeX = 1;
	int32 BlockSizeY = 1;
	int32 BlockBytes = 4;

	//if (InSizeX <= 0 || InSizeY <= 0 ||
	//	(InSizeX % GPixelFormats[InFormat].BlockSizeX) != 0 ||
	//	(InSizeY % GPixelFormats[InFormat].BlockSizeY) != 0)
	//{

	// Shamelessly copied from UTexture2D::CreateTransient with a few modifications
	if (InSizeX <= 0 || InSizeY <= 0 ||
		(InSizeX % BlockSizeX) != 0 ||
		(InSizeY % BlockSizeY) != 0)
	{
		return nullptr;
	}

	// Most important difference with UTexture2D::CreateTransient: we provide the new texture with a name and an owner
	UObject* inobj = GetTransientPackage();
	FName TextureName = MakeUniqueObjectName(Outer, UTexture2D::StaticClass(), BaseName);
	UTexture2D* NewTexture = NewObject<UTexture2D>(inobj, BaseName, RF_Transient);

	NewTexture->PlatformData = new FTexturePlatformData();
	NewTexture->PlatformData->SizeX = InSizeX;
	NewTexture->PlatformData->SizeY = InSizeY;
	NewTexture->PlatformData->PixelFormat = InFormat;

	// Allocate first mipmap and upload the pixel data
	int32 NumBlocksX = InSizeX / BlockSizeX;
	int32 NumBlocksY = InSizeY / BlockSizeY;
	FTexture2DMipMap* Mip = new(NewTexture->PlatformData->Mips) FTexture2DMipMap();
	Mip->SizeX = InSizeX;
	Mip->SizeY = InSizeY;
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	void* TextureData = Mip->BulkData.Realloc(NumBlocksX * NumBlocksY * BlockBytes);
	FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num());
	Mip->BulkData.Unlock();

	NewTexture->UpdateResource();
	return NewTexture;
}


bool UMyStaticMeshComponent::SetRMCInfo(USceneComponent* RootComponent, UStaticMeshComponent* MyStaticMeshComponent, URuntimeMeshComponent* RMComponent, UMaterial* RMCMaterial)
{

	//URuntimeMeshComponent* ConvexComp = NewObject<URuntimeMeshComponent>(RMComponent, TEXT("RMCTick"));
	RMComponent->RegisterComponent();
	RMComponent->AttachTo(RootComponent);
	TArray<FVector> verts = { FVector(-100,-100,-100), //Front bottom left
		FVector(100,100,-100), //Back right bottom
		FVector(100,-100,100), //Front right top
		FVector(-100,100,100) }; //Back left top
	//Verts for a tetrahedron, technically there should be 12 verts for a proper hard shading but that's ok i guess
	TArray<int32> tris = { 0,2,1,
		3,0,1,
		0,3,2,
		1,2,3 };
	TArray<FVector2D> uv = { FVector2D(0,0),
		FVector2D(0,1),
		FVector2D(1,0),
		FVector2D(1,1) };
	//The number corresponds to the index of the vertex
	//To invert the normal of a face, just flip two of it's vertices
	RMComponent->CreateMeshSection(0, verts, tris, TArray<FVector>(), uv, TArray<FColor>(), TArray<FRuntimeMeshTangent>(), true, EUpdateFrequency::Average, ESectionUpdateFlags::CalculateNormalTangentHard);
	RMComponent->SetRelativeTransform(FTransform(FVector(0, 0, 0)));

	FString textureBaseName = TEXT("Texture_");
	FString Path = FString(R"(D:\Github\master_szu\ue4_project\Design3D\3D_Models)");
	FString texturePath = Path + R"(\)" + "Amago.png";
	UTexture2D* meshTexture = GetTexture2DFromDiskFile(texturePath, 0);
	//UTexture2D* meshTexture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *(texturePath)));
	//UMaterialInstanceConstant* umc = (UMaterialInstanceConstant*)UMaterialInstanceDynamic::Create(RMCMaterial, nullptr);
	//UMaterialInstanceDynamic* materialInst = (UMaterialInstanceDynamic*)(umc);
	//UPhysicalMaterial* phyMat = nullptr;
	//phyMat = NewObject<UPhysicalMaterial>();
	UMaterialInstanceDynamic* materialInst = UMaterialInstanceDynamic::Create(RMCMaterial, nullptr);

	//for (auto& it : materialInst->TextureParameterValues)
	//{
	//	materialInst->SetTextureParameterValue(it.ParameterInfo.Name, it.ParameterValue);
	//}
	//materialInst->PhysMaterial() = RMCMaterial;
	//UMaterialInstance* ParentInst = (UMaterialInstance*)RMCMaterial.Get();

	//materialInst->CopyParameterOverrides((UMaterialInstance*)RMCMaterial);
	materialInst->SetTextureParameterValue(TEXT("textureColor"), meshTexture);
	UMaterialInstance* ParentInst = (UMaterialInstance*)materialInst;
	UMaterial* ParentMaterial = (UMaterial*)ParentInst->Parent;
	//bool bDirty;
	//bDirty = UpdateParameterSet<FTextureParameterValue, UMaterialExpressionTextureSampleParameter>(materialInst->TextureParameterValues, ParentMaterial);
	for (UMaterialExpression* Expression : ParentMaterial->Expressions)
	{
		//materialInst->TextureParameterValues[0].ParameterInfo.Name = ParentMaterial->Expressions[0]->GetParameterName;
		//materialInst->VectorParameterValues[0].ExpressionGUID = ParentMaterial->Expressions[1]->MaterialExpressionGuid;
		materialInst->TextureParameterValues[0].ExpressionGUID = ParentMaterial->Expressions[3]->MaterialExpressionGuid;
		//materialInst->TextureParameterValues[0].ExpressionGUID.Invalidate();
		break;
	}
	//ConvexComp->SetMaterial(0, materialInst);
	RMComponent->SetMaterial(0, materialInst);


	return true;
}

bool UMyStaticMeshComponent::DynamicDrawMesh(UStaticMeshComponent* MyStaticMeshComponent, URuntimeMeshComponent* RMComponent)
{
	//URuntimeMeshComponent* meshComponent = nullptr;

	if (MeshLoaded < NumMeshes && ReturnedDataMap.Num() <= 2) {
		int meshid = MeshLoaded;

		ReturnedDataMap.Add(meshid, LoadMeshFromDiskAsync(this, PathOfMesh, [meshid, MyStaticMeshComponent, RMComponent, this]()
		{
			if (ReturnedDataMap[meshid].IsValid())
			{
				//UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MyStaticMeshComponent);
				//if (RMComponent)
				//{
				//	URuntimeMeshLibrary* RML;
				//	RML->CopyStaticMeshToRuntimeMeshComponent(MyStaticMeshComponent, 0, RMComponent, false);
				//}
				//UStaticMesh* MyStaticMesh = StaticMeshComponent->GetStaticMesh();

				AsyncTask(ENamedThreads::GameThread, [meshid, MyStaticMeshComponent, this]() {

					FReturnedData mesh = ReturnedDataMap[meshid].Get();
					if (mesh.bSuccess == true)
					{
						//SetRMCInfo(MyStaticMeshComponent, meshComponent);
						//URuntimeMeshComponent* meshComponent = nullptr;
						URuntimeMeshComponent* meshComponent = NewObject<URuntimeMeshComponent>(MyStaticMeshComponent);
						if (MeshComponentMap.Contains(meshid)) 
						{
							meshComponent = MeshComponentMap[MeshLoaded - 1];
						}
						else 
						{
							//meshComponent = NewObject<URuntimeMeshComponent>(this);
							meshComponent->RegisterComponent();
							meshComponent->AttachTo(MyStaticMeshComponent);
							MeshComponentMap.Add(meshid, meshComponent);
						}

						FVector location = FVector(FMath::FRand() * 5000, FMath::FRand() * 5000, FMath::FRand() * 5000);
						meshComponent->SetRelativeTransform(FTransform(location));

						BindMeshAndTexture(mesh, meshComponent, meshid);
						ReturnedDataMap.Remove(meshid);
					}
					else
					{
						ReturnedDataMap.Remove(meshid);
					}
				});
			}
			else 
			{
				ReturnedDataMap.Remove(meshid);
			}
		}));
		MeshLoaded++;
	}

	if (MeshLoaded > NumMeshes && ReturnedDataMap.Num() == 0) {
		//needRelease = true;
		if (MeshComponentMap.Contains(MeshLoaded - 1)) {
			//URuntimeMeshComponent* meshComponent = MeshComponentMap[MeshLoaded - 1];
			////material delete
			//UMaterialInterface * MaterialInst = meshComponent->GetMaterial(0);
			//meshComponent->SetMaterial(0, nullptr);

			////https://answers.unrealengine.com/questions/902550/asynctask-node-memory-usage.html
			//UTexture* tempTexture;
			//MaterialInst->GetTextureParameterValue(FMaterialParameterInfo("baseColor"), tempTexture);
			//UTexture2D* meshTexture = (UTexture2D*)tempTexture;
			//for (int32 i = 0; meshTexture->GetNumMips() - 1; ++i)
			//	meshTexture->StreamOut(i);
			//meshTexture->PlatformData->Mips[0].BulkData.RemoveBulkData();
			//meshTexture->ConditionalBeginDestroy();
			//meshTexture = nullptr;

			//MaterialInst->ClearAllCachedCookedPlatformData();


			////mesh delete
			//meshComponent->ClearMeshSection(0);

			////meshComponent->RemoveFromRoot();
			//meshComponent->DestroyComponent();


			////meshComponent->UnregisterComponent();
			////meshComponent->ClearAllMeshSections();
			////meshComponent->ConditionalBeginDestroy(); 
			////GetWorld()->ForceGarbageCollection(true);
			//MeshComponentMap.Remove(MeshLoaded - 1);
			////SubMeshDateMap.Remove(MeshLoaded - 1);

		}
		MeshLoaded--;
	}

	if (MeshLoaded == NumMeshes && !ManualMode && ReturnedDataMap.Num() == 0) {
		NumMeshes = FMath::RandRange(1800, 2200);
	}

	return true;
}

UTexture2D* UMyStaticMeshComponent::GetTexture2DFromDiskFile(const FString& FilePath, int meshid)
{
	TArray<uint8> RawFileData;
	UTexture2D* MyTexture = nullptr;
	if (FFileHelper::LoadFileToArray(RawFileData, *FilePath /*"<path to file>"*/))
	{
		IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
		// ImageFormat: PNG format.  Other formats are supported
		EImageFormat ImageFormat = ImageWrapperModule.DetectImageFormat(RawFileData.GetData(), RawFileData.Num());
		if (ImageFormat == EImageFormat::Invalid)
		{
			return nullptr;
		}
		IImageWrapperPtr ImageWrapper = ImageWrapperModule.CreateImageWrapper(ImageFormat);
		if (!ImageWrapper.IsValid())
		{
			return nullptr;
		}

		if (ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			const TArray<uint8>* UncompressedBGRA = nullptr;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				// Create the UTexture for rendering，与CreateTransient不同的是给出不同的纹理名字
				//MyTexture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
				FString textureBaseName = TEXT("Texture2D_") + FString::FromInt(meshid);
				MyTexture = CreateTexture(this, *UncompressedBGRA, ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8, FName(*textureBaseName));


				// Fill in the source data from the file
				void* TextureData = MyTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				MyTexture->PlatformData->Mips[0].BulkData.Unlock();

				MyTexture->Source.Init(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), 1, 1, ETextureSourceFormat::TSF_BGRA8, UncompressedBGRA->GetData());
				// Update the rendering resource from data.
				MyTexture->UpdateResource();
			}
		}
	}
	return MyTexture;
}