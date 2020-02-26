// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Channels/MovieSceneChannelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChannelData() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
// End Cross Module References
class UScriptStruct* FMovieSceneKeyHandleMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyHandleMap"), sizeof(FMovieSceneKeyHandleMap), Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneKeyHandleMap>()
{
	return FMovieSceneKeyHandleMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneKeyHandleMap(FMovieSceneKeyHandleMap::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneKeyHandleMap"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyHandleMap
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyHandleMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneKeyHandleMap")),new UScriptStruct::TCppStructOps<FMovieSceneKeyHandleMap>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyHandleMap;
	struct Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneChannelData.h" },
		{ "ToolTip", "A map of key handles that is copyable, but does not copy data on copy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyHandleMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FKeyHandleLookupTable,
		&NewStructOps,
		"MovieSceneKeyHandleMap",
		sizeof(FMovieSceneKeyHandleMap),
		alignof(FMovieSceneKeyHandleMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneKeyHandleMap"), sizeof(FMovieSceneKeyHandleMap), Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Hash() { return 288602268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
