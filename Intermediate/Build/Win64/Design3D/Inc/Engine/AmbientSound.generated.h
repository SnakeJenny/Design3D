// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AmbientSound_generated_h
#error "AmbientSound.generated.h already included, missing '#pragma once' in AmbientSound.h"
#endif
#define ENGINE_AmbientSound_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmbientSound(); \
	friend struct Z_Construct_UClass_AAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAmbientSound, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAmbientSound)


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAmbientSound(); \
	friend struct Z_Construct_UClass_AAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAmbientSound, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AAmbientSound)


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmbientSound(AAmbientSound&&); \
	NO_API AAmbientSound(const AAmbientSound&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmbientSound(AAmbientSound&&); \
	NO_API AAmbientSound(const AAmbientSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmbientSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmbientSound)


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(AAmbientSound, AudioComponent); }


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AmbientSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AAmbientSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_AmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
