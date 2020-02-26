// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDRUNTIMESETTINGS_AndroidRuntimeSettings_generated_h
#error "AndroidRuntimeSettings.generated.h already included, missing '#pragma once' in AndroidRuntimeSettings.h"
#endif
#define ANDROIDRUNTIMESETTINGS_AndroidRuntimeSettings_generated_h

#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics; \
	ANDROIDRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<struct FGooglePlayLeaderboardMapping>();

#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics; \
	ANDROIDRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<struct FGooglePlayAchievementMapping>();

#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_RPC_WRAPPERS
#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidRuntimeSettings(); \
	friend struct Z_Construct_UClass_UAndroidRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UAndroidRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(UAndroidRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidRuntimeSettings(); \
	friend struct Z_Construct_UClass_UAndroidRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UAndroidRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(UAndroidRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidRuntimeSettings(UAndroidRuntimeSettings&&); \
	NO_API UAndroidRuntimeSettings(const UAndroidRuntimeSettings&); \
public:


#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidRuntimeSettings(UAndroidRuntimeSettings&&); \
	NO_API UAndroidRuntimeSettings(const UAndroidRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidRuntimeSettings)


#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_177_PROLOG
#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_RPC_WRAPPERS \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_INCLASS \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AndroidRuntimeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDRUNTIMESETTINGS_API UClass* StaticClass<class UAndroidRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h


#define FOREACH_ENUM_EANDROIDGRAPHICSDEBUGGER(op) \
	op(EAndroidGraphicsDebugger::None) \
	op(EAndroidGraphicsDebugger::Mali) \
	op(EAndroidGraphicsDebugger::Adreno) 
#define FOREACH_ENUM_EGOOGLEVRCAPS(op) \
	op(EGoogleVRCaps::Cardboard) \
	op(EGoogleVRCaps::Daydream33) \
	op(EGoogleVRCaps::Daydream63) \
	op(EGoogleVRCaps::Daydream66) 
#define FOREACH_ENUM_EGOOGLEVRMODE(op) \
	op(EGoogleVRMode::Cardboard) \
	op(EGoogleVRMode::Daydream) \
	op(EGoogleVRMode::DaydreamAndCardboard) 
#define FOREACH_ENUM_EANDROIDAUDIO(op) \
	op(EAndroidAudio::Default) \
	op(EAndroidAudio::OGG) \
	op(EAndroidAudio::ADPCM) 
#define FOREACH_ENUM_EANDROIDINSTALLLOCATION(op) \
	op(EAndroidInstallLocation::InternalOnly) \
	op(EAndroidInstallLocation::PreferExternal) \
	op(EAndroidInstallLocation::Auto) 
#define FOREACH_ENUM_EANDROIDDEPTHBUFFERPREFERENCE(op) \
	op(EAndroidDepthBufferPreference::Default) \
	op(EAndroidDepthBufferPreference::Bits16) \
	op(EAndroidDepthBufferPreference::Bits24) \
	op(EAndroidDepthBufferPreference::Bits32) 
#define FOREACH_ENUM_EANDROIDSCREENORIENTATION(op) \
	op(EAndroidScreenOrientation::Portrait) \
	op(EAndroidScreenOrientation::ReversePortrait) \
	op(EAndroidScreenOrientation::SensorPortrait) \
	op(EAndroidScreenOrientation::Landscape) \
	op(EAndroidScreenOrientation::ReverseLandscape) \
	op(EAndroidScreenOrientation::SensorLandscape) \
	op(EAndroidScreenOrientation::Sensor) \
	op(EAndroidScreenOrientation::FullSensor) 
#define FOREACH_ENUM_EANDROIDANTVERBOSITY(op) \
	op(EAndroidAntVerbosity::Quiet) \
	op(EAndroidAntVerbosity::Normal) \
	op(EAndroidAntVerbosity::Verbose) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
