// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UGridSlot;
#ifdef UMG_GridPanel_generated_h
#error "GridPanel.generated.h already included, missing '#pragma once' in GridPanel.h"
#endif
#define UMG_GridPanel_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRowFill) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ColumnIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Coefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRowFill(Z_Param_ColumnIndex,Z_Param_Coefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumnFill) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ColumnIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Coefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumnFill(Z_Param_ColumnIndex,Z_Param_Coefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildToGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=P_THIS->AddChildToGrid(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRowFill) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ColumnIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Coefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRowFill(Z_Param_ColumnIndex,Z_Param_Coefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColumnFill) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ColumnIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Coefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColumnFill(Z_Param_ColumnIndex,Z_Param_Coefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChildToGrid) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGridSlot**)Z_Param__Result=P_THIS->AddChildToGrid(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend struct Z_Construct_UClass_UGridPanel_Statics; \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend struct Z_Construct_UClass_UGridPanel_Statics; \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel)


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_GridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
