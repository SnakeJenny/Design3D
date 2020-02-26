// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_LevelEditorPlaySettings_generated_h
#error "LevelEditorPlaySettings.generated.h already included, missing '#pragma once' in LevelEditorPlaySettings.h"
#endif
#define UNREALED_LevelEditorPlaySettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayScreenResolution_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPlayScreenResolution>();

#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorPlaySettings(); \
	friend struct Z_Construct_UClass_ULevelEditorPlaySettings_Statics; \
public: \
	DECLARE_CLASS(ULevelEditorPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(ULevelEditorPlaySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorPlaySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorPlaySettings(ULevelEditorPlaySettings&&); \
	NO_API ULevelEditorPlaySettings(const ULevelEditorPlaySettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorPlaySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelEditorPlaySettings(ULevelEditorPlaySettings&&); \
	NO_API ULevelEditorPlaySettings(const ULevelEditorPlaySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorPlaySettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorPlaySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorPlaySettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayNetMode() { return STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNetMode); } \
	FORCEINLINE static uint32 __PPO__RunUnderOneProcess() { return STRUCT_OFFSET(ULevelEditorPlaySettings, RunUnderOneProcess); } \
	FORCEINLINE static uint32 __PPO__PlayNetDedicated() { return STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNetDedicated); } \
	FORCEINLINE static uint32 __PPO__PlayNumberOfClients() { return STRUCT_OFFSET(ULevelEditorPlaySettings, PlayNumberOfClients); } \
	FORCEINLINE static uint32 __PPO__ServerPort() { return STRUCT_OFFSET(ULevelEditorPlaySettings, ServerPort); } \
	FORCEINLINE static uint32 __PPO__ClientWindowWidth() { return STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowWidth); } \
	FORCEINLINE static uint32 __PPO__AutoConnectToServer() { return STRUCT_OFFSET(ULevelEditorPlaySettings, AutoConnectToServer); } \
	FORCEINLINE static uint32 __PPO__RouteGamepadToSecondWindow() { return STRUCT_OFFSET(ULevelEditorPlaySettings, RouteGamepadToSecondWindow); } \
	FORCEINLINE static uint32 __PPO__CreateAudioDeviceForEveryPlayer() { return STRUCT_OFFSET(ULevelEditorPlaySettings, CreateAudioDeviceForEveryPlayer); } \
	FORCEINLINE static uint32 __PPO__ClientWindowHeight() { return STRUCT_OFFSET(ULevelEditorPlaySettings, ClientWindowHeight); } \
	FORCEINLINE static uint32 __PPO__AdditionalServerGameOptions() { return STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalServerGameOptions); } \
	FORCEINLINE static uint32 __PPO__AdditionalLaunchOptions() { return STRUCT_OFFSET(ULevelEditorPlaySettings, AdditionalLaunchOptions); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_165_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h_169_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelEditorPlaySettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class ULevelEditorPlaySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_LevelEditorPlaySettings_h


#define FOREACH_ENUM_EPLAYONLAUNCHCONFIGURATION(op) \
	op(LaunchConfig_Default) \
	op(LaunchConfig_Debug) \
	op(LaunchConfig_Development) \
	op(LaunchConfig_Test) \
	op(LaunchConfig_Shipping) 
#define FOREACH_ENUM_EPLAYONBUILDMODE(op) \
	op(PlayOnBuild_Always) \
	op(PlayOnBuild_Never) \
	op(PlayOnBuild_Default) \
	op(PlayOnBuild_IfEditorBuiltLocally) 
#define FOREACH_ENUM_EPLAYNETMODE(op) \
	op(PIE_Standalone) \
	op(PIE_ListenServer) \
	op(PIE_Client) 
#define FOREACH_ENUM_EPLAYMODETYPE(op) \
	op(PlayMode_InViewPort) \
	op(PlayMode_InEditorFloating) \
	op(PlayMode_InMobilePreview) \
	op(PlayMode_InTargetedMobilePreview) \
	op(PlayMode_InVulkanPreview) \
	op(PlayMode_InNewProcess) \
	op(PlayMode_InVR) \
	op(PlayMode_Simulate) \
	op(PlayMode_Count) 
#define FOREACH_ENUM_EPLAYMODELOCATIONS(op) \
	op(PlayLocation_CurrentCameraLocation) \
	op(PlayLocation_DefaultPlayerStart) 
#define FOREACH_ENUM_ELAUNCHMODETYPE(op) \
	op(LaunchMode_OnDevice) 
#define FOREACH_ENUM_ELABELANCHORMODE(op) \
	op(LabelAnchorMode_TopLeft) \
	op(LabelAnchorMode_TopCenter) \
	op(LabelAnchorMode_TopRight) \
	op(LabelAnchorMode_CenterLeft) \
	op(LabelAnchorMode_Centered) \
	op(LabelAnchorMode_CenterRight) \
	op(LabelAnchorMode_BottomLeft) \
	op(LabelAnchorMode_BottomCenter) \
	op(LabelAnchorMode_BottomRight) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
