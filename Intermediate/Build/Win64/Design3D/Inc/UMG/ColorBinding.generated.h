// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_ColorBinding_generated_h
#error "ColorBinding.generated.h already included, missing '#pragma once' in ColorBinding.h"
#endif
#define UMG_ColorBinding_generated_h

#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLinearValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlateValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=P_THIS->GetSlateValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLinearValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlateValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateColor*)Z_Param__Result=P_THIS->GetSlateValue(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorBinding(); \
	friend struct Z_Construct_UClass_UColorBinding_Statics; \
public: \
	DECLARE_CLASS(UColorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UColorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUColorBinding(); \
	friend struct Z_Construct_UClass_UColorBinding_Statics; \
public: \
	DECLARE_CLASS(UColorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UColorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBinding(UColorBinding&&); \
	NO_API UColorBinding(const UColorBinding&); \
public:


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBinding(UColorBinding&&); \
	NO_API UColorBinding(const UColorBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBinding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColorBinding)


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_12_PROLOG
#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UColorBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
