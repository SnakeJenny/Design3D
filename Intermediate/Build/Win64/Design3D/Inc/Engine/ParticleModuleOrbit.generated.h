// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleOrbit_generated_h
#error "ParticleModuleOrbit.generated.h already included, missing '#pragma once' in ParticleModuleOrbit.h"
#endif
#define ENGINE_ParticleModuleOrbit_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrbitOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FOrbitOptions>();

#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleOrbit(); \
	friend struct Z_Construct_UClass_UParticleModuleOrbit_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrbit, UParticleModuleOrbitBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrbit)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleOrbit(); \
	friend struct Z_Construct_UClass_UParticleModuleOrbit_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleOrbit, UParticleModuleOrbitBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleOrbit)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrbit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrbit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleOrbit(UParticleModuleOrbit&&); \
	ENGINE_API UParticleModuleOrbit(const UParticleModuleOrbit&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleOrbit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleOrbit(UParticleModuleOrbit&&); \
	ENGINE_API UParticleModuleOrbit(const UParticleModuleOrbit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleOrbit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleOrbit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleOrbit)


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_65_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleOrbit."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleOrbit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h


#define FOREACH_ENUM_EORBITCHAINMODE(op) \
	op(EOChainMode_Add) \
	op(EOChainMode_Scale) \
	op(EOChainMode_Link) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
