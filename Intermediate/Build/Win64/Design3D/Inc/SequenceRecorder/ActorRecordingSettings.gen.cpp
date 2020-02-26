// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/ActorRecordingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorRecordingSettings() {}
// Cross Module References
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecordingSettings();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FActorRecordingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEQUENCERECORDER_API uint32 Get_Z_Construct_UScriptStruct_FActorRecordingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecordingSettings, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("ActorRecordingSettings"), sizeof(FActorRecordingSettings), Get_Z_Construct_UScriptStruct_FActorRecordingSettings_Hash());
	}
	return Singleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FActorRecordingSettings>()
{
	return FActorRecordingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorRecordingSettings(FActorRecordingSettings::StaticStruct, TEXT("/Script/SequenceRecorder"), TEXT("ActorRecordingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_SequenceRecorder_StaticRegisterNativesFActorRecordingSettings
{
	FScriptStruct_SequenceRecorder_StaticRegisterNativesFActorRecordingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorRecordingSettings")),new UScriptStruct::TCppStructOps<FActorRecordingSettings>);
	}
} ScriptStruct_SequenceRecorder_StaticRegisterNativesFActorRecordingSettings;
	struct Z_Construct_UScriptStruct_FActorRecordingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorRecordingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecordingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Actor Recording" },
		{ "ModuleRelativePath", "Public/ActorRecordingSettings.h" },
		{ "ToolTip", "External settings objects for recorders that supply them. Displayed via a details customization" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorRecordingSettings, Settings), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::NewProp_Settings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"ActorRecordingSettings",
		sizeof(FActorRecordingSettings),
		alignof(FActorRecordingSettings),
		Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecordingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorRecordingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorRecordingSettings"), sizeof(FActorRecordingSettings), Get_Z_Construct_UScriptStruct_FActorRecordingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorRecordingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorRecordingSettings_Hash() { return 618779265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
