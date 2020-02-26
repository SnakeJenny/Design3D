// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorMiscSettings_generated_h
#error "EditorMiscSettings.generated.h already included, missing '#pragma once' in EditorMiscSettings.h"
#endif
#define UNREALED_EditorMiscSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorMiscSettings(); \
	friend struct Z_Construct_UClass_UEditorMiscSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorMiscSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorMiscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorMiscSettings(); \
	friend struct Z_Construct_UClass_UEditorMiscSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorMiscSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorMiscSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorMiscSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorMiscSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorMiscSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorMiscSettings(UEditorMiscSettings&&); \
	NO_API UEditorMiscSettings(const UEditorMiscSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorMiscSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorMiscSettings(UEditorMiscSettings&&); \
	NO_API UEditorMiscSettings(const UEditorMiscSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorMiscSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorMiscSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorMiscSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_15_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorMiscSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorMiscSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
