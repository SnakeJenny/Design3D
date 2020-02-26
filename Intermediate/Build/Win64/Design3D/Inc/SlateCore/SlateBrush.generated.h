// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateBrush_generated_h
#error "SlateBrush.generated.h already included, missing '#pragma once' in SlateBrush.h"
#endif
#define SLATECORE_SlateBrush_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateBrush_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ResourceObject() { return STRUCT_OFFSET(FSlateBrush, ResourceObject); } \
	FORCEINLINE static uint32 __PPO__ResourceName() { return STRUCT_OFFSET(FSlateBrush, ResourceName); } \
	FORCEINLINE static uint32 __PPO__UVRegion() { return STRUCT_OFFSET(FSlateBrush, UVRegion); }


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FSlateBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Styling_SlateBrush_h


#define FOREACH_ENUM_ESLATEBRUSHIMAGETYPE(op) \
	op(ESlateBrushImageType::NoImage) \
	op(ESlateBrushImageType::FullColor) \
	op(ESlateBrushImageType::Linear) 
#define FOREACH_ENUM_ESLATEBRUSHMIRRORTYPE(op) \
	op(ESlateBrushMirrorType::NoMirror) \
	op(ESlateBrushMirrorType::Horizontal) \
	op(ESlateBrushMirrorType::Vertical) \
	op(ESlateBrushMirrorType::Both) 
#define FOREACH_ENUM_ESLATEBRUSHTILETYPE(op) \
	op(ESlateBrushTileType::NoTile) \
	op(ESlateBrushTileType::Horizontal) \
	op(ESlateBrushTileType::Vertical) \
	op(ESlateBrushTileType::Both) 
#define FOREACH_ENUM_ESLATEBRUSHDRAWTYPE(op) \
	op(ESlateBrushDrawType::NoDrawType) \
	op(ESlateBrushDrawType::Box) \
	op(ESlateBrushDrawType::Border) \
	op(ESlateBrushDrawType::Image) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
