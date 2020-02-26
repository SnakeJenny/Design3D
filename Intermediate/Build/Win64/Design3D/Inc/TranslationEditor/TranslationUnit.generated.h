// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSLATIONEDITOR_TranslationUnit_generated_h
#error "TranslationUnit.generated.h already included, missing '#pragma once' in TranslationUnit.h"
#endif
#define TRANSLATIONEDITOR_TranslationUnit_generated_h

#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTranslationContextInfo_Statics; \
	TRANSLATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<struct FTranslationContextInfo>();

#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTranslationChange_Statics; \
	TRANSLATIONEDITOR_API static class UScriptStruct* StaticStruct();


template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<struct FTranslationChange>();

#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_RPC_WRAPPERS
#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTranslationUnit(); \
	friend struct Z_Construct_UClass_UTranslationUnit_Statics; \
public: \
	DECLARE_CLASS(UTranslationUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TranslationEditor"), TRANSLATIONEDITOR_API) \
	DECLARE_SERIALIZER(UTranslationUnit)


#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUTranslationUnit(); \
	friend struct Z_Construct_UClass_UTranslationUnit_Statics; \
public: \
	DECLARE_CLASS(UTranslationUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TranslationEditor"), TRANSLATIONEDITOR_API) \
	DECLARE_SERIALIZER(UTranslationUnit)


#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRANSLATIONEDITOR_API UTranslationUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRANSLATIONEDITOR_API, UTranslationUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRANSLATIONEDITOR_API UTranslationUnit(UTranslationUnit&&); \
	TRANSLATIONEDITOR_API UTranslationUnit(const UTranslationUnit&); \
public:


#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRANSLATIONEDITOR_API UTranslationUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRANSLATIONEDITOR_API UTranslationUnit(UTranslationUnit&&); \
	TRANSLATIONEDITOR_API UTranslationUnit(const UTranslationUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRANSLATIONEDITOR_API, UTranslationUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTranslationUnit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTranslationUnit)


#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_55_PROLOG
#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_RPC_WRAPPERS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_INCLASS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TranslationUnit."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRANSLATIONEDITOR_API UClass* StaticClass<class UTranslationUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
