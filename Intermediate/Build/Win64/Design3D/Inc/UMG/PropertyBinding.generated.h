// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_PropertyBinding_generated_h
#error "PropertyBinding.generated.h already included, missing '#pragma once' in PropertyBinding.h"
#endif
#define UMG_PropertyBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBinding(); \
	friend struct Z_Construct_UClass_UPropertyBinding_Statics; \
public: \
	DECLARE_CLASS(UPropertyBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPropertyBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyBinding(); \
	friend struct Z_Construct_UClass_UPropertyBinding_Statics; \
public: \
	DECLARE_CLASS(UPropertyBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPropertyBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyBinding(UPropertyBinding&&); \
	NO_API UPropertyBinding(const UPropertyBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyBinding(UPropertyBinding&&); \
	NO_API UPropertyBinding(const UPropertyBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPropertyBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPropertyBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
