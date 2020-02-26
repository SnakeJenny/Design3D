// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHPAINTER_CopyVertexColorToClothParams_generated_h
#error "CopyVertexColorToClothParams.generated.h already included, missing '#pragma once' in CopyVertexColorToClothParams.h"
#endif
#define CLOTHPAINTER_CopyVertexColorToClothParams_generated_h

#define Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics; \
	CLOTHPAINTER_API static class UScriptStruct* StaticStruct();


template<> CLOTHPAINTER_API UScriptStruct* StaticStruct<struct FCopyVertexColorToClothParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h


#define FOREACH_ENUM_ESOURCECOLORCHANNEL(op) \
	op(ESourceColorChannel::Red) \
	op(ESourceColorChannel::Green) \
	op(ESourceColorChannel::Blue) \
	op(ESourceColorChannel::Alpha) 

enum class ESourceColorChannel : uint8;
template<> CLOTHPAINTER_API UEnum* StaticEnum<ESourceColorChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
