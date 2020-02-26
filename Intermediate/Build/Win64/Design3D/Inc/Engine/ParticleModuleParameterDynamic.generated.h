// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleParameterDynamic_generated_h
#error "ParticleModuleParameterDynamic.generated.h already included, missing '#pragma once' in ParticleModuleParameterDynamic.h"
#endif
#define ENGINE_ParticleModuleParameterDynamic_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEmitterDynamicParameter>();

#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleParameterDynamic(); \
	friend struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleParameterDynamic, UParticleModuleParameterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleParameterDynamic)


#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleParameterDynamic(); \
	friend struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleParameterDynamic, UParticleModuleParameterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleModuleParameterDynamic)


#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleParameterDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleParameterDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleParameterDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleParameterDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleParameterDynamic(UParticleModuleParameterDynamic&&); \
	ENGINE_API UParticleModuleParameterDynamic(const UParticleModuleParameterDynamic&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleModuleParameterDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleModuleParameterDynamic(UParticleModuleParameterDynamic&&); \
	ENGINE_API UParticleModuleParameterDynamic(const UParticleModuleParameterDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleModuleParameterDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleParameterDynamic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleParameterDynamic)


#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_96_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_99_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleParameterDynamic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleParameterDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h


#define FOREACH_ENUM_EEMITTERDYNAMICPARAMETERVALUE(op) \
	op(EDPV_UserSet) \
	op(EDPV_AutoSet) \
	op(EDPV_VelocityX) \
	op(EDPV_VelocityY) \
	op(EDPV_VelocityZ) \
	op(EDPV_VelocityMag) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
