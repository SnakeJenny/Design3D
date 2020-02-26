// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleEventGenerator_generated_h
#error "ParticleModuleEventGenerator.generated.h already included, missing '#pragma once' in ParticleModuleEventGenerator.h"
#endif
#define ENGINE_ParticleModuleEventGenerator_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleEvent_GenerateInfo>();

#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleEventGenerator(); \
	friend struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleEventGenerator, UParticleModuleEventBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleEventGenerator)


#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleEventGenerator(); \
	friend struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleEventGenerator, UParticleModuleEventBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleEventGenerator)


#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleEventGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleEventGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleEventGenerator(UParticleModuleEventGenerator&&); \
	ENGINE_API UParticleModuleEventGenerator(const UParticleModuleEventGenerator&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleEventGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleEventGenerator(UParticleModuleEventGenerator&&); \
	ENGINE_API UParticleModuleEventGenerator(const UParticleModuleEventGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleEventGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleEventGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleEventGenerator)


#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_70_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleEventGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleEventGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
