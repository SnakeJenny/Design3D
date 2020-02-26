// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentDelegateBinding_generated_h
#error "ComponentDelegateBinding.generated.h already included, missing '#pragma once' in ComponentDelegateBinding.h"
#endif
#define ENGINE_ComponentDelegateBinding_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintComponentDelegateBinding>();

#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComponentDelegateBinding(); \
	friend struct Z_Construct_UClass_UComponentDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UComponentDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UComponentDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUComponentDelegateBinding(); \
	friend struct Z_Construct_UClass_UComponentDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UComponentDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UComponentDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentDelegateBinding(UComponentDelegateBinding&&); \
	NO_API UComponentDelegateBinding(const UComponentDelegateBinding&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComponentDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComponentDelegateBinding(UComponentDelegateBinding&&); \
	NO_API UComponentDelegateBinding(const UComponentDelegateBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComponentDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComponentDelegateBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComponentDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_37_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ComponentDelegateBinding."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UComponentDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ComponentDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
