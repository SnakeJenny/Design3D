// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSceneTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneTexture() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneTextureId();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ESceneTextureId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESceneTextureId, Z_Construct_UPackage__Script_Engine(), TEXT("ESceneTextureId"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESceneTextureId>()
	{
		return ESceneTextureId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneTextureId(ESceneTextureId_StaticEnum, TEXT("/Script/Engine"), TEXT("ESceneTextureId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESceneTextureId_Hash() { return 1238680660U; }
	UEnum* Z_Construct_UEnum_Engine_ESceneTextureId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneTextureId"), 0, Get_Z_Construct_UEnum_Engine_ESceneTextureId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PPI_SceneColor", (int64)PPI_SceneColor },
				{ "PPI_SceneDepth", (int64)PPI_SceneDepth },
				{ "PPI_DiffuseColor", (int64)PPI_DiffuseColor },
				{ "PPI_SpecularColor", (int64)PPI_SpecularColor },
				{ "PPI_SubsurfaceColor", (int64)PPI_SubsurfaceColor },
				{ "PPI_BaseColor", (int64)PPI_BaseColor },
				{ "PPI_Specular", (int64)PPI_Specular },
				{ "PPI_Metallic", (int64)PPI_Metallic },
				{ "PPI_WorldNormal", (int64)PPI_WorldNormal },
				{ "PPI_SeparateTranslucency", (int64)PPI_SeparateTranslucency },
				{ "PPI_Opacity", (int64)PPI_Opacity },
				{ "PPI_Roughness", (int64)PPI_Roughness },
				{ "PPI_MaterialAO", (int64)PPI_MaterialAO },
				{ "PPI_CustomDepth", (int64)PPI_CustomDepth },
				{ "PPI_PostProcessInput0", (int64)PPI_PostProcessInput0 },
				{ "PPI_PostProcessInput1", (int64)PPI_PostProcessInput1 },
				{ "PPI_PostProcessInput2", (int64)PPI_PostProcessInput2 },
				{ "PPI_PostProcessInput3", (int64)PPI_PostProcessInput3 },
				{ "PPI_PostProcessInput4", (int64)PPI_PostProcessInput4 },
				{ "PPI_PostProcessInput5", (int64)PPI_PostProcessInput5 },
				{ "PPI_PostProcessInput6", (int64)PPI_PostProcessInput6 },
				{ "PPI_DecalMask", (int64)PPI_DecalMask },
				{ "PPI_ShadingModelColor", (int64)PPI_ShadingModelColor },
				{ "PPI_ShadingModelID", (int64)PPI_ShadingModelID },
				{ "PPI_AmbientOcclusion", (int64)PPI_AmbientOcclusion },
				{ "PPI_CustomStencil", (int64)PPI_CustomStencil },
				{ "PPI_StoredBaseColor", (int64)PPI_StoredBaseColor },
				{ "PPI_StoredSpecular", (int64)PPI_StoredSpecular },
				{ "PPI_Velocity", (int64)PPI_Velocity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
				{ "PPI_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
				{ "PPI_AmbientOcclusion.ToolTip", "Ambient Occlusion, single channel" },
				{ "PPI_BaseColor.DisplayName", "BaseColor (for lighting)" },
				{ "PPI_BaseColor.ToolTip", "Material base, RGB color (GBuffer), can be modified on read by the ShadingModel, consider StoredBasedColor" },
				{ "PPI_CustomDepth.DisplayName", "CustomDepth" },
				{ "PPI_CustomDepth.ToolTip", "Scene depth, single channel, contains the linear depth of the opaque objects rendered with CustomDepth (mesh property)" },
				{ "PPI_CustomStencil.DisplayName", "CustomStencil" },
				{ "PPI_CustomStencil.ToolTip", "Scene stencil, contains CustomStencil mesh property of the opaque objects rendered with CustomDepth" },
				{ "PPI_DecalMask.DisplayName", "Decal Mask" },
				{ "PPI_DecalMask.ToolTip", "Decal Mask, single bit (was moved to stencil for better performance, not accessible at the moment)" },
				{ "PPI_DiffuseColor.DisplayName", "DiffuseColor" },
				{ "PPI_DiffuseColor.ToolTip", "Material diffuse, RGB color (computed from GBuffer)" },
				{ "PPI_MaterialAO.DisplayName", "MaterialAO" },
				{ "PPI_MaterialAO.ToolTip", "Material ambient occlusion, single channel (GBuffer)" },
				{ "PPI_Metallic.DisplayName", "Metallic" },
				{ "PPI_Metallic.ToolTip", "Material metallic, single channel (GBuffer)" },
				{ "PPI_Opacity.DisplayName", "Opacity" },
				{ "PPI_Opacity.ToolTip", "Material opacity, single channel (GBuffer)" },
				{ "PPI_PostProcessInput0.DisplayName", "PostProcessInput0" },
				{ "PPI_PostProcessInput0.ToolTip", "Input #0 of this postprocess pass, usually the only one hooked up" },
				{ "PPI_PostProcessInput1.DisplayName", "PostProcessInput1" },
				{ "PPI_PostProcessInput1.ToolTip", "Input #1 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput2.DisplayName", "PostProcessInput2" },
				{ "PPI_PostProcessInput2.ToolTip", "Input #2 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput3.DisplayName", "PostProcessInput3" },
				{ "PPI_PostProcessInput3.ToolTip", "Input #3 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput4.DisplayName", "PostProcessInput4" },
				{ "PPI_PostProcessInput4.ToolTip", "Input #4 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput5.DisplayName", "PostProcessInput5" },
				{ "PPI_PostProcessInput5.ToolTip", "Input #5 of this postprocess pass, usually not used" },
				{ "PPI_PostProcessInput6.DisplayName", "PostProcessInput6" },
				{ "PPI_PostProcessInput6.ToolTip", "Input #6 of this postprocess pass, usually not used" },
				{ "PPI_Roughness.DisplayName", "Roughness" },
				{ "PPI_Roughness.ToolTip", "Material roughness, single channel (GBuffer)" },
				{ "PPI_SceneColor.DisplayName", "SceneColor" },
				{ "PPI_SceneColor.ToolTip", "Scene color, normal post process passes should use PostProcessInput0" },
				{ "PPI_SceneDepth.DisplayName", "SceneDepth" },
				{ "PPI_SceneDepth.ToolTip", "Scene depth, single channel, contains the linear depth of the opaque objects" },
				{ "PPI_SeparateTranslucency.DisplayName", "SeparateTranslucency" },
				{ "PPI_SeparateTranslucency.ToolTip", "Not yet supported" },
				{ "PPI_ShadingModelColor.DisplayName", "Shading Model Color" },
				{ "PPI_ShadingModelColor.ToolTip", "Shading model" },
				{ "PPI_ShadingModelID.DisplayName", "Shading Model ID" },
				{ "PPI_ShadingModelID.ToolTip", "Shading model ID" },
				{ "PPI_Specular.DisplayName", "Specular (for lighting)" },
				{ "PPI_Specular.ToolTip", "Material specular, single channel (GBuffer), can be modified on read by the ShadingModel, consider StoredSpecular" },
				{ "PPI_SpecularColor.DisplayName", "SpecularColor" },
				{ "PPI_SpecularColor.ToolTip", "Material specular, RGB color (computed from GBuffer)" },
				{ "PPI_StoredBaseColor.DisplayName", "BaseColor (as stored in GBuffer)" },
				{ "PPI_StoredBaseColor.ToolTip", "Material base, RGB color (GBuffer)" },
				{ "PPI_StoredSpecular.DisplayName", "Specular (as stored in GBuffer)" },
				{ "PPI_StoredSpecular.ToolTip", "Material specular, single channel (GBuffer)" },
				{ "PPI_SubsurfaceColor.DisplayName", "SubsurfaceColor" },
				{ "PPI_SubsurfaceColor.ToolTip", "Material subsurface, RGB color (GBuffer, only for some ShadingModels)" },
				{ "PPI_Velocity.DisplayName", "Velocity" },
				{ "PPI_Velocity.ToolTip", "Scene Velocity" },
				{ "PPI_WorldNormal.DisplayName", "WorldNormal" },
				{ "PPI_WorldNormal.ToolTip", "Normal, RGB in -1..1 range, not normalized (GBuffer)" },
				{ "ToolTip", "like EPassInputId but can expose more e.g. GBuffer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESceneTextureId",
				"ESceneTextureId",
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
	void UMaterialExpressionSceneTexture::StaticRegisterNativesUMaterialExpressionSceneTexture()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture_NoRegister()
	{
		return UMaterialExpressionSceneTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFiltered_MetaData[];
#endif
		static void NewProp_bFiltered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFiltered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTextureId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SceneTextureId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneTexture.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "DisplayName", "Filtered" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ToolTip", "Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit(void* Obj)
	{
		((UMaterialExpressionSceneTexture*)Obj)->bFiltered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered = { "bFiltered", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionSceneTexture), &Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData[] = {
		{ "Category", "UMaterialExpressionSceneTexture" },
		{ "DisplayName", "Scene Texture Id" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "ToolTip", "Which scene texture (screen aligned texture) we want to make a lookup into" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId = { "SceneTextureId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, SceneTextureId), Z_Construct_UEnum_Engine_ESceneTextureId, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneTexture.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSceneTexture, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_bFiltered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_SceneTextureId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::NewProp_Coordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams = {
		&UMaterialExpressionSceneTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSceneTexture, 2938649748);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneTexture>()
	{
		return UMaterialExpressionSceneTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSceneTexture(Z_Construct_UClass_UMaterialExpressionSceneTexture, &UMaterialExpressionSceneTexture::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSceneTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
