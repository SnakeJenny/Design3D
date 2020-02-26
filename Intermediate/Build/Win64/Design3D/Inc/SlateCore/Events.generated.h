// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_Events_generated_h
#error "Events.generated.h already included, missing '#pragma once' in Events.h"
#endif
#define SLATECORE_Events_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_980_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FNavigationEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_903_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FMotionEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_615_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointerEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FPointerEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_533_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FCharacterEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_470_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnalogInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FKeyEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FAnalogInputEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FKeyEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FInputEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCaptureLostEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FCaptureLostEvent>();

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFocusEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FFocusEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Input_Events_h


#define FOREACH_ENUM_EFOCUSCAUSE(op) \
	op(EFocusCause::Mouse) \
	op(EFocusCause::Navigation) \
	op(EFocusCause::SetDirectly) \
	op(EFocusCause::Cleared) \
	op(EFocusCause::OtherWidgetLostFocus) \
	op(EFocusCause::WindowActivate) 

enum class EFocusCause : uint8;
template<> SLATECORE_API UEnum* StaticEnum<EFocusCause>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
