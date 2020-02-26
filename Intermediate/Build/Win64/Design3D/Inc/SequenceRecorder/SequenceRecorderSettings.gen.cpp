// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/SequenceRecorderSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderSettings() {}
// Cross Module References
	SEQUENCERECORDER_API UEnum* Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSettingsForActorClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderSettings_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter();
// End Cross Module References
	static UEnum* EAudioRecordingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("EAudioRecordingMode"));
		}
		return Singleton;
	}
	template<> SEQUENCERECORDER_API UEnum* StaticEnum<EAudioRecordingMode>()
	{
		return EAudioRecordingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioRecordingMode(EAudioRecordingMode_StaticEnum, TEXT("/Script/SequenceRecorder"), TEXT("EAudioRecordingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Hash() { return 3340371718U; }
	UEnum* Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioRecordingMode"), 0, Get_Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioRecordingMode::None", (int64)EAudioRecordingMode::None },
				{ "EAudioRecordingMode::AudioTrack", (int64)EAudioRecordingMode::AudioTrack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioTrack.DisplayName", "Into Audio Track" },
				{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
				{ "None.DisplayName", "Don't Record Audio" },
				{ "ToolTip", "Enum denoting if (and how) to record audio" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SequenceRecorder,
				nullptr,
				"EAudioRecordingMode",
				"EAudioRecordingMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSettingsForActorClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEQUENCERECORDER_API uint32 Get_Z_Construct_UScriptStruct_FSettingsForActorClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingsForActorClass, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("SettingsForActorClass"), sizeof(FSettingsForActorClass), Get_Z_Construct_UScriptStruct_FSettingsForActorClass_Hash());
	}
	return Singleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FSettingsForActorClass>()
{
	return FSettingsForActorClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSettingsForActorClass(FSettingsForActorClass::StaticStruct, TEXT("/Script/SequenceRecorder"), TEXT("SettingsForActorClass"), false, nullptr, nullptr);
static struct FScriptStruct_SequenceRecorder_StaticRegisterNativesFSettingsForActorClass
{
	FScriptStruct_SequenceRecorder_StaticRegisterNativesFSettingsForActorClass()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SettingsForActorClass")),new UScriptStruct::TCppStructOps<FSettingsForActorClass>);
	}
} ScriptStruct_SequenceRecorder_StaticRegisterNativesFSettingsForActorClass;
	struct Z_Construct_UScriptStruct_FSettingsForActorClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordToPossessable_MetaData[];
#endif
		static void NewProp_bRecordToPossessable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordToPossessable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingsForActorClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors." },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_SetBit(void* Obj)
	{
		((FSettingsForActorClass*)Obj)->bRecordToPossessable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable = { "bRecordToPossessable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSettingsForActorClass), &Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the actor we want to record" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSettingsForActorClass, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"SettingsForActorClass",
		sizeof(FSettingsForActorClass),
		alignof(FSettingsForActorClass),
		Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingsForActorClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSettingsForActorClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SettingsForActorClass"), sizeof(FSettingsForActorClass), Get_Z_Construct_UScriptStruct_FSettingsForActorClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSettingsForActorClass_Hash() { return 920726565U; }
class UScriptStruct* FPropertiesToRecordForClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEQUENCERECORDER_API uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertiesToRecordForClass, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("PropertiesToRecordForClass"), sizeof(FPropertiesToRecordForClass), Get_Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Hash());
	}
	return Singleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FPropertiesToRecordForClass>()
{
	return FPropertiesToRecordForClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertiesToRecordForClass(FPropertiesToRecordForClass::StaticStruct, TEXT("/Script/SequenceRecorder"), TEXT("PropertiesToRecordForClass"), false, nullptr, nullptr);
static struct FScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForClass
{
	FScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForClass()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertiesToRecordForClass")),new UScriptStruct::TCppStructOps<FPropertiesToRecordForClass>);
	}
} ScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForClass;
	struct Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertiesToRecordForClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "List of properties we want to record for this class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertiesToRecordForClass, Properties), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the object we can record" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertiesToRecordForClass, Class), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"PropertiesToRecordForClass",
		sizeof(FPropertiesToRecordForClass),
		alignof(FPropertiesToRecordForClass),
		Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertiesToRecordForClass"), sizeof(FPropertiesToRecordForClass), Get_Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Hash() { return 3069942961U; }
class UScriptStruct* FPropertiesToRecordForActorClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SEQUENCERECORDER_API uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass, Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("PropertiesToRecordForActorClass"), sizeof(FPropertiesToRecordForActorClass), Get_Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Hash());
	}
	return Singleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FPropertiesToRecordForActorClass>()
{
	return FPropertiesToRecordForActorClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPropertiesToRecordForActorClass(FPropertiesToRecordForActorClass::StaticStruct, TEXT("/Script/SequenceRecorder"), TEXT("PropertiesToRecordForActorClass"), false, nullptr, nullptr);
static struct FScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForActorClass
{
	FScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForActorClass()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PropertiesToRecordForActorClass")),new UScriptStruct::TCppStructOps<FPropertiesToRecordForActorClass>);
	}
} ScriptStruct_SequenceRecorder_StaticRegisterNativesFPropertiesToRecordForActorClass;
	struct Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertiesToRecordForActorClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "List of properties we want to record for this class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertiesToRecordForActorClass, Properties), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the actor we can record" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPropertiesToRecordForActorClass, Class), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"PropertiesToRecordForActorClass",
		sizeof(FPropertiesToRecordForActorClass),
		alignof(FPropertiesToRecordForActorClass),
		Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SequenceRecorder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertiesToRecordForActorClass"), sizeof(FPropertiesToRecordForActorClass), Get_Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Hash() { return 4206256856U; }
	void USequenceRecorderSettings::StaticRegisterNativesUSequenceRecorderSettings()
	{
	}
	UClass* Z_Construct_UClass_USequenceRecorderSettings_NoRegister()
	{
		return USequenceRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerActorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerActorSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerActorSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsAndPropertiesToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsAndPropertiesToRecord;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorsAndPropertiesToRecord_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassesAndPropertiesToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassesAndPropertiesToRecord;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassesAndPropertiesToRecord_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordSequencerSpawnedActors_MetaData[];
#endif
		static void NewProp_bRecordSequencerSpawnedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordSequencerSpawnedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAnimationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActorsToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelSequenceActorsToTrigger;
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LevelSequenceActorsToTrigger_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveAsset_MetaData[];
#endif
		static void NewProp_bAutoSaveAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordWorldSettingsActor_MetaData[];
#endif
		static void NewProp_bRecordWorldSettingsActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordWorldSettingsActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearbyActorRecordingProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearbyActorRecordingProximity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecordNearbySpawnedActors_MetaData[];
#endif
		static void NewProp_bRecordNearbySpawnedActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecordNearbySpawnedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioSubDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioSubDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioTrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AudioTrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceRecordedAudio_MetaData[];
#endif
		static void NewProp_bReplaceRecordedAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceRecordedAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[];
#endif
		static void NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplitAudioChannelsIntoSeparateTracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RecordAudio;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecordAudio_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSubDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimationSubDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLooping_MetaData[];
#endif
		static void NewProp_bAllowLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecordingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImmersiveMode_MetaData[];
#endif
		static void NewProp_bImmersiveMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmersiveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateLevelSequence_MetaData[];
#endif
		static void NewProp_bCreateLevelSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateLevelSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Settings applied to actors of a specified class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings = { "PerActorSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, PerActorSettings), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_Inner = { "PerActorSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingsForActorClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The properties to record for specified actors. Actor classes specified here will be recorded. If an actor does not contain one of these properties it will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord = { "ActorsAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, ActorsAndPropertiesToRecord), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_Inner = { "ActorsAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The properties to record for specified classes. Component classes specified here will be recorded. If an actor does not contain one of these classes it will be ignored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord = { "ClassesAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, ClassesAndPropertiesToRecord), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_Inner = { "ClassesAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPropertiesToRecordForClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record actors that are spawned by sequencer itself (this is usually disabled as results can be unexpected)" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordSequencerSpawnedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors = { "bRecordSequencerSpawnedActors", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Default animation settings which are used to initialize all new actor recording's animation settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings = { "DefaultAnimationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, DefaultAnimationSettings), Z_Construct_UScriptStruct_FAnimationRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Sequence actors to trigger playback on when recording starts (e.g. for recording synchronized sequences)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger = { "LevelSequenceActorsToTrigger", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, LevelSequenceActorsToTrigger), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData)) };
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_Inner = { "LevelSequenceActorsToTrigger", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Filter to check spawned actors against to see if they should be recorded" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, ActorFilter), Z_Construct_UScriptStruct_FSequenceRecorderActorFilter, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to auto-save asset when recording is completed. Defaults to false" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bAutoSaveAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset = { "bAutoSaveAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to remove keyframes within a tolerance from the recorded tracks" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bReduceKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record the world settings actor in the sequence (some games use this to attach world SFX)" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordWorldSettingsActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor = { "bRecordWorldSettingsActor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Proximity to currently recorded actors to record newly spawned actors." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity = { "NearbyActorRecordingProximity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, NearbyActorRecordingProximity), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record nearby spawned actors. If an actor matches a class in the ActorFilter, this state will be bypassed." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordNearbySpawnedActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors = { "bRecordNearbySpawnedActors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory = { "AudioSubDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, AudioSubDirectory), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Name of the recorded audio track name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName = { "AudioTrackName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, AudioTrackName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Replace existing recorded audio with any newly recorded audio" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bReplaceRecordedAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio = { "bReplaceRecordedAudio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether or not to split mic channels into separate audio tracks. If not true, a max of 2 input channels is supported." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bSplitAudioChannelsIntoSeparateTracks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks = { "bSplitAudioChannelsIntoSeparateTracks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Gain in decibels to apply to recorded audio" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain = { "AudioGain", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, AudioGain), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record audio alongside animation or not" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio = { "RecordAudio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, RecordAudio), Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The name of the subdirectory animations will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory = { "AnimationSubDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, AnimationSubDirectory), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Should Sequence Recorder ignore global time dilation? If true recorded animations will only be as long as they would have been without global time dilation." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Global Time dilation to set the world to when recording starts. Useful for playing back a scene in slow motion." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation = { "GlobalTimeDilation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, GlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Allow the recording to be looped. Subsequence recorded assets will be saved to unique filenames." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bAllowLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping = { "bAllowLooping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMax", "9.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Delay that we will use before starting recording" },
		{ "UIMax", "9.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay = { "RecordingDelay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, RecordingDelay), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The length of the recorded sequence" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USequenceRecorderSettings, SequenceLength), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to maximize the viewport when recording" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bImmersiveMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode = { "bImmersiveMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to create a level sequence when recording. Actors and animations will be inserted into this sequence" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bCreateLevelSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence = { "bCreateLevelSequence", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderSettings_Statics::ClassParams = {
		&USequenceRecorderSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceRecorderSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceRecorderSettings, 473168503);
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderSettings>()
	{
		return USequenceRecorderSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceRecorderSettings(Z_Construct_UClass_USequenceRecorderSettings, &USequenceRecorderSettings::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("USequenceRecorderSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
