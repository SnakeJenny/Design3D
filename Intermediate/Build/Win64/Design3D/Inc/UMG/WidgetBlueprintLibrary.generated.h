// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EWindowTitleBarMode : uint8;
class UObject;
struct FVector2D;
enum class EColorVisionDeficiency : uint8;
struct FVector4;
struct FNavigationEvent;
struct FInputEvent;
struct FPointerEvent;
struct FCharacterEvent;
struct FAnalogInputEvent;
struct FKeyEvent;
class UUserWidget;
class UInterface;
struct FSlateBrush;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
class UDragDropOperation;
struct FEventReply;
struct FKey;
struct FPaintContext;
class UFont;
struct FLinearColor;
class APlayerController;
enum class EMouseLockMode : uint8;
#ifdef UMG_WidgetBlueprintLibrary_generated_h
#error "WidgetBlueprintLibrary.generated.h already included, missing '#pragma once' in WidgetBlueprintLibrary.h"
#endif
#define UMG_WidgetBlueprintLibrary_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_345_DELEGATE \
static inline void FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper(const FScriptDelegate& OnGameWindowCloseButtonClickedDelegate) \
{ \
	OnGameWindowCloseButtonClickedDelegate.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive) \
	{ \
		P_GET_UBOOL(Z_Param_bActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(Z_Param_bActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FOnGameWindowCloseButtonClickedDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarState) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TitleBarContent); \
		P_GET_ENUM(EWindowTitleBarMode,Z_Param_Mode); \
		P_GET_UBOOL(Z_Param_bTitleBarDragEnabled); \
		P_GET_UBOOL(Z_Param_bWindowButtonsVisible); \
		P_GET_UBOOL(Z_Param_bTitleBarVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarState(Z_Param_TitleBarContent,EWindowTitleBarMode(Z_Param_Mode),Z_Param_bTitleBarDragEnabled,Z_Param_bWindowButtonsVisible,Z_Param_bTitleBarVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHardwareCursor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CursorShape); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CursorName); \
		P_GET_STRUCT(FVector2D,Z_Param_HotSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::SetHardwareCursor(Z_Param_WorldContextObject,EMouseCursor::Type(Z_Param_CursorShape),Z_Param_CursorName,Z_Param_HotSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType) \
	{ \
		P_GET_ENUM(EColorVisionDeficiency,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Severity); \
		P_GET_UBOOL(Z_Param_CorrectDeficiency); \
		P_GET_UBOOL(Z_Param_ShowCorrectionWithDeficiency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency(Z_Param_Type),Z_Param_Severity,Z_Param_CorrectDeficiency,Z_Param_ShowCorrectionWithDeficiency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSafeZonePadding) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SafePadding); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SafePaddingScale); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SpillOverPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetSafeZonePadding(Z_Param_WorldContextObject,Z_Param_Out_SafePadding,Z_Param_Out_SafePaddingScale,Z_Param_Out_SpillOverPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent) \
	{ \
		P_GET_STRUCT_REF(FNavigationEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent) \
	{ \
		P_GET_STRUCT_REF(FCharacterEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKeyEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_Interface,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissAllMenus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DismissAllMenus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UWidgetBlueprintLibrary::GetDynamicMaterial(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoResourceBrush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::NoResourceBrush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetBrushResourceToMaterial(Z_Param_Out_Brush,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToTexture) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetBrushResourceToTexture(Z_Param_Out_Brush,Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResource) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResource(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromMaterial(Z_Param_Material,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromTexture(Z_Param_Texture,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_BrushAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromAsset(Z_Param_BrushAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelDragDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::CancelDragDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDragDroppingContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::GetDragDroppingContent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDragDropping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::IsDragDropping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndDragDrop) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::EndDragDrop(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetectDragIfPressed) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDragIfPressed(Z_Param_Out_PointerEvent,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetectDrag) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDrag(Z_Param_Out_Reply,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_STRUCT(FVector2D,Z_Param_NewMousePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetMousePosition(Z_Param_Out_Reply,Z_Param_NewMousePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseJoystickCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseJoystickCapture(Z_Param_Out_Reply,Z_Param_bInAllJoysticks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ClearUserFocus(Z_Param_Out_Reply,Z_Param_bInAllUsers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureJoystick) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureJoystick(Z_Param_Out_Reply,Z_Param_CapturingWidget,Z_Param_bInAllJoysticks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_FocusWidget); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetUserFocus(Z_Param_Out_Reply,Z_Param_FocusWidget,Z_Param_bInAllUsers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::UnlockMouse(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::LockMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseMouseCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseMouseCapture(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnhandled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Unhandled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Handled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTextFormatted) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FontSize); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FontTypeFace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawTextFormatted(Z_Param_Out_Context,Z_Param_Out_Text,Z_Param_Position,Z_Param_Font,Z_Param_FontSize,Z_Param_FontTypeFace,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawText(Z_Param_Out_Context,Z_Param_InString,Z_Param_Position,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLines) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawLines(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionB); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawLine(Z_Param_Out_Context,Z_Param_PositionA,Z_Param_PositionB,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBox) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawBox(Z_Param_Out_Context,Z_Param_Position,Z_Param_Size,Z_Param_Brush,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusToGameViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetFocusToGameViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUI(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport,Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnly(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDragDropOperation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_OperationClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::CreateDragDropOperation(Z_Param_OperationClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetType); \
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UWidgetBlueprintLibrary::Create(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarCloseButtonActive) \
	{ \
		P_GET_UBOOL(Z_Param_bActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(Z_Param_bActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarOnCloseClickedDelegate) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Delegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FOnGameWindowCloseButtonClickedDelegate(Z_Param_Delegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestorePreviousWindowTitleBarState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowTitleBarState) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_TitleBarContent); \
		P_GET_ENUM(EWindowTitleBarMode,Z_Param_Mode); \
		P_GET_UBOOL(Z_Param_bTitleBarDragEnabled); \
		P_GET_UBOOL(Z_Param_bWindowButtonsVisible); \
		P_GET_UBOOL(Z_Param_bTitleBarVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetWindowTitleBarState(Z_Param_TitleBarContent,EWindowTitleBarMode(Z_Param_Mode),Z_Param_bTitleBarDragEnabled,Z_Param_bWindowButtonsVisible,Z_Param_bTitleBarVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHardwareCursor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CursorShape); \
		P_GET_PROPERTY(UNameProperty,Z_Param_CursorName); \
		P_GET_STRUCT(FVector2D,Z_Param_HotSpot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::SetHardwareCursor(Z_Param_WorldContextObject,EMouseCursor::Type(Z_Param_CursorShape),Z_Param_CursorName,Z_Param_HotSpot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorVisionDeficiencyType) \
	{ \
		P_GET_ENUM(EColorVisionDeficiency,Z_Param_Type); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Severity); \
		P_GET_UBOOL(Z_Param_CorrectDeficiency); \
		P_GET_UBOOL(Z_Param_ShowCorrectionWithDeficiency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency(Z_Param_Type),Z_Param_Severity,Z_Param_CorrectDeficiency,Z_Param_ShowCorrectionWithDeficiency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSafeZonePadding) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SafePadding); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SafePaddingScale); \
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_SpillOverPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetSafeZonePadding(Z_Param_WorldContextObject,Z_Param_Out_SafePadding,Z_Param_Out_SafePaddingScale,Z_Param_Out_SpillOverPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromNavigationEvent) \
	{ \
		P_GET_STRUCT_REF(FNavigationEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromPointerEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromCharacterEvent) \
	{ \
		P_GET_STRUCT_REF(FCharacterEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyEventFromAnalogInputEvent) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKeyEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInputEventFromKeyEvent) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Event); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(Z_Param_Out_Event); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsWithInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_Interface); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_Interface,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets); \
		P_GET_OBJECT(UClass,Z_Param_WidgetClass); \
		P_GET_UBOOL(Z_Param_TopLevelOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_WidgetClass,Z_Param_TopLevelOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissAllMenus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DismissAllMenus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDynamicMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=UWidgetBlueprintLibrary::GetDynamicMaterial(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNoResourceBrush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::NoResourceBrush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetBrushResourceToMaterial(Z_Param_Out_Brush,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushResourceToTexture) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetBrushResourceToTexture(Z_Param_Out_Brush,Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsMaterial) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResourceAsTexture2D) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBrushResource) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResource(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromMaterial(Z_Param_Material,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromTexture(Z_Param_Texture,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBrushFromAsset) \
	{ \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_BrushAsset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromAsset(Z_Param_BrushAsset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelDragDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::CancelDragDrop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDragDroppingContent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::GetDragDroppingContent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDragDropping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::IsDragDropping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndDragDrop) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::EndDragDrop(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetectDragIfPressed) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDragIfPressed(Z_Param_Out_PointerEvent,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetectDrag) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag); \
		P_GET_STRUCT(FKey,Z_Param_DragKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDrag(Z_Param_Out_Reply,Z_Param_WidgetDetectingDrag,Z_Param_DragKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_STRUCT(FVector2D,Z_Param_NewMousePosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetMousePosition(Z_Param_Out_Reply,Z_Param_NewMousePosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseJoystickCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseJoystickCapture(Z_Param_Out_Reply,Z_Param_bInAllJoysticks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ClearUserFocus(Z_Param_Out_Reply,Z_Param_bInAllUsers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureJoystick) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_GET_UBOOL(Z_Param_bInAllJoysticks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureJoystick(Z_Param_Out_Reply,Z_Param_CapturingWidget,Z_Param_bInAllJoysticks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserFocus) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_FocusWidget); \
		P_GET_UBOOL(Z_Param_bInAllUsers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetUserFocus(Z_Param_Out_Reply,Z_Param_FocusWidget,Z_Param_bInAllUsers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::UnlockMouse(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::LockMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseMouseCapture) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseMouseCapture(Z_Param_Out_Reply); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureMouse) \
	{ \
		P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply); \
		P_GET_OBJECT(UWidget,Z_Param_CapturingWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnhandled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Unhandled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Handled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawTextFormatted) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FontSize); \
		P_GET_PROPERTY(UNameProperty,Z_Param_FontTypeFace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawTextFormatted(Z_Param_Out_Context,Z_Param_Out_Text,Z_Param_Position,Z_Param_Font,Z_Param_FontSize,Z_Param_FontTypeFace,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawText(Z_Param_Out_Context,Z_Param_InString,Z_Param_Position,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLines) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawLines(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawLine) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionA); \
		P_GET_STRUCT(FVector2D,Z_Param_PositionB); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_GET_UBOOL(Z_Param_bAntiAlias); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawLine(Z_Param_Out_Context,Z_Param_PositionA,Z_Param_PositionB,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBox) \
	{ \
		P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context); \
		P_GET_STRUCT(FVector2D,Z_Param_Position); \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush); \
		P_GET_STRUCT(FLinearColor,Z_Param_Tint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::DrawBox(Z_Param_Out_Context,Z_Param_Position,Z_Param_Size,Z_Param_Brush,Z_Param_Tint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFocusToGameViewport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetFocusToGameViewport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameOnly(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUIEx) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_GameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_GameAndUI(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport,Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnlyEx) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode_UIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Target); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_UBOOL(Z_Param_bLockMouseToViewport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWidgetBlueprintLibrary::SetInputMode_UIOnly(Z_Param_Target,Z_Param_InWidgetToFocus,Z_Param_bLockMouseToViewport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDragDropOperation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_OperationClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::CreateDragDropOperation(Z_Param_OperationClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UClass,Z_Param_WidgetType); \
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=UWidgetBlueprintLibrary::Create(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprintLibrary(UWidgetBlueprintLibrary&&); \
	NO_API UWidgetBlueprintLibrary(const UWidgetBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprintLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_26_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
