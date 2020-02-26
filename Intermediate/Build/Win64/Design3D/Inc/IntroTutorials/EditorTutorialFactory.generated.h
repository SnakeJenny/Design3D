// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTROTUTORIALS_EditorTutorialFactory_generated_h
#error "EditorTutorialFactory.generated.h already included, missing '#pragma once' in EditorTutorialFactory.h"
#endif
#define INTROTUTORIALS_EditorTutorialFactory_generated_h

#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_RPC_WRAPPERS
#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorTutorialFactory(); \
	friend struct Z_Construct_UClass_UEditorTutorialFactory_Statics; \
public: \
	DECLARE_CLASS(UEditorTutorialFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UEditorTutorialFactory)


#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorialFactory(); \
	friend struct Z_Construct_UClass_UEditorTutorialFactory_Statics; \
public: \
	DECLARE_CLASS(UEditorTutorialFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UEditorTutorialFactory)


#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorialFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorialFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorialFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorialFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorTutorialFactory(UEditorTutorialFactory&&); \
	NO_API UEditorTutorialFactory(const UEditorTutorialFactory&); \
public:


#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorialFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorTutorialFactory(UEditorTutorialFactory&&); \
	NO_API UEditorTutorialFactory(const UEditorTutorialFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorialFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorialFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorialFactory)


#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_10_PROLOG
#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_RPC_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorTutorialFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTROTUTORIALS_API UClass* StaticClass<class UEditorTutorialFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_IntroTutorials_Private_EditorTutorialFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
