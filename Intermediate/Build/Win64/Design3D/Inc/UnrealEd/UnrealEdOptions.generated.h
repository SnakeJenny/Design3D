// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_UnrealEdOptions_generated_h
#error "UnrealEdOptions.generated.h already included, missing '#pragma once' in UnrealEdOptions.h"
#endif
#define UNREALED_UnrealEdOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassPickerDefaults_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FClassPickerDefaults>();

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorCommand_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FEditorCommand>();

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorCommandCategory_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FEditorCommandCategory>();

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEdOptions(); \
	friend struct Z_Construct_UClass_UUnrealEdOptions_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEdOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealEdOptions(); \
	friend struct Z_Construct_UClass_UUnrealEdOptions_Statics; \
public: \
	DECLARE_CLASS(UUnrealEdOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEdOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEdOptions(UUnrealEdOptions&&); \
	NO_API UUnrealEdOptions(const UUnrealEdOptions&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEdOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEdOptions(UUnrealEdOptions&&); \
	NO_API UUnrealEdOptions(const UUnrealEdOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEdOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEdOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEdOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_71_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UnrealEdOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealEdOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
