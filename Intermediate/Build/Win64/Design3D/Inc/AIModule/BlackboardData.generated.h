// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BlackboardData_generated_h
#error "BlackboardData.generated.h already included, missing '#pragma once' in BlackboardData.h"
#endif
#define AIMODULE_BlackboardData_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBlackboardEntry>();

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardData(); \
	friend struct Z_Construct_UClass_UBlackboardData_Statics; \
public: \
	DECLARE_CLASS(UBlackboardData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardData)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardData(); \
	friend struct Z_Construct_UClass_UBlackboardData_Statics; \
public: \
	DECLARE_CLASS(UBlackboardData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardData)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardData(UBlackboardData&&); \
	NO_API UBlackboardData(const UBlackboardData&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardData(UBlackboardData&&); \
	NO_API UBlackboardData(const UBlackboardData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardData)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_41_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlackboardData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
