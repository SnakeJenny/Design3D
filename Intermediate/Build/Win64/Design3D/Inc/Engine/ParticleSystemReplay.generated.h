// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleSystemReplay_generated_h
#error "ParticleSystemReplay.generated.h already included, missing '#pragma once' in ParticleSystemReplay.h"
#endif
#define ENGINE_ParticleSystemReplay_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSystemReplayFrame>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleEmitterReplayFrame>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend struct Z_Construct_UClass_UParticleSystemReplay_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystemReplay(); \
	friend struct Z_Construct_UClass_UParticleSystemReplay_Statics; \
public: \
	DECLARE_CLASS(UParticleSystemReplay, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleSystemReplay) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemReplay(UParticleSystemReplay&&); \
	NO_API UParticleSystemReplay(const UParticleSystemReplay&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleSystemReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleSystemReplay(UParticleSystemReplay&&); \
	NO_API UParticleSystemReplay(const UParticleSystemReplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleSystemReplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystemReplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystemReplay)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_66_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSystemReplay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystemReplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemReplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
