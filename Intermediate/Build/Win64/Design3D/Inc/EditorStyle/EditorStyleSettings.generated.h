// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSTYLE_EditorStyleSettings_generated_h
#error "EditorStyleSettings.generated.h already included, missing '#pragma once' in EditorStyleSettings.h"
#endif
#define EDITORSTYLE_EditorStyleSettings_generated_h

#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_RPC_WRAPPERS
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStyleSettings(); \
	friend struct Z_Construct_UClass_UEditorStyleSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorStyleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorStyle"), NO_API) \
	DECLARE_SERIALIZER(UEditorStyleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUEditorStyleSettings(); \
	friend struct Z_Construct_UClass_UEditorStyleSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorStyleSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EditorStyle"), NO_API) \
	DECLARE_SERIALIZER(UEditorStyleSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStyleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStyleSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStyleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStyleSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStyleSettings(UEditorStyleSettings&&); \
	NO_API UEditorStyleSettings(const UEditorStyleSettings&); \
public:


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorStyleSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorStyleSettings(UEditorStyleSettings&&); \
	NO_API UEditorStyleSettings(const UEditorStyleSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorStyleSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStyleSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorStyleSettings)


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_35_PROLOG
#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_RPC_WRAPPERS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_INCLASS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorStyleSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSTYLE_API UClass* StaticClass<class UEditorStyleSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_EditorStyle_Public_Classes_EditorStyleSettings_h


#define FOREACH_ENUM_EASSETEDITOROPENLOCATION(op) \
	op(EAssetEditorOpenLocation::Default) \
	op(EAssetEditorOpenLocation::NewWindow) \
	op(EAssetEditorOpenLocation::MainWindow) \
	op(EAssetEditorOpenLocation::ContentBrowser) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrNewWindow) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrMainWindow) \
	op(EAssetEditorOpenLocation::LastDockedWindowOrContentBrowser) 

enum class EAssetEditorOpenLocation : uint8;
template<> EDITORSTYLE_API UEnum* StaticEnum<EAssetEditorOpenLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
