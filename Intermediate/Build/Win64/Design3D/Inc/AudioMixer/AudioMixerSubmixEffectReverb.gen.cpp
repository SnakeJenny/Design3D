// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectReverb() {}
// Cross Module References
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FSubmixEffectReverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectReverbSettings>()
{
	return FSubmixEffectReverbSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectReverbSettings(FSubmixEffectReverbSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectReverbSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectReverbSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirAbsorptionGainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirAbsorptionGainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReflectionsGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHFRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHFRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GainHF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GainHF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diffusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Diffusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectReverbSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Overall drylevel of the reverb effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Overall wetlevel of the reverb effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Air Absorption - 0.0 < 0.994 < 1.0 - lower value means more absorption" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF = { "AirAbsorptionGainHF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, AirAbsorptionGainHF), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Late Reverb Delay - 0.0 < 0.011 < 0.1 Seconds - time difference between late reverb and first reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay = { "LateDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Late Reverb Gain - 0.0 < 1.26 < 10.0 - gain of the late reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain = { "LateGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, LateGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "0.3" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reflections Delay - 0.0 < 0.007 < 0.3 Seconds - the time between the listener receiving the direct path sound and the first reflection" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay = { "ReflectionsDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "3.16" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reflections Gain - 0.0 < 0.05 < 3.16 - controls the amount of initial reflections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain = { "ReflectionsGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, ReflectionsGain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Decay High Frequency Ratio - 0.1 < 0.83 < 2.0 - how much the quicker or slower the high frequencies decay relative to the lower frequencies." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio = { "DecayHFRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayHFRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Decay Time - 0.1 < 1.49 < 20.0 Seconds - larger is more reverb" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime = { "DecayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, DecayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reverb Gain High Frequency - 0.0 < 0.89 < 1.0 - attenuates the high frequency reflected sound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF = { "GainHF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, GainHF), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Reverb Gain - 0.0 < 0.32 < 1.0 - overall reverb gain - master volume control" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Diffusion - 0.0 < 0.85 < 1.0 - Echo density in the reverberation decay - lower is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion = { "Diffusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Diffusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "ReverbParameters" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ToolTip", "Density - 0.0 < 0.85 < 1.0 - Coloration of the late reverb - lower value is more grainy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectReverbSettings, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_AirAbsorptionGainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_LateGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_ReflectionsGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayHFRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_DecayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_GainHF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Diffusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::NewProp_Density,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectReverbSettings",
		sizeof(FSubmixEffectReverbSettings),
		alignof(FSubmixEffectReverbSettings),
		Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectReverbSettings"), sizeof(FSubmixEffectReverbSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Hash() { return 2803861706U; }
	void USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset()
	{
		UClass* Class = USubmixEffectReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectReverbPreset::execSetSettings },
			{ "SetSettingsWithReverbEffect", &USubmixEffectReverbPreset::execSetSettingsWithReverbEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics
	{
		struct SubmixEffectReverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectReverbSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, nullptr, "SetSettings", sizeof(SubmixEffectReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics
	{
		struct SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms
		{
			const UReverbEffect* InReverbEffect;
			float WetLevel;
			float DryLevel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InReverbEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InReverbEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, DryLevel), METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, WetLevel), METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect = { "InReverbEffect", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms, InReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_DryLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_WetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::NewProp_InReverbEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "CPP_Default_DryLevel", "0.000000" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectReverbPreset, nullptr, "SetSettingsWithReverbEffect", sizeof(SubmixEffectReverbPreset_eventSetSettingsWithReverbEffect_Parms), Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister()
	{
		return USubmixEffectReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectReverbPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettings, "SetSettings" }, // 1464900765
		{ &Z_Construct_UFunction_USubmixEffectReverbPreset_SetSettingsWithReverbEffect, "SetSettingsWithReverbEffect" }, // 176299196
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectReverbSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectReverbPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectReverbPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectReverbPreset_Statics::ClassParams = {
		&USubmixEffectReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectReverbPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectReverbPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectReverbPreset, 1821915498);
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectReverbPreset>()
	{
		return USubmixEffectReverbPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectReverbPreset(Z_Construct_UClass_USubmixEffectReverbPreset, &USubmixEffectReverbPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectReverbPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
