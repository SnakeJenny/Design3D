// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureDefines.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureDefines() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSamplerFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
// End Cross Module References
	static UEnum* ETextureSamplerFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSamplerFilter, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSamplerFilter"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSamplerFilter>()
	{
		return ETextureSamplerFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSamplerFilter(ETextureSamplerFilter_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSamplerFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSamplerFilter_Hash() { return 30904938U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSamplerFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSamplerFilter"), 0, Get_Z_Construct_UEnum_Engine_ETextureSamplerFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextureSamplerFilter::Point", (int64)ETextureSamplerFilter::Point },
				{ "ETextureSamplerFilter::Bilinear", (int64)ETextureSamplerFilter::Bilinear },
				{ "ETextureSamplerFilter::Trilinear", (int64)ETextureSamplerFilter::Trilinear },
				{ "ETextureSamplerFilter::AnisotropicPoint", (int64)ETextureSamplerFilter::AnisotropicPoint },
				{ "ETextureSamplerFilter::AnisotropicLinear", (int64)ETextureSamplerFilter::AnisotropicLinear },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
				{ "ToolTip", "Must match enum ESamplerFilter in RHIDefinitions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureSamplerFilter",
				"ETextureSamplerFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETexturePowerOfTwoSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, Z_Construct_UPackage__Script_Engine(), TEXT("ETexturePowerOfTwoSetting"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETexturePowerOfTwoSetting::Type>()
	{
		return ETexturePowerOfTwoSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETexturePowerOfTwoSetting(ETexturePowerOfTwoSetting_StaticEnum, TEXT("/Script/Engine"), TEXT("ETexturePowerOfTwoSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Hash() { return 2191648291U; }
	UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETexturePowerOfTwoSetting"), 0, Get_Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETexturePowerOfTwoSetting::None", (int64)ETexturePowerOfTwoSetting::None },
				{ "ETexturePowerOfTwoSetting::PadToPowerOfTwo", (int64)ETexturePowerOfTwoSetting::PadToPowerOfTwo },
				{ "ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo", (int64)ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
				{ "None.ToolTip", "Do not modify the texture dimensions." },
				{ "PadToPowerOfTwo.ToolTip", "Pad the texture to the nearest power of two size." },
				{ "PadToSquarePowerOfTwo.ToolTip", "Pad the texture to the nearest square power of two size." },
				{ "ToolTip", "Options for texture padding mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETexturePowerOfTwoSetting",
				"ETexturePowerOfTwoSetting::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureMipGenSettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureMipGenSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureMipGenSettings"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureMipGenSettings>()
	{
		return TextureMipGenSettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureMipGenSettings(TextureMipGenSettings_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureMipGenSettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureMipGenSettings_Hash() { return 3689436339U; }
	UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureMipGenSettings"), 0, Get_Z_Construct_UEnum_Engine_TextureMipGenSettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMGS_FromTextureGroup", (int64)TMGS_FromTextureGroup },
				{ "TMGS_SimpleAverage", (int64)TMGS_SimpleAverage },
				{ "TMGS_Sharpen0", (int64)TMGS_Sharpen0 },
				{ "TMGS_Sharpen1", (int64)TMGS_Sharpen1 },
				{ "TMGS_Sharpen2", (int64)TMGS_Sharpen2 },
				{ "TMGS_Sharpen3", (int64)TMGS_Sharpen3 },
				{ "TMGS_Sharpen4", (int64)TMGS_Sharpen4 },
				{ "TMGS_Sharpen5", (int64)TMGS_Sharpen5 },
				{ "TMGS_Sharpen6", (int64)TMGS_Sharpen6 },
				{ "TMGS_Sharpen7", (int64)TMGS_Sharpen7 },
				{ "TMGS_Sharpen8", (int64)TMGS_Sharpen8 },
				{ "TMGS_Sharpen9", (int64)TMGS_Sharpen9 },
				{ "TMGS_Sharpen10", (int64)TMGS_Sharpen10 },
				{ "TMGS_NoMipmaps", (int64)TMGS_NoMipmaps },
				{ "TMGS_LeaveExistingMips", (int64)TMGS_LeaveExistingMips },
				{ "TMGS_Blur1", (int64)TMGS_Blur1 },
				{ "TMGS_Blur2", (int64)TMGS_Blur2 },
				{ "TMGS_Blur3", (int64)TMGS_Blur3 },
				{ "TMGS_Blur4", (int64)TMGS_Blur4 },
				{ "TMGS_Blur5", (int64)TMGS_Blur5 },
				{ "TMGS_MAX", (int64)TMGS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
				{ "TMGS_Blur1.DisplayName", "Blur1" },
				{ "TMGS_Blur1.ToolTip", "Blur further (useful for image based reflections)." },
				{ "TMGS_Blur2.DisplayName", "Blur2" },
				{ "TMGS_Blur3.DisplayName", "Blur3" },
				{ "TMGS_Blur4.DisplayName", "Blur4" },
				{ "TMGS_Blur5.DisplayName", "Blur5" },
				{ "TMGS_FromTextureGroup.DisplayName", "FromTextureGroup" },
				{ "TMGS_FromTextureGroup.ToolTip", "Default for the \"texture\"." },
				{ "TMGS_LeaveExistingMips.DisplayName", "LeaveExistingMips" },
				{ "TMGS_LeaveExistingMips.ToolTip", "Do not touch existing mip chain as it contains generated data." },
				{ "TMGS_NoMipmaps.DisplayName", "NoMipmaps" },
				{ "TMGS_Sharpen0.DisplayName", "Sharpen0" },
				{ "TMGS_Sharpen0.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen1.DisplayName", "Sharpen1" },
				{ "TMGS_Sharpen1.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen10.DisplayName", "Sharpen10" },
				{ "TMGS_Sharpen10.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen2.DisplayName", "Sharpen2" },
				{ "TMGS_Sharpen2.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen3.DisplayName", "Sharpen3" },
				{ "TMGS_Sharpen3.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen4.DisplayName", "Sharpen4" },
				{ "TMGS_Sharpen4.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen5.DisplayName", "Sharpen5" },
				{ "TMGS_Sharpen5.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen6.DisplayName", "Sharpen6" },
				{ "TMGS_Sharpen6.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen7.DisplayName", "Sharpen7" },
				{ "TMGS_Sharpen7.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen8.DisplayName", "Sharpen8" },
				{ "TMGS_Sharpen8.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_Sharpen9.DisplayName", "Sharpen9" },
				{ "TMGS_Sharpen9.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
				{ "TMGS_SimpleAverage.DisplayName", "SimpleAverage" },
				{ "TMGS_SimpleAverage.ToolTip", "2x2 average, default for the \"texture group\"." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"TextureMipGenSettings",
				"TextureMipGenSettings",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* TextureGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureGroup, Z_Construct_UPackage__Script_Engine(), TEXT("TextureGroup"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureGroup>()
	{
		return TextureGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_TextureGroup(TextureGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("TextureGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_TextureGroup_Hash() { return 3875218971U; }
	UEnum* Z_Construct_UEnum_Engine_TextureGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("TextureGroup"), 0, Get_Z_Construct_UEnum_Engine_TextureGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TEXTUREGROUP_World", (int64)TEXTUREGROUP_World },
				{ "TEXTUREGROUP_WorldNormalMap", (int64)TEXTUREGROUP_WorldNormalMap },
				{ "TEXTUREGROUP_WorldSpecular", (int64)TEXTUREGROUP_WorldSpecular },
				{ "TEXTUREGROUP_Character", (int64)TEXTUREGROUP_Character },
				{ "TEXTUREGROUP_CharacterNormalMap", (int64)TEXTUREGROUP_CharacterNormalMap },
				{ "TEXTUREGROUP_CharacterSpecular", (int64)TEXTUREGROUP_CharacterSpecular },
				{ "TEXTUREGROUP_Weapon", (int64)TEXTUREGROUP_Weapon },
				{ "TEXTUREGROUP_WeaponNormalMap", (int64)TEXTUREGROUP_WeaponNormalMap },
				{ "TEXTUREGROUP_WeaponSpecular", (int64)TEXTUREGROUP_WeaponSpecular },
				{ "TEXTUREGROUP_Vehicle", (int64)TEXTUREGROUP_Vehicle },
				{ "TEXTUREGROUP_VehicleNormalMap", (int64)TEXTUREGROUP_VehicleNormalMap },
				{ "TEXTUREGROUP_VehicleSpecular", (int64)TEXTUREGROUP_VehicleSpecular },
				{ "TEXTUREGROUP_Cinematic", (int64)TEXTUREGROUP_Cinematic },
				{ "TEXTUREGROUP_Effects", (int64)TEXTUREGROUP_Effects },
				{ "TEXTUREGROUP_EffectsNotFiltered", (int64)TEXTUREGROUP_EffectsNotFiltered },
				{ "TEXTUREGROUP_Skybox", (int64)TEXTUREGROUP_Skybox },
				{ "TEXTUREGROUP_UI", (int64)TEXTUREGROUP_UI },
				{ "TEXTUREGROUP_Lightmap", (int64)TEXTUREGROUP_Lightmap },
				{ "TEXTUREGROUP_RenderTarget", (int64)TEXTUREGROUP_RenderTarget },
				{ "TEXTUREGROUP_MobileFlattened", (int64)TEXTUREGROUP_MobileFlattened },
				{ "TEXTUREGROUP_ProcBuilding_Face", (int64)TEXTUREGROUP_ProcBuilding_Face },
				{ "TEXTUREGROUP_ProcBuilding_LightMap", (int64)TEXTUREGROUP_ProcBuilding_LightMap },
				{ "TEXTUREGROUP_Shadowmap", (int64)TEXTUREGROUP_Shadowmap },
				{ "TEXTUREGROUP_ColorLookupTable", (int64)TEXTUREGROUP_ColorLookupTable },
				{ "TEXTUREGROUP_Terrain_Heightmap", (int64)TEXTUREGROUP_Terrain_Heightmap },
				{ "TEXTUREGROUP_Terrain_Weightmap", (int64)TEXTUREGROUP_Terrain_Weightmap },
				{ "TEXTUREGROUP_Bokeh", (int64)TEXTUREGROUP_Bokeh },
				{ "TEXTUREGROUP_IESLightProfile", (int64)TEXTUREGROUP_IESLightProfile },
				{ "TEXTUREGROUP_Pixels2D", (int64)TEXTUREGROUP_Pixels2D },
				{ "TEXTUREGROUP_HierarchicalLOD", (int64)TEXTUREGROUP_HierarchicalLOD },
				{ "TEXTUREGROUP_Impostor", (int64)TEXTUREGROUP_Impostor },
				{ "TEXTUREGROUP_ImpostorNormalDepth", (int64)TEXTUREGROUP_ImpostorNormalDepth },
				{ "TEXTUREGROUP_Project01", (int64)TEXTUREGROUP_Project01 },
				{ "TEXTUREGROUP_Project02", (int64)TEXTUREGROUP_Project02 },
				{ "TEXTUREGROUP_Project03", (int64)TEXTUREGROUP_Project03 },
				{ "TEXTUREGROUP_Project04", (int64)TEXTUREGROUP_Project04 },
				{ "TEXTUREGROUP_Project05", (int64)TEXTUREGROUP_Project05 },
				{ "TEXTUREGROUP_Project06", (int64)TEXTUREGROUP_Project06 },
				{ "TEXTUREGROUP_Project07", (int64)TEXTUREGROUP_Project07 },
				{ "TEXTUREGROUP_Project08", (int64)TEXTUREGROUP_Project08 },
				{ "TEXTUREGROUP_Project09", (int64)TEXTUREGROUP_Project09 },
				{ "TEXTUREGROUP_Project10", (int64)TEXTUREGROUP_Project10 },
				{ "TEXTUREGROUP_MAX", (int64)TEXTUREGROUP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
				{ "TEXTUREGROUP_Bokeh.DisplayName", "ini:Bokeh" },
				{ "TEXTUREGROUP_Bokeh.ToolTip", "Using this TextureGroup triggers special mip map generation code only useful for the BokehDOF post process." },
				{ "TEXTUREGROUP_Character.DisplayName", "ini:Character" },
				{ "TEXTUREGROUP_CharacterNormalMap.DisplayName", "ini:CharacterNormalMap" },
				{ "TEXTUREGROUP_CharacterSpecular.DisplayName", "ini:CharacterSpecular" },
				{ "TEXTUREGROUP_Cinematic.DisplayName", "ini:Cinematic" },
				{ "TEXTUREGROUP_ColorLookupTable.DisplayName", "ini:ColorLookupTable" },
				{ "TEXTUREGROUP_ColorLookupTable.ToolTip", "No compression, no mips." },
				{ "TEXTUREGROUP_Effects.DisplayName", "ini:Effects" },
				{ "TEXTUREGROUP_EffectsNotFiltered.DisplayName", "ini:EffectsNotFiltered" },
				{ "TEXTUREGROUP_HierarchicalLOD.DisplayName", "ini:Hierarchical LOD" },
				{ "TEXTUREGROUP_HierarchicalLOD.ToolTip", "Hierarchical LOD generated textures" },
				{ "TEXTUREGROUP_IESLightProfile.DisplayName", "ini:IESLightProfile" },
				{ "TEXTUREGROUP_IESLightProfile.ToolTip", "No compression, created on import of a .IES file." },
				{ "TEXTUREGROUP_Impostor.DisplayName", "ini:Impostor Color" },
				{ "TEXTUREGROUP_Impostor.ToolTip", "Impostor Color Textures" },
				{ "TEXTUREGROUP_ImpostorNormalDepth.DisplayName", "ini:Impostor Normal and Depth" },
				{ "TEXTUREGROUP_ImpostorNormalDepth.ToolTip", "Impostor Normal and Depth, use default compression" },
				{ "TEXTUREGROUP_Lightmap.DisplayName", "ini:Lightmap" },
				{ "TEXTUREGROUP_MobileFlattened.DisplayName", "ini:MobileFlattened" },
				{ "TEXTUREGROUP_Pixels2D.DisplayName", "ini:2D Pixels (unfiltered)" },
				{ "TEXTUREGROUP_Pixels2D.ToolTip", "Non-filtered, useful for 2D rendering." },
				{ "TEXTUREGROUP_ProcBuilding_Face.DisplayName", "ini:ProcBuilding_Face" },
				{ "TEXTUREGROUP_ProcBuilding_Face.ToolTip", "Obsolete - kept for backwards compatibility." },
				{ "TEXTUREGROUP_ProcBuilding_LightMap.DisplayName", "ini:ProcBuilding_LightMap" },
				{ "TEXTUREGROUP_ProcBuilding_LightMap.ToolTip", "Obsolete - kept for backwards compatibility." },
				{ "TEXTUREGROUP_Project01.DisplayName", "ini:Project Group 01" },
				{ "TEXTUREGROUP_Project01.ToolTip", "Project specific group, rename in Engine.ini, [EnumRemap] TEXTUREGROUP_Project**.DisplayName=My Fun Group" },
				{ "TEXTUREGROUP_Project02.DisplayName", "ini:Project Group 02" },
				{ "TEXTUREGROUP_Project03.DisplayName", "ini:Project Group 03" },
				{ "TEXTUREGROUP_Project04.DisplayName", "ini:Project Group 04" },
				{ "TEXTUREGROUP_Project05.DisplayName", "ini:Project Group 05" },
				{ "TEXTUREGROUP_Project06.DisplayName", "ini:Project Group 06" },
				{ "TEXTUREGROUP_Project07.DisplayName", "ini:Project Group 07" },
				{ "TEXTUREGROUP_Project08.DisplayName", "ini:Project Group 08" },
				{ "TEXTUREGROUP_Project09.DisplayName", "ini:Project Group 09" },
				{ "TEXTUREGROUP_Project10.DisplayName", "ini:Project Group 10" },
				{ "TEXTUREGROUP_RenderTarget.DisplayName", "ini:RenderTarget" },
				{ "TEXTUREGROUP_Shadowmap.DisplayName", "ini:Shadowmap" },
				{ "TEXTUREGROUP_Skybox.DisplayName", "ini:Skybox" },
				{ "TEXTUREGROUP_Terrain_Heightmap.DisplayName", "ini:Terrain_Heightmap" },
				{ "TEXTUREGROUP_Terrain_Weightmap.DisplayName", "ini:Terrain_Weightmap" },
				{ "TEXTUREGROUP_UI.DisplayName", "ini:UI" },
				{ "TEXTUREGROUP_Vehicle.DisplayName", "ini:Vehicle" },
				{ "TEXTUREGROUP_VehicleNormalMap.DisplayName", "ini:VehicleNormalMap" },
				{ "TEXTUREGROUP_VehicleSpecular.DisplayName", "ini:VehicleSpecular" },
				{ "TEXTUREGROUP_Weapon.DisplayName", "ini:Weapon" },
				{ "TEXTUREGROUP_WeaponNormalMap.DisplayName", "ini:WeaponNormalMap" },
				{ "TEXTUREGROUP_WeaponSpecular.DisplayName", "ini:WeaponSpecular" },
				{ "TEXTUREGROUP_World.DisplayName", "ini:World" },
				{ "TEXTUREGROUP_WorldNormalMap.DisplayName", "ini:WorldNormalMap" },
				{ "TEXTUREGROUP_WorldSpecular.DisplayName", "ini:WorldSpecular" },
				{ "ToolTip", "@warning: if this is changed:\n    update BaseEngine.ini [SystemSettings]\n    you might have to update the update Game's DefaultEngine.ini [SystemSettings]\n    order and actual name can never change (order is important!)\n\nTEXTUREGROUP_Cinematic: should be used for Cinematics which will be baked out\n                        and want to have the highest settings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"TextureGroup",
				"TextureGroup",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
