// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorViewportSettings_generated_h
#error "LevelEditorViewportSettings.generated.h already included, missing '#pragma once' in LevelEditorViewportSettings.h"
#endif
#define UNREALED_LevelEditorViewportSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSnapToSurfaceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSnapToSurfaceSettings>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettingsKeyValuePair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorViewportInstanceSettingsKeyValuePair>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelEditorViewportInstanceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FLevelEditorViewportInstanceSettings>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorViewportSettings(); \
	friend struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorViewportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorViewportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorViewportSettings(); \
	friend struct Z_Construct_UClass_ULevelEditorViewportSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorViewportSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorViewportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorViewportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorViewportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorViewportSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorViewportSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorViewportSettings(ULevelEditorViewportSettings&&); \
	NO_API ULevelEditorViewportSettings(const ULevelEditorViewportSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorViewportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorViewportSettings(ULevelEditorViewportSettings&&); \
	NO_API ULevelEditorViewportSettings(const ULevelEditorViewportSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorViewportSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorViewportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorViewportSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PerInstanceSettings() { return STRUCT_OFFSET(ULevelEditorViewportSettings, PerInstanceSettings); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_211_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h_215_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorViewportSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelEditorViewportSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorViewportSettings_h


#define FOREACH_ENUM_ESCROLLGESTUREDIRECTION(op) \
	op(EScrollGestureDirection::UseSystemSetting) \
	op(EScrollGestureDirection::Standard) \
	op(EScrollGestureDirection::Natural) 

enum class EScrollGestureDirection : uint8;
template<> UNREALED_API UEnum* StaticEnum<EScrollGestureDirection>();

#define FOREACH_ENUM_EMEASURINGTOOLUNITS(op) \
	op(MeasureUnits_Centimeters) \
	op(MeasureUnits_Meters) \
	op(MeasureUnits_Kilometers) 
#define FOREACH_ENUM_ELANDSCAPEFOLIAGEEDITORCONTROLTYPE(op) \
	op(ELandscapeFoliageEditorControlType::IgnoreCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireCtrl) \
	op(ELandscapeFoliageEditorControlType::RequireNoCtrl) 

enum class ELandscapeFoliageEditorControlType : uint8;
template<> UNREALED_API UEnum* StaticEnum<ELandscapeFoliageEditorControlType>();

#define FOREACH_ENUM_EWASDTYPE(op) \
	op(WASD_Always) \
	op(WASD_RMBOnly) \
	op(WASD_Never) 
#define FOREACH_ENUM_EROTATIONGRIDMODE(op) \
	op(GridMode_DivisionsOf360) \
	op(GridMode_Common) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
