// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialEditorOptions_generated_h
#error "MaterialEditorOptions.generated.h already included, missing '#pragma once' in MaterialEditorOptions.h"
#endif
#define UNREALED_MaterialEditorOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorOptions(); \
	friend struct Z_Construct_UClass_UMaterialEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditorOptions(); \
	friend struct Z_Construct_UClass_UMaterialEditorOptions_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorOptions(UMaterialEditorOptions&&); \
	NO_API UMaterialEditorOptions(const UMaterialEditorOptions&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorOptions(UMaterialEditorOptions&&); \
	NO_API UMaterialEditorOptions(const UMaterialEditorOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_16_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialEditorOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialEditorOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
