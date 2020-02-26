// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITOR_CurveEditorSettings_generated_h
#error "CurveEditorSettings.generated.h already included, missing '#pragma once' in CurveEditorSettings.h"
#endif
#define CURVEEDITOR_CurveEditorSettings_generated_h

#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_RPC_WRAPPERS
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorSettings(); \
	friend struct Z_Construct_UClass_UCurveEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCurveEditorSettings(); \
	friend struct Z_Construct_UClass_UCurveEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorSettings(UCurveEditorSettings&&); \
	NO_API UCurveEditorSettings(const UCurveEditorSettings&); \
public:


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorSettings(UCurveEditorSettings&&); \
	NO_API UCurveEditorSettings(const UCurveEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorSettings)


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAutoFrameCurveEditor() { return STRUCT_OFFSET(UCurveEditorSettings, bAutoFrameCurveEditor); } \
	FORCEINLINE static uint32 __PPO__bShowCurveEditorCurveToolTips() { return STRUCT_OFFSET(UCurveEditorSettings, bShowCurveEditorCurveToolTips); } \
	FORCEINLINE static uint32 __PPO__TangentVisibility() { return STRUCT_OFFSET(UCurveEditorSettings, TangentVisibility); }


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_26_PROLOG
#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_RPC_WRAPPERS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_INCLASS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEEDITOR_API UClass* StaticClass<class UCurveEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h


#define FOREACH_ENUM_ECURVEEDITORTANGENTVISIBILITY(op) \
	op(ECurveEditorTangentVisibility::AllTangents) \
	op(ECurveEditorTangentVisibility::SelectedKeys) \
	op(ECurveEditorTangentVisibility::NoTangents) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
