// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneMaterialParameterCollectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneMaterialParameterCollectionTemplate"), sizeof(FMovieSceneMaterialParameterCollectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneMaterialParameterCollectionTemplate>()
{
	return FMovieSceneMaterialParameterCollectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate(FMovieSceneMaterialParameterCollectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneMaterialParameterCollectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneMaterialParameterCollectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneMaterialParameterCollectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneMaterialParameterCollectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMaterialParameterCollectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMaterialParameterCollectionTemplate, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneMaterialParameterCollectionTemplate",
		sizeof(FMovieSceneMaterialParameterCollectionTemplate),
		alignof(FMovieSceneMaterialParameterCollectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneMaterialParameterCollectionTemplate"), sizeof(FMovieSceneMaterialParameterCollectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Hash() { return 591228098U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
