// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VRModeSettings_generated_h
#error "VRModeSettings.generated.h already included, missing '#pragma once' in VRModeSettings.h"
#endif
#define VREDITOR_VRModeSettings_generated_h

#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_RPC_WRAPPERS
#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRModeSettings(); \
	friend struct Z_Construct_UClass_UVRModeSettings_Statics; \
public: \
	DECLARE_CLASS(UVRModeSettings, UVISettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRModeSettings)


#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUVRModeSettings(); \
	friend struct Z_Construct_UClass_UVRModeSettings_Statics; \
public: \
	DECLARE_CLASS(UVRModeSettings, UVISettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRModeSettings)


#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRModeSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRModeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRModeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRModeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRModeSettings(UVRModeSettings&&); \
	NO_API UVRModeSettings(const UVRModeSettings&); \
public:


#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRModeSettings(UVRModeSettings&&); \
	NO_API UVRModeSettings(const UVRModeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRModeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRModeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRModeSettings)


#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_29_PROLOG
#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_INCLASS \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VRModeSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVRModeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_Public_VRModeSettings_h


#define FOREACH_ENUM_EINTERACTORHAND(op) \
	op(EInteractorHand::Right) \
	op(EInteractorHand::Left) 

enum class EInteractorHand : uint8;
template<> VREDITOR_API UEnum* StaticEnum<EInteractorHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
