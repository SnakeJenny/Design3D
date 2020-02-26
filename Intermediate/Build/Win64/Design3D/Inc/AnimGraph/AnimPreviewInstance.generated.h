// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimPreviewInstance_generated_h
#error "AnimPreviewInstance.generated.h already included, missing '#pragma once' in AnimPreviewInstance.h"
#endif
#define ANIMGRAPH_AnimPreviewInstance_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimSingleNodeInstanceProxy Super;


template<> ANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimPreviewInstanceProxy>();

#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimPreviewInstance, NO_API)


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimPreviewInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewInstance, UAnimSingleNodeInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewInstance) \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_ARCHIVESERIALIZER


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPreviewInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewInstance, UAnimSingleNodeInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewInstance) \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_ARCHIVESERIALIZER


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewInstance(UAnimPreviewInstance&&); \
	NO_API UAnimPreviewInstance(const UAnimPreviewInstance&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewInstance(UAnimPreviewInstance&&); \
	NO_API UAnimPreviewInstance(const UAnimPreviewInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_180_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h_183_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimPreviewInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimPreviewInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimPreviewInstance_h


#define FOREACH_ENUM_EMONTAGEPREVIEWTYPE(op) \
	op(EMPT_Normal) \
	op(EMPT_AllSections) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
