// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEventReply;
struct FGeometry;
struct FPointerEvent;
class UWidget;
class UObject;
enum class ECheckBoxState : uint8;
enum class ESlateVisibility : uint8;
struct FSlateBrush;
struct FLinearColor;
struct FSlateColor;
class ULocalPlayer;
class APlayerController;
class UGameInstance;
class UPanelWidget;
enum class EUINavigation : uint8;
enum class EUINavigationRule : uint8;
struct FVector2D;
enum class EWidgetClipping : uint8;
struct FWidgetTransform;
#ifdef UMG_Widget_generated_h
#error "Widget.generated.h already included, missing '#pragma once' in Widget.h"
#endif
#define UMG_Widget_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_245_DELEGATE \
struct Widget_eventOnPointerEvent_Parms \
{ \
	FGeometry MyGeometry; \
	FPointerEvent MouseEvent; \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, FPointerEvent const& MouseEvent) \
{ \
	Widget_eventOnPointerEvent_Parms Parms; \
	Parms.MyGeometry=MyGeometry; \
	Parms.MouseEvent=MouseEvent; \
	OnPointerEvent.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_244_DELEGATE \
struct Widget_eventOnReply_Parms \
{ \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnReply_DelegateWrapper(const FScriptDelegate& OnReply) \
{ \
	Widget_eventOnReply_Parms Parms; \
	OnReply.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_241_DELEGATE \
struct Widget_eventGenerateWidgetForObject_Parms \
{ \
	UObject* Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGenerateWidgetForObject_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item) \
{ \
	Widget_eventGenerateWidgetForObject_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForObject.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_240_DELEGATE \
struct Widget_eventGenerateWidgetForString_Parms \
{ \
	FString Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGenerateWidgetForString_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item) \
{ \
	Widget_eventGenerateWidgetForString_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForString.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_237_DELEGATE \
struct Widget_eventGetWidget_Parms \
{ \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetWidget_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget) \
{ \
	Widget_eventGetWidget_Parms Parms; \
	GetWidget.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_236_DELEGATE \
struct Widget_eventGetCheckBoxState_Parms \
{ \
	ECheckBoxState ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetCheckBoxState_Parms() \
		: ReturnValue((ECheckBoxState)0) \
	{ \
	} \
}; \
static inline ECheckBoxState FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState) \
{ \
	Widget_eventGetCheckBoxState_Parms Parms; \
	GetCheckBoxState.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_235_DELEGATE \
struct Widget_eventGetMouseCursor_Parms \
{ \
	TEnumAsByte<EMouseCursor::Type> ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetMouseCursor_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline EMouseCursor::Type FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor) \
{ \
	Widget_eventGetMouseCursor_Parms Parms; \
	GetMouseCursor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_234_DELEGATE \
struct Widget_eventGetSlateVisibility_Parms \
{ \
	ESlateVisibility ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetSlateVisibility_Parms() \
		: ReturnValue((ESlateVisibility)0) \
	{ \
	} \
}; \
static inline ESlateVisibility FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility) \
{ \
	Widget_eventGetSlateVisibility_Parms Parms; \
	GetSlateVisibility.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_233_DELEGATE \
struct Widget_eventGetSlateBrush_Parms \
{ \
	FSlateBrush ReturnValue; \
}; \
static inline FSlateBrush FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush) \
{ \
	Widget_eventGetSlateBrush_Parms Parms; \
	GetSlateBrush.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_232_DELEGATE \
struct Widget_eventGetLinearColor_Parms \
{ \
	FLinearColor ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetLinearColor_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FLinearColor FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor) \
{ \
	Widget_eventGetLinearColor_Parms Parms; \
	GetLinearColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_231_DELEGATE \
struct Widget_eventGetSlateColor_Parms \
{ \
	FSlateColor ReturnValue; \
}; \
static inline FSlateColor FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor) \
{ \
	Widget_eventGetSlateColor_Parms Parms; \
	GetSlateColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_230_DELEGATE \
struct Widget_eventGetText_Parms \
{ \
	FText ReturnValue; \
}; \
static inline FText FGetText_DelegateWrapper(const FScriptDelegate& GetText) \
{ \
	Widget_eventGetText_Parms Parms; \
	GetText.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_229_DELEGATE \
struct Widget_eventGetInt32_Parms \
{ \
	int32 ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetInt32_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32) \
{ \
	Widget_eventGetInt32_Parms Parms; \
	GetInt32.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_228_DELEGATE \
struct Widget_eventGetFloat_Parms \
{ \
	float ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetFloat_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat) \
{ \
	Widget_eventGetFloat_Parms Parms; \
	GetFloat.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_227_DELEGATE \
struct Widget_eventGetBool_Parms \
{ \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetBool_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FGetBool_DelegateWrapper(const FScriptDelegate& GetBool) \
{ \
	Widget_eventGetBool_Parms Parms; \
	GetBool.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningLocalPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwningLocalPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstance**)Z_Param__Result=P_THIS->GetGameInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=P_THIS->GetCachedGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelWidget**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavigationRule) \
	{ \
		P_GET_ENUM(EUINavigation,Z_Param_Direction); \
		P_GET_ENUM(EUINavigationRule,Z_Param_Rule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetToFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNavigationRule(EUINavigation(Z_Param_Direction),EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllNavigationRules) \
	{ \
		P_GET_ENUM(EUINavigationRule,Z_Param_Rule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetToFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllNavigationRules(EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDesiredSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvalidateLayoutAndVolatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceLayoutPrepass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceLayoutPrepass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUserFocus(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocusedDescendants) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasUserFocusedDescendants(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocusedDescendants) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocusedDescendants(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyUserFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyUserFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasUserFocus(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyboardFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetKeyboardFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCaptureByUser) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMouseCaptureByUser(Z_Param_UserIndex,Z_Param_PointerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMouseCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKeyboardFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasKeyboardFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHovered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHovered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceVolatile) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceVolatile(Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClipping) \
	{ \
		P_GET_ENUM(EWidgetClipping,Z_Param_InClipping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClipping(EWidgetClipping(Z_Param_InClipping)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClipping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWidgetClipping*)Z_Param__Result=P_THIS->GetClipping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderOpacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRenderOpacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(ESlateVisibility(Z_Param_InVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCursor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCursor(EMouseCursor::Type(Z_Param_InCursor)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToolTip) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToolTip(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToolTipText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InToolTipText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToolTipText(Z_Param_Out_InToolTipText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsEnabled(Z_Param_bInIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransformPivot) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTransformPivot(Z_Param_Pivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTranslation) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Translation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTranslation(Z_Param_Translation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderAngle(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderShear) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Shear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderShear(Z_Param_Shear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransform) \
	{ \
		P_GET_STRUCT(FWidgetTransform,Z_Param_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTransform(Z_Param_InTransform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningLocalPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwningLocalPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(APlayerController**)Z_Param__Result=P_THIS->GetOwningPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstance**)Z_Param__Result=P_THIS->GetGameInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGeometry*)Z_Param__Result=P_THIS->GetCachedGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFromParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPanelWidget**)Z_Param__Result=P_THIS->GetParent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavigationRule) \
	{ \
		P_GET_ENUM(EUINavigation,Z_Param_Direction); \
		P_GET_ENUM(EUINavigationRule,Z_Param_Rule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetToFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNavigationRule(EUINavigation(Z_Param_Direction),EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllNavigationRules) \
	{ \
		P_GET_ENUM(EUINavigationRule,Z_Param_Rule); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetToFocus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllNavigationRules(EUINavigationRule(Z_Param_Rule),Z_Param_WidgetToFocus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDesiredSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvalidateLayoutAndVolatility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceLayoutPrepass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceLayoutPrepass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUserFocus(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocusedDescendants) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasUserFocusedDescendants(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasFocusedDescendants) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasFocusedDescendants(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyUserFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyUserFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasUserFocus) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasUserFocus(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetKeyboardFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetKeyboardFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCaptureByUser) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PointerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMouseCaptureByUser(Z_Param_UserIndex,Z_Param_PointerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMouseCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMouseCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasKeyboardFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasKeyboardFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHovered) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHovered(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceVolatile) \
	{ \
		P_GET_UBOOL(Z_Param_bForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceVolatile(Z_Param_bForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClipping) \
	{ \
		P_GET_ENUM(EWidgetClipping,Z_Param_InClipping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClipping(EWidgetClipping(Z_Param_InClipping)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClipping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWidgetClipping*)Z_Param__Result=P_THIS->GetClipping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderOpacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRenderOpacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_ENUM(ESlateVisibility,Z_Param_InVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(ESlateVisibility(Z_Param_InVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESlateVisibility*)Z_Param__Result=P_THIS->GetVisibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCursor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InCursor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCursor(EMouseCursor::Type(Z_Param_InCursor)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToolTip) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToolTip(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetToolTipText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InToolTipText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetToolTipText(Z_Param_Out_InToolTipText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsEnabled(Z_Param_bInIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransformPivot) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Pivot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTransformPivot(Z_Param_Pivot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTranslation) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Translation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTranslation(Z_Param_Translation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderAngle(Z_Param_Angle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderShear) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Shear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderShear(Z_Param_Shear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderScale(Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRenderTransform) \
	{ \
		P_GET_STRUCT(FWidgetTransform,Z_Param_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRenderTransform(Z_Param_InTransform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget)


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_INCLASS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget)


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget)


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NativeBindings() { return STRUCT_OFFSET(UWidget, NativeBindings); }


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_217_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Widget_h_220_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Widget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Widget_h


#define FOREACH_ENUM_EWIDGETDESIGNFLAGS(op) \
	op(EWidgetDesignFlags::None) \
	op(EWidgetDesignFlags::Designing) \
	op(EWidgetDesignFlags::ShowOutline) \
	op(EWidgetDesignFlags::ExecutePreConstruct) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
