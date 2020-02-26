// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleBeamModifier_generated_h
#error "ParticleModuleBeamModifier.generated.h already included, missing '#pragma once' in ParticleModuleBeamModifier.h"
#endif
#define ENGINE_ParticleModuleBeamModifier_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBeamModifierOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBeamModifierOptions>();

#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamModifier(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamModifier, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamModifier)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleBeamModifier(); \
	friend struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleBeamModifier, UParticleModuleBeamBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleBeamModifier)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleBeamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleBeamModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleBeamModifier(UParticleModuleBeamModifier&&); \
	NO_API UParticleModuleBeamModifier(const UParticleModuleBeamModifier&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleBeamModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleBeamModifier(UParticleModuleBeamModifier&&); \
	NO_API UParticleModuleBeamModifier(const UParticleModuleBeamModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleBeamModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleBeamModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleBeamModifier)


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_64_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleBeamModifier."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleBeamModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h


#define FOREACH_ENUM_BEAMMODIFIERTYPE(op) \
	op(PEB2MT_Source) \
	op(PEB2MT_Target) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
