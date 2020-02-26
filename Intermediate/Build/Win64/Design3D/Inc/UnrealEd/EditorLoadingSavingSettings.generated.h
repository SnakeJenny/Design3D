// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorLoadingSavingSettings_generated_h
#error "EditorLoadingSavingSettings.generated.h already included, missing '#pragma once' in EditorLoadingSavingSettings.h"
#endif
#define UNREALED_EditorLoadingSavingSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoReimportDirectoryConfig_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAutoReimportDirectoryConfig>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutoReimportWildcard_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAutoReimportWildcard>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUEditorLoadingSavingSettings(); \
	friend struct Z_Construct_UClass_UEditorLoadingSavingSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorLoadingSavingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorLoadingSavingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingSavingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLoadingSavingSettings(UEditorLoadingSavingSettings&&); \
	NO_API UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingSavingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorLoadingSavingSettings(UEditorLoadingSavingSettings&&); \
	NO_API UEditorLoadingSavingSettings(const UEditorLoadingSavingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingSavingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingSavingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingSavingSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bEnableSourceControlCompatabilityCheck_DEPRECATED() { return STRUCT_OFFSET(UEditorLoadingSavingSettings, bEnableSourceControlCompatabilityCheck_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bAutoReimportTextures_DEPRECATED() { return STRUCT_OFFSET(UEditorLoadingSavingSettings, bAutoReimportTextures_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bAutoReimportCSV_DEPRECATED() { return STRUCT_OFFSET(UEditorLoadingSavingSettings, bAutoReimportCSV_DEPRECATED); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_72_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h_76_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorLoadingSavingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorLoadingSavingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_EditorLoadingSavingSettings_h


#define FOREACH_ENUM_ELOADLEVELATSTARTUP(op) \
	op(ELoadLevelAtStartup::None) \
	op(ELoadLevelAtStartup::ProjectDefault) \
	op(ELoadLevelAtStartup::LastOpened) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
