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
#ifdef UMG_VerticalBoxSlot_generated_h
#error "VerticalBoxSlot.generated.h already included, missing '#pragma once' in VerticalBoxSlot.h"
#endif
#define UMG_VerticalBoxSlot_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
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


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerticalBoxSlot(); \
	friend struct Z_Construct_UClass_UVerticalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UVerticalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBoxSlot(); \
	friend struct Z_Construct_UClass_UVerticalBoxSlot_Statics; \
public: \
	DECLARE_CLASS(UVerticalBoxSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBoxSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBoxSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBoxSlot(UVerticalBoxSlot&&); \
	NO_API UVerticalBoxSlot(const UVerticalBoxSlot&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBoxSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBoxSlot(UVerticalBoxSlot&&); \
	NO_API UVerticalBoxSlot(const UVerticalBoxSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBoxSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBoxSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBoxSlot)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VerticalBoxSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UVerticalBoxSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
