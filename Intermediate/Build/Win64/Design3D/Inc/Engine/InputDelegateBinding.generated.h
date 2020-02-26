// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputDelegateBinding_generated_h
#error "InputDelegateBinding.generated.h already included, missing '#pragma once' in InputDelegateBinding.h"
#endif
#define ENGINE_InputDelegateBinding_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputDelegateBinding>();

#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUInputDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputDelegateBinding, UDynamicBlueprintBinding, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDelegateBinding(UInputDelegateBinding&&); \
	NO_API UInputDelegateBinding(const UInputDelegateBinding&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDelegateBinding(UInputDelegateBinding&&); \
	NO_API UInputDelegateBinding(const UInputDelegateBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDelegateBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_34_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputDelegateBinding."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_InputDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
