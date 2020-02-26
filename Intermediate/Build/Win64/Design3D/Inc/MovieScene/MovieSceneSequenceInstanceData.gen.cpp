// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceInstanceDataPtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceDataPtr"), sizeof(FMovieSceneSequenceInstanceDataPtr), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceDataPtr>()
{
	return FMovieSceneSequenceInstanceDataPtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr(FMovieSceneSequenceInstanceDataPtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceInstanceDataPtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceInstanceDataPtr")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceDataPtr;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceInstanceDataPtr",
		sizeof(FMovieSceneSequenceInstanceDataPtr),
		alignof(FMovieSceneSequenceInstanceDataPtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceInstanceDataPtr"), sizeof(FMovieSceneSequenceInstanceDataPtr), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Hash() { return 2983498210U; }
class UScriptStruct* FMovieSceneSequenceInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceData"), sizeof(FMovieSceneSequenceInstanceData), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceData>()
{
	return FMovieSceneSequenceInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceInstanceData(FMovieSceneSequenceInstanceData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceInstanceData")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceInstanceData;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
		{ "ToolTip", "Abstract base class that defines instance data for sub sequences" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceInstanceData",
		sizeof(FMovieSceneSequenceInstanceData),
		alignof(FMovieSceneSequenceInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceInstanceData"), sizeof(FMovieSceneSequenceInstanceData), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Hash() { return 3348048570U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
