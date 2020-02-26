// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateChildSize;
struct FMargin;
#ifdef UMG_HorizontalBoxSlot_generated_h
#error "HorizontalBoxSlot.generated.h already included, missing '#pragma once' in HorizontalBoxSlot.h"
#endif
#define UMG_HorizontalBoxSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_InSize); \
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


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_InSize); \
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


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend struct Z_Construct_UClass_UHorizontalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUHorizontalBoxSlot(); \
	friend struct Z_Construct_UClass_UHorizontalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UHorizontalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UHorizontalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBoxSlot(UHorizontalBoxSlot&&); \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizontalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizontalBoxSlot(UHorizontalBoxSlot&&); \
	NO_API UHorizontalBoxSlot(const UHorizontalBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizontalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizontalBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizontalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_15_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HorizontalBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UHorizontalBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
