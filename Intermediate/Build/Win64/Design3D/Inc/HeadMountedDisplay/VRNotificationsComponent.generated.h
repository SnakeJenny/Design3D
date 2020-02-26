// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_VRNotificationsComponent_generated_h
#error "VRNotificationsComponent.generated.h already included, missing '#pragma once' in VRNotificationsComponent.h"
#endif
#define HEADMOUNTEDDISPLAY_VRNotificationsComponent_generated_h

#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_16_DELEGATE \
static inline void FVRNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& VRNotificationsDelegate) \
{ \
	VRNotificationsDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRNotificationsComponent(); \
	friend struct Z_Construct_UClass_UVRNotificationsComponent_Statics; \
public: \
	DECLARE_CLASS(UVRNotificationsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UVRNotificationsComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVRNotificationsComponent(); \
	friend struct Z_Construct_UClass_UVRNotificationsComponent_Statics; \
public: \
	DECLARE_CLASS(UVRNotificationsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeadMountedDisplay"), NO_API) \
	DECLARE_SERIALIZER(UVRNotificationsComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRNotificationsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRNotificationsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRNotificationsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRNotificationsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRNotificationsComponent(UVRNotificationsComponent&&); \
	NO_API UVRNotificationsComponent(const UVRNotificationsComponent&); \
public:


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRNotificationsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRNotificationsComponent(UVRNotificationsComponent&&); \
	NO_API UVRNotificationsComponent(const UVRNotificationsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRNotificationsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRNotificationsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRNotificationsComponent)


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_11_PROLOG
#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_INCLASS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRNotificationsComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<class UVRNotificationsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_VRNotificationsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
