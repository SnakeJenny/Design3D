// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/SequenceRecorderActorFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderActorFilter() {}
// Cross Module References
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSequenceRecorderActorFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEQUENCERECORDER_API uint32 Get_Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("SequenceRecorderActorFilter"), sizeof(FSequenceRecorderActorFilter), Get_Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Hash());
	}
	return Singleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FSequenceRecorderActorFilter>()
{
	return FSequenceRecorderActorFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSequenceRecorderActorFilter(FSequenceRecorderActorFilter::StaticStruct, TEXT("/Script/SequenceRecorder"), TEXT("SequenceRecorderActorFilter"), false, nullptr, nullptr);
static struct FScriptStruct_SequenceRecorder_StaticRegisterNativesFSequenceRecorderActorFilter
{
	FScriptStruct_SequenceRecorder_StaticRegisterNativesFSequenceRecorderActorFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SequenceRecorderActorFilter")),new UScriptStruct::TCppStructOps<FSequenceRecorderActorFilter>);
	}
} ScriptStruct_SequenceRecorder_StaticRegisterNativesFSequenceRecorderActorFilter;
	struct Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassesToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClassesToRecord;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassesToRecord_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderActorFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceRecorderActorFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData[] = {
		{ "Category", "Actor Filter" },
		{ "ModuleRelativePath", "Public/SequenceRecorderActorFilter.h" },
		{ "ToolTip", "Actor classes to accept for recording" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord = { "ActorClassesToRecord", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequenceRecorderActorFilter, ActorClassesToRecord), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_Inner = { "ActorClassesToRecord", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::NewProp_ActorClassesToRecord_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"SequenceRecorderActorFilter",
		sizeof(FSequenceRecorderActorFilter),
		alignof(FSequenceRecorderActorFilter),
		Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SequenceRecorderActorFilter"), sizeof(FSequenceRecorderActorFilter), Get_Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSequenceRecorderActorFilter_Hash() { return 3195480362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
