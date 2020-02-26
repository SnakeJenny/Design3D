// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleAttractorParticle_generated_h
#error "ParticleModuleAttractorParticle.generated.h already included, missing '#pragma once' in ParticleModuleAttractorParticle.h"
#endif
#define ENGINE_ParticleModuleAttractorParticle_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorParticle(); \
	friend struct Z_Construct_UClass_UParticleModuleAttractorParticle_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAttractorParticle, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorParticle)


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleAttractorParticle(); \
	friend struct Z_Construct_UClass_UParticleModuleAttractorParticle_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleAttractorParticle, UParticleModuleAttractorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleAttractorParticle)


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorParticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorParticle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorParticle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleAttractorParticle(UParticleModuleAttractorParticle&&); \
	ENGINE_API UParticleModuleAttractorParticle(const UParticleModuleAttractorParticle&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleAttractorParticle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleAttractorParticle(UParticleModuleAttractorParticle&&); \
	ENGINE_API UParticleModuleAttractorParticle(const UParticleModuleAttractorParticle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleAttractorParticle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleAttractorParticle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleAttractorParticle)


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleAttractorParticle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleAttractorParticle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorParticle_h


#define FOREACH_ENUM_EATTRACTORPARTICLESELECTIONMETHOD(op) \
	op(EAPSM_Random) \
	op(EAPSM_Sequential) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
