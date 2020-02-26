// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SceneCaptureComponentCube_generated_h
#error "SceneCaptureComponentCube.generated.h already included, missing '#pragma once' in SceneCaptureComponentCube.h"
#endif
#define ENGINE_SceneCaptureComponentCube_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCaptureScene) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureScene(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCaptureScene) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureScene(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponentCube(); \
	friend struct Z_Construct_UClass_USceneCaptureComponentCube_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponentCube, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponentCube)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponentCube(); \
	friend struct Z_Construct_UClass_USceneCaptureComponentCube_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponentCube, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponentCube)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponentCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponentCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponentCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponentCube(USceneCaptureComponentCube&&); \
	NO_API USceneCaptureComponentCube(const USceneCaptureComponentCube&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponentCube(USceneCaptureComponentCube&&); \
	NO_API USceneCaptureComponentCube(const USceneCaptureComponentCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponentCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponentCube); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponentCube)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponentCube."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponentCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
