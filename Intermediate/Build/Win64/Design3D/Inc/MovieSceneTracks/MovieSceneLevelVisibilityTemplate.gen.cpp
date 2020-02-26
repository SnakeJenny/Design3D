// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneLevelVisibilityTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilityTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility();
// End Cross Module References
class UScriptStruct* FMovieSceneLevelVisibilitySectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneLevelVisibilitySectionTemplate"), sizeof(FMovieSceneLevelVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneLevelVisibilitySectionTemplate>()
{
	return FMovieSceneLevelVisibilitySectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate(FMovieSceneLevelVisibilitySectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneLevelVisibilitySectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneLevelVisibilitySectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneLevelVisibilitySectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneLevelVisibilitySectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneLevelVisibilitySectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneLevelVisibilitySectionTemplate, LevelNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames_Inner = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneLevelVisibilityTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneLevelVisibilitySectionTemplate, Visibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_LevelNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::NewProp_Visibility_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneLevelVisibilitySectionTemplate",
		sizeof(FMovieSceneLevelVisibilitySectionTemplate),
		alignof(FMovieSceneLevelVisibilitySectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneLevelVisibilitySectionTemplate"), sizeof(FMovieSceneLevelVisibilitySectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_Hash() { return 241045014U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
