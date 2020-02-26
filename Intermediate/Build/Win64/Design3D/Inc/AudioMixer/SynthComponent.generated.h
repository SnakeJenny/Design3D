// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundSubmix;
#ifdef AUDIOMIXER_SynthComponent_generated_h
#error "SynthComponent.generated.h already included, missing '#pragma once' in SynthComponent.h"
#endif
#define AUDIOMIXER_SynthComponent_generated_h

#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_27_DELEGATE \
struct _Script_AudioMixer_eventOnSynthEnvelopeValue_Parms \
{ \
	float EnvelopeValue; \
}; \
static inline void FOnSynthEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnSynthEnvelopeValue, const float EnvelopeValue) \
{ \
	_Script_AudioMixer_eventOnSynthEnvelopeValue_Parms Parms; \
	Parms.EnvelopeValue=EnvelopeValue; \
	OnSynthEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_RPC_WRAPPERS
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend struct Z_Construct_UClass_USynthSound_Statics; \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUSynthSound(); \
	friend struct Z_Construct_UClass_USynthSound_Statics; \
public: \
	DECLARE_CLASS(USynthSound, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthSound)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthSound(USynthSound&&); \
	NO_API USynthSound(const USynthSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSound)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_33_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SynthSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthSound>();

#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSubmixSend) \
	{ \
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubmixSend) \
	{ \
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubmixSend(Z_Param_Submix,Z_Param_SendLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_VolumeMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolumeMultiplier(Z_Param_VolumeMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USynthComponent, NO_API)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend struct Z_Construct_UClass_USynthComponent_Statics; \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUSynthComponent(); \
	friend struct Z_Construct_UClass_USynthComponent_Statics; \
public: \
	DECLARE_CLASS(USynthComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USynthComponent) \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_ARCHIVESERIALIZER


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public:


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USynthComponent(USynthComponent&&); \
	NO_API USynthComponent(const USynthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthComponent)


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Synth() { return STRUCT_OFFSET(USynthComponent, Synth); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(USynthComponent, AudioComponent); }


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_54_PROLOG
#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_INCLASS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USynthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Public_Components_SynthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
