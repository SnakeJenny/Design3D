// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleBeamBase_generated_h
#error "ParticleModuleBeamBase.generated.h already included, missing '#pragma once' in ParticleModuleBeamBase.h"
#endif
#define ENGINE_ParticleModuleBeamBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamBase(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamBase(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamBase_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamBase, UParticleModule, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleBeamBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleBeamBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleBeamBase(UParticleModuleBeamBase&&); \
	NO_API UParticleModuleBeamBase(const UParticleModuleBeamBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleBeamBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleBeamBase(UParticleModuleBeamBase&&); \
	NO_API UParticleModuleBeamBase(const UParticleModuleBeamBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleBeamBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamBase)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleBeamBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleBeamBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamBase_h


#define FOREACH_ENUM_BEAM2SOURCETARGETTANGENTMETHOD(op) \
	op(PEB2STTM_Direct) \
	op(PEB2STTM_UserSet) \
	op(PEB2STTM_Distribution) \
	op(PEB2STTM_Emitter) 
#define FOREACH_ENUM_BEAM2SOURCETARGETMETHOD(op) \
	op(PEB2STM_Default) \
	op(PEB2STM_UserSet) \
	op(PEB2STM_Emitter) \
	op(PEB2STM_Particle) \
	op(PEB2STM_Actor) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
