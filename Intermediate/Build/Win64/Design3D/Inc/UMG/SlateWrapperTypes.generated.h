// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SlateWrapperTypes_generated_h
#error "SlateWrapperTypes.generated.h already included, missing '#pragma once' in SlateWrapperTypes.h"
#endif
#define UMG_SlateWrapperTypes_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateChildSize_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FSlateChildSize>();

#define Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventReply_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FEventReply>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h


#define FOREACH_ENUM_EVIRTUALKEYBOARDTYPE(op) \
	op(EVirtualKeyboardType::Default) \
	op(EVirtualKeyboardType::Number) \
	op(EVirtualKeyboardType::Web) \
	op(EVirtualKeyboardType::Email) \
	op(EVirtualKeyboardType::Password) \
	op(EVirtualKeyboardType::AlphaNumeric) 
#define FOREACH_ENUM_ESLATESIZERULE(op) \
	op(ESlateSizeRule::Automatic) \
	op(ESlateSizeRule::Fill) 
#define FOREACH_ENUM_ESLATEVISIBILITY(op) \
	op(ESlateVisibility::Visible) \
	op(ESlateVisibility::Collapsed) \
	op(ESlateVisibility::Hidden) \
	op(ESlateVisibility::HitTestInvisible) \
	op(ESlateVisibility::SelfHitTestInvisible) 

enum class ESlateVisibility : uint8;
template<> UMG_API UEnum* StaticEnum<ESlateVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
