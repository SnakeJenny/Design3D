// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorPerformanceSettings_generated_h
#error "EditorPerformanceSettings.generated.h already included, missing '#pragma once' in EditorPerformanceSettings.h"
#endif
#define UNREALED_EditorPerformanceSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorPerformanceSettings(); \
	friend struct Z_Construct_UClass_UEditorPerformanceSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorPerformanceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorPerformanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEditorPerformanceSettings(); \
	friend struct Z_Construct_UClass_UEditorPerformanceSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorPerformanceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorPerformanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerformanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerformanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerformanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerformanceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorPerformanceSettings(UEditorPerformanceSettings&&); \
	UNREALED_API UEditorPerformanceSettings(const UEditorPerformanceSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerformanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorPerformanceSettings(UEditorPerformanceSettings&&); \
	UNREALED_API UEditorPerformanceSettings(const UEditorPerformanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerformanceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerformanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerformanceSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_12_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorPerformanceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorPerformanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
