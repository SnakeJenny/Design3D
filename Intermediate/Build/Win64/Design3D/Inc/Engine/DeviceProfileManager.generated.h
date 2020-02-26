// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfileManager_generated_h
#error "DeviceProfileManager.generated.h already included, missing '#pragma once' in DeviceProfileManager.h"
#endif
#define ENGINE_DeviceProfileManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceProfileManager(); \
	friend struct Z_Construct_UClass_UDeviceProfileManager_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfileManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfileManager) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfileManager(); \
	friend struct Z_Construct_UClass_UDeviceProfileManager_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfileManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfileManager) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfileManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfileManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfileManager(UDeviceProfileManager&&); \
	NO_API UDeviceProfileManager(const UDeviceProfileManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfileManager(UDeviceProfileManager&&); \
	NO_API UDeviceProfileManager(const UDeviceProfileManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfileManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfileManager)


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfileManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
