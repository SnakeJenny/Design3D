// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundEffectSourcePresetChain;
struct FSourceEffectChainEntry;
class USoundSubmix;
enum class EFFTSize : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTWindowType : uint8;
enum class EAudioRecordingExportType : uint8;
class USoundWave;
class USoundEffectSubmixPreset;
#ifdef AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h
#error "AudioMixerBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioMixerBlueprintLibrary.h"
#endif
#define AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h

#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_GET_UBOOL(Z_Param_bBypassed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhaseForFrequencies) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Phases); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Phases,Z_Param_SubmixToAnalyze); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Magnitudes); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Magnitudes,Z_Param_SubmixToAnalyze); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnalyzingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToStopAnalyzing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StopAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToStopAnalyzing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAnalyzingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_GET_ENUM(EFFTSize,Z_Param_FFTSize); \
		P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod); \
		P_GET_ENUM(EFFTWindowType,Z_Param_WindowType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HopSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StartAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToAnalyze,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord); \
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UAudioMixerBlueprintLibrary::StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_SubmixToRecord,Z_Param_ExistingSoundWaveToOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExpectedDuration); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration,Z_Param_SubmixToRecord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMasterSubmixEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(Z_Param_WorldContextObject,Z_Param_PresetChain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_GET_UBOOL(Z_Param_bBypassed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex,Z_Param_bBypassed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_EntryIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSourcePresetChain,Z_Param_PresetChain); \
		P_GET_STRUCT(FSourceEffectChainEntry,Z_Param_Entry); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(Z_Param_WorldContextObject,Z_Param_PresetChain,Z_Param_Entry); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhaseForFrequencies) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Phases); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Phases,Z_Param_SubmixToAnalyze); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Frequencies); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Magnitudes); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(Z_Param_WorldContextObject,Z_Param_Out_Frequencies,Z_Param_Out_Magnitudes,Z_Param_SubmixToAnalyze); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnalyzingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToStopAnalyzing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StopAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToStopAnalyzing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartAnalyzingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToAnalyze); \
		P_GET_ENUM(EFFTSize,Z_Param_FFTSize); \
		P_GET_ENUM(EFFTPeakInterpolationMethod,Z_Param_InterpolationMethod); \
		P_GET_ENUM(EFFTWindowType,Z_Param_WindowType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HopSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StartAnalyzingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToAnalyze,EFFTSize(Z_Param_FFTSize),EFFTPeakInterpolationMethod(Z_Param_InterpolationMethod),EFFTWindowType(Z_Param_WindowType),Z_Param_HopSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ResumeRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::PauseRecordingOutput(Z_Param_WorldContextObject,Z_Param_SubmixToPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EAudioRecordingExportType,Z_Param_ExportType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord); \
		P_GET_OBJECT(USoundWave,Z_Param_ExistingSoundWaveToOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundWave**)Z_Param__Result=UAudioMixerBlueprintLibrary::StopRecordingOutput(Z_Param_WorldContextObject,EAudioRecordingExportType(Z_Param_ExportType),Z_Param_Name,Z_Param_Path,Z_Param_SubmixToRecord,Z_Param_ExistingSoundWaveToOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingOutput) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExpectedDuration); \
		P_GET_OBJECT(USoundSubmix,Z_Param_SubmixToRecord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::StartRecordingOutput(Z_Param_WorldContextObject,Z_Param_ExpectedDuration,Z_Param_SubmixToRecord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMasterSubmixEffects) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMasterSubmixEffect) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(USoundEffectSubmixPreset,Z_Param_SubmixEffectPreset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(Z_Param_WorldContextObject,Z_Param_SubmixEffectPreset); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary)


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_61_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioMixerBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h


#define FOREACH_ENUM_EFFTWINDOWTYPE(op) \
	op(EFFTWindowType::None) \
	op(EFFTWindowType::Hamming) \
	op(EFFTWindowType::Hann) \
	op(EFFTWindowType::Blackman) 

enum class EFFTWindowType : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTWindowType>();

#define FOREACH_ENUM_EFFTPEAKINTERPOLATIONMETHOD(op) \
	op(EFFTPeakInterpolationMethod::NearestNeighbor) \
	op(EFFTPeakInterpolationMethod::Linear) \
	op(EFFTPeakInterpolationMethod::Quadratic) 

enum class EFFTPeakInterpolationMethod : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>();

#define FOREACH_ENUM_EFFTSIZE(op) \
	op(EFFTSize::DefaultSize) \
	op(EFFTSize::Min) \
	op(EFFTSize::Small) \
	op(EFFTSize::Medium) \
	op(EFFTSize::Large) \
	op(EFFTSize::Max) 

enum class EFFTSize : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
