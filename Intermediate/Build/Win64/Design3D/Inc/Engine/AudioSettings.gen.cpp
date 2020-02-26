// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AudioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPanningMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVoiceSampleRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* EMonoChannelUpmixMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EMonoChannelUpmixMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMonoChannelUpmixMethod>()
	{
		return EMonoChannelUpmixMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMonoChannelUpmixMethod(EMonoChannelUpmixMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EMonoChannelUpmixMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Hash() { return 844746287U; }
	UEnum* Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMonoChannelUpmixMethod"), 0, Get_Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMonoChannelUpmixMethod::Linear", (int64)EMonoChannelUpmixMethod::Linear },
				{ "EMonoChannelUpmixMethod::EqualPower", (int64)EMonoChannelUpmixMethod::EqualPower },
				{ "EMonoChannelUpmixMethod::FullVolume", (int64)EMonoChannelUpmixMethod::FullVolume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EqualPower.ToolTip", "The mono channel is split 0.707 left/right" },
				{ "FullVolume.ToolTip", "The mono channel is split 1.0 left/right" },
				{ "Linear.ToolTip", "The mono channel is split 0.5 left/right" },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Enumeration defines how to treat mono 2D playback. Mono sounds need to upmixed to stereo when played back in 2D." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMonoChannelUpmixMethod",
				"EMonoChannelUpmixMethod",
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
	static UEnum* EPanningMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPanningMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EPanningMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPanningMethod>()
	{
		return EPanningMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPanningMethod(EPanningMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EPanningMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPanningMethod_Hash() { return 3892539838U; }
	UEnum* Z_Construct_UEnum_Engine_EPanningMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPanningMethod"), 0, Get_Z_Construct_UEnum_Engine_EPanningMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPanningMethod::Linear", (int64)EPanningMethod::Linear },
				{ "EPanningMethod::EqualPower", (int64)EPanningMethod::EqualPower },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EqualPower.ToolTip", "Equal power panning maintains equal power when panning between speakers." },
				{ "Linear.ToolTip", "Linear panning maintains linear amplitude when panning between speakers." },
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Enumeration defines what method of panning to use (for non-binaural audio) with the audio-mixer." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPanningMethod",
				"EPanningMethod",
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
	static UEnum* EVoiceSampleRate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVoiceSampleRate, Z_Construct_UPackage__Script_Engine(), TEXT("EVoiceSampleRate"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVoiceSampleRate>()
	{
		return EVoiceSampleRate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoiceSampleRate(EVoiceSampleRate_StaticEnum, TEXT("/Script/Engine"), TEXT("EVoiceSampleRate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVoiceSampleRate_Hash() { return 1415665892U; }
	UEnum* Z_Construct_UEnum_Engine_EVoiceSampleRate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoiceSampleRate"), 0, Get_Z_Construct_UEnum_Engine_EVoiceSampleRate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoiceSampleRate::Low16000Hz", (int64)EVoiceSampleRate::Low16000Hz },
				{ "EVoiceSampleRate::Normal24000Hz", (int64)EVoiceSampleRate::Normal24000Hz },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
				{ "ToolTip", "Enumeration for what our options are for sample rates used for VOIP." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVoiceSampleRate",
				"EVoiceSampleRate",
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
class UScriptStruct* FAudioQualitySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioQualitySettings, Z_Construct_UPackage__Script_Engine(), TEXT("AudioQualitySettings"), sizeof(FAudioQualitySettings), Get_Z_Construct_UScriptStruct_FAudioQualitySettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioQualitySettings>()
{
	return FAudioQualitySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioQualitySettings(FAudioQualitySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("AudioQualitySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioQualitySettings")),new UScriptStruct::TCppStructOps<FAudioQualitySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAudioQualitySettings;
	struct Z_Construct_UScriptStruct_FAudioQualitySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioQualitySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The number of audio channels that can be used at once\nNOTE: Some platforms may cap this value to a lower setting regardless of what the settings request" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels = { "MaxChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioQualitySettings, MaxChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioQualitySettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioQualitySettings",
		sizeof(FAudioQualitySettings),
		alignof(FAudioQualitySettings),
		Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioQualitySettings"), sizeof(FAudioQualitySettings), Get_Z_Construct_UScriptStruct_FAudioQualitySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioQualitySettings_Hash() { return 1538983297U; }
	void UAudioSettings::StaticRegisterNativesUAudioSettings()
	{
	}
	UClass* Z_Construct_UClass_UAudioSettings_NoRegister()
	{
		return UAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueFilenameFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueFilenameFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonoChannelUpmixMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MonoChannelUpmixMethod;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_MonoChannelUpmixMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanningMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanningMethod;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PanningMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStoppingSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumStoppingSources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWaveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxWaveInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCenterChannel3DPanning_MetaData[];
#endif
		static void NewProp_bAllowCenterChannel3DPanning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCenterChannel3DPanning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMasterEQ_MetaData[];
#endif
		static void NewProp_bDisableMasterEQ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMasterEQ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowVirtualizedSounds_MetaData[];
#endif
		static void NewProp_bAllowVirtualizedSounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowVirtualizedSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalMaxPitchScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalMaxPitchScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalMinPitchScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalMinPitchScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumConcurrentStreams_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumConcurrentStreams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultReverbSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoipBufferingDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoipBufferingDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiPSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VoiPSampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoiPSampleRate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiPSoundClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiPSoundClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBaseSoundMix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSoundConcurrencyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMediaSoundClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMediaSoundClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSoundClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Audio" },
		{ "IncludePath", "Sound/AudioSettings.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Audio settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The format string to use when generating the filename for contexts within dialogue waves. This must generate unique names for your project.\nAvailable format markers:\n  * {DialogueGuid} - The GUID of the dialogue wave. Guaranteed to be unique and stable against asset renames.\n  * {DialogueHash} - The hash of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue name.\n  * {DialogueName} - The name of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue hash.\n  * {ContextId}    - The ID of the context. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against changes to the context.\n  * {ContextIndex} - The index of the context within its parent dialogue wave. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against contexts being removed." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat = { "DialogueFilenameFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DialogueFilenameFormat), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The upmixing method for mono sound sources. Defines up mono channels are up-mixed to stereo channels." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod = { "MonoChannelUpmixMethod", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, MonoChannelUpmixMethod), Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The method to use when doing non-binaural or object-based panning." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod = { "PanningMethod", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, PanningMethod), Z_Construct_UEnum_Engine_EPanningMethod, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The max number of sources to reserve for \"stopping\" sounds. A \"stopping\" sound applies a fast fade in the DSP\nrender to prevent discontinuities when stopping sources." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources = { "NumStoppingSources", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, NumStoppingSources), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaxWaveInstances_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The max number of active sounds allowed. Used to cull numbers of active sounds, which reduces CPU cost of audio thread." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaxWaveInstances = { "MaxWaveInstances", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, MaxWaveInstances), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaxWaveInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaxWaveInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Enables the surround sound spatialization calculations to include the center channel." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bAllowCenterChannel3DPanning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning = { "bAllowCenterChannel3DPanning", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Disables master EQ effect in the audio DSP graph." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bDisableMasterEQ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ = { "bDisableMasterEQ", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Allows sounds to play at 0 volume." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bAllowVirtualizedSounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds = { "bAllowVirtualizedSounds", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, QualityLevels), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioQualitySettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4.000000" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The value to use to clamp the min pitch scale" },
		{ "UIMax", "4.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale = { "GlobalMaxPitchScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, GlobalMaxPitchScale), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4.000000" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The value to use to clamp the min pitch scale" },
		{ "UIMax", "4.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale = { "GlobalMinPitchScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, GlobalMinPitchScale), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "How many streaming sounds can be played at the same time (if more are played they will be sorted by priority)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams = { "MaximumConcurrentStreams", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, MaximumConcurrentStreams), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The amount of audio to send to reverb submixes if no reverb send is setup for the source through attenuation settings. Only used in audio mixer." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel = { "DefaultReverbSendLevel", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DefaultReverbSendLevel), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoipBufferingDelay_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "3.000000" },
		{ "ClampMin", "0.050000" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The amount of time to buffer incoming voice audio for ahead of time. Increasing this value can help avoid jitter on slower network connections." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoipBufferingDelay = { "VoipBufferingDelay", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, VoipBufferingDelay), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoipBufferingDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoipBufferingDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "VOIP Sample Rate" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Sample rate used for voice over IP. VOIP audio is resampled to the application's sample rate on the receiver side." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate = { "VoiPSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, VoiPSampleRate), Z_Construct_UEnum_Engine_EVoiceSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData[] = {
		{ "AllowedClasses", "SoundClass" },
		{ "Category", "Audio" },
		{ "DisplayName", "VOIP Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Sound class to be used for the VOIP audio component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass = { "VoiPSoundClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, VoiPSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData[] = {
		{ "AllowedClasses", "SoundMix" },
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundMix to use as base when no other system has speciicefied a Base SoundMix" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix = { "DefaultBaseSoundMix", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DefaultBaseSoundMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData[] = {
		{ "AllowedClasses", "SoundConcurrency" },
		{ "Category", "Audio" },
		{ "DisplayName", "Default Sound Concurrency" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundConcurrency assigned to newly created sounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName = { "DefaultSoundConcurrencyName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DefaultSoundConcurrencyName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData[] = {
		{ "AllowedClasses", "SoundClass" },
		{ "Category", "Audio" },
		{ "DisplayName", "Default Media Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundClass assigned to media player assets" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName = { "DefaultMediaSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DefaultMediaSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData[] = {
		{ "AllowedClasses", "SoundClass" },
		{ "Category", "Audio" },
		{ "DisplayName", "Default Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundClass assigned to newly created sounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName = { "DefaultSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioSettings, DefaultSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaxWaveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowVirtualizedSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoipBufferingDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioSettings_Statics::ClassParams = {
		&UAudioSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioSettings, 537786690);
	template<> ENGINE_API UClass* StaticClass<UAudioSettings>()
	{
		return UAudioSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioSettings(Z_Construct_UClass_UAudioSettings, &UAudioSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAudioSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
