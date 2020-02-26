// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Private/Animation/MovieScene2DTransformTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
class UScriptStruct* FMovieScene2DTransformSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieScene2DTransformSectionTemplate"), sizeof(FMovieScene2DTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieScene2DTransformSectionTemplate>()
{
	return FMovieScene2DTransformSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene2DTransformSectionTemplate(FMovieScene2DTransformSectionTemplate::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieScene2DTransformSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene2DTransformSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene2DTransformSectionTemplate>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene2DTransformSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Mask), Z_Construct_UScriptStruct_FMovieScene2DTransformMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
		{ "ToolTip", "Blending method" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Shear_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
		{ "ToolTip", "Shear curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Shear, FMovieScene2DTransformSectionTemplate), STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Shear), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Shear_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Shear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, FMovieScene2DTransformSectionTemplate), STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
		{ "ToolTip", "Rotation curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieScene2DTransformTemplate.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, FMovieScene2DTransformSectionTemplate), STRUCT_OFFSET(FMovieScene2DTransformSectionTemplate, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Shear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::NewProp_Translation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieScene2DTransformSectionTemplate",
		sizeof(FMovieScene2DTransformSectionTemplate),
		alignof(FMovieScene2DTransformSectionTemplate),
		Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene2DTransformSectionTemplate"), sizeof(FMovieScene2DTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformSectionTemplate_Hash() { return 3439571122U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
