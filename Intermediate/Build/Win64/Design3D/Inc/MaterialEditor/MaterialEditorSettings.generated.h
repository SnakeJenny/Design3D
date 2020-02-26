// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALEDITOR_MaterialEditorSettings_generated_h
#error "MaterialEditorSettings.generated.h already included, missing '#pragma once' in MaterialEditorSettings.h"
#endif
#define MATERIALEDITOR_MaterialEditorSettings_generated_h

#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_RPC_WRAPPERS
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorSettings(); \
	friend struct Z_Construct_UClass_UMaterialEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditorSettings(); \
	friend struct Z_Construct_UClass_UMaterialEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorSettings(UMaterialEditorSettings&&); \
	NO_API UMaterialEditorSettings(const UMaterialEditorSettings&); \
public:


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorSettings(UMaterialEditorSettings&&); \
	NO_API UMaterialEditorSettings(const UMaterialEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorSettings)


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_8_PROLOG
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_RPC_WRAPPERS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_INCLASS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALEDITOR_API UClass* StaticClass<class UMaterialEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
