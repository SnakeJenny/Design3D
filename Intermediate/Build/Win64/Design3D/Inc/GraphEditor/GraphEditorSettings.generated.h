// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPHEDITOR_GraphEditorSettings_generated_h
#error "GraphEditorSettings.generated.h already included, missing '#pragma once' in GraphEditorSettings.h"
#endif
#define GRAPHEDITOR_GraphEditorSettings_generated_h

#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_RPC_WRAPPERS
#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphEditorSettings(); \
	friend struct Z_Construct_UClass_UGraphEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UGraphEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphEditor"), NO_API) \
	DECLARE_SERIALIZER(UGraphEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGraphEditorSettings(); \
	friend struct Z_Construct_UClass_UGraphEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UGraphEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GraphEditor"), NO_API) \
	DECLARE_SERIALIZER(UGraphEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphEditorSettings(UGraphEditorSettings&&); \
	NO_API UGraphEditorSettings(const UGraphEditorSettings&); \
public:


#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphEditorSettings(UGraphEditorSettings&&); \
	NO_API UGraphEditorSettings(const UGraphEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphEditorSettings)


#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_25_PROLOG
#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_RPC_WRAPPERS \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_INCLASS \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GraphEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHEDITOR_API UClass* StaticClass<class UGraphEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_GraphEditor_Public_GraphEditorSettings_h


#define FOREACH_ENUM_EGRAPHPANNINGMOUSEBUTTON(op) \
	op(EGraphPanningMouseButton::Right) \
	op(EGraphPanningMouseButton::Middle) \
	op(EGraphPanningMouseButton::Both) 

enum class EGraphPanningMouseButton : uint8;
template<> GRAPHEDITOR_API UEnum* StaticEnum<EGraphPanningMouseButton>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
