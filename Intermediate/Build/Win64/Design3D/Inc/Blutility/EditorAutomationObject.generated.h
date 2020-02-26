// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUTILITY_EditorAutomationObject_generated_h
#error "EditorAutomationObject.generated.h already included, missing '#pragma once' in EditorAutomationObject.h"
#endif
#define BLUTILITY_EditorAutomationObject_generated_h

#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAutomationObject(); \
	friend struct Z_Construct_UClass_UEditorAutomationObject_Statics; \
public: \
	DECLARE_CLASS(UEditorAutomationObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorAutomationObject)


#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAutomationObject(); \
	friend struct Z_Construct_UClass_UEditorAutomationObject_Statics; \
public: \
	DECLARE_CLASS(UEditorAutomationObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorAutomationObject)


#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAutomationObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAutomationObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAutomationObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAutomationObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAutomationObject(UEditorAutomationObject&&); \
	NO_API UEditorAutomationObject(const UEditorAutomationObject&); \
public:


#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAutomationObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAutomationObject(UEditorAutomationObject&&); \
	NO_API UEditorAutomationObject(const UEditorAutomationObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAutomationObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAutomationObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAutomationObject)


#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_16_PROLOG
#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_INCLASS \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorAutomationObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorAutomationObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_EditorAutomationObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
