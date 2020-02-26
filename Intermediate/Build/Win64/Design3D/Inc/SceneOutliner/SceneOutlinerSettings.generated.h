// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCENEOUTLINER_SceneOutlinerSettings_generated_h
#error "SceneOutlinerSettings.generated.h already included, missing '#pragma once' in SceneOutlinerSettings.h"
#endif
#define SCENEOUTLINER_SceneOutlinerSettings_generated_h

#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_RPC_WRAPPERS
#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneOutlinerSettings(); \
	friend struct Z_Construct_UClass_USceneOutlinerSettings_Statics; \
public: \
	DECLARE_CLASS(USceneOutlinerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneOutliner"), NO_API) \
	DECLARE_SERIALIZER(USceneOutlinerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSceneOutlinerSettings(); \
	friend struct Z_Construct_UClass_USceneOutlinerSettings_Statics; \
public: \
	DECLARE_CLASS(USceneOutlinerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneOutliner"), NO_API) \
	DECLARE_SERIALIZER(USceneOutlinerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneOutlinerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneOutlinerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneOutlinerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneOutlinerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneOutlinerSettings(USceneOutlinerSettings&&); \
	NO_API USceneOutlinerSettings(const USceneOutlinerSettings&); \
public:


#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneOutlinerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneOutlinerSettings(USceneOutlinerSettings&&); \
	NO_API USceneOutlinerSettings(const USceneOutlinerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneOutlinerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneOutlinerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneOutlinerSettings)


#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_14_PROLOG
#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_INCLASS \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SceneOutlinerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCENEOUTLINER_API UClass* StaticClass<class USceneOutlinerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_SceneOutliner_Private_SceneOutlinerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
