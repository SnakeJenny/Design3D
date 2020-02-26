// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h
#error "ParticleModuleLocationPrimitiveCylinder.generated.h already included, missing '#pragma once' in ParticleModuleLocationPrimitiveCylinder.h"
#endif
#define ENGINE_ParticleModuleLocationPrimitiveCylinder_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveCylinder)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationPrimitiveCylinder_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationPrimitiveCylinder, UParticleModuleLocationPrimitiveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationPrimitiveCylinder)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationPrimitiveCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveCylinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationPrimitiveCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveCylinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationPrimitiveCylinder(UParticleModuleLocationPrimitiveCylinder&&); \
	NO_API UParticleModuleLocationPrimitiveCylinder(const UParticleModuleLocationPrimitiveCylinder&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationPrimitiveCylinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationPrimitiveCylinder(UParticleModuleLocationPrimitiveCylinder&&); \
	NO_API UParticleModuleLocationPrimitiveCylinder(const UParticleModuleLocationPrimitiveCylinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationPrimitiveCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationPrimitiveCylinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationPrimitiveCylinder)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationPrimitiveCylinder."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationPrimitiveCylinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveCylinder_h


#define FOREACH_ENUM_CYLINDERHEIGHTAXIS(op) \
	op(PMLPC_HEIGHTAXIS_X) \
	op(PMLPC_HEIGHTAXIS_Y) \
	op(PMLPC_HEIGHTAXIS_Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
