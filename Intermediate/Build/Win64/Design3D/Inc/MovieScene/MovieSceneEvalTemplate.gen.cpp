// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
// End Cross Module References
class UScriptStruct* FMovieSceneEvalTemplatePtr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplatePtr"), sizeof(FMovieSceneEvalTemplatePtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplatePtr>()
{
	return FMovieSceneEvalTemplatePtr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplatePtr(FMovieSceneEvalTemplatePtr::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplatePtr"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplatePtr")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplatePtr>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplatePtr;
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Custom serialized type that allows serializing structs derived from FMovieSceneEvalTemplate, and attempts to store an evaluation template in inline memory if possible" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplatePtr>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvalTemplatePtr",
		sizeof(FMovieSceneEvalTemplatePtr),
		alignof(FMovieSceneEvalTemplatePtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplatePtr"), sizeof(FMovieSceneEvalTemplatePtr), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr_Hash() { return 182064919U; }
class UScriptStruct* FMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplate"), sizeof(FMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplate>()
{
	return FMovieSceneEvalTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvalTemplate(FMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvalTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSectionPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceSectionPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Structure used for movie scene evaluation templates contained within a track. Typically these are defined as one per-section.\nSerialized into a FMovieSceneEvaluationTemplate contained within the sequence itself (for fast initialization at runtime).\nTemplates are executed in a 3-phase algorithm:\n            1) Initialize: (opt-in) Called at the start of the frame. Able to access mutable state from the playback context. Used to initialize any persistent state required for the evaluation pass.\n            2) Evaluate: Potentially called on a thread. Should (where possible) perform all costly evaluation logic, accumulating into execution tokens which will be executed at a later time on the game thread.\n            3) Execute: Called on all previously submitted execution tokens to apply the evaluated state to the movie scene player" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The section from which this template originates" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr = { "SourceSectionPtr", nullptr, (EPropertyFlags)0x0024080000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvalTemplate, SourceSectionPtr), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplate.h" },
		{ "ToolTip", "Enumeration value signifying whether we should restore any animated state stored by this entity when this eval tempalte is no longer evaluated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode = { "CompletionMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvalTemplate, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_SourceSectionPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::NewProp_CompletionMode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase,
		&NewStructOps,
		"MovieSceneEvalTemplate",
		sizeof(FMovieSceneEvalTemplate),
		alignof(FMovieSceneEvalTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvalTemplate"), sizeof(FMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvalTemplate_Hash() { return 2510566475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
