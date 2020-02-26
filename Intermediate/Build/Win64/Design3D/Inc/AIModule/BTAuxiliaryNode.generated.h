// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTAuxiliaryNode_generated_h
#error "BTAuxiliaryNode.generated.h already included, missing '#pragma once' in BTAuxiliaryNode.h"
#endif
#define AIMODULE_BTAuxiliaryNode_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTAuxiliaryNode(); \
	friend struct Z_Construct_UClass_UBTAuxiliaryNode_Statics; \
public: \
	DECLARE_CLASS(UBTAuxiliaryNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTAuxiliaryNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBTAuxiliaryNode(); \
	friend struct Z_Construct_UClass_UBTAuxiliaryNode_Statics; \
public: \
	DECLARE_CLASS(UBTAuxiliaryNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTAuxiliaryNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTAuxiliaryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTAuxiliaryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTAuxiliaryNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTAuxiliaryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTAuxiliaryNode(UBTAuxiliaryNode&&); \
	NO_API UBTAuxiliaryNode(const UBTAuxiliaryNode&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTAuxiliaryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTAuxiliaryNode(UBTAuxiliaryNode&&); \
	NO_API UBTAuxiliaryNode(const UBTAuxiliaryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTAuxiliaryNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTAuxiliaryNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTAuxiliaryNode)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_30_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTAuxiliaryNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTAuxiliaryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTAuxiliaryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
