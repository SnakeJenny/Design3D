// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScene3DPathTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
class UScriptStruct* FMovieScene3DPathSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSectionTemplate"), sizeof(FMovieScene3DPathSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DPathSectionTemplate>()
{
	return FMovieScene3DPathSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene3DPathSectionTemplate(FMovieScene3DPathSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DPathSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene3DPathSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieScene3DPathSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScene3DPathSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[];
#endif
		static void NewProp_bForceUpright_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DPathSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Force Upright" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_SetBit(void* Obj)
	{
		((FMovieScene3DPathSectionTemplate*)Obj)->bForceUpright = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright = { "bForceUpright", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Reverse Timing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieScene3DPathSectionTemplate*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Follow Curve" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((FMovieScene3DPathSectionTemplate*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieScene3DPathSectionTemplate), &Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Up Axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum = { "UpAxisEnum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "Front Axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum = { "FrontAxisEnum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "The timing curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve = { "TimingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, TimingCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScene3DPathTemplate.h" },
		{ "ToolTip", "The object binding ID of the path we should attach to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID = { "PathBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene3DPathSectionTemplate, PathBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bForceUpright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_bFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_UpAxisEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_FrontAxisEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_TimingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::NewProp_PathBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScene3DPathSectionTemplate",
		sizeof(FMovieScene3DPathSectionTemplate),
		alignof(FMovieScene3DPathSectionTemplate),
		Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DPathSectionTemplate"), sizeof(FMovieScene3DPathSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene3DPathSectionTemplate_Hash() { return 896008817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
