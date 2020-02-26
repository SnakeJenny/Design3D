// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceBasePropertyOverrides() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
// End Cross Module References
class UScriptStruct* FMaterialInstanceBasePropertyOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceBasePropertyOverrides"), sizeof(FMaterialInstanceBasePropertyOverrides), Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialInstanceBasePropertyOverrides>()
{
	return FMaterialInstanceBasePropertyOverrides::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialInstanceBasePropertyOverrides(FMaterialInstanceBasePropertyOverrides::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialInstanceBasePropertyOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialInstanceBasePropertyOverrides")),new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialInstanceBasePropertyOverrides;
	struct Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[];
#endif
		static void NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[];
#endif
		static void NewProp_DitheredLODTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[];
#endif
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TwoSided_MetaData[];
#endif
		static void NewProp_bOverride_TwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[];
#endif
		static void NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CastDynamicShadowAsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DitheredLODTransition_MetaData[];
#endif
		static void NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DitheredLODTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ShadingModel_MetaData[];
#endif
		static void NewProp_bOverride_ShadingModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ShadingModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlendMode_MetaData[];
#endif
		static void NewProp_bOverride_BlendMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_OpacityMaskClipValue_MetaData[];
#endif
		static void NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_OpacityMaskClipValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Properties from the base material that can be overridden in material instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceBasePropertyOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_OpacityMaskClipValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue = { "OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, OpacityMaskClipValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_ShadingModel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The shading model" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_BlendMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "The blend mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceBasePropertyOverrides, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_CastShadowAsMasked" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Whether the material should cast shadows as masked even though it has a translucent blend mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bCastDynamicShadowAsMasked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked = { "bCastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_DitheredLODTransition" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Whether the material should support a dithered LOD transition when used with the foliage system." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->DitheredLODTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "editcondition", "bOverride_TwoSided" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->TwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the two sided property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_TwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided = { "bOverride_TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of whether to shadow using masked opacity on translucent materials." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_CastDynamicShadowAsMasked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked = { "bOverride_CastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the dithered LOD transition property." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_DitheredLODTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition = { "bOverride_DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the shading model." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_ShadingModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel = { "bOverride_ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the blend mode." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_BlendMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode = { "bOverride_BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceBasePropertyOverrides.h" },
		{ "ToolTip", "Enables override of the opacity mask clip value." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit(void* Obj)
	{
		((FMaterialInstanceBasePropertyOverrides*)Obj)->bOverride_OpacityMaskClipValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue = { "bOverride_OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialInstanceBasePropertyOverrides), &Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_OpacityMaskClipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_ShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bCastDynamicShadowAsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_DitheredLODTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_TwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_TwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_CastDynamicShadowAsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_DitheredLODTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_ShadingModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::NewProp_bOverride_OpacityMaskClipValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialInstanceBasePropertyOverrides",
		sizeof(FMaterialInstanceBasePropertyOverrides),
		alignof(FMaterialInstanceBasePropertyOverrides),
		Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialInstanceBasePropertyOverrides"), sizeof(FMaterialInstanceBasePropertyOverrides), Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides_Hash() { return 2974482224U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
