// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCompressionSettings() {}
// Cross Module References
	AUDIOPLATFORMCONFIGURATION_API UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings();
	UPackage* Z_Construct_UPackage__Script_AudioPlatformConfiguration();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
// End Cross Module References
	static UEnum* ESoundwaveSampleRateSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings, Z_Construct_UPackage__Script_AudioPlatformConfiguration(), TEXT("ESoundwaveSampleRateSettings"));
		}
		return Singleton;
	}
	template<> AUDIOPLATFORMCONFIGURATION_API UEnum* StaticEnum<ESoundwaveSampleRateSettings>()
	{
		return ESoundwaveSampleRateSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundwaveSampleRateSettings(ESoundwaveSampleRateSettings_StaticEnum, TEXT("/Script/AudioPlatformConfiguration"), TEXT("ESoundwaveSampleRateSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Hash() { return 4130201406U; }
	UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioPlatformConfiguration();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundwaveSampleRateSettings"), 0, Get_Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESoundwaveSampleRateSettings::Max", (int64)ESoundwaveSampleRateSettings::Max },
				{ "ESoundwaveSampleRateSettings::High", (int64)ESoundwaveSampleRateSettings::High },
				{ "ESoundwaveSampleRateSettings::Medium", (int64)ESoundwaveSampleRateSettings::Medium },
				{ "ESoundwaveSampleRateSettings::Low", (int64)ESoundwaveSampleRateSettings::Low },
				{ "ESoundwaveSampleRateSettings::Min", (int64)ESoundwaveSampleRateSettings::Min },
				{ "ESoundwaveSampleRateSettings::MatchDevice", (int64)ESoundwaveSampleRateSettings::MatchDevice },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MatchDevice.ToolTip", "Use this setting to resample soundwaves to the device's sample rate to avoid having to perform sample rate conversion at runtime." },
				{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioPlatformConfiguration,
				nullptr,
				"ESoundwaveSampleRateSettings",
				"ESoundwaveSampleRateSettings",
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
class UScriptStruct* FPlatformRuntimeAudioCompressionOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUDIOPLATFORMCONFIGURATION_API uint32 Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, Z_Construct_UPackage__Script_AudioPlatformConfiguration(), TEXT("PlatformRuntimeAudioCompressionOverrides"), sizeof(FPlatformRuntimeAudioCompressionOverrides), Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Hash());
	}
	return Singleton;
}
template<> AUDIOPLATFORMCONFIGURATION_API UScriptStruct* StaticStruct<FPlatformRuntimeAudioCompressionOverrides>()
{
	return FPlatformRuntimeAudioCompressionOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides(FPlatformRuntimeAudioCompressionOverrides::StaticStruct, TEXT("/Script/AudioPlatformConfiguration"), TEXT("PlatformRuntimeAudioCompressionOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides
{
	FScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformRuntimeAudioCompressionOverrides")),new UScriptStruct::TCppStructOps<FPlatformRuntimeAudioCompressionOverrides>);
	}
} ScriptStruct_AudioPlatformConfiguration_StaticRegisterNativesFPlatformRuntimeAudioCompressionOverrides;
	struct Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueQualityIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundCueQualityIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumRandomBranches_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumRandomBranches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompressionTimes_MetaData[];
#endif
		static void NewProp_bOverrideCompressionTimes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompressionTimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformRuntimeAudioCompressionOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData[] = {
		{ "Category", "SoundCueLoading" },
		{ "ClampMax", "50" },
		{ "ClampMin", "-1" },
		{ "DisplayName", "Quality Index for Sound Cues" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "On this platform, use the specified quality at this index to override the quality used for SoundCues on this platform" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex = { "SoundCueQualityIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, SoundCueQualityIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData[] = {
		{ "Category", "SoundCueLoading" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Maximum Branches on Random SoundCue nodes" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "On this platform, any random nodes on Sound Cues will automatically only preload this number of branches and dispose of any others\non load. This can drastically cut down on memory usage." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches = { "MaxNumRandomBranches", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, MaxNumRandomBranches), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData[] = {
		{ "Category", "DecompressOnLoad" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "When Override Compression Times is set to true, any sound under this threshold (in seconds) will be fully decompressed on load.\nOtherwise the first chunk of this sound is cached at load and the rest is decompressed in real time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold = { "DurationThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, DurationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData[] = {
		{ "Category", "DecompressOnLoad" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "Set this to true to override Sound Groups and use the Duration Threshold value to determine whether a sound should be fully decompressed during initial loading." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_SetBit(void* Obj)
	{
		((FPlatformRuntimeAudioCompressionOverrides*)Obj)->bOverrideCompressionTimes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes = { "bOverrideCompressionTimes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlatformRuntimeAudioCompressionOverrides), &Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioPlatformConfiguration,
		nullptr,
		&NewStructOps,
		"PlatformRuntimeAudioCompressionOverrides",
		sizeof(FPlatformRuntimeAudioCompressionOverrides),
		alignof(FPlatformRuntimeAudioCompressionOverrides),
		Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AudioPlatformConfiguration();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformRuntimeAudioCompressionOverrides"), sizeof(FPlatformRuntimeAudioCompressionOverrides), Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Hash() { return 214404679U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
