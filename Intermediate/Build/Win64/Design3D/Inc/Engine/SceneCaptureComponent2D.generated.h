// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
#ifdef ENGINE_SceneCaptureComponent2D_generated_h
#error "SceneCaptureComponent2D.generated.h already included, missing '#pragma once' in SceneCaptureComponent2D.h"
#endif
#define ENGINE_SceneCaptureComponent2D_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCaptureScene) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureScene(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCaptureScene) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureScene(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent2D(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent2D_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent2D, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent2D) \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent2D(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent2D_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent2D, USceneCaptureComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent2D) \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent2D(USceneCaptureComponent2D&&); \
	NO_API USceneCaptureComponent2D(const USceneCaptureComponent2D&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneCaptureComponent2D(USceneCaptureComponent2D&&); \
	NO_API USceneCaptureComponent2D(const USceneCaptureComponent2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneCaptureComponent2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent2D)


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneCaptureComponent2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponent2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
