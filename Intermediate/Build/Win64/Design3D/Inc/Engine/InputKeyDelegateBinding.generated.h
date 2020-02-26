// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputKeyDelegateBinding_generated_h
#error "InputKeyDelegateBinding.generated.h already included, missing '#pragma once' in InputKeyDelegateBinding.h"
#endif
#define ENGINE_InputKeyDelegateBinding_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBlueprintInputDelegateBinding Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlueprintInputKeyDelegateBinding>();

#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputKeyDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputKeyDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUInputKeyDelegateBinding(); \
	friend struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics; \
public: \
	DECLARE_CLASS(UInputKeyDelegateBinding, UInputDelegateBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputKeyDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeyDelegateBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputKeyDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeyDelegateBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputKeyDelegateBinding(UInputKeyDelegateBinding&&); \
	NO_API UInputKeyDelegateBinding(const UInputKeyDelegateBinding&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputKeyDelegateBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputKeyDelegateBinding(UInputKeyDelegateBinding&&); \
	NO_API UInputKeyDelegateBinding(const UInputKeyDelegateBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputKeyDelegateBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputKeyDelegateBinding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputKeyDelegateBinding)


#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputKeyDelegateBinding."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputKeyDelegateBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_InputKeyDelegateBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
