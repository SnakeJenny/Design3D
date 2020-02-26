// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EmitterCameraLensEffectBase_generated_h
#error "EmitterCameraLensEffectBase.generated.h already included, missing '#pragma once' in EmitterCameraLensEffectBase.h"
#endif
#define ENGINE_EmitterCameraLensEffectBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmitterCameraLensEffectBase(); \
	friend struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics; \
public: \
	DECLARE_CLASS(AEmitterCameraLensEffectBase, AEmitter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AEmitterCameraLensEffectBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAEmitterCameraLensEffectBase(); \
	friend struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics; \
public: \
	DECLARE_CLASS(AEmitterCameraLensEffectBase, AEmitter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AEmitterCameraLensEffectBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmitterCameraLensEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitterCameraLensEffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmitterCameraLensEffectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitterCameraLensEffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmitterCameraLensEffectBase(AEmitterCameraLensEffectBase&&); \
	NO_API AEmitterCameraLensEffectBase(const AEmitterCameraLensEffectBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmitterCameraLensEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmitterCameraLensEffectBase(AEmitterCameraLensEffectBase&&); \
	NO_API AEmitterCameraLensEffectBase(const AEmitterCameraLensEffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmitterCameraLensEffectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmitterCameraLensEffectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmitterCameraLensEffectBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PS_CameraEffect() { return STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffect); } \
	FORCEINLINE static uint32 __PPO__PS_CameraEffectNonExtremeContent_DEPRECATED() { return STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffectNonExtremeContent_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__BaseCamera() { return STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseCamera); } \
	FORCEINLINE static uint32 __PPO__RelativeTransform() { return STRUCT_OFFSET(AEmitterCameraLensEffectBase, RelativeTransform); } \
	FORCEINLINE static uint32 __PPO__DistFromCamera_DEPRECATED() { return STRUCT_OFFSET(AEmitterCameraLensEffectBase, DistFromCamera_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EmitterCameraLensEffectBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AEmitterCameraLensEffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
