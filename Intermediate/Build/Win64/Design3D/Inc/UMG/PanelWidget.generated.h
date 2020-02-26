// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UPanelSlot;
#ifdef UMG_PanelWidget_generated_h
#error "PanelWidget.generated.h already included, missing '#pragma once' in PanelWidget.h"
#endif
#define UMG_PanelWidget_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->AddChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChildAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveChildAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildIndex) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChildIndex(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWidget*>*)Z_Param__Result=P_THIS->GetAllChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetChildAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildrenCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChildrenCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelSlot**)Z_Param__Result=P_THIS->AddChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChildAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveChildAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasChild) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasChild(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildIndex) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChildIndex(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllChildren) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWidget*>*)Z_Param__Result=P_THIS->GetAllChildren(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetChildAt(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildrenCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChildrenCount(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget)


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Slots() { return STRUCT_OFFSET(UPanelWidget, Slots); }


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_13_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PanelWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
