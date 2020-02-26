// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleOrientationAxisLock_generated_h
#error "ParticleModuleOrientationAxisLock.generated.h already included, missing '#pragma once' in ParticleModuleOrientationAxisLock.h"
#endif
#define ENGINE_ParticleModuleOrientationAxisLock_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleOrientationAxisLock(); \
	friend struct Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrientationAxisLock, UParticleModuleOrientationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrientationAxisLock)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrientationAxisLock(); \
	friend struct Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrientationAxisLock, UParticleModuleOrientationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrientationAxisLock)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrientationAxisLock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrientationAxisLock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrientationAxisLock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrientationAxisLock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleOrientationAxisLock(UParticleModuleOrientationAxisLock&&); \
	ENGINE_API UParticleModuleOrientationAxisLock(const UParticleModuleOrientationAxisLock&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrientationAxisLock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleOrientationAxisLock(UParticleModuleOrientationAxisLock&&); \
	ENGINE_API UParticleModuleOrientationAxisLock(const UParticleModuleOrientationAxisLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrientationAxisLock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrientationAxisLock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrientationAxisLock)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_40_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleOrientationAxisLock."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleOrientationAxisLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h


#define FOREACH_ENUM_EPARTICLEAXISLOCK(op) \
	op(EPAL_NONE) \
	op(EPAL_X) \
	op(EPAL_Y) \
	op(EPAL_Z) \
	op(EPAL_NEGATIVE_X) \
	op(EPAL_NEGATIVE_Y) \
	op(EPAL_NEGATIVE_Z) \
	op(EPAL_ROTATE_X) \
	op(EPAL_ROTATE_Y) \
	op(EPAL_ROTATE_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
