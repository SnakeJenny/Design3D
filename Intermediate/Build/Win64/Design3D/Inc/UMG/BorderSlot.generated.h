// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef UMG_BorderSlot_generated_h
#error "BorderSlot.generated.h already included, missing '#pragma once' in BorderSlot.h"
#endif
#define UMG_BorderSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
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


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend struct Z_Construct_UClass_UBorderSlot_Statics; \
public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorderSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBorderSlot(); \
	friend struct Z_Construct_UClass_UBorderSlot_Statics; \
public: \
	DECLARE_CLASS(UBorderSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UBorderSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorderSlot(UBorderSlot&&); \
	NO_API UBorderSlot(const UBorderSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBorderSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBorderSlot(UBorderSlot&&); \
	NO_API UBorderSlot(const UBorderSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBorderSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBorderSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBorderSlot)


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Padding() { return STRUCT_OFFSET(UBorderSlot, Padding); } \
	FORCEINLINE static uint32 __PPO__HorizontalAlignment() { return STRUCT_OFFSET(UBorderSlot, HorizontalAlignment); } \
	FORCEINLINE static uint32 __PPO__VerticalAlignment() { return STRUCT_OFFSET(UBorderSlot, VerticalAlignment); }


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BorderSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UBorderSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_BorderSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
