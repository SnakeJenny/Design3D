// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleTypeDataMesh_generated_h
#error "ParticleModuleTypeDataMesh.generated.h already included, missing '#pragma once' in ParticleModuleTypeDataMesh.h"
#endif
#define ENGINE_ParticleModuleTypeDataMesh_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleModuleTypeDataMesh, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataMesh(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataMesh, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataMesh) \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleTypeDataMesh(); \
	friend struct Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleTypeDataMesh, UParticleModuleTypeDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleTypeDataMesh) \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataMesh(UParticleModuleTypeDataMesh&&); \
	ENGINE_API UParticleModuleTypeDataMesh(const UParticleModuleTypeDataMesh&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleTypeDataMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleTypeDataMesh(UParticleModuleTypeDataMesh&&); \
	ENGINE_API UParticleModuleTypeDataMesh(const UParticleModuleTypeDataMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleTypeDataMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleTypeDataMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleTypeDataMesh)


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_60_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_63_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleTypeDataMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleTypeDataMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h


#define FOREACH_ENUM_EMESHCAMERAFACINGOPTIONS(op) \
	op(XAxisFacing_NoUp) \
	op(XAxisFacing_ZUp) \
	op(XAxisFacing_NegativeZUp) \
	op(XAxisFacing_YUp) \
	op(XAxisFacing_NegativeYUp) \
	op(LockedAxis_ZAxisFacing) \
	op(LockedAxis_NegativeZAxisFacing) \
	op(LockedAxis_YAxisFacing) \
	op(LockedAxis_NegativeYAxisFacing) \
	op(VelocityAligned_ZAxisFacing) \
	op(VelocityAligned_NegativeZAxisFacing) \
	op(VelocityAligned_YAxisFacing) \
	op(VelocityAligned_NegativeYAxisFacing) 
#define FOREACH_ENUM_EMESHCAMERAFACINGUPAXIS(op) \
	op(CameraFacing_NoneUP) \
	op(CameraFacing_ZUp) \
	op(CameraFacing_NegativeZUp) \
	op(CameraFacing_YUp) \
	op(CameraFacing_NegativeYUp) 
#define FOREACH_ENUM_EMESHSCREENALIGNMENT(op) \
	op(PSMA_MeshFaceCameraWithRoll) \
	op(PSMA_MeshFaceCameraWithSpin) \
	op(PSMA_MeshFaceCameraWithLockedAxis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
