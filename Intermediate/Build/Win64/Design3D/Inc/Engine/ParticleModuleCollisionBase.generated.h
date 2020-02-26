// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCollisionBase_generated_h
#error "ParticleModuleCollisionBase.generated.h already included, missing '#pragma once' in ParticleModuleCollisionBase.h"
#endif
#define ENGINE_ParticleModuleCollisionBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionBase(); \
	friend struct Z_Construct_UClass_UParticleModuleCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCollisionBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionBase(); \
	friend struct Z_Construct_UClass_UParticleModuleCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCollisionBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleCollisionBase(UParticleModuleCollisionBase&&); \
	NO_API UParticleModuleCollisionBase(const UParticleModuleCollisionBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleCollisionBase(UParticleModuleCollisionBase&&); \
	NO_API UParticleModuleCollisionBase(const UParticleModuleCollisionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_32_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleCollisionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCollisionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h


#define FOREACH_ENUM_EPARTICLECOLLISIONCOMPLETE(op) \
	op(EPCC_Kill) \
	op(EPCC_Freeze) \
	op(EPCC_HaltCollisions) \
	op(EPCC_FreezeTranslation) \
	op(EPCC_FreezeRotation) \
	op(EPCC_FreezeMovement) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
