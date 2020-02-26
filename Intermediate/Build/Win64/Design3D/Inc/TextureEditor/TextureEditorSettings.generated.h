// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEXTUREEDITOR_TextureEditorSettings_generated_h
#error "TextureEditorSettings.generated.h already included, missing '#pragma once' in TextureEditorSettings.h"
#endif
#define TEXTUREEDITOR_TextureEditorSettings_generated_h

#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_RPC_WRAPPERS
#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureEditorSettings(); \
	friend struct Z_Construct_UClass_UTextureEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UTextureEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEditorSettings(); \
	friend struct Z_Construct_UClass_UTextureEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UTextureEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureEditorSettings(UTextureEditorSettings&&); \
	NO_API UTextureEditorSettings(const UTextureEditorSettings&); \
public:


#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureEditorSettings(UTextureEditorSettings&&); \
	NO_API UTextureEditorSettings(const UTextureEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEditorSettings)


#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_33_PROLOG
#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_RPC_WRAPPERS \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_INCLASS \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXTUREEDITOR_API UClass* StaticClass<class UTextureEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h


#define FOREACH_ENUM_ETEXTUREEDITORVOLUMEVIEWMODE(op) \
	op(TextureEditorVolumeViewMode_DepthSlices) \
	op(TextureEditorVolumeViewMode_VolumeTrace) 
#define FOREACH_ENUM_ETEXTUREEDITORBACKGROUNDS(op) \
	op(TextureEditorBackground_SolidColor) \
	op(TextureEditorBackground_Checkered) \
	op(TextureEditorBackground_CheckeredFill) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
