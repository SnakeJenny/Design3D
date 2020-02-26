// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTypeDataBeam2_generated_h
#error "ParticleModuleTypeDataBeam2.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataBeam2.h"
#endif
#define ENGINE_ParticleModuleTypeDataBeam2_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBeamTargetData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBeamTargetData>();

#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataBeam2(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataBeam2, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataBeam2)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataBeam2(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataBeam2, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataBeam2)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataBeam2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataBeam2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataBeam2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataBeam2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataBeam2(UParticleModuleTypeDataBeam2&&); \
	ENGINE_API UParticleModuleTypeDataBeam2(const UParticleModuleTypeDataBeam2&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataBeam2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataBeam2(UParticleModuleTypeDataBeam2&&); \
	ENGINE_API UParticleModuleTypeDataBeam2(const UParticleModuleTypeDataBeam2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataBeam2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataBeam2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataBeam2)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_67_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleTypeDataBeam2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTypeDataBeam2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h


#define FOREACH_ENUM_EBEAMTAPERMETHOD(op) \
	op(PEBTM_None) \
	op(PEBTM_Full) \
	op(PEBTM_Partial) 
#define FOREACH_ENUM_EBEAM2METHOD(op) \
	op(PEB2M_Distance) \
	op(PEB2M_Target) \
	op(PEB2M_Branch) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
