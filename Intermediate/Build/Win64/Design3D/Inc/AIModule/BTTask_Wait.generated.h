// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_Wait_generated_h
#error "BTTask_Wait.generated.h already included, missing '#pragma once' in BTTask_Wait.h"
#endif
#define AIMODULE_BTTask_Wait_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_Wait(); \
	friend struct Z_Construct_UClass_UBTTask_Wait_Statics; \
public: \
	DECLARE_CLASS(UBTTask_Wait, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_Wait)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_Wait(); \
	friend struct Z_Construct_UClass_UBTTask_Wait_Statics; \
public: \
	DECLARE_CLASS(UBTTask_Wait, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_Wait)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_Wait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_Wait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_Wait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_Wait(UBTTask_Wait&&); \
	NO_API UBTTask_Wait(const UBTTask_Wait&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_Wait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_Wait(UBTTask_Wait&&); \
	NO_API UBTTask_Wait(const UBTTask_Wait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_Wait); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_Wait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_Wait)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_19_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_Wait."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_Wait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
