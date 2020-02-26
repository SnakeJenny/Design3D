// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_Base_generated_h
#error "AnimGraphNode_Base.generated.h already included, missing '#pragma once' in AnimGraphNode_Base.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Base_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Base(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Base, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Base)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Base(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_Base_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_Base, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_Base)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_Base(UAnimGraphNode_Base&&); \
	NO_API UAnimGraphNode_Base(const UAnimGraphNode_Base&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_Base(UAnimGraphNode_Base&&); \
	NO_API UAnimGraphNode_Base(const UAnimGraphNode_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Base)


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_123_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h_126_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_Base."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimGraphNode_Base_h


#define FOREACH_ENUM_EBLUEPRINTUSAGE(op) \
	op(EBlueprintUsage::NoProperties) \
	op(EBlueprintUsage::DoesNotUseBlueprint) \
	op(EBlueprintUsage::UsesBlueprint) 

enum class EBlueprintUsage : uint8;
template<> ANIMGRAPH_API UEnum* StaticEnum<EBlueprintUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
