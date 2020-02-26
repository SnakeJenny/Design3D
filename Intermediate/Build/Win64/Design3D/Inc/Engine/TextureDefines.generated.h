// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureDefines_generated_h
#error "TextureDefines.generated.h already included, missing '#pragma once' in TextureDefines.h"
#endif
#define ENGINE_TextureDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h


#define FOREACH_ENUM_ETEXTURESAMPLERFILTER(op) \
	op(ETextureSamplerFilter::Point) \
	op(ETextureSamplerFilter::Bilinear) \
	op(ETextureSamplerFilter::Trilinear) \
	op(ETextureSamplerFilter::AnisotropicPoint) \
	op(ETextureSamplerFilter::AnisotropicLinear) 

enum class ETextureSamplerFilter : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETextureSamplerFilter>();

#define FOREACH_ENUM_ETEXTUREPOWEROFTWOSETTING(op) \
	op(ETexturePowerOfTwoSetting::None) \
	op(ETexturePowerOfTwoSetting::PadToPowerOfTwo) \
	op(ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo) 
#define FOREACH_ENUM_TEXTUREMIPGENSETTINGS(op) \
	op(TMGS_FromTextureGroup) \
	op(TMGS_SimpleAverage) \
	op(TMGS_Sharpen0) \
	op(TMGS_Sharpen1) \
	op(TMGS_Sharpen2) \
	op(TMGS_Sharpen3) \
	op(TMGS_Sharpen4) \
	op(TMGS_Sharpen5) \
	op(TMGS_Sharpen6) \
	op(TMGS_Sharpen7) \
	op(TMGS_Sharpen8) \
	op(TMGS_Sharpen9) \
	op(TMGS_Sharpen10) \
	op(TMGS_NoMipmaps) \
	op(TMGS_LeaveExistingMips) \
	op(TMGS_Blur1) \
	op(TMGS_Blur2) \
	op(TMGS_Blur3) \
	op(TMGS_Blur4) \
	op(TMGS_Blur5) 
#define FOREACH_ENUM_TEXTUREGROUP(op) \
	op(TEXTUREGROUP_World) \
	op(TEXTUREGROUP_WorldNormalMap) \
	op(TEXTUREGROUP_WorldSpecular) \
	op(TEXTUREGROUP_Character) \
	op(TEXTUREGROUP_CharacterNormalMap) \
	op(TEXTUREGROUP_CharacterSpecular) \
	op(TEXTUREGROUP_Weapon) \
	op(TEXTUREGROUP_WeaponNormalMap) \
	op(TEXTUREGROUP_WeaponSpecular) \
	op(TEXTUREGROUP_Vehicle) \
	op(TEXTUREGROUP_VehicleNormalMap) \
	op(TEXTUREGROUP_VehicleSpecular) \
	op(TEXTUREGROUP_Cinematic) \
	op(TEXTUREGROUP_Effects) \
	op(TEXTUREGROUP_EffectsNotFiltered) \
	op(TEXTUREGROUP_Skybox) \
	op(TEXTUREGROUP_UI) \
	op(TEXTUREGROUP_Lightmap) \
	op(TEXTUREGROUP_RenderTarget) \
	op(TEXTUREGROUP_MobileFlattened) \
	op(TEXTUREGROUP_ProcBuilding_Face) \
	op(TEXTUREGROUP_ProcBuilding_LightMap) \
	op(TEXTUREGROUP_Shadowmap) \
	op(TEXTUREGROUP_ColorLookupTable) \
	op(TEXTUREGROUP_Terrain_Heightmap) \
	op(TEXTUREGROUP_Terrain_Weightmap) \
	op(TEXTUREGROUP_Bokeh) \
	op(TEXTUREGROUP_IESLightProfile) \
	op(TEXTUREGROUP_Pixels2D) \
	op(TEXTUREGROUP_HierarchicalLOD) \
	op(TEXTUREGROUP_Impostor) \
	op(TEXTUREGROUP_ImpostorNormalDepth) \
	op(TEXTUREGROUP_Project01) \
	op(TEXTUREGROUP_Project02) \
	op(TEXTUREGROUP_Project03) \
	op(TEXTUREGROUP_Project04) \
	op(TEXTUREGROUP_Project05) \
	op(TEXTUREGROUP_Project06) \
	op(TEXTUREGROUP_Project07) \
	op(TEXTUREGROUP_Project08) \
	op(TEXTUREGROUP_Project09) \
	op(TEXTUREGROUP_Project10) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
