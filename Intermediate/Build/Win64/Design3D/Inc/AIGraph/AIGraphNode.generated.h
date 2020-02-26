// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIGRAPH_AIGraphNode_generated_h
#error "AIGraphNode.generated.h already included, missing '#pragma once' in AIGraphNode.h"
#endif
#define AIGRAPH_AIGraphNode_generated_h

#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIGraphNode(); \
	friend struct Z_Construct_UClass_UAIGraphNode_Statics; \
public: \
	DECLARE_CLASS(UAIGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraphNode)


#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraphNode(); \
	friend struct Z_Construct_UClass_UAIGraphNode_Statics; \
public: \
	DECLARE_CLASS(UAIGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraphNode)


#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraphNode(UAIGraphNode&&); \
	NO_API UAIGraphNode(const UAIGraphNode&); \
public:


#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraphNode(UAIGraphNode&&); \
	NO_API UAIGraphNode(const UAIGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraphNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraphNode)


#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_17_PROLOG
#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_INCLASS \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIGRAPH_API UClass* StaticClass<class UAIGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
