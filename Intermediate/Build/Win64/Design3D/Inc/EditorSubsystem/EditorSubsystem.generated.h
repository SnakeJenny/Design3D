// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDITORSUBSYSTEM_EditorSubsystem_generated_h
#error "EditorSubsystem.generated.h already included, missing '#pragma once' in EditorSubsystem.h"
#endif
#define EDITORSUBSYSTEM_EditorSubsystem_generated_h

#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UEditorSubsystem)


#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UEditorSubsystem)


#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSubsystem(UEditorSubsystem&&); \
	NO_API UEditorSubsystem(const UEditorSubsystem&); \
public:


#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorSubsystem(UEditorSubsystem&&); \
	NO_API UEditorSubsystem(const UEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorSubsystem)


#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_20_PROLOG
#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_INCLASS \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSUBSYSTEM_API UClass* StaticClass<class UEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
