// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUMINRUNTIMESETTINGS_LuminRuntimeSettings_generated_h
#error "LuminRuntimeSettings.generated.h already included, missing '#pragma once' in LuminRuntimeSettings.h"
#endif
#define LUMINRUNTIMESETTINGS_LuminRuntimeSettings_generated_h

#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_RPC_WRAPPERS
#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuminRuntimeSettings(); \
	friend struct Z_Construct_UClass_ULuminRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(ULuminRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LuminRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(ULuminRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_INCLASS \
private: \
	static void StaticRegisterNativesULuminRuntimeSettings(); \
	friend struct Z_Construct_UClass_ULuminRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(ULuminRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LuminRuntimeSettings"), NO_API) \
	DECLARE_SERIALIZER(ULuminRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminRuntimeSettings(ULuminRuntimeSettings&&); \
	NO_API ULuminRuntimeSettings(const ULuminRuntimeSettings&); \
public:


#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuminRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuminRuntimeSettings(ULuminRuntimeSettings&&); \
	NO_API ULuminRuntimeSettings(const ULuminRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuminRuntimeSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuminRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuminRuntimeSettings)


#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_66_PROLOG
#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_RPC_WRAPPERS \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_INCLASS \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h_70_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LUMINRUNTIMESETTINGS_API UClass* StaticClass<class ULuminRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Lumin_LuminRuntimeSettings_Classes_LuminRuntimeSettings_h


#define FOREACH_ENUM_ELUMINPRIVILEGE(op) \
	op(ELuminPrivilege::Invalid) \
	op(ELuminPrivilege::AudioRecognizer) \
	op(ELuminPrivilege::BatteryInfo) \
	op(ELuminPrivilege::CameraCapture) \
	op(ELuminPrivilege::WorldReconstruction) \
	op(ELuminPrivilege::InAppPurchase) \
	op(ELuminPrivilege::AudioCaptureMic) \
	op(ELuminPrivilege::DrmCertificates) \
	op(ELuminPrivilege::Occlusion) \
	op(ELuminPrivilege::LowLatencyLightwear) \
	op(ELuminPrivilege::Internet) \
	op(ELuminPrivilege::IdentityRead) \
	op(ELuminPrivilege::BackgroundDownload) \
	op(ELuminPrivilege::BackgroundUpload) \
	op(ELuminPrivilege::MediaDrm) \
	op(ELuminPrivilege::Media) \
	op(ELuminPrivilege::MediaMetadata) \
	op(ELuminPrivilege::PowerInfo) \
	op(ELuminPrivilege::LocalAreaNetwork) \
	op(ELuminPrivilege::VoiceInput) \
	op(ELuminPrivilege::Documents) \
	op(ELuminPrivilege::ConnectBackgroundMusicService) \
	op(ELuminPrivilege::RegisterBackgroundMusicService) \
	op(ELuminPrivilege::PwFoundObjRead) \
	op(ELuminPrivilege::NormalNotificationsUsage) \
	op(ELuminPrivilege::MusicService) \
	op(ELuminPrivilege::ControllerPose) \
	op(ELuminPrivilege::ScreensProvider) \
	op(ELuminPrivilege::GesturesSubscribe) \
	op(ELuminPrivilege::GesturesConfig) 

enum class ELuminPrivilege : uint8;
template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminPrivilege>();

#define FOREACH_ENUM_ELUMINFRAMETIMINGHINT(op) \
	op(ELuminFrameTimingHint::Unspecified) \
	op(ELuminFrameTimingHint::Maximum) \
	op(ELuminFrameTimingHint::FPS_60) \
	op(ELuminFrameTimingHint::FPS_120) 

enum class ELuminFrameTimingHint : uint8;
template<> LUMINRUNTIMESETTINGS_API UEnum* StaticEnum<ELuminFrameTimingHint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
