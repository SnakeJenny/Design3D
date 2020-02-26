// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuation() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EReverbSendMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EReverbSendMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReverbSendMethod>()
	{
		return EReverbSendMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReverbSendMethod(EReverbSendMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EReverbSendMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReverbSendMethod_Hash() { return 3474184536U; }
	UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReverbSendMethod"), 0, Get_Z_Construct_UEnum_Engine_EReverbSendMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReverbSendMethod::Linear", (int64)EReverbSendMethod::Linear },
				{ "EReverbSendMethod::CustomCurve", (int64)EReverbSendMethod::CustomCurve },
				{ "EReverbSendMethod::Manual", (int64)EReverbSendMethod::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.ToolTip", "A reverb send based on a supplied curve" },
				{ "Linear.ToolTip", "A reverb send based on linear interpolation between a distance range and send-level range" },
				{ "Manual.ToolTip", "A manual reverb send level (Uses the specififed constant send level value. Useful for 2D sounds.)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EReverbSendMethod",
				"EReverbSendMethod",
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
	static UEnum* EAirAbsorptionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAirAbsorptionMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAirAbsorptionMethod>()
	{
		return EAirAbsorptionMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAirAbsorptionMethod(EAirAbsorptionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAirAbsorptionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Hash() { return 1026965387U; }
	UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAirAbsorptionMethod"), 0, Get_Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAirAbsorptionMethod::Linear", (int64)EAirAbsorptionMethod::Linear },
				{ "EAirAbsorptionMethod::CustomCurve", (int64)EAirAbsorptionMethod::CustomCurve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomCurve.ToolTip", "The air absorption conforms to a custom distance curve." },
				{ "Linear.ToolTip", "The air absorption conform to a linear distance function" },
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAirAbsorptionMethod",
				"EAirAbsorptionMethod",
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
	static UEnum* ESoundSpatializationAlgorithm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundSpatializationAlgorithm"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundSpatializationAlgorithm>()
	{
		return ESoundSpatializationAlgorithm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundSpatializationAlgorithm(ESoundSpatializationAlgorithm_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundSpatializationAlgorithm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Hash() { return 2649082030U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundSpatializationAlgorithm"), 0, Get_Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SPATIALIZATION_Default", (int64)SPATIALIZATION_Default },
				{ "SPATIALIZATION_HRTF", (int64)SPATIALIZATION_HRTF },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "SPATIALIZATION_Default.DisplayName", "Panning" },
				{ "SPATIALIZATION_Default.ToolTip", "Standard panning method for spatialization, built-in to the audio engine." },
				{ "SPATIALIZATION_HRTF.DisplayName", "Binaural" },
				{ "SPATIALIZATION_HRTF.ToolTip", "3rd party binaural spatialization (HRTF, Atmos). Requires a spatializaton plugin." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESoundSpatializationAlgorithm",
				"ESoundSpatializationAlgorithm",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESoundDistanceCalc_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundDistanceCalc"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundDistanceCalc>()
	{
		return ESoundDistanceCalc_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundDistanceCalc(ESoundDistanceCalc_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundDistanceCalc"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundDistanceCalc_Hash() { return 820881705U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundDistanceCalc"), 0, Get_Z_Construct_UEnum_Engine_ESoundDistanceCalc_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOUNDDISTANCE_Normal", (int64)SOUNDDISTANCE_Normal },
				{ "SOUNDDISTANCE_InfiniteXYPlane", (int64)SOUNDDISTANCE_InfiniteXYPlane },
				{ "SOUNDDISTANCE_InfiniteXZPlane", (int64)SOUNDDISTANCE_InfiniteXZPlane },
				{ "SOUNDDISTANCE_InfiniteYZPlane", (int64)SOUNDDISTANCE_InfiniteYZPlane },
				{ "SOUNDDISTANCE_MAX", (int64)SOUNDDISTANCE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
				{ "ToolTip", "This enumeration is deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESoundDistanceCalc",
				"ESoundDistanceCalc",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationSettings"), sizeof(FSoundAttenuationSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationSettings>()
{
	return FSoundAttenuationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundAttenuationSettings(FSoundAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundAttenuationSettings")),new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationSettings;
	struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PluginSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomReverbSendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomReverbSendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualReverbSendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualReverbSendLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OcclusionPluginSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusReleaseInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusReleaseInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAttackInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAttackInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusVolumeAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusVolumeAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusPriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusPriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFocusAzimuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAzimuth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomHighpassAirAbsorptionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomHighpassAirAbsorptionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLowpassAirAbsorptionCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLowpassAirAbsorptionCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatializationPluginSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StereoSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OmniRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OmniRadius;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbSendMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverbSendMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbSendMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbsorptionMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbsorptionMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpatializationAlgorithm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLogFrequencyScaling_MetaData[];
#endif
		static void NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLogFrequencyScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyNormalizationToStereoSounds_MetaData[];
#endif
		static void NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyNormalizationToStereoSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbSend_MetaData[];
#endif
		static void NewProp_bEnableReverbSend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbSend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[];
#endif
		static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[];
#endif
		static void NewProp_bEnableOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusInterpolation_MetaData[];
#endif
		static void NewProp_bEnableFocusInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableListenerFocus_MetaData[];
#endif
		static void NewProp_bEnableListenerFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableListenerFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttenuateWithLPF_MetaData[];
#endif
		static void NewProp_bAttenuateWithLPF_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttenuateWithLPF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpatialize_MetaData[];
#endif
		static void NewProp_bSpatialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpatialize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttenuate_MetaData[];
#endif
		static void NewProp_bAttenuate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttenuate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The settings for attenuating." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData[] = {
		{ "Category", "AttenuationPluginSettings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sound attenuation plugin settings to use with sounds that play with this attenuation setting." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings = { "PluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, PluginSettings), Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve = { "CustomReverbSendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomReverbSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The manual master reverb send level to use. Doesn't change as a function of distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel = { "ManualReverbSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ManualReverbSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Reverb Max Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to send to the master reverb." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax = { "ReverbDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Reverb Min Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to send to the master reverb." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin = { "ReverbDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Reverb Max Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax = { "ReverbWetLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Reverb Min Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin = { "ReverbWetLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings = { "ReverbPluginSettings", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbPluginSettings_DEPRECATED), Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings = { "OcclusionPluginSettings", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionPluginSettings_DEPRECATED), Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime = { "OcclusionInterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionInterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation = { "OcclusionVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The low pass filter frequency (in hertz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency = { "OcclusionLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionLowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed downwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed = { "FocusReleaseInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusReleaseInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed upwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed = { "FocusAttackInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAttackInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation = { "NonFocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation = { "FocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale = { "NonFocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale = { "FocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale = { "NonFocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale = { "FocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth = { "NonFocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth = { "FocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "High Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in hz) of the highpass absorption filter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax = { "HPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "High Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in hz) of the highpass absorption filter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin = { "HPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Low Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in hz) of the lowpass absorption filter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax = { "LPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Low Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in hz) of the lowpass absorption filter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin = { "LPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve = { "CustomHighpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomHighpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve = { "CustomLowpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, CustomLowpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Max Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax = { "LPFRadiusMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Min Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance min range at which to apply an absorption LPF filter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin = { "LPFRadiusMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMax_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMin_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings = { "SpatializationPluginSettings", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationPluginSettings_DEPRECATED), Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "DisplayName", "3D Stereo Spread" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The world-space absolution distance between left and right stereo channels when stereo assets are 3D spatialized." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread = { "StereoSpread", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, StereoSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Non-Spatialized Radius" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance below which a sound is non-spatialized (2D). This prevents near-field audio from flipping as audio crosses the listener's position." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius = { "OmniRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OmniRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType = { "DistanceType", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, DistanceType_DEPRECATED), Z_Construct_UEnum_Engine_ESoundDistanceCalc, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to control master reverb sends" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod = { "ReverbSendMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbSendMethod), Z_Construct_UEnum_Engine_EReverbSendMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to map distance values to frequency absorption values." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod = { "AbsorptionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, AbsorptionMethod), Z_Construct_UEnum_Engine_EAirAbsorptionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Spatialization Method" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method we use to spatialize the sound." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm = { "SpatializationAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationAlgorithm), Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Enable Log Frequency Scaling" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableLogFrequencyScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling = { "bEnableLogFrequencyScaling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "DisplayName", "Normalize 3D Stereo Sounds" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bApplyNormalizationToStereoSounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds = { "bApplyNormalizationToStereoSounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Enable Reverb Send" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables adjusting reverb sends based on distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableReverbSend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend = { "bEnableReverbSend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables tracing against complex collision when doing occlusion traces." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables realtime occlusion tracing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables focus interpolation to smooth transition in and and of focus." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableFocusInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation = { "bEnableFocusInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enable listener focus-based adjustments." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableListenerFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus = { "bEnableListenerFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "DisplayName", "Enable Air Absorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bAttenuateWithLPF = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF = { "bAttenuateWithLPF", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "DisplayName", "Enable Spatialization" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows the source to be 3D spatialized." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bSpatialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize = { "bSpatialize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "DisplayName", "Enable Volume Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows distance-based volume attenuation." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bAttenuate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate = { "bAttenuate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBaseAttenuationSettings,
		&NewStructOps,
		"SoundAttenuationSettings",
		sizeof(FSoundAttenuationSettings),
		alignof(FSoundAttenuationSettings),
		Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundAttenuationSettings"), sizeof(FSoundAttenuationSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationSettings_Hash() { return 1300731995U; }
class UScriptStruct* FSoundAttenuationPluginSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationPluginSettings"), sizeof(FSoundAttenuationPluginSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationPluginSettings>()
{
	return FSoundAttenuationPluginSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundAttenuationPluginSettings(FSoundAttenuationPluginSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundAttenuationPluginSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationPluginSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationPluginSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundAttenuationPluginSettings")),new UScriptStruct::TCppStructOps<FSoundAttenuationPluginSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundAttenuationPluginSettings;
	struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReverbPluginSettingsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginSettingsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OcclusionPluginSettingsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OcclusionPluginSettingsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettingsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpatializationPluginSettingsArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatializationPluginSettingsArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationPluginSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "DisplayName", "Reverb Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. Note that this is an array so multiple plugins can have settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, ReverbPluginSettingsArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "DisplayName", "Occlusion Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. Note that this is an array so multiple plugins can have settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, OcclusionPluginSettingsArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "DisplayName", "Spatialization Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. Note that this is an array so multiple plugins can have settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundAttenuationPluginSettings, SpatializationPluginSettingsArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundAttenuationPluginSettings",
		sizeof(FSoundAttenuationPluginSettings),
		alignof(FSoundAttenuationPluginSettings),
		Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundAttenuationPluginSettings"), sizeof(FSoundAttenuationPluginSettings), Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Hash() { return 730258590U; }
	void USoundAttenuation::StaticRegisterNativesUSoundAttenuation()
	{
	}
	UClass* Z_Construct_UClass_USoundAttenuation_NoRegister()
	{
		return USoundAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_USoundAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attenuation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundAttenuation.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Defines how a sound changes volume with distance to the listener" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAttenuation, Attenuation), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuation_Statics::ClassParams = {
		&USoundAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundAttenuation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAttenuation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAttenuation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAttenuation, 882042375);
	template<> ENGINE_API UClass* StaticClass<USoundAttenuation>()
	{
		return USoundAttenuation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAttenuation(Z_Construct_UClass_USoundAttenuation, &USoundAttenuation::StaticClass, TEXT("/Script/Engine"), TEXT("USoundAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
