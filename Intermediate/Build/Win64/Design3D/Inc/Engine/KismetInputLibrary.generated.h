// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPointerEvent;
struct FVector2D;
enum class ESlateGesture : uint8;
struct FKey;
struct FAnalogInputEvent;
struct FKeyEvent;
struct FInputEvent;
struct FInputChord;
#ifdef ENGINE_KismetInputLibrary_generated_h
#error "KismetInputLibrary.generated.h already included, missing '#pragma once' in KismetInputLibrary.h"
#endif
#define ENGINE_KismetInputLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureType) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESlateGesture*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureType(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_IsTouchEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsTouchEvent(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetTouchpadIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetTouchpadIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetPointerIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetPointerIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetUserIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetUserIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetWheelDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetWheelDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetEffectingButton) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetEffectingButton(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_IsMouseButtonDown) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_GET_STRUCT(FKey,Z_Param_MouseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsMouseButtonDown(Z_Param_Out_Input,Z_Param_MouseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetCursorDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetCursorDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetLastScreenSpacePosition) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetScreenSpacePosition) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogValue) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetInputLibrary::GetAnalogValue(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserIndex) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::GetUserIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UKismetInputLibrary::GetKey(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRepeat) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRepeat(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_GetDisplayName) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetInputLibrary::Key_GetDisplayName(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsValid) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsValid(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsVectorAxis) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsVectorAxis(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsFloatAxis) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsFloatAxis(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsKeyboardKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsKeyboardKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsMouseButton) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsMouseButton(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsGamepadKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsGamepadKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsModifierKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsModifierKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_InputChordInputChord) \
	{ \
		P_GET_STRUCT(FInputChord,Z_Param_A); \
		P_GET_STRUCT(FInputChord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_InputChordInputChord(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_KeyKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_A); \
		P_GET_STRUCT(FKey,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_KeyKey(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrateTilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetInputLibrary::CalibrateTilt(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetGestureType) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESlateGesture*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureType(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_IsTouchEvent) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsTouchEvent(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetTouchpadIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetTouchpadIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetPointerIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetPointerIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetUserIndex) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetUserIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetWheelDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetWheelDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetEffectingButton) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetEffectingButton(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_IsMouseButtonDown) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_GET_STRUCT(FKey,Z_Param_MouseButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsMouseButtonDown(Z_Param_Out_Input,Z_Param_MouseButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetCursorDelta) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetCursorDelta(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetLastScreenSpacePosition) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPointerEvent_GetScreenSpacePosition) \
	{ \
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalogValue) \
	{ \
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UKismetInputLibrary::GetAnalogValue(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserIndex) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UKismetInputLibrary::GetUserIndex(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UKismetInputLibrary::GetKey(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsCommandDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsCommandDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsAltDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsAltDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsControlDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsControlDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRightShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsLeftShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsShiftDown) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsShiftDown(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInputEvent_IsRepeat) \
	{ \
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRepeat(Z_Param_Out_Input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_GetDisplayName) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UKismetInputLibrary::Key_GetDisplayName(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsValid) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsValid(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsVectorAxis) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsVectorAxis(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsFloatAxis) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsFloatAxis(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsKeyboardKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsKeyboardKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsMouseButton) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsMouseButton(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsGamepadKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsGamepadKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKey_IsModifierKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsModifierKey(Z_Param_Out_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_InputChordInputChord) \
	{ \
		P_GET_STRUCT(FInputChord,Z_Param_A); \
		P_GET_STRUCT(FInputChord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_InputChordInputChord(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_KeyKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_A); \
		P_GET_STRUCT(FKey,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_KeyKey(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalibrateTilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetInputLibrary::CalibrateTilt(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetInputLibrary(); \
	friend struct Z_Construct_UClass_UKismetInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUKismetInputLibrary(); \
	friend struct Z_Construct_UClass_UKismetInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInputLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInputLibrary(UKismetInputLibrary&&); \
	NO_API UKismetInputLibrary(const UKismetInputLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInputLibrary(UKismetInputLibrary&&); \
	NO_API UKismetInputLibrary(const UKismetInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInputLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_24_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetInputLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h


#define FOREACH_ENUM_ESLATEGESTURE(op) \
	op(ESlateGesture::None) \
	op(ESlateGesture::Scroll) \
	op(ESlateGesture::Magnify) \
	op(ESlateGesture::Swipe) \
	op(ESlateGesture::Rotate) \
	op(ESlateGesture::LongPress) 

enum class ESlateGesture : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESlateGesture>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
