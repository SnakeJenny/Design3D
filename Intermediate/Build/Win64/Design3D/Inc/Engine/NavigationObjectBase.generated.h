// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationObjectBase_generated_h
#error "NavigationObjectBase.generated.h already included, missing '#pragma once' in NavigationObjectBase.h"
#endif
#define ENGINE_NavigationObjectBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationObjectBase(); \
	friend struct Z_Construct_UClass_ANavigationObjectBase_Statics; \
public: \
	DECLARE_CLASS(ANavigationObjectBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ANavigationObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationObjectBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavigationObjectBase(); \
	friend struct Z_Construct_UClass_ANavigationObjectBase_Statics; \
public: \
	DECLARE_CLASS(ANavigationObjectBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ANavigationObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationObjectBase*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavigationObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationObjectBase(ANavigationObjectBase&&); \
	NO_API ANavigationObjectBase(const ANavigationObjectBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavigationObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationObjectBase(ANavigationObjectBase&&); \
	NO_API ANavigationObjectBase(const ANavigationObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationObjectBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationObjectBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ANavigationObjectBase, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__GoodSprite() { return STRUCT_OFFSET(ANavigationObjectBase, GoodSprite); } \
	FORCEINLINE static uint32 __PPO__BadSprite() { return STRUCT_OFFSET(ANavigationObjectBase, BadSprite); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationObjectBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ANavigationObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
