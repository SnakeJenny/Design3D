// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Trail_generated_h
#error "AnimGraphNode_Trail.generated.h already included, missing '#pragma once' in AnimGraphNode_Trail.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Trail_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Trail, ANIMGRAPH_API)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Trail(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Trail_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Trail, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Trail) \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_ARCHIVESERIALIZER


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Trail(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Trail_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Trail, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Trail) \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_ARCHIVESERIALIZER


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Trail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_Trail(UAnimGraphNode_Trail&&); \
	ANIMGRAPH_API UAnimGraphNode_Trail(const UAnimGraphNode_Trail&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_Trail(UAnimGraphNode_Trail&&); \
	ANIMGRAPH_API UAnimGraphNode_Trail(const UAnimGraphNode_Trail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Trail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Trail); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Trail)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_12_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_Trail."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Trail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Trail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
