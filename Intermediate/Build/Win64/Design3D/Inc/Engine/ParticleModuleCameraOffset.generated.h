// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCameraOffset_generated_h
#error "ParticleModuleCameraOffset.generated.h already included, missing '#pragma once' in ParticleModuleCameraOffset.h"
#endif
#define ENGINE_ParticleModuleCameraOffset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleCameraOffset(); \
	friend struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCameraOffset, UParticleModuleCameraBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCameraOffset)


#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCameraOffset(); \
	friend struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCameraOffset, UParticleModuleCameraBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCameraOffset)


#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCameraOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCameraOffset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCameraOffset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCameraOffset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleCameraOffset(UParticleModuleCameraOffset&&); \
	NO_API UParticleModuleCameraOffset(const UParticleModuleCameraOffset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCameraOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleCameraOffset(UParticleModuleCameraOffset&&); \
	NO_API UParticleModuleCameraOffset(const UParticleModuleCameraOffset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCameraOffset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCameraOffset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCameraOffset)


#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_27_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleCameraOffset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCameraOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Camera_ParticleModuleCameraOffset_h


#define FOREACH_ENUM_EPARTICLECAMERAOFFSETUPDATEMETHOD(op) \
	op(EPCOUM_DirectSet) \
	op(EPCOUM_Additive) \
	op(EPCOUM_Scalar) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
