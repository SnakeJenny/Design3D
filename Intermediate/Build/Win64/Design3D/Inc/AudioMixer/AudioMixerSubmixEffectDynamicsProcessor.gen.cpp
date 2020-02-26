// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor() {}
// Cross Module References
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings();
// End Cross Module References
	static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>()
	{
		return ESubmixEffectDynamicsPeakMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsPeakMode(ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsPeakMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Hash() { return 2978909846U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsPeakMode"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsPeakMode::MeanSquared", (int64)ESubmixEffectDynamicsPeakMode::MeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::RootMeanSquared", (int64)ESubmixEffectDynamicsPeakMode::RootMeanSquared },
				{ "ESubmixEffectDynamicsPeakMode::Peak", (int64)ESubmixEffectDynamicsPeakMode::Peak },
				{ "ESubmixEffectDynamicsPeakMode::Count", (int64)ESubmixEffectDynamicsPeakMode::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"ESubmixEffectDynamicsPeakMode",
				"ESubmixEffectDynamicsPeakMode",
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
	static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>()
	{
		return ESubmixEffectDynamicsProcessorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixEffectDynamicsProcessorType(ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("ESubmixEffectDynamicsProcessorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Hash() { return 4070440131U; }
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixEffectDynamicsProcessorType"), 0, Get_Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixEffectDynamicsProcessorType::Compressor", (int64)ESubmixEffectDynamicsProcessorType::Compressor },
				{ "ESubmixEffectDynamicsProcessorType::Limiter", (int64)ESubmixEffectDynamicsProcessorType::Limiter },
				{ "ESubmixEffectDynamicsProcessorType::Expander", (int64)ESubmixEffectDynamicsProcessorType::Expander },
				{ "ESubmixEffectDynamicsProcessorType::Gate", (int64)ESubmixEffectDynamicsProcessorType::Gate },
				{ "ESubmixEffectDynamicsProcessorType::Count", (int64)ESubmixEffectDynamicsProcessorType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"ESubmixEffectDynamicsProcessorType",
				"ESubmixEffectDynamicsProcessorType",
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
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOMIXER_API uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash());
	}
	return Singleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicsProcessorSettings>()
{
	return FSubmixEffectDynamicsProcessorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings(FSubmixEffectDynamicsProcessorSettings::StaticStruct, TEXT("/Script/AudioMixer"), TEXT("SubmixEffectDynamicsProcessorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings
{
	FScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubmixEffectDynamicsProcessorSettings")),new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>);
	}
} ScriptStruct_AudioMixer_StaticRegisterNativesFSubmixEffectDynamicsProcessorSettings;
	struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChannelLinked_MetaData[];
#endif
		static void NewProp_bChannelLinked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChannelLinked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "A submix dynamics processor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style. Analog will respond a bit more naturally/slower." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not to average all channels of audio before inputing into the dynamics processor" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bChannelLinked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked = { "bChannelLinked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The output gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The input gain of the dynamics processor in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The knee bandwidth of the compressor to use in dB" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The dynamics processor ratio -- has different meaning depending on the processor type." },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect in milliseconds" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect in milliseconds." },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio. Allows for transients to be included in dynamics processing." },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectDynamicsProcessorSettings",
		sizeof(FSubmixEffectDynamicsProcessorSettings),
		alignof(FSubmixEffectDynamicsProcessorSettings),
		Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmixEffectDynamicsProcessorSettings"), sizeof(FSubmixEffectDynamicsProcessorSettings), Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Hash() { return 2767838574U; }
	void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
	{
		UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSubmixEffectDynamicsProcessorSettings InSettings;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetSettings", sizeof(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 594445579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubmixEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams = {
		&USubmixEffectDynamicsProcessorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubmixEffectDynamicsProcessorPreset, 3803498883);
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectDynamicsProcessorPreset>()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubmixEffectDynamicsProcessorPreset(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, &USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("/Script/AudioMixer"), TEXT("USubmixEffectDynamicsProcessorPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
