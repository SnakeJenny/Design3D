// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
struct FMargin;
#ifdef UMG_BackgroundBlur_generated_h
#error "BackgroundBlur.generated.h already included, missing '#pragma once' in BackgroundBlur.h"
#endif
#define UMG_BackgroundBlur_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLowQualityFallbackBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlurStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlurStrength(Z_Param_InStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlurRadius) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InBlurRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlurRadius(Z_Param_InBlurRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApplyAlphaToBlur) \
	{ \
		P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLowQualityFallbackBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowQualityFallbackBrush(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlurStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlurStrength(Z_Param_InStrength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBlurRadius) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InBlurRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBlurRadius(Z_Param_InBlurRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetApplyAlphaToBlur) \
	{ \
		P_GET_UBOOL(Z_Param_bInApplyAlphaToBlur); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetApplyAlphaToBlur(Z_Param_bInApplyAlphaToBlur); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InVerticalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InHorizontalAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBackgroundBlur, NO_API)


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackgroundBlur(); \
	friend struct Z_Construct_UClass_UBackgroundBlur_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlur, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlur) \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBackgroundBlur(); \
	friend struct Z_Construct_UClass_UBackgroundBlur_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlur, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlur) \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlur(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlur) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlur); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlur); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlur(UBackgroundBlur&&); \
	NO_API UBackgroundBlur(const UBackgroundBlur&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlur(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlur(UBackgroundBlur&&); \
	NO_API UBackgroundBlur(const UBackgroundBlur&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlur); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlur); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlur)


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BackgroundBlur."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBackgroundBlur>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_BackgroundBlur_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
