// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h
#error "AndroidSDKSettings.generated.h already included, missing '#pragma once' in AndroidSDKSettings.h"
#endif
#define ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h

#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_RPC_WRAPPERS
#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidSDKSettings(); \
	friend struct Z_Construct_UClass_UAndroidSDKSettings_Statics; \
public: \
	DECLARE_CLASS(UAndroidSDKSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidPlatformEditor"), NO_API) \
	DECLARE_SERIALIZER(UAndroidSDKSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidSDKSettings(); \
	friend struct Z_Construct_UClass_UAndroidSDKSettings_Statics; \
public: \
	DECLARE_CLASS(UAndroidSDKSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidPlatformEditor"), NO_API) \
	DECLARE_SERIALIZER(UAndroidSDKSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidSDKSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidSDKSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidSDKSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidSDKSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidSDKSettings(UAndroidSDKSettings&&); \
	NO_API UAndroidSDKSettings(const UAndroidSDKSettings&); \
public:


#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidSDKSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidSDKSettings(UAndroidSDKSettings&&); \
	NO_API UAndroidSDKSettings(const UAndroidSDKSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidSDKSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidSDKSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidSDKSettings)


#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_17_PROLOG
#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_RPC_WRAPPERS \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AndroidSDKSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDPLATFORMEDITOR_API UClass* StaticClass<class UAndroidSDKSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
