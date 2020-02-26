// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BlackboardKeyType_generated_h
#error "BlackboardKeyType.generated.h already included, missing '#pragma once' in BlackboardKeyType.h"
#endif
#define AIMODULE_BlackboardKeyType_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType(); \
	friend struct Z_Construct_UClass_UBlackboardKeyType_Statics; \
public: \
	DECLARE_CLASS(UBlackboardKeyType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardKeyType)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardKeyType(); \
	friend struct Z_Construct_UClass_UBlackboardKeyType_Statics; \
public: \
	DECLARE_CLASS(UBlackboardKeyType, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardKeyType)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardKeyType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardKeyType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardKeyType(UBlackboardKeyType&&); \
	NO_API UBlackboardKeyType(const UBlackboardKeyType&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardKeyType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardKeyType(UBlackboardKeyType&&); \
	NO_API UBlackboardKeyType(const UBlackboardKeyType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardKeyType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardKeyType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardKeyType)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_77_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlackboardKeyType."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardKeyType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h


#define FOREACH_ENUM_ETEXTKEYOPERATION(op) \
	op(ETextKeyOperation::Equal) \
	op(ETextKeyOperation::NotEqual) \
	op(ETextKeyOperation::Contain) \
	op(ETextKeyOperation::NotContain) 
#define FOREACH_ENUM_EARITHMETICKEYOPERATION(op) \
	op(EArithmeticKeyOperation::Equal) \
	op(EArithmeticKeyOperation::NotEqual) \
	op(EArithmeticKeyOperation::Less) \
	op(EArithmeticKeyOperation::LessOrEqual) \
	op(EArithmeticKeyOperation::Greater) \
	op(EArithmeticKeyOperation::GreaterOrEqual) 
#define FOREACH_ENUM_EBASICKEYOPERATION(op) \
	op(EBasicKeyOperation::Set) \
	op(EBasicKeyOperation::NotSet) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
