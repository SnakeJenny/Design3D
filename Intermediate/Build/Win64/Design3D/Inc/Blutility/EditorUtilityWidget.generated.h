// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorUtilityWidget_generated_h
#error "EditorUtilityWidget.generated.h already included, missing '#pragma once' in EditorUtilityWidget.h"
#endif
#define BLUTILITY_EditorUtilityWidget_generated_h

#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_EVENT_PARMS
#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_CALLBACK_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityWidget(); \
	friend struct Z_Construct_UClass_UEditorUtilityWidget_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityWidget(); \
	friend struct Z_Construct_UClass_UEditorUtilityWidget_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityWidget(UEditorUtilityWidget&&); \
	NO_API UEditorUtilityWidget(const UEditorUtilityWidget&); \
public:


#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityWidget(UEditorUtilityWidget&&); \
	NO_API UEditorUtilityWidget(const UEditorUtilityWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityWidget)


#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HelpText() { return STRUCT_OFFSET(UEditorUtilityWidget, HelpText); } \
	FORCEINLINE static uint32 __PPO__bAlwaysReregisterWithWindowsMenu() { return STRUCT_OFFSET(UEditorUtilityWidget, bAlwaysReregisterWithWindowsMenu); } \
	FORCEINLINE static uint32 __PPO__bAutoRunDefaultAction() { return STRUCT_OFFSET(UEditorUtilityWidget, bAutoRunDefaultAction); }


#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_19_PROLOG \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_EVENT_PARMS


#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_INCLASS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_EditorUtilityWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
