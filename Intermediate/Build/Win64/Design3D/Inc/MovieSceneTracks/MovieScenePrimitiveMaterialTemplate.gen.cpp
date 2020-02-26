// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
// End Cross Module References
class UScriptStruct* FMovieScenePrimitiveMaterialTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScenePrimitiveMaterialTemplate"), sizeof(FMovieScenePrimitiveMaterialTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScenePrimitiveMaterialTemplate>()
{
	return FMovieScenePrimitiveMaterialTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate(FMovieScenePrimitiveMaterialTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScenePrimitiveMaterialTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScenePrimitiveMaterialTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScenePrimitiveMaterialTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScenePrimitiveMaterialTemplate")),new UScriptStruct::TCppStructOps<FMovieScenePrimitiveMaterialTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieScenePrimitiveMaterialTemplate;
	struct Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePrimitiveMaterialTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePrimitiveMaterialTemplate, MaterialChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePrimitiveMaterialTemplate, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScenePrimitiveMaterialTemplate",
		sizeof(FMovieScenePrimitiveMaterialTemplate),
		alignof(FMovieScenePrimitiveMaterialTemplate),
		Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScenePrimitiveMaterialTemplate"), sizeof(FMovieScenePrimitiveMaterialTemplate), Get_Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Hash() { return 600118552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
