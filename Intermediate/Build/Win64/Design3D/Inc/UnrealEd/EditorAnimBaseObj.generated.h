// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorAnimBaseObj_generated_h
#error "EditorAnimBaseObj.generated.h already included, missing '#pragma once' in EditorAnimBaseObj.h"
#endif
#define UNREALED_EditorAnimBaseObj_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAnimBaseObj(); \
	friend struct Z_Construct_UClass_UEditorAnimBaseObj_Statics; \
public: \
	DECLARE_CLASS(UEditorAnimBaseObj, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorAnimBaseObj)


#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimBaseObj(); \
	friend struct Z_Construct_UClass_UEditorAnimBaseObj_Statics; \
public: \
	DECLARE_CLASS(UEditorAnimBaseObj, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorAnimBaseObj)


#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimBaseObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimBaseObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimBaseObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimBaseObj); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorAnimBaseObj(UEditorAnimBaseObj&&); \
	UNREALED_API UEditorAnimBaseObj(const UEditorAnimBaseObj&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimBaseObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorAnimBaseObj(UEditorAnimBaseObj&&); \
	UNREALED_API UEditorAnimBaseObj(const UEditorAnimBaseObj&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimBaseObj); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimBaseObj); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimBaseObj)


#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_21_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorAnimBaseObj."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorAnimBaseObj>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
