// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InGameAdManager_generated_h
#error "InGameAdManager.generated.h already included, missing '#pragma once' in InGameAdManager.h"
#endif
#define ENGINE_InGameAdManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_35_DELEGATE \
static inline void FOnUserClosedAdvertisement_DelegateWrapper(const FScriptDelegate& OnUserClosedAdvertisement) \
{ \
	OnUserClosedAdvertisement.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_29_DELEGATE \
static inline void FOnUserClickedBanner_DelegateWrapper(const FScriptDelegate& OnUserClickedBanner) \
{ \
	OnUserClickedBanner.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameAdManager(); \
	friend struct Z_Construct_UClass_UInGameAdManager_Statics; \
public: \
	DECLARE_CLASS(UInGameAdManager, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInGameAdManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUInGameAdManager(); \
	friend struct Z_Construct_UClass_UInGameAdManager_Statics; \
public: \
	DECLARE_CLASS(UInGameAdManager, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInGameAdManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameAdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameAdManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameAdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameAdManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameAdManager(UInGameAdManager&&); \
	NO_API UInGameAdManager(const UInGameAdManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameAdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameAdManager(UInGameAdManager&&); \
	NO_API UInGameAdManager(const UInGameAdManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameAdManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameAdManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameAdManager)


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_38_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InGameAdManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInGameAdManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_InGameAdManager_h


#define FOREACH_ENUM_EADMANAGERDELEGATE(op) \
	op(AMD_ClickedBanner) \
	op(AMD_UserClosedAd) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
