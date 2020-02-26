// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_BackgroundBlurSlot_generated_h
#error "BackgroundBlurSlot.generated.h already included, missing '#pragma once' in BackgroundBlurSlot.h"
#endif
#define UMG_BackgroundBlurSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_RPC_WRAPPERS \
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


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackgroundBlurSlot(); \
	friend struct Z_Construct_UClass_UBackgroundBlurSlot_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlurSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlurSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBackgroundBlurSlot(); \
	friend struct Z_Construct_UClass_UBackgroundBlurSlot_Statics; \
public: \
	DECLARE_CLASS(UBackgroundBlurSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBackgroundBlurSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlurSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlurSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlurSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlurSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlurSlot(UBackgroundBlurSlot&&); \
	NO_API UBackgroundBlurSlot(const UBackgroundBlurSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackgroundBlurSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBackgroundBlurSlot(UBackgroundBlurSlot&&); \
	NO_API UBackgroundBlurSlot(const UBackgroundBlurSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackgroundBlurSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackgroundBlurSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackgroundBlurSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Padding() { return STRUCT_OFFSET(UBackgroundBlurSlot, Padding); } \
	FORCEINLINE static uint32 __PPO__HorizontalAlignment() { return STRUCT_OFFSET(UBackgroundBlurSlot, HorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__VerticalAlignment() { return STRUCT_OFFSET(UBackgroundBlurSlot, VerticalAlignment); }


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BackgroundBlurSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBackgroundBlurSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_BackgroundBlurSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
