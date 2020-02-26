// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DefaultPhysicsVolume_generated_h
#error "DefaultPhysicsVolume.generated.h already included, missing '#pragma once' in DefaultPhysicsVolume.h"
#endif
#define ENGINE_DefaultPhysicsVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultPhysicsVolume(); \
	friend struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ADefaultPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADefaultPhysicsVolume)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesADefaultPhysicsVolume(); \
	friend struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ADefaultPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ADefaultPhysicsVolume)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADefaultPhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPhysicsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADefaultPhysicsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPhysicsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ADefaultPhysicsVolume(ADefaultPhysicsVolume&&); \
	ENGINE_API ADefaultPhysicsVolume(const ADefaultPhysicsVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ADefaultPhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ADefaultPhysicsVolume(ADefaultPhysicsVolume&&); \
	ENGINE_API ADefaultPhysicsVolume(const ADefaultPhysicsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ADefaultPhysicsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultPhysicsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultPhysicsVolume)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DefaultPhysicsVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADefaultPhysicsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPhysicsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
