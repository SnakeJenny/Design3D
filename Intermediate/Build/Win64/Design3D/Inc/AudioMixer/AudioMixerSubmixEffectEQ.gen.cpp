// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectEQ() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings();
// End Cross Module References
class UScriptStruct* FSubmixEffectSubmixEQSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectSubmixEQSettings>()
{
	return FSubmixEffectSubmixEQSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectSubmixEQSettings(FSubmixEffectSubmixEQSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectSubmixEQSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectSubmixEQSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectSubmixEQSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQBands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EQBands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQBands_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "EQ submix effect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectSubmixEQSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "The EQ bands to use." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands = { "EQBands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectSubmixEQSettings, EQBands), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner = { "EQBands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubmixEffectEQBand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::NewProp_EQBands_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectSubmixEQSettings",
		sizeof(FSubmixEffectSubmixEQSettings),
		alignof(FSubmixEffectSubmixEQSettings),
		Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectSubmixEQSettings"), sizeof(FSubmixEffectSubmixEQSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Hash() { return 3434041169U; }
class UScriptStruct* FSubmixEffectEQBand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectEQBand>()
{
	return FSubmixEffectEQBand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectEQBand(FSubmixEffectEQBand::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectEQBand"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectEQBand")),new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectEQBand;
	struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ToolTip", "A multiband EQ submix effect." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectEQBand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectEQBand*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectEQBand), &Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-90.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-90.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectEQBand, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth = { "Bandwidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectEQBand, Bandwidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SubmixEffect|Preset" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectEQBand, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_GainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Bandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::NewProp_Frequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectEQBand",
		sizeof(FSubmixEffectEQBand),
		alignof(FSubmixEffectEQBand),
		Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectEQBand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectEQBand"), sizeof(FSubmixEffectEQBand), Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectEQBand_Hash() { return 4265601036U; }
	void USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset()
	{
		UClass* Class = USubmixEffectSubmixEQPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectSubmixEQPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics
	{
		struct SubmixEffectSubmixEQPreset_eventSetSettings_Parms
		{
			FSubmixEffectSubmixEQSettings InSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectSubmixEQPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectSubmixEQPreset, nullptr, "SetSettings", sizeof(SubmixEffectSubmixEQPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectSubmixEQPreset_SetSettings, "SetSettings" }, // 3923819322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectEQ.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectSubmixEQPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectSubmixEQPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams = {
		&USubmixEffectSubmixEQPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectSubmixEQPreset, 2032298289);
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectSubmixEQPreset>()
	{
		return USubmixEffectSubmixEQPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectSubmixEQPreset(Z_Construct_UClass_USubmixEffectSubmixEQPreset, &USubmixEffectSubmixEQPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectSubmixEQPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectSubmixEQPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
