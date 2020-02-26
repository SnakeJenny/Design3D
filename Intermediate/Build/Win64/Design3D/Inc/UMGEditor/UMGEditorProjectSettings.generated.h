// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_UMGEditorProjectSettings_generated_h
#error "UMGEditorProjectSettings.generated.h already included, missing '#pragma once' in UMGEditorProjectSettings.h"
#endif
#define UMGEDITOR_UMGEditorProjectSettings_generated_h

#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDirectoryWidgetCompilerOptions>();

#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FWidgetCompilerOptions>();

#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugResolution_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDebugResolution>();

#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_RPC_WRAPPERS
#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UUMGEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UUMGEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UUMGEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_INCLASS \
private: \
	static void StaticRegisterNativesUUMGEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UUMGEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UUMGEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UUMGEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGEditorProjectSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGEditorProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGEditorProjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGEditorProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGEditorProjectSettings(UUMGEditorProjectSettings&&); \
	NO_API UUMGEditorProjectSettings(const UUMGEditorProjectSettings&); \
public:


#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGEditorProjectSettings(UUMGEditorProjectSettings&&); \
	NO_API UUMGEditorProjectSettings(const UUMGEditorProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGEditorProjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGEditorProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGEditorProjectSettings)


#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultCompilerOptions() { return STRUCT_OFFSET(UUMGEditorProjectSettings, DefaultCompilerOptions); } \
	FORCEINLINE static uint32 __PPO__DirectoryCompilerOptions() { return STRUCT_OFFSET(UUMGEditorProjectSettings, DirectoryCompilerOptions); } \
	FORCEINLINE static uint32 __PPO__Version() { return STRUCT_OFFSET(UUMGEditorProjectSettings, Version); } \
	FORCEINLINE static uint32 __PPO__bCookSlowConstructionWidgetTree_DEPRECATED() { return STRUCT_OFFSET(UUMGEditorProjectSettings, bCookSlowConstructionWidgetTree_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bWidgetSupportsDynamicCreation_DEPRECATED() { return STRUCT_OFFSET(UUMGEditorProjectSettings, bWidgetSupportsDynamicCreation_DEPRECATED); }


#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_133_PROLOG
#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_RPC_WRAPPERS \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_INCLASS \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UUMGEditorProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h


#define FOREACH_ENUM_EPROPERTYBINDINGPERMISSIONLEVEL(op) \
	op(EPropertyBindingPermissionLevel::Allow) \
	op(EPropertyBindingPermissionLevel::Prevent) \
	op(EPropertyBindingPermissionLevel::PreventAndWarn) \
	op(EPropertyBindingPermissionLevel::PreventAndError) 

enum class EPropertyBindingPermissionLevel : uint8;
template<> UMGEDITOR_API UEnum* StaticEnum<EPropertyBindingPermissionLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
