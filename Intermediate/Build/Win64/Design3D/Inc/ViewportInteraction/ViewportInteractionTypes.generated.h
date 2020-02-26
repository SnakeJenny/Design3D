// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h
#error "ViewportInteractionTypes.generated.h already included, missing '#pragma once' in ViewportInteractionTypes.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractionTypes_generated_h

#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FTransformGizmoHandlePlacement>();

#define Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<struct FViewportActionKeyInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h


#define FOREACH_ENUM_EVIEWPORTINTERACTIONDRAGGINGMODE(op) \
	op(EViewportInteractionDraggingMode::Nothing) \
	op(EViewportInteractionDraggingMode::TransformablesWithGizmo) \
	op(EViewportInteractionDraggingMode::TransformablesAtLaserImpact) \
	op(EViewportInteractionDraggingMode::AssistingDrag) \
	op(EViewportInteractionDraggingMode::TransformablesFreely) \
	op(EViewportInteractionDraggingMode::World) \
	op(EViewportInteractionDraggingMode::Interactable) \
	op(EViewportInteractionDraggingMode::Material) 

enum class EViewportInteractionDraggingMode : uint8;
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportInteractionDraggingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
