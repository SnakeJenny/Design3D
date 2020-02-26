#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SimplePixelShader.generated.h"

/*
	参考OneColorShader.cpp和FogRendering.h
	Uniform Buffer可以将大量的需要传递至多个着色器的矩阵、向量数据等存储在uniform buffer中
	usf并没有采用hlsl的const buffer语法去定义uniformbuffer，
	从一些资料得知，可能的原因是为了统一和跨平台。
*/
USTRUCT(BlueprintType, meta = (ScriptName = "SimplePixelShaderTest"))
struct FSimpleUniformStruct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (WorldContext = "WorldContextObject"))
	FLinearColor Color1;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (WorldContext = "WorldContextObject"))
	FLinearColor Color2;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (WorldContext = "WorldContextObject"))
	FLinearColor Color3;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (WorldContext = "WorldContextObject"))
	FLinearColor Color4;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (WorldContext = "WorldContextObject"))
	int32 ColorIndex;
};

UCLASS(MinimalAPI, meta=(ScriptName="SimplePixelShaderTest"))
class USimplePixelShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	//USimplePixelShaderBlueprintLibrary();
	//USimplePixelShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer);


	UFUNCTION(BlueprintCallable, Category = "SimplePixelShader", meta = (WorldContext = "WorldContextObject"))
	static void DrawMyShaderRenderTarget(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget,FLinearColor MyColor, UTexture* MyTexture,FSimpleUniformStruct UniformStruct);

	UFUNCTION(BlueprintCallable, Category = "SimplePixelShader", meta = (WorldContext = "WorldContextObject"))
	static void UseComputeShader(const UObject* WorldContextObject, UTextureRenderTarget2D* OutputRenderTarget, FSimpleUniformStruct UniformStruct);
	/*
		向UTexture2D写入数据
	*/
	UFUNCTION(BlueprintCallable, Category = "SimplePixelShader", meta = (WorldContext = "WorldContextObject"))
	static void TextureWriting(UTexture2D* TextureToBeWrite);


	UFUNCTION(BlueprintCallable, Category = "SimplePixelShader", meta = (WorldContext = "WorldContextObject"))
	static void CreateTexture(const FString& TextureName, const FString& PackageName);
};

