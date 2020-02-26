// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodySetup_generated_h
#error "BodySetup.generated.h already included, missing '#pragma once' in BodySetup.h"
#endif
#define ENGINE_BodySetup_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBodySetup, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend struct Z_Construct_UClass_UBodySetup_Statics; \
public: \
	DECLARE_CLASS(UBodySetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUBodySetup(); \
	friend struct Z_Construct_UClass_UBodySetup_Statics; \
public: \
	DECLARE_CLASS(UBodySetup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBodySetup) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBodySetup(UBodySetup&&); \
	ENGINE_API UBodySetup(const UBodySetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBodySetup)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_125_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h_128_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BodySetup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBodySetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodySetup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
