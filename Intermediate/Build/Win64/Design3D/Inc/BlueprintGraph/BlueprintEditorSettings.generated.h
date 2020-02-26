// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h
#error "BlueprintEditorSettings.generated.h already included, missing '#pragma once' in BlueprintEditorSettings.h"
#endif
#define BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h

#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorSettings(UBlueprintEditorSettings&&); \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorSettings(UBlueprintEditorSettings&&); \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings)


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_19_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h


#define FOREACH_ENUM_ESAVEONCOMPILE(op) \
	op(SoC_Never) \
	op(SoC_SuccessOnly) \
	op(SoC_Always) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
