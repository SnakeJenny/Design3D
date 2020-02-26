// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureStreamingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStreamingTextureBuildInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingTextureBuildInfo>()
{
	return FStreamingTextureBuildInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingTextureBuildInfo(FStreamingTextureBuildInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingTextureBuildInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingTextureBuildInfo")),new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo;
	struct Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLevelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureLevelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\nIt is possible that the entry referred by this data is not actually relevant in a given quality / target.\nIt is also possible that some texture are not referred, and will then fall on fallbacks computation.\nBecause each component holds its precomputed data for each texture, this struct is designed to be as compact as possible." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\nThis value is a combination of the TexelFactor from the mesh and also the material scale.\nIt does not take into consideration StreamingDistanceMultiplier, or texture group scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\nThis is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\nstreaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex = { "TextureLevelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TextureLevelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\nthe merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\na call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, PackedRelativeBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamingTextureBuildInfo",
		sizeof(FStreamingTextureBuildInfo),
		alignof(FStreamingTextureBuildInfo),
		Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash() { return 2341581259U; }
class UScriptStruct* FStreamingTexturePrimitiveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTexturePrimitiveInfo"), sizeof(FStreamingTexturePrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingTexturePrimitiveInfo>()
{
	return FStreamingTexturePrimitiveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingTexturePrimitiveInfo(FStreamingTexturePrimitiveInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingTexturePrimitiveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingTexturePrimitiveInfo")),new UScriptStruct::TCppStructOps<FStreamingTexturePrimitiveInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingTexturePrimitiveInfo;
	struct Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "Information about a streaming texture that a primitive uses for rendering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTexturePrimitiveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\nIf available, this allows the texture streamer to generate the level streaming data before the level gets visible.\nAt that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\nAlso allows to update the relative bounds after a level get moved around from ApplyWorldOffset." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, PackedRelativeBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_TexelFactor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The streaming bounds of the texture, usually the component material bounds.\nUsually only valid for registered component, as component bounds are only updated when the components are registered.\notherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\nIn that case, only PackedRelativeBox is meaningful." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Bounds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTexturePrimitiveInfo, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_PackedRelativeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_TexelFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamingTexturePrimitiveInfo",
		sizeof(FStreamingTexturePrimitiveInfo),
		alignof(FStreamingTexturePrimitiveInfo),
		Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingTexturePrimitiveInfo"), sizeof(FStreamingTexturePrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingTexturePrimitiveInfo_Hash() { return 480888676U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
