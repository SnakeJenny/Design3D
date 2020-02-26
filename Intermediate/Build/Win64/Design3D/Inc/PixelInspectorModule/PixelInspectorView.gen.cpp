// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelInspector/Private/PixelInspectorView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelInspectorView() {}
// Cross Module References
	PIXELINSPECTORMODULE_API UClass* Z_Construct_UClass_UPixelInspectorView_NoRegister();
	PIXELINSPECTORMODULE_API UClass* Z_Construct_UClass_UPixelInspectorView();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PixelInspectorModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
// End Cross Module References
	void UPixelInspectorView::StaticRegisterNativesUPixelInspectorView()
	{
	}
	UClass* Z_Construct_UClass_UPixelInspectorView_NoRegister()
	{
		return UPixelInspectorView::StaticClass();
	}
	struct Z_Construct_UClass_UPixelInspectorView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrisDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IrisDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrisMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IrisMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyeTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cloth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cloth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackLit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackLit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClearCoatRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClearCoat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSurfaceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSurfaceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectIrradiance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectIrradiance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectiveOutputMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectiveOutputMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerObjectGBufferData_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerObjectGBufferData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HdrColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HdrColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Luminance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Luminance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreExposure_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreExposure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelInspectorView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelInspectorModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PixelInspectorView.h" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance = { "IrisDistance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, IrisDistance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD B Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask = { "IrisMask", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, IrisMask), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RG Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent = { "EyeTangent", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, EyeTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth = { "Cloth", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Cloth), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD B Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit = { "BackLit", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, BackLit), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RG Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD G Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, ClearCoatRoughness), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD R Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, ClearCoat), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD A Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Opacity), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RGB Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, SubsurfaceProfile), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData[] = {
		{ "Category", "GBufferD" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferD RGB Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor = { "SubSurfaceColor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, SubSurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC A Channel encoded with IndirectIrradiance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, AmbientOcclusion), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC A Channel encoded with AmbientOcclusion." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance = { "IndirectIrradiance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, IndirectIrradiance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Category", "GBufferC" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferC RGB Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, BaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB A Channel encoded with ShadingModel." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask = { "SelectiveOutputMask", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, SelectiveOutputMask), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB A Channel encoded with SelectiveOutputMask." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel = { "MaterialShadingModel", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, MaterialShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB B Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Roughness), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB G Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Specular), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData[] = {
		{ "Category", "GBufferB" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferB R Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Metallic), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData[] = {
		{ "Category", "GBufferA" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferA A Channel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData = { "PerObjectGBufferData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, PerObjectGBufferData), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "GBufferA" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "From the GBufferA RGB Channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData[] = {
		{ "Category", "HDR" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR RGB Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor = { "HdrColor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, HdrColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData[] = {
		{ "Category", "HDR" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR Luminance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance = { "Luminance", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, Luminance), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData[] = {
		{ "Category", "SceneColor" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR Luminance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure = { "PreExposure", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, PreExposure), METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData[] = {
		{ "Category", "SceneColor" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "HDR RGB Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor = { "SceneColor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, SceneColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData[] = {
		{ "Category", "FinalColor" },
		{ "ModuleRelativePath", "Private/PixelInspectorView.h" },
		{ "ToolTip", "Final RGBA 8bits Color after tone mapping, default value is black." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor = { "FinalColor", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPixelInspectorView, FinalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IrisMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_EyeTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Cloth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BackLit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_WorldNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoatRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_ClearCoat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Opacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubsurfaceProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SubSurfaceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_AmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_IndirectIrradiance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_BaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SelectiveOutputMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_MaterialShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Roughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Specular,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Metallic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PerObjectGBufferData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_HdrColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_Luminance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_PreExposure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_SceneColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelInspectorView_Statics::NewProp_FinalColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelInspectorView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelInspectorView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPixelInspectorView_Statics::ClassParams = {
		&UPixelInspectorView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPixelInspectorView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelInspectorView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPixelInspectorView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPixelInspectorView, 219135552);
	template<> PIXELINSPECTORMODULE_API UClass* StaticClass<UPixelInspectorView>()
	{
		return UPixelInspectorView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPixelInspectorView(Z_Construct_UClass_UPixelInspectorView, &UPixelInspectorView::StaticClass, TEXT("/Script/PixelInspectorModule"), TEXT("UPixelInspectorView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelInspectorView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
