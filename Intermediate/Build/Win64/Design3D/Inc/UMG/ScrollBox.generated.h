// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EDescendantScrollDestination : uint8;
struct FVector2D;
enum class ESlateVisibility : uint8;
enum class EConsumeMouseWheel : uint8;
#ifdef UMG_ScrollBox_generated_h
#error "ScrollBox.generated.h already included, missing '#pragma once' in ScrollBox.h"
#endif
#define UMG_ScrollBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_13_DELEGATE \
struct _Script_UMG_eventOnUserScrolledEvent_Parms \
{ \
	float CurrentOffset; \
}; \
static inline void FOnUserScrolledEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUserScrolledEvent, float CurrentOffset) \
{ \
	_Script_UMG_eventOnUserScrolledEvent_Parms Parms; \
	Parms.CurrentOffset=CurrentOffset; \
	OnUserScrolledEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScrollWidgetIntoView) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToFind); \
		P_GET_UBOOL(Z_Param_AnimateScroll); \
		P_GET_ENUM(EDescendantScrollDestination,Z_Param_ScrollDestination); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWidgetIntoView(Z_Param_WidgetToFind,Z_Param_AnimateScroll,EDescendantScrollDestination(Z_Param_ScrollDestination)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollToEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollToEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollToStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollToStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewOffsetFraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetViewOffsetFraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScrollOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScrollOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScrollOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollOffset(Z_Param_NewScrollOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowOverscroll) \
	{ \
		P_GET_UBOOL(Z_Param_NewAllowOverscroll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowOverscroll(Z_Param_NewAllowOverscroll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlwaysShowScrollbar) \
	{ \
		P_GET_UBOOL(Z_Param_NewAlwaysShowScrollbar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlwaysShowScrollbar(Z_Param_NewAlwaysShowScrollbar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollbarThickness) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewScrollbarThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollbarThickness(Z_Param_Out_NewScrollbarThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollBarVisibility) \
	{ \
		P_GET_ENUM(ESlateVisibility,Z_Param_NewScrollBarVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollBarVisibility(ESlateVisibility(Z_Param_NewScrollBarVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(EOrientation(Z_Param_NewOrientation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConsumeMouseWheel) \
	{ \
		P_GET_ENUM(EConsumeMouseWheel,Z_Param_NewConsumeMouseWheel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsumeMouseWheel(EConsumeMouseWheel(Z_Param_NewConsumeMouseWheel)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScrollWidgetIntoView) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_WidgetToFind); \
		P_GET_UBOOL(Z_Param_AnimateScroll); \
		P_GET_ENUM(EDescendantScrollDestination,Z_Param_ScrollDestination); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWidgetIntoView(Z_Param_WidgetToFind,Z_Param_AnimateScroll,EDescendantScrollDestination(Z_Param_ScrollDestination)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollToEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollToEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollToStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollToStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewOffsetFraction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetViewOffsetFraction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScrollOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScrollOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScrollOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollOffset(Z_Param_NewScrollOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowOverscroll) \
	{ \
		P_GET_UBOOL(Z_Param_NewAllowOverscroll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowOverscroll(Z_Param_NewAllowOverscroll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAlwaysShowScrollbar) \
	{ \
		P_GET_UBOOL(Z_Param_NewAlwaysShowScrollbar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAlwaysShowScrollbar(Z_Param_NewAlwaysShowScrollbar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollbarThickness) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_NewScrollbarThickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollbarThickness(Z_Param_Out_NewScrollbarThickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScrollBarVisibility) \
	{ \
		P_GET_ENUM(ESlateVisibility,Z_Param_NewScrollBarVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScrollBarVisibility(ESlateVisibility(Z_Param_NewScrollBarVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(EOrientation(Z_Param_NewOrientation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConsumeMouseWheel) \
	{ \
		P_GET_ENUM(EConsumeMouseWheel,Z_Param_NewConsumeMouseWheel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConsumeMouseWheel(EConsumeMouseWheel(Z_Param_NewConsumeMouseWheel)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScrollBox(); \
	friend struct Z_Construct_UClass_UScrollBox_Statics; \
public: \
	DECLARE_CLASS(UScrollBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBox)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUScrollBox(); \
	friend struct Z_Construct_UClass_UScrollBox_Statics; \
public: \
	DECLARE_CLASS(UScrollBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UScrollBox)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBox(UScrollBox&&); \
	NO_API UScrollBox(const UScrollBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScrollBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScrollBox(UScrollBox&&); \
	NO_API UScrollBox(const UScrollBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrollBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrollBox)


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_18_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScrollBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UScrollBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_ScrollBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
