// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BehaviorTree_generated_h
#error "BehaviorTree.generated.h already included, missing '#pragma once' in BehaviorTree.h"
#endif
#define AIMODULE_BehaviorTree_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviorTree(); \
	friend struct Z_Construct_UClass_UBehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTree)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBehaviorTree(); \
	friend struct Z_Construct_UClass_UBehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UBehaviorTree, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBehaviorTree)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTree(UBehaviorTree&&); \
	NO_API UBehaviorTree(const UBehaviorTree&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviorTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBehaviorTree(UBehaviorTree&&); \
	NO_API UBehaviorTree(const UBehaviorTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviorTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviorTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviorTree)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_14_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BehaviorTree."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBehaviorTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
