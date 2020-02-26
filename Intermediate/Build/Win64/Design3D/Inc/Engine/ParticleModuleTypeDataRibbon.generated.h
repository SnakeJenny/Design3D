// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTypeDataRibbon_generated_h
#error "ParticleModuleTypeDataRibbon.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataRibbon.h"
#endif
#define ENGINE_ParticleModuleTypeDataRibbon_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataRibbon(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataRibbon, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataRibbon)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataRibbon(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataRibbon, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataRibbon)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataRibbon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataRibbon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataRibbon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataRibbon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataRibbon(UParticleModuleTypeDataRibbon&&); \
	ENGINE_API UParticleModuleTypeDataRibbon(const UParticleModuleTypeDataRibbon&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataRibbon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataRibbon(UParticleModuleTypeDataRibbon&&); \
	ENGINE_API UParticleModuleTypeDataRibbon(const UParticleModuleTypeDataRibbon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataRibbon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataRibbon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataRibbon)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleTypeDataRibbon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTypeDataRibbon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataRibbon_h


#define FOREACH_ENUM_ETRAILSRENDERAXISOPTION(op) \
	op(Trails_CameraUp) \
	op(Trails_SourceUp) \
	op(Trails_WorldUp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
