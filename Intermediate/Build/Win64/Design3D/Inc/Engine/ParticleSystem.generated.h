// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ENGINE_ParticleSystem_generated_h
#error "ParticleSystem.generated.h already included, missing '#pragma once' in ParticleSystem.h"
#endif
#define ENGINE_ParticleSystem_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedEmitterMaterial>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLODSoloTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLODSoloTrack>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticleSystemLOD_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParticleSystemLOD>();

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execContainsEmitterType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TypeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsEmitterType(Z_Param_TypeData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execContainsEmitterType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_TypeData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ContainsEmitterType(Z_Param_TypeData); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystem, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleSystem(); \
	friend struct Z_Construct_UClass_UParticleSystem_Statics; \
public: \
	DECLARE_CLASS(UParticleSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSystem) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSystem(); \
	friend struct Z_Construct_UClass_UParticleSystem_Statics; \
public: \
	DECLARE_CLASS(UParticleSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSystem) \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleSystem(UParticleSystem&&); \
	ENGINE_API UParticleSystem(const UParticleSystem&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleSystem(UParticleSystem&&); \
	ENGINE_API UParticleSystem(const UParticleSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParticleSystem)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_111_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h_114_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSystem."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystem_h


#define FOREACH_ENUM_EPARTICLESYSTEMOCCLUSIONBOUNDSMETHOD(op) \
	op(EPSOBM_None) \
	op(EPSOBM_ParticleBounds) \
	op(EPSOBM_CustomBounds) 
#define FOREACH_ENUM_PARTICLESYSTEMLODMETHOD(op) \
	op(PARTICLESYSTEMLODMETHOD_Automatic) \
	op(PARTICLESYSTEMLODMETHOD_DirectSet) \
	op(PARTICLESYSTEMLODMETHOD_ActivateAutomatic) 
#define FOREACH_ENUM_EPARTICLESYSTEMUPDATEMODE(op) \
	op(EPSUM_RealTime) \
	op(EPSUM_FixedTime) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
