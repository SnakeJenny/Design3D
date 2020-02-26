// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NodeMappingContainer_generated_h
#error "NodeMappingContainer.generated.h already included, missing '#pragma once' in NodeMappingContainer.h"
#endif
#define ENGINE_NodeMappingContainer_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNodeMappingContainer(); \
	friend struct Z_Construct_UClass_UNodeMappingContainer_Statics; \
public: \
	DECLARE_CLASS(UNodeMappingContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingContainer)


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNodeMappingContainer(); \
	friend struct Z_Construct_UClass_UNodeMappingContainer_Statics; \
public: \
	DECLARE_CLASS(UNodeMappingContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingContainer)


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingContainer(UNodeMappingContainer&&); \
	NO_API UNodeMappingContainer(const UNodeMappingContainer&); \
public:


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingContainer(UNodeMappingContainer&&); \
	NO_API UNodeMappingContainer(const UNodeMappingContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingContainer)


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SourceItems() { return STRUCT_OFFSET(UNodeMappingContainer, SourceItems); } \
	FORCEINLINE static uint32 __PPO__TargetItems() { return STRUCT_OFFSET(UNodeMappingContainer, TargetItems); } \
	FORCEINLINE static uint32 __PPO__SourceToTarget() { return STRUCT_OFFSET(UNodeMappingContainer, SourceToTarget); } \
	FORCEINLINE static uint32 __PPO__SourceAsset() { return STRUCT_OFFSET(UNodeMappingContainer, SourceAsset); } \
	FORCEINLINE static uint32 __PPO__TargetAsset() { return STRUCT_OFFSET(UNodeMappingContainer, TargetAsset); }


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NodeMappingContainer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNodeMappingContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
