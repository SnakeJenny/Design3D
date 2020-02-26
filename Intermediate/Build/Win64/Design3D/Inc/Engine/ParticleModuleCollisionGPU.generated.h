// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleCollisionGPU_generated_h
#error "ParticleModuleCollisionGPU.generated.h already included, missing '#pragma once' in ParticleModuleCollisionGPU.h"
#endif
#define ENGINE_ParticleModuleCollisionGPU_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionGPU(); \
	friend struct Z_Construct_UClass_UParticleModuleCollisionGPU_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCollisionGPU, UParticleModuleCollisionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionGPU)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleCollisionGPU(); \
	friend struct Z_Construct_UClass_UParticleModuleCollisionGPU_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleCollisionGPU, UParticleModuleCollisionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleCollisionGPU)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCollisionGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionGPU) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCollisionGPU); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionGPU); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleCollisionGPU(UParticleModuleCollisionGPU&&); \
	ENGINE_API UParticleModuleCollisionGPU(const UParticleModuleCollisionGPU&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleCollisionGPU(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleCollisionGPU(UParticleModuleCollisionGPU&&); \
	ENGINE_API UParticleModuleCollisionGPU(const UParticleModuleCollisionGPU&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleCollisionGPU); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleCollisionGPU); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleCollisionGPU)


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_31_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleCollisionGPU."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleCollisionGPU>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h


#define FOREACH_ENUM_EPARTICLECOLLISIONRESPONSE(op) \
	op(EParticleCollisionResponse::Bounce) \
	op(EParticleCollisionResponse::Stop) \
	op(EParticleCollisionResponse::Kill) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
