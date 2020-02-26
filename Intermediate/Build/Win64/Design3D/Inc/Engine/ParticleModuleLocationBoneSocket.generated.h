// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleModuleLocationBoneSocket_generated_h
#error "ParticleModuleLocationBoneSocket.generated.h already included, missing '#pragma once' in ParticleModuleLocationBoneSocket.h"
#endif
#define ENGINE_ParticleModuleLocationBoneSocket_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLocationBoneSocketInfo>();

#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUParticleModuleLocationBoneSocket(); \
	friend struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics; \
public: \
	DECLARE_CLASS(UParticleModuleLocationBoneSocket, UParticleModuleLocationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UParticleModuleLocationBoneSocket)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationBoneSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationBoneSocket(UParticleModuleLocationBoneSocket&&); \
	NO_API UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParticleModuleLocationBoneSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParticleModuleLocationBoneSocket(UParticleModuleLocationBoneSocket&&); \
	NO_API UParticleModuleLocationBoneSocket(const UParticleModuleLocationBoneSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParticleModuleLocationBoneSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleModuleLocationBoneSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleModuleLocationBoneSocket)


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_63_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleModuleLocationBoneSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UParticleModuleLocationBoneSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h


#define FOREACH_ENUM_ELOCATIONBONESOCKETSELECTIONMETHOD(op) \
	op(BONESOCKETSEL_Sequential) \
	op(BONESOCKETSEL_Random) 
#define FOREACH_ENUM_ELOCATIONBONESOCKETSOURCE(op) \
	op(BONESOCKETSOURCE_Bones) \
	op(BONESOCKETSOURCE_Sockets) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
