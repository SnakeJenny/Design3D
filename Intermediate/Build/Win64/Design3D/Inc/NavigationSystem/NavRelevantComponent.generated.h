// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavRelevantComponent_generated_h
#error "NavRelevantComponent.generated.h already included, missing '#pragma once' in NavRelevantComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavRelevantComponent_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNavigationRelevancy) \
	{ \
		P_GET_UBOOL(Z_Param_bRelevant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNavigationRelevancy(Z_Param_bRelevant); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNavigationRelevancy) \
	{ \
		P_GET_UBOOL(Z_Param_bRelevant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNavigationRelevancy(Z_Param_bRelevant); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct Z_Construct_UClass_UNavRelevantComponent_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct Z_Construct_UClass_UNavRelevantComponent_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavRelevantComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavRelevantComponent(UNavRelevantComponent&&); \
	NO_API UNavRelevantComponent(const UNavRelevantComponent&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavRelevantComponent(UNavRelevantComponent&&); \
	NO_API UNavRelevantComponent(const UNavRelevantComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavRelevantComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent)


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedNavParent() { return STRUCT_OFFSET(UNavRelevantComponent, CachedNavParent); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_11_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavRelevantComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavRelevantComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
