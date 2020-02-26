// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_BlackboardBase_generated_h
#error "BTTask_BlackboardBase.generated.h already included, missing '#pragma once' in BTTask_BlackboardBase.h"
#endif
#define AIMODULE_BTTask_BlackboardBase_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlackboardBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_BlackboardBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlackboardBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlackboardBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlackboardBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlackboardBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlackboardBase(UBTTask_BlackboardBase&&); \
	NO_API UBTTask_BlackboardBase(const UBTTask_BlackboardBase&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlackboardBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlackboardBase(UBTTask_BlackboardBase&&); \
	NO_API UBTTask_BlackboardBase(const UBTTask_BlackboardBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlackboardBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlackboardBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlackboardBase)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardKey() { return STRUCT_OFFSET(UBTTask_BlackboardBase, BlackboardKey); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_12_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_BlackboardBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_BlackboardBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlackboardBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
