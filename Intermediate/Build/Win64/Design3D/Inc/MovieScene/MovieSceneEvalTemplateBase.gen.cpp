// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvalTemplateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplateBase() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct();
// End Cross Module References
class UScriptStruct* FMovieSceneEvalTemplateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplateBase"), sizeof(FMovieSceneEvalTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplateBase>()
{
	return FMovieSceneEvalTemplateBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplateBase(FMovieSceneEvalTemplateBase::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplateBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplateBase")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplateBase;
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Base structure used for all movie scene evaluation templates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvalTemplateBase",
		sizeof(FMovieSceneEvalTemplateBase),
		alignof(FMovieSceneEvalTemplateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplateBase"), sizeof(FMovieSceneEvalTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Hash() { return 3489354716U; }
class UScriptStruct* FMovieSceneEmptyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEmptyStruct"), sizeof(FMovieSceneEmptyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEmptyStruct>()
{
	return FMovieSceneEmptyStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEmptyStruct(FMovieSceneEmptyStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEmptyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEmptyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEmptyStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Empty struct used for serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEmptyStruct",
		sizeof(FMovieSceneEmptyStruct),
		alignof(FMovieSceneEmptyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEmptyStruct"), sizeof(FMovieSceneEmptyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Hash() { return 3833305039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
