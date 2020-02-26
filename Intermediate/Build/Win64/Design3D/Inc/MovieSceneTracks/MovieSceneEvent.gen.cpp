// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Channels/MovieSceneEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvent() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvent, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEvent"), sizeof(FMovieSceneEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEvent>()
{
	return FMovieSceneEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvent(FMovieSceneEvent::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEvent"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvent")),new UScriptStruct::TCppStructOps<FMovieSceneEvent>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEvent;
	struct Z_Construct_UScriptStruct_FMovieSceneEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FunctionEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFunctionEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CachedFunctionEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftBlueprintPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftBlueprintPath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Struct type that is bound to a blueprint function entry node, and resolved to a cached UFunction when the blueprint/track is recompiled.\nEvents can be bound to either of the following function signatures:\n\n  1. A function with no parameters (and no return value).\n    - Compatible with master tracks or object bindings\n    - No context passed through to event\n\n  2. A function with a single object or interface parameter (and no return value).\n    - Compatible with master tracks or object bindings\n    - Will be triggered with objects in the following order:\n        - Objects bound to the track's object binding, or:\n        - Objects specified on the track's event receivers array, or:\n        - Objects provided by the playback context.\n    - Will only trigger if the specified object is of the same type as the parameter (or interface)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvent>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Deprecated weak pointer to the function entry to call - no longer serialized but cached on load." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry = { "FunctionEntry", nullptr, (EPropertyFlags)0x0044000820000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, FunctionEntry_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CachedFunctionEntry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Non-serialized weak pointer to the function entry within the blueprint graph for this event. Stored as an editor-only UObject so UHT can parse it when building for non-editor." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CachedFunctionEntry = { "CachedFunctionEntry", nullptr, (EPropertyFlags)0x0044000800002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, CachedFunctionEntry), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CachedFunctionEntry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CachedFunctionEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "The UEdGraph::GraphGuid property that relates to the function entry to call." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_SoftBlueprintPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "Serialized soft pointer to the blueprint that contains the function graph endpoint for this event. Stored as a soft path so that renames of the blueprint don't break this event binding." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_SoftBlueprintPath = { "SoftBlueprintPath", nullptr, (EPropertyFlags)0x0044000800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, SoftBlueprintPath), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_SoftBlueprintPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_SoftBlueprintPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEvent.h" },
		{ "ToolTip", "The function that should be called to invoke this event.\nFunctions must have either no parameters, or a single, pass-by-value object/interface parameter, with no return parameter." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEvent, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_CachedFunctionEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_GraphGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_SoftBlueprintPath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEvent",
		sizeof(FMovieSceneEvent),
		alignof(FMovieSceneEvent),
		Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvent"), sizeof(FMovieSceneEvent), Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvent_Hash() { return 1761937214U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
