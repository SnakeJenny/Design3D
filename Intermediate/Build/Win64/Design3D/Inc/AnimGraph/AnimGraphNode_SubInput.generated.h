// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_SubInput_generated_h
#error "AnimGraphNode_SubInput.generated.h already included, missing '#pragma once' in AnimGraphNode_SubInput.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SubInput_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SubInput(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_SubInput_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_SubInput, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_SubInput)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SubInput(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_SubInput_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_SubInput, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_SubInput)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SubInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SubInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SubInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SubInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_SubInput(UAnimGraphNode_SubInput&&); \
	ANIMGRAPH_API UAnimGraphNode_SubInput(const UAnimGraphNode_SubInput&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SubInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_SubInput(UAnimGraphNode_SubInput&&); \
	ANIMGRAPH_API UAnimGraphNode_SubInput(const UAnimGraphNode_SubInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SubInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SubInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SubInput)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Node() { return STRUCT_OFFSET(UAnimGraphNode_SubInput, Node); }


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_11_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_SubInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_SubInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
