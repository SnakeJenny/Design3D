// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfile_generated_h
#error "DeviceProfile.generated.h already included, missing '#pragma once' in DeviceProfile.h"
#endif
#define ENGINE_DeviceProfile_generated_h

#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct Z_Construct_UClass_UDeviceProfile_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct Z_Construct_UClass_UDeviceProfile_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfile(UDeviceProfile&&); \
	NO_API UDeviceProfile(const UDeviceProfile&); \
public:


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceProfile(UDeviceProfile&&); \
	NO_API UDeviceProfile(const UDeviceProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile)


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DeviceProfile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
