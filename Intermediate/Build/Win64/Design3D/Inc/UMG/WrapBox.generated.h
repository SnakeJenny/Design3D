// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UWrapBoxSlot;
struct FVector2D;
#ifdef UMG_WrapBox_generated_h
#error "WrapBox.generated.h already included, missing '#pragma once' in WrapBox.h"
#endif
#define UMG_WrapBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToWrapBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInnerSlotPadding) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInnerSlotPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToWrapBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInnerSlotPadding) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInnerSlotPadding(Z_Param_InPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWrapBox(); \
	friend struct Z_Construct_UClass_UWrapBox_Statics; \
public: \
	DECLARE_CLASS(UWrapBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBox)


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUWrapBox(); \
	friend struct Z_Construct_UClass_UWrapBox_Statics; \
public: \
	DECLARE_CLASS(UWrapBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWrapBox)


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBox(UWrapBox&&); \
	NO_API UWrapBox(const UWrapBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrapBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrapBox(UWrapBox&&); \
	NO_API UWrapBox(const UWrapBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrapBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrapBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrapBox)


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_21_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WrapBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWrapBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WrapBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
