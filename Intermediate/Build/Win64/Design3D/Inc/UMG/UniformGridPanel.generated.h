// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UUniformGridSlot;
struct FMargin;
#ifdef UMG_UniformGridPanel_generated_h
#error "UniformGridPanel.generated.h already included, missing '#pragma once' in UniformGridPanel.h"
#endif
#define UMG_UniformGridPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformGridSlot**)Z_Param__Result=P_THIS->AddChildToUniformGrid(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredSlotHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredSlotHeight(Z_Param_InMinDesiredSlotHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredSlotWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredSlotWidth(Z_Param_InMinDesiredSlotWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InSlotPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotPadding(Z_Param_InSlotPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformGridSlot**)Z_Param__Result=P_THIS->AddChildToUniformGrid(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredSlotHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredSlotHeight(Z_Param_InMinDesiredSlotHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredSlotWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredSlotWidth(Z_Param_InMinDesiredSlotWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSlotPadding) \
	{ \
		P_GET_STRUCT(FMargin,Z_Param_InSlotPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSlotPadding(Z_Param_InSlotPadding); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UniformGridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUniformGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
