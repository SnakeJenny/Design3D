// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_GridSlot_generated_h
#error "GridSlot.generated.h already included, missing '#pragma once' in GridSlot.h"
#endif
#define UMG_GridSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetLayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayer(Z_Param_InLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumnSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumnSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumnSpan(Z_Param_InColumnSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumn(Z_Param_InColumn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRowSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRowSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRowSpan(Z_Param_InRowSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRow(Z_Param_InRow); \
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


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetLayer) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayer(Z_Param_InLayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumnSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumnSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumnSpan(Z_Param_InColumnSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InColumn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumn(Z_Param_InColumn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRowSpan) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRowSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRowSpan(Z_Param_InRowSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRow(Z_Param_InRow); \
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


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridSlot(); \
	friend struct Z_Construct_UClass_UGridSlot_Statics; \
public: \
	DECLARE_CLASS(UGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridSlot)


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGridSlot(); \
	friend struct Z_Construct_UClass_UGridSlot_Statics; \
public: \
	DECLARE_CLASS(UGridSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridSlot)


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSlot(UGridSlot&&); \
	NO_API UGridSlot(const UGridSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSlot(UGridSlot&&); \
	NO_API UGridSlot(const UGridSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSlot)


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UGridSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_GridSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
