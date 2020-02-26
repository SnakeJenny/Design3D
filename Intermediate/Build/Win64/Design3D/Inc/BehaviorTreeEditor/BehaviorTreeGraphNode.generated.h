// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h
#error "BehaviorTreeGraphNode.generated.h already included, missing '#pragma once' in BehaviorTreeGraphNode.h"
#endif
#define BEHAVIORTREEEDITOR_BehaviorTreeGraphNode_generated_h

#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode(); \
	friend struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTreeGraphNode(); \
	friend struct Z_Construct_UClass_UBehaviorTreeGraphNode_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTreeGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviorTreeEditor"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTreeGraphNode)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeGraphNode(UBehaviorTreeGraphNode&&); \
	NO_API UBehaviorTreeGraphNode(const UBehaviorTreeGraphNode&); \
public:


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTreeGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTreeGraphNode(UBehaviorTreeGraphNode&&); \
	NO_API UBehaviorTreeGraphNode(const UBehaviorTreeGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTreeGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTreeGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTreeGraphNode)


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_13_PROLOG
#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_INCLASS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTreeGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<class UBehaviorTreeGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
