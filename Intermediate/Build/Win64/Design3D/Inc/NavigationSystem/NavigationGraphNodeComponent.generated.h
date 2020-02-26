// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h
#error "NavigationGraphNodeComponent.generated.h already included, missing '#pragma once' in NavigationGraphNodeComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationGraphNodeComponent(); \
	friend struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationGraphNodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationGraphNodeComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationGraphNodeComponent(); \
	friend struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationGraphNodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationGraphNodeComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationGraphNodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationGraphNodeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationGraphNodeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(UNavigationGraphNodeComponent&&); \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const UNavigationGraphNodeComponent&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(UNavigationGraphNodeComponent&&); \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const UNavigationGraphNodeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationGraphNodeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationGraphNodeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationGraphNodeComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_11_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationGraphNodeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationGraphNodeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
