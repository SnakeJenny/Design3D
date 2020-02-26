// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneEventTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
class UScriptStruct* FMovieSceneEventRepeaterTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventRepeaterTemplate"), sizeof(FMovieSceneEventRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventRepeaterTemplate>()
{
	return FMovieSceneEventRepeaterTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventRepeaterTemplate(FMovieSceneEventRepeaterTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventRepeaterTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventRepeaterTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventRepeaterTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventToTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventRepeaterTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger = { "EventToTrigger", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventRepeaterTemplate, EventToTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventRepeaterTemplate",
		sizeof(FMovieSceneEventRepeaterTemplate),
		alignof(FMovieSceneEventRepeaterTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventRepeaterTemplate"), sizeof(FMovieSceneEventRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Hash() { return 3296762465U; }
class UScriptStruct* FMovieSceneEventTriggerTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTriggerTemplate"), sizeof(FMovieSceneEventTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventTriggerTemplate>()
{
	return FMovieSceneEventTriggerTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventTriggerTemplate(FMovieSceneEventTriggerTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventTriggerTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventTriggerTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventFunctions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTimes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTimes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions = { "EventFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventTriggerTemplate, EventFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_Inner = { "EventFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes = { "EventTimes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventTriggerTemplate, EventTimes), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_Inner = { "EventTimes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventTriggerTemplate",
		sizeof(FMovieSceneEventTriggerTemplate),
		alignof(FMovieSceneEventTriggerTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventTriggerTemplate"), sizeof(FMovieSceneEventTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Hash() { return 3166583920U; }
class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionTemplate>()
{
	return FMovieSceneEventSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionTemplate(FMovieSceneEventSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventSectionTemplate",
		sizeof(FMovieSceneEventSectionTemplate),
		alignof(FMovieSceneEventSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Hash() { return 3597313434U; }
class UScriptStruct* FMovieSceneEventTemplateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTemplateBase"), sizeof(FMovieSceneEventTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventTemplateBase>()
{
	return FMovieSceneEventTemplateBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventTemplateBase(FMovieSceneEventTemplateBase::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventTemplateBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventTemplateBase")),new UScriptStruct::TCppStructOps<FMovieSceneEventTemplateBase>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase;
	struct Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTemplateBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((FMovieSceneEventTemplateBase*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEventTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((FMovieSceneEventTemplateBase*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovieSceneEventTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers = { "EventReceivers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneEventTemplateBase, EventReceivers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_Inner = { "EventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneEventTemplateBase",
		sizeof(FMovieSceneEventTemplateBase),
		alignof(FMovieSceneEventTemplateBase),
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventTemplateBase"), sizeof(FMovieSceneEventTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Hash() { return 4274097656U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
