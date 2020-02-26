// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectDynamicsProcessorSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h
#error "AudioMixerSubmixEffectDynamicsProcessor.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectDynamicsProcessor.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectDynamicsProcessor_generated_h

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectDynamicsProcessorSettings>();

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectDynamicsProcessorSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectDynamicsProcessorSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectDynamicsProcessorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectDynamicsProcessorPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectDynamicsProcessorPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectDynamicsProcessorPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDynamicsProcessorPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectDynamicsProcessorPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDynamicsProcessorPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectDynamicsProcessorPreset(USubmixEffectDynamicsProcessorPreset&&); \
	NO_API USubmixEffectDynamicsProcessorPreset(const USubmixEffectDynamicsProcessorPreset&); \
public:


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectDynamicsProcessorPreset(USubmixEffectDynamicsProcessorPreset&&); \
	NO_API USubmixEffectDynamicsProcessorPreset(const USubmixEffectDynamicsProcessorPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectDynamicsProcessorPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectDynamicsProcessorPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectDynamicsProcessorPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_118_PROLOG
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_INCLASS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectDynamicsProcessorPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h


#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPEAKMODE(op) \
	op(ESubmixEffectDynamicsPeakMode::MeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::RootMeanSquared) \
	op(ESubmixEffectDynamicsPeakMode::Peak) \
	op(ESubmixEffectDynamicsPeakMode::Count) 

enum class ESubmixEffectDynamicsPeakMode : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>();

#define FOREACH_ENUM_ESUBMIXEFFECTDYNAMICSPROCESSORTYPE(op) \
	op(ESubmixEffectDynamicsProcessorType::Compressor) \
	op(ESubmixEffectDynamicsProcessorType::Limiter) \
	op(ESubmixEffectDynamicsProcessorType::Expander) \
	op(ESubmixEffectDynamicsProcessorType::Gate) \
	op(ESubmixEffectDynamicsProcessorType::Count) 

enum class ESubmixEffectDynamicsProcessorType : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
