// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationInvokerComponent_generated_h
#error "NavigationInvokerComponent.generated.h already included, missing '#pragma once' in NavigationInvokerComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavigationInvokerComponent_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationInvokerComponent(); \
	friend struct Z_Construct_UClass_UNavigationInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationInvokerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationInvokerComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationInvokerComponent(); \
	friend struct Z_Construct_UClass_UNavigationInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationInvokerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationInvokerComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationInvokerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationInvokerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationInvokerComponent(UNavigationInvokerComponent&&); \
	NO_API UNavigationInvokerComponent(const UNavigationInvokerComponent&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationInvokerComponent(UNavigationInvokerComponent&&); \
	NO_API UNavigationInvokerComponent(const UNavigationInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationInvokerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationInvokerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationInvokerComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileGenerationRadius() { return STRUCT_OFFSET(UNavigationInvokerComponent, TileGenerationRadius); } \
	FORCEINLINE static uint32 __PPO__TileRemovalRadius() { return STRUCT_OFFSET(UNavigationInvokerComponent, TileRemovalRadius); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_12_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationInvokerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
