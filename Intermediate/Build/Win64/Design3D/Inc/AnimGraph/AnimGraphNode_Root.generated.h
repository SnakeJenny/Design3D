// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Root_generated_h
#error "AnimGraphNode_Root.generated.h already included, missing '#pragma once' in AnimGraphNode_Root.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Root_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Root(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Root_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Root, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Root)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Root(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Root_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Root, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Root)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Root); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Root); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_Root(UAnimGraphNode_Root&&); \
	ANIMGRAPH_API UAnimGraphNode_Root(const UAnimGraphNode_Root&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Root(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_Root(UAnimGraphNode_Root&&); \
	ANIMGRAPH_API UAnimGraphNode_Root(const UAnimGraphNode_Root&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Root); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Root); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Root)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_13_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_Root."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Root>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Root_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
