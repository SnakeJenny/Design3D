// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackImplementation() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackImplementationPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementationPtr"), sizeof(FMovieSceneTrackImplementationPtr), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackImplementationPtr>()
{
	return FMovieSceneTrackImplementationPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackImplementationPtr(FMovieSceneTrackImplementationPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackImplementationPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackImplementationPtr")),new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementationPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementationPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
		{ "ToolTip", "Custom serialized type that attempts to store a track implementation template in inline memory if possible" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementationPtr>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackImplementationPtr",
		sizeof(FMovieSceneTrackImplementationPtr),
		alignof(FMovieSceneTrackImplementationPtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackImplementationPtr"), sizeof(FMovieSceneTrackImplementationPtr), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_Hash() { return 652077665U; }
class UScriptStruct* FMovieSceneTrackImplementation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackImplementation"), sizeof(FMovieSceneTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackImplementation>()
{
	return FMovieSceneTrackImplementation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackImplementation(FMovieSceneTrackImplementation::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackImplementation"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackImplementation")),new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementation>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackImplementation;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackImplementation.h" },
		{ "ToolTip", "Structure that allows the implementation of setup/teardown/initialization/evaluation logic at the track level." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackImplementation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
		&NewStructOps,
		"MovieSceneTrackImplementation",
		sizeof(FMovieSceneTrackImplementation),
		alignof(FMovieSceneTrackImplementation),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackImplementation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackImplementation"), sizeof(FMovieSceneTrackImplementation), Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_Hash() { return 4222778373U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
