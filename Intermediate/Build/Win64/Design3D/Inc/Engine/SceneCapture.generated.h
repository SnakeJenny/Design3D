// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneCapture_generated_h
#error "SceneCapture.generated.h already included, missing '#pragma once' in SceneCapture.h"
#endif
#define ENGINE_SceneCapture_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ASceneCapture, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneCapture(); \
	friend struct Z_Construct_UClass_ASceneCapture_Statics; \
public: \
	DECLARE_CLASS(ASceneCapture, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASceneCapture) \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASceneCapture(); \
	friend struct Z_Construct_UClass_ASceneCapture_Statics; \
public: \
	DECLARE_CLASS(ASceneCapture, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASceneCapture) \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASceneCapture(ASceneCapture&&); \
	ENGINE_API ASceneCapture(const ASceneCapture&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASceneCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASceneCapture(ASceneCapture&&); \
	ENGINE_API ASceneCapture(const ASceneCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASceneCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASceneCapture)


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp_DEPRECATED() { return STRUCT_OFFSET(ASceneCapture, MeshComp_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ASceneCapture, SceneComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCapture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASceneCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
