// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_CrowdManagerBase_generated_h
#error "CrowdManagerBase.generated.h already included, missing '#pragma once' in CrowdManagerBase.h"
#endif
#define NAVIGATIONSYSTEM_CrowdManagerBase_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManagerBase(); \
	friend struct Z_Construct_UClass_UCrowdManagerBase_Statics; \
public: \
	DECLARE_CLASS(UCrowdManagerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManagerBase)


#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdManagerBase(); \
	friend struct Z_Construct_UClass_UCrowdManagerBase_Statics; \
public: \
	DECLARE_CLASS(UCrowdManagerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManagerBase)


#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManagerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManagerBase(UCrowdManagerBase&&); \
	NO_API UCrowdManagerBase(const UCrowdManagerBase&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManagerBase(UCrowdManagerBase&&); \
	NO_API UCrowdManagerBase(const UCrowdManagerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManagerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManagerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManagerBase)


#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_10_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UCrowdManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_CrowdManagerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
