// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateTransitionNode_generated_h
#error "AnimStateTransitionNode.generated.h already included, missing '#pragma once' in AnimStateTransitionNode.h"
#endif
#define ANIMGRAPH_AnimStateTransitionNode_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateTransitionNode, ANIMGRAPH_API)


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateTransitionNode(); \
	friend struct Z_Construct_UClass_UAnimStateTransitionNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateTransitionNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateTransitionNode) \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateTransitionNode(); \
	friend struct Z_Construct_UClass_UAnimStateTransitionNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateTransitionNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateTransitionNode) \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateTransitionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateTransitionNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateTransitionNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateTransitionNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateTransitionNode(UAnimStateTransitionNode&&); \
	ANIMGRAPH_API UAnimStateTransitionNode(const UAnimStateTransitionNode&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateTransitionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateTransitionNode(UAnimStateTransitionNode&&); \
	ANIMGRAPH_API UAnimStateTransitionNode(const UAnimStateTransitionNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateTransitionNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateTransitionNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateTransitionNode)


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_19_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateTransitionNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateTransitionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimStateTransitionNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
