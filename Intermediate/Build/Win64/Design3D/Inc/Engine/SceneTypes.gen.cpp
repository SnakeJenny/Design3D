// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SceneTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static UEnum* EMaterialProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialProperty"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialProperty>()
	{
		return EMaterialProperty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialProperty(EMaterialProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialProperty_Hash() { return 1995093446U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialProperty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MP_EmissiveColor", (int64)MP_EmissiveColor },
				{ "MP_Opacity", (int64)MP_Opacity },
				{ "MP_OpacityMask", (int64)MP_OpacityMask },
				{ "MP_DiffuseColor", (int64)MP_DiffuseColor },
				{ "MP_SpecularColor", (int64)MP_SpecularColor },
				{ "MP_BaseColor", (int64)MP_BaseColor },
				{ "MP_Metallic", (int64)MP_Metallic },
				{ "MP_Specular", (int64)MP_Specular },
				{ "MP_Roughness", (int64)MP_Roughness },
				{ "MP_Normal", (int64)MP_Normal },
				{ "MP_WorldPositionOffset", (int64)MP_WorldPositionOffset },
				{ "MP_WorldDisplacement", (int64)MP_WorldDisplacement },
				{ "MP_TessellationMultiplier", (int64)MP_TessellationMultiplier },
				{ "MP_SubsurfaceColor", (int64)MP_SubsurfaceColor },
				{ "MP_CustomData0", (int64)MP_CustomData0 },
				{ "MP_CustomData1", (int64)MP_CustomData1 },
				{ "MP_AmbientOcclusion", (int64)MP_AmbientOcclusion },
				{ "MP_Refraction", (int64)MP_Refraction },
				{ "MP_CustomizedUVs0", (int64)MP_CustomizedUVs0 },
				{ "MP_CustomizedUVs1", (int64)MP_CustomizedUVs1 },
				{ "MP_CustomizedUVs2", (int64)MP_CustomizedUVs2 },
				{ "MP_CustomizedUVs3", (int64)MP_CustomizedUVs3 },
				{ "MP_CustomizedUVs4", (int64)MP_CustomizedUVs4 },
				{ "MP_CustomizedUVs5", (int64)MP_CustomizedUVs5 },
				{ "MP_CustomizedUVs6", (int64)MP_CustomizedUVs6 },
				{ "MP_CustomizedUVs7", (int64)MP_CustomizedUVs7 },
				{ "MP_PixelDepthOffset", (int64)MP_PixelDepthOffset },
				{ "MP_MaterialAttributes", (int64)MP_MaterialAttributes },
				{ "MP_CustomOutput", (int64)MP_CustomOutput },
				{ "MP_MAX", (int64)MP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SceneTypes.h" },
				{ "MP_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "MP_BaseColor.DisplayName", "Diffuse" },
				{ "MP_BaseColor.ToolTip", "used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular" },
				{ "MP_CustomData0.Hidden", "" },
				{ "MP_CustomData1.Hidden", "" },
				{ "MP_CustomizedUVs0.Hidden", "" },
				{ "MP_CustomizedUVs1.Hidden", "" },
				{ "MP_CustomizedUVs2.Hidden", "" },
				{ "MP_CustomizedUVs3.Hidden", "" },
				{ "MP_CustomizedUVs4.Hidden", "" },
				{ "MP_CustomizedUVs5.Hidden", "" },
				{ "MP_CustomizedUVs6.Hidden", "" },
				{ "MP_CustomizedUVs7.Hidden", "" },
				{ "MP_CustomOutput.Hidden", "" },
				{ "MP_DiffuseColor.Hidden", "" },
				{ "MP_EmissiveColor.DisplayName", "Emissive" },
				{ "MP_MaterialAttributes.Hidden", "" },
				{ "MP_MaterialAttributes.ToolTip", "^^^ New material properties go above here ^^^^" },
				{ "MP_MAX.DisplayName", "None" },
				{ "MP_Metallic.DisplayName", "Metallic" },
				{ "MP_Normal.DisplayName", "Normal" },
				{ "MP_Opacity.DisplayName", "Opacity" },
				{ "MP_OpacityMask.DisplayName", "Opacity Mask" },
				{ "MP_PixelDepthOffset.Hidden", "" },
				{ "MP_Refraction.DisplayName", "Refraction" },
				{ "MP_Roughness.DisplayName", "Roughness " },
				{ "MP_Specular.DisplayName", "Specular" },
				{ "MP_SpecularColor.Hidden", "" },
				{ "MP_SpecularColor.ToolTip", "used in Lightmass, not exposed to user, computed from: BaseColor, Metallic" },
				{ "MP_SubsurfaceColor.DisplayName", "Subsurface" },
				{ "MP_TessellationMultiplier.Hidden", "" },
				{ "MP_WorldDisplacement.Hidden", "" },
				{ "MP_WorldPositionOffset.Hidden", "" },
				{ "ToolTip", "EMaterialProperty" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialProperty",
				"EMaterialProperty",
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
