// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Evaluation/MovieScene3DTransformTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
class UScriptStruct* FMovieSceneComponentTransformSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneComponentTransformSectionTemplate"), sizeof(FMovieSceneComponentTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneComponentTransformSectionTemplate>()
{
	return FMovieSceneComponentTransformSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate(FMovieSceneComponentTransformSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneComponentTransformSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneComponentTransformSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneComponentTransformSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneComponentTransformSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneComponentTransformSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewProp_TemplateData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewProp_TemplateData = { "TemplateData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneComponentTransformSectionTemplate, TemplateData), Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewProp_TemplateData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewProp_TemplateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::NewProp_TemplateData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneComponentTransformSectionTemplate",
		sizeof(FMovieSceneComponentTransformSectionTemplate),
		alignof(FMovieSceneComponentTransformSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneComponentTransformSectionTemplate"), sizeof(FMovieSceneComponentTransformSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneComponentTransformSectionTemplate_Hash() { return 3275431018U; }
class UScriptStruct* FMovieScene3DTransformTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DTransformTemplateData"), sizeof(FMovieScene3DTransformTemplateData), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DTransformTemplateData>()
{
	return FMovieScene3DTransformTemplateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DTransformTemplateData(FMovieScene3DTransformTemplateData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DTransformTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DTransformTemplateData")),new UScriptStruct::TCppStructOps<FMovieScene3DTransformTemplateData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DTransformTemplateData;
	struct Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseQuaternionInterpolation_MetaData[];
#endif
		static void NewProp_bUseQuaternionInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseQuaternionInterpolation;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DTransformTemplateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation_SetBit(void* Obj)
	{
		((FMovieScene3DTransformTemplateData*)Obj)->bUseQuaternionInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation = { "bUseQuaternionInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieScene3DTransformTemplateData), &Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, Mask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ManualWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ManualWeight = { "ManualWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DTransformTemplateData, ManualWeight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ManualWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ManualWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ScaleCurve, FMovieScene3DTransformTemplateData), STRUCT_OFFSET(FMovieScene3DTransformTemplateData, ScaleCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RotationCurve, FMovieScene3DTransformTemplateData), STRUCT_OFFSET(FMovieScene3DTransformTemplateData, RotationCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_RotationCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_TranslationCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieScene3DTransformTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_TranslationCurve = { "TranslationCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TranslationCurve, FMovieScene3DTransformTemplateData), STRUCT_OFFSET(FMovieScene3DTransformTemplateData, TranslationCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_TranslationCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_TranslationCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_bUseQuaternionInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ManualWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_ScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_RotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::NewProp_TranslationCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieScene3DTransformTemplateData",
		sizeof(FMovieScene3DTransformTemplateData),
		alignof(FMovieScene3DTransformTemplateData),
		Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DTransformTemplateData"), sizeof(FMovieScene3DTransformTemplateData), Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DTransformTemplateData_Hash() { return 3291097529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
