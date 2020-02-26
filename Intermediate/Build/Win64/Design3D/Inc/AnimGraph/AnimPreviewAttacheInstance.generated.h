// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimPreviewAttacheInstance_generated_h
#error "AnimPreviewAttacheInstance.generated.h already included, missing '#pragma once' in AnimPreviewAttacheInstance.h"
#endif
#define ANIMGRAPH_AnimPreviewAttacheInstance_generated_h

#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics; \
	ANIMGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> ANIMGRAPH_API UScriptStruct* StaticStruct<struct FAnimPreviewAttacheInstanceProxy>();

#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_RPC_WRAPPERS
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimPreviewAttacheInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewAttacheInstance, UAnimCustomInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewAttacheInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPreviewAttacheInstance(); \
	friend struct Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimPreviewAttacheInstance, UAnimCustomInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimPreviewAttacheInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewAttacheInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewAttacheInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewAttacheInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewAttacheInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewAttacheInstance(UAnimPreviewAttacheInstance&&); \
	NO_API UAnimPreviewAttacheInstance(const UAnimPreviewAttacheInstance&); \
public:


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPreviewAttacheInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPreviewAttacheInstance(UAnimPreviewAttacheInstance&&); \
	NO_API UAnimPreviewAttacheInstance(const UAnimPreviewAttacheInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPreviewAttacheInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPreviewAttacheInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPreviewAttacheInstance)


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_43_PROLOG
#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_RPC_WRAPPERS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_INCLASS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimPreviewAttacheInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimPreviewAttacheInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AnimGraph_Classes_AnimPreviewAttacheInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
