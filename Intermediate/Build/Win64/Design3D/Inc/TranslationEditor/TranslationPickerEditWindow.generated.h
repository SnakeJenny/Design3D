// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h
#error "TranslationPickerEditWindow.generated.h already included, missing '#pragma once' in TranslationPickerEditWindow.h"
#endif
#define TRANSLATIONEDITOR_TranslationPickerEditWindow_generated_h

#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTranslationPickerSettings(); \
	friend struct Z_Construct_UClass_UTranslationPickerSettings_Statics; \
public: \
	DECLARE_CLASS(UTranslationPickerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TranslationEditor"), NO_API) \
	DECLARE_SERIALIZER(UTranslationPickerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("TranslationPickerSettings");} \



#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTranslationPickerSettings(); \
	friend struct Z_Construct_UClass_UTranslationPickerSettings_Statics; \
public: \
	DECLARE_CLASS(UTranslationPickerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TranslationEditor"), NO_API) \
	DECLARE_SERIALIZER(UTranslationPickerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("TranslationPickerSettings");} \



#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranslationPickerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationPickerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranslationPickerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationPickerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranslationPickerSettings(UTranslationPickerSettings&&); \
	NO_API UTranslationPickerSettings(const UTranslationPickerSettings&); \
public:


#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTranslationPickerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTranslationPickerSettings(UTranslationPickerSettings&&); \
	NO_API UTranslationPickerSettings(const UTranslationPickerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTranslationPickerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationPickerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationPickerSettings)


#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_20_PROLOG
#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_INCLASS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TranslationPickerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSLATIONEDITOR_API UClass* StaticClass<class UTranslationPickerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
