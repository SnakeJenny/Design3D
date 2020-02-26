// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectSubmixEQSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h
#error "AudioMixerSubmixEffectEQ.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectEQ.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectSubmixEQSettings>();

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectEQBand>();

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectSubmixEQSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectSubmixEQSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectSubmixEQPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectSubmixEQPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectSubmixEQPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectSubmixEQPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectSubmixEQPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectSubmixEQPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectSubmixEQPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectSubmixEQPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectSubmixEQPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset&&); \
	NO_API USubmixEffectSubmixEQPreset(const USubmixEffectSubmixEQPreset&); \
public:


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset&&); \
	NO_API USubmixEffectSubmixEQPreset(const USubmixEffectSubmixEQPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectSubmixEQPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectSubmixEQPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectSubmixEQPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_98_PROLOG
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_INCLASS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectSubmixEQPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
