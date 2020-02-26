// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HTML5PLATFORMEDITOR_HTML5TargetSettings_generated_h
#error "HTML5TargetSettings.generated.h already included, missing '#pragma once' in HTML5TargetSettings.h"
#endif
#define HTML5PLATFORMEDITOR_HTML5TargetSettings_generated_h

#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_RPC_WRAPPERS
#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTML5TargetSettings(); \
	friend struct Z_Construct_UClass_UHTML5TargetSettings_Statics; \
public: \
	DECLARE_CLASS(UHTML5TargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HTML5PlatformEditor"), NO_API) \
	DECLARE_SERIALIZER(UHTML5TargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUHTML5TargetSettings(); \
	friend struct Z_Construct_UClass_UHTML5TargetSettings_Statics; \
public: \
	DECLARE_CLASS(UHTML5TargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HTML5PlatformEditor"), NO_API) \
	DECLARE_SERIALIZER(UHTML5TargetSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTML5TargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTML5TargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTML5TargetSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTML5TargetSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTML5TargetSettings(UHTML5TargetSettings&&); \
	NO_API UHTML5TargetSettings(const UHTML5TargetSettings&); \
public:


#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTML5TargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTML5TargetSettings(UHTML5TargetSettings&&); \
	NO_API UHTML5TargetSettings(const UHTML5TargetSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTML5TargetSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTML5TargetSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTML5TargetSettings)


#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_33_PROLOG
#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_RPC_WRAPPERS \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_INCLASS \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HTML5TargetSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTML5PLATFORMEDITOR_API UClass* StaticClass<class UHTML5TargetSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_HTML5_HTML5PlatformEditor_Classes_HTML5TargetSettings_h


#define FOREACH_ENUM_ECANVASSCALINGMODE(op) \
	op(ECanvasScalingMode::Stretch) \
	op(ECanvasScalingMode::Aspect) \
	op(ECanvasScalingMode::Fixed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
