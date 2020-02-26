// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_MouseCursorBinding_generated_h
#error "MouseCursorBinding.generated.h already included, missing '#pragma once' in MouseCursorBinding.h"
#endif
#define UMG_MouseCursorBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EMouseCursor::Type>*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EMouseCursor::Type>*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMouseCursorBinding(); \
	friend struct Z_Construct_UClass_UMouseCursorBinding_Statics; \
public: \
	DECLARE_CLASS(UMouseCursorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMouseCursorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMouseCursorBinding(); \
	friend struct Z_Construct_UClass_UMouseCursorBinding_Statics; \
public: \
	DECLARE_CLASS(UMouseCursorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMouseCursorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMouseCursorBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMouseCursorBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMouseCursorBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseCursorBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMouseCursorBinding(UMouseCursorBinding&&); \
	NO_API UMouseCursorBinding(const UMouseCursorBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMouseCursorBinding(UMouseCursorBinding&&); \
	NO_API UMouseCursorBinding(const UMouseCursorBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMouseCursorBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMouseCursorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMouseCursorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_12_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMouseCursorBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_MouseCursorBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
