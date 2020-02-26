// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPlugin/Public/SimplePixelShader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplePixelShader() {}
// Cross Module References
	MYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleUniformStruct();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MYPLUGIN_API UClass* Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_USimplePixelShaderBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYPLUGIN_API UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader();
// End Cross Module References
class UScriptStruct* FSimpleUniformStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSimpleUniformStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleUniformStruct, Z_Construct_UPackage__Script_MyPlugin(), TEXT("SimpleUniformStruct"), sizeof(FSimpleUniformStruct), Get_Z_Construct_UScriptStruct_FSimpleUniformStruct_Hash());
	}
	return Singleton;
}
template<> MYPLUGIN_API UScriptStruct* StaticStruct<FSimpleUniformStruct>()
{
	return FSimpleUniformStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleUniformStruct(FSimpleUniformStruct::StaticStruct, TEXT("/Script/MyPlugin"), TEXT("SimpleUniformStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MyPlugin_StaticRegisterNativesFSimpleUniformStruct
{
	FScriptStruct_MyPlugin_StaticRegisterNativesFSimpleUniformStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleUniformStruct")),new UScriptStruct::TCppStructOps<FSimpleUniformStruct>);
	}
} ScriptStruct_MyPlugin_StaticRegisterNativesFSimpleUniformStruct;
	struct Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "ScriptName", "SimplePixelShaderTest" },
		{ "ToolTip", "\xe5\x8f\x82\xe8\x80\x83OneColorShader.cpp\xe5\x92\x8c""FogRendering.h\nUniform Buffer\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xb0\x86\xe5\xa4\xa7\xe9\x87\x8f\xe7\x9a\x84\xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe9\x80\x92\xe8\x87\xb3\xe5\xa4\x9a\xe4\xb8\xaa\xe7\x9d\x80\xe8\x89\xb2\xe5\x99\xa8\xe7\x9a\x84\xe7\x9f\xa9\xe9\x98\xb5\xe3\x80\x81\xe5\x90\x91\xe9\x87\x8f\xe6\x95\xb0\xe6\x8d\xae\xe7\xad\x89\xe5\xad\x98\xe5\x82\xa8\xe5\x9c\xa8uniform buffer\xe4\xb8\xad\nusf\xe5\xb9\xb6\xe6\xb2\xa1\xe6\x9c\x89\xe9\x87\x87\xe7\x94\xa8hlsl\xe7\x9a\x84""const buffer\xe8\xaf\xad\xe6\xb3\x95\xe5\x8e\xbb\xe5\xae\x9a\xe4\xb9\x89uniformbuffer\xef\xbc\x8c\n\xe4\xbb\x8e\xe4\xb8\x80\xe4\xba\x9b\xe8\xb5\x84\xe6\x96\x99\xe5\xbe\x97\xe7\x9f\xa5\xef\xbc\x8c\xe5\x8f\xaf\xe8\x83\xbd\xe7\x9a\x84\xe5\x8e\x9f\xe5\x9b\xa0\xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86\xe7\xbb\x9f\xe4\xb8\x80\xe5\x92\x8c\xe8\xb7\xa8\xe5\xb9\xb3\xe5\x8f\xb0\xe3\x80\x82" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleUniformStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_ColorIndex_MetaData[] = {
		{ "Category", "SimpleUniformStruct" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleUniformStruct, ColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_ColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_ColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color4_MetaData[] = {
		{ "Category", "SimpleUniformStruct" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color4 = { "Color4", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleUniformStruct, Color4), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color3_MetaData[] = {
		{ "Category", "SimpleUniformStruct" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color3 = { "Color3", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleUniformStruct, Color3), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color2_MetaData[] = {
		{ "Category", "SimpleUniformStruct" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleUniformStruct, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color1_MetaData[] = {
		{ "Category", "SimpleUniformStruct" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleUniformStruct, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_ColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::NewProp_Color1,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
		nullptr,
		&NewStructOps,
		"SimpleUniformStruct",
		sizeof(FSimpleUniformStruct),
		alignof(FSimpleUniformStruct),
		Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleUniformStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleUniformStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleUniformStruct"), sizeof(FSimpleUniformStruct), Get_Z_Construct_UScriptStruct_FSimpleUniformStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleUniformStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleUniformStruct_Hash() { return 3815783971U; }
	void USimplePixelShaderBlueprintLibrary::StaticRegisterNativesUSimplePixelShaderBlueprintLibrary()
	{
		UClass* Class = USimplePixelShaderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTexture", &USimplePixelShaderBlueprintLibrary::execCreateTexture },
			{ "DrawMyShaderRenderTarget", &USimplePixelShaderBlueprintLibrary::execDrawMyShaderRenderTarget },
			{ "TextureWriting", &USimplePixelShaderBlueprintLibrary::execTextureWriting },
			{ "UseComputeShader", &USimplePixelShaderBlueprintLibrary::execUseComputeShader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics
	{
		struct SimplePixelShaderBlueprintLibrary_eventCreateTexture_Parms
		{
			FString TextureName;
			FString PackageName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventCreateTexture_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_TextureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventCreateTexture_Parms, TextureName), METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_TextureName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_TextureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::NewProp_TextureName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplePixelShader" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplePixelShaderBlueprintLibrary, nullptr, "CreateTexture", sizeof(SimplePixelShaderBlueprintLibrary_eventCreateTexture_Parms), Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics
	{
		struct SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms
		{
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* OutputRenderTarget;
			FLinearColor MyColor;
			UTexture* MyTexture;
			FSimpleUniformStruct UniformStruct;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniformStruct;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_UniformStruct = { "UniformStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms, UniformStruct), Z_Construct_UScriptStruct_FSimpleUniformStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_MyTexture = { "MyTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms, MyTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_MyColor = { "MyColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms, MyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_UniformStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_MyTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_MyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_OutputRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplePixelShader" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "ToolTip", "USimplePixelShaderBlueprintLibrary();\nUSimplePixelShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer);" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplePixelShaderBlueprintLibrary, nullptr, "DrawMyShaderRenderTarget", sizeof(SimplePixelShaderBlueprintLibrary_eventDrawMyShaderRenderTarget_Parms), Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics
	{
		struct SimplePixelShaderBlueprintLibrary_eventTextureWriting_Parms
		{
			UTexture2D* TextureToBeWrite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureToBeWrite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::NewProp_TextureToBeWrite = { "TextureToBeWrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventTextureWriting_Parms, TextureToBeWrite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::NewProp_TextureToBeWrite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplePixelShader" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "ToolTip", "\xe5\x90\x91UTexture2D\xe5\x86\x99\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplePixelShaderBlueprintLibrary, nullptr, "TextureWriting", sizeof(SimplePixelShaderBlueprintLibrary_eventTextureWriting_Parms), Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics
	{
		struct SimplePixelShaderBlueprintLibrary_eventUseComputeShader_Parms
		{
			const UObject* WorldContextObject;
			UTextureRenderTarget2D* OutputRenderTarget;
			FSimpleUniformStruct UniformStruct;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniformStruct;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_UniformStruct = { "UniformStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventUseComputeShader_Parms, UniformStruct), Z_Construct_UScriptStruct_FSimpleUniformStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventUseComputeShader_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimplePixelShaderBlueprintLibrary_eventUseComputeShader_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_UniformStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_OutputRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimplePixelShader" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplePixelShaderBlueprintLibrary, nullptr, "UseComputeShader", sizeof(SimplePixelShaderBlueprintLibrary_eventUseComputeShader_Parms), Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_NoRegister()
	{
		return USimplePixelShaderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_CreateTexture, "CreateTexture" }, // 1974611218
		{ &Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_DrawMyShaderRenderTarget, "DrawMyShaderRenderTarget" }, // 1117796161
		{ &Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_TextureWriting, "TextureWriting" }, // 2565926863
		{ &Z_Construct_UFunction_USimplePixelShaderBlueprintLibrary_UseComputeShader, "UseComputeShader" }, // 888198341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimplePixelShader.h" },
		{ "ModuleRelativePath", "Public/SimplePixelShader.h" },
		{ "ScriptName", "SimplePixelShaderTest" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimplePixelShaderBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::ClassParams = {
		&USimplePixelShaderBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimplePixelShaderBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimplePixelShaderBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplePixelShaderBlueprintLibrary, 1928966094);
	template<> MYPLUGIN_API UClass* StaticClass<USimplePixelShaderBlueprintLibrary>()
	{
		return USimplePixelShaderBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplePixelShaderBlueprintLibrary(Z_Construct_UClass_USimplePixelShaderBlueprintLibrary, &USimplePixelShaderBlueprintLibrary::StaticClass, TEXT("/Script/MyPlugin"), TEXT("USimplePixelShaderBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplePixelShaderBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
