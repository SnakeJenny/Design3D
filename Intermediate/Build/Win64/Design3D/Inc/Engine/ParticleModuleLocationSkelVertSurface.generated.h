// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationSkelVertSurface_generated_h
#error "ParticleModuleLocationSkelVertSurface.generated.h already included, missing '#pragma once' in ParticleModuleLocationSkelVertSurface.h"
#endif
#define ENGINE_ParticleModuleLocationSkelVertSurface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationSkelVertSurface(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationSkelVertSurface, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationSkelVertSurface)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationSkelVertSurface(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationSkelVertSurface, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationSkelVertSurface)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationSkelVertSurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationSkelVertSurface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationSkelVertSurface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationSkelVertSurface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationSkelVertSurface(UParticleModuleLocationSkelVertSurface&&); \
	NO_API UParticleModuleLocationSkelVertSurface(const UParticleModuleLocationSkelVertSurface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationSkelVertSurface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationSkelVertSurface(UParticleModuleLocationSkelVertSurface&&); \
	NO_API UParticleModuleLocationSkelVertSurface(const UParticleModuleLocationSkelVertSurface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationSkelVertSurface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationSkelVertSurface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationSkelVertSurface)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationSkelVertSurface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationSkelVertSurface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationSkelVertSurface_h


#define FOREACH_ENUM_ELOCATIONSKELVERTSURFACESOURCE(op) \
	op(VERTSURFACESOURCE_Vert) \
	op(VERTSURFACESOURCE_Surface) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
