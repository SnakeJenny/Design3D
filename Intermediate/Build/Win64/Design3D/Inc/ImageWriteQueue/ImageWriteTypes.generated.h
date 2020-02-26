// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IMAGEWRITEQUEUE_ImageWriteTypes_generated_h
#error "ImageWriteTypes.generated.h already included, missing '#pragma once' in ImageWriteTypes.h"
#endif
#define IMAGEWRITEQUEUE_ImageWriteTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h


#define FOREACH_ENUM_EDESIREDIMAGEFORMAT(op) \
	op(EDesiredImageFormat::PNG) \
	op(EDesiredImageFormat::JPG) \
	op(EDesiredImageFormat::BMP) \
	op(EDesiredImageFormat::EXR) 

enum class EDesiredImageFormat : uint8;
template<> IMAGEWRITEQUEUE_API UEnum* StaticEnum<EDesiredImageFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
