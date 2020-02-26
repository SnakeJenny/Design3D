// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTaskNode_generated_h
#error "BTTaskNode.generated.h already included, missing '#pragma once' in BTTaskNode.h"
#endif
#define AIMODULE_BTTaskNode_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTaskNode(); \
	friend struct Z_Construct_UClass_UBTTaskNode_Statics; \
public: \
	DECLARE_CLASS(UBTTaskNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUBTTaskNode(); \
	friend struct Z_Construct_UClass_UBTTaskNode_Statics; \
public: \
	DECLARE_CLASS(UBTTaskNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskNode(UBTTaskNode&&); \
	NO_API UBTTaskNode(const UBTTaskNode&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskNode(UBTTaskNode&&); \
	NO_API UBTTaskNode(const UBTTaskNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_27_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTaskNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTaskNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
