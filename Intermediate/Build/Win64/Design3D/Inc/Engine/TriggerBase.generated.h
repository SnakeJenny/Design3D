// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerBase_generated_h
#error "TriggerBase.generated.h already included, missing '#pragma once' in TriggerBase.h"
#endif
#define ENGINE_TriggerBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend struct Z_Construct_UClass_ATriggerBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend struct Z_Construct_UClass_ATriggerBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ATriggerBase(ATriggerBase&&); \
	ENGINE_API ATriggerBase(const ATriggerBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ATriggerBase(ATriggerBase&&); \
	ENGINE_API ATriggerBase(const ATriggerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ATriggerBase, CollisionComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
