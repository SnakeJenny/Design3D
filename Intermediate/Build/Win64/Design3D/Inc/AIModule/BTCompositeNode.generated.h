// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTCompositeNode_generated_h
#error "BTCompositeNode.generated.h already included, missing '#pragma once' in BTCompositeNode.h"
#endif
#define AIMODULE_BTCompositeNode_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBTCompositeChild>();

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBTDecoratorLogic>();

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTCompositeNode(); \
	friend struct Z_Construct_UClass_UBTCompositeNode_Statics; \
public: \
	DECLARE_CLASS(UBTCompositeNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTCompositeNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUBTCompositeNode(); \
	friend struct Z_Construct_UClass_UBTCompositeNode_Statics; \
public: \
	DECLARE_CLASS(UBTCompositeNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTCompositeNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTCompositeNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTCompositeNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTCompositeNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTCompositeNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTCompositeNode(UBTCompositeNode&&); \
	NO_API UBTCompositeNode(const UBTCompositeNode&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTCompositeNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTCompositeNode(UBTCompositeNode&&); \
	NO_API UBTCompositeNode(const UBTCompositeNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTCompositeNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTCompositeNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTCompositeNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_87_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_90_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTCompositeNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTCompositeNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h


#define FOREACH_ENUM_EBTDECORATORLOGIC(op) \
	op(EBTDecoratorLogic::Invalid) \
	op(EBTDecoratorLogic::Test) \
	op(EBTDecoratorLogic::And) \
	op(EBTDecoratorLogic::Or) \
	op(EBTDecoratorLogic::Not) 
#define FOREACH_ENUM_EBTCHILDINDEX(op) \
	op(EBTChildIndex::FirstNode) \
	op(EBTChildIndex::TaskNode) 

enum class EBTChildIndex : uint8;
template<> AIMODULE_API UEnum* StaticEnum<EBTChildIndex>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
