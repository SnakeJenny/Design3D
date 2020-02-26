// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTrailSource_generated_h
#error "ParticleModuleTrailSource.generated.h already included, missing '#pragma once' in ParticleModuleTrailSource.h"
#endif
#define ENGINE_ParticleModuleTrailSource_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleTrailSource(); \
	friend struct Z_Construct_UClass_UParticleModuleTrailSource_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTrailSource, UParticleModuleTrailBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTrailSource)


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTrailSource(); \
	friend struct Z_Construct_UClass_UParticleModuleTrailSource_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTrailSource, UParticleModuleTrailBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTrailSource)


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTrailSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTrailSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTrailSource(UParticleModuleTrailSource&&); \
	ENGINE_API UParticleModuleTrailSource(const UParticleModuleTrailSource&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTrailSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTrailSource(UParticleModuleTrailSource&&); \
	ENGINE_API UParticleModuleTrailSource(const UParticleModuleTrailSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTrailSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTrailSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTrailSource)


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleTrailSource."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTrailSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Trail_ParticleModuleTrailSource_h


#define FOREACH_ENUM_ETRAIL2SOURCEMETHOD(op) \
	op(PET2SRCM_Default) \
	op(PET2SRCM_Particle) \
	op(PET2SRCM_Actor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
