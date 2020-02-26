// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Landscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscape() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralLayer();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeSetupErrors_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeSetupErrors"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeSetupErrors>()
	{
		return ELandscapeSetupErrors_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeSetupErrors(ELandscapeSetupErrors_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeSetupErrors"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Hash() { return 2302348438U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeSetupErrors"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LSE_None", (int64)LSE_None },
				{ "LSE_NoLandscapeInfo", (int64)LSE_NoLandscapeInfo },
				{ "LSE_CollsionXY", (int64)LSE_CollsionXY },
				{ "LSE_NoLayerInfo", (int64)LSE_NoLayerInfo },
				{ "LSE_MAX", (int64)LSE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LSE_CollsionXY.ToolTip", "There was already component with same X,Y." },
				{ "LSE_NoLandscapeInfo.ToolTip", "No Landscape Info available." },
				{ "LSE_NoLayerInfo.ToolTip", "No Layer Info, need to add proper layers." },
				{ "ModuleRelativePath", "Classes/Landscape.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeSetupErrors",
				"ELandscapeSetupErrors",
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
class UScriptStruct* FProceduralLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FProceduralLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralLayer, Z_Construct_UPackage__Script_Landscape(), TEXT("ProceduralLayer"), sizeof(FProceduralLayer), Get_Z_Construct_UScriptStruct_FProceduralLayer_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FProceduralLayer>()
{
	return FProceduralLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralLayer(FProceduralLayer::StaticStruct, TEXT("/Script/Landscape"), TEXT("ProceduralLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFProceduralLayer
{
	FScriptStruct_Landscape_StaticRegisterNativesFProceduralLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralLayer")),new UScriptStruct::TCppStructOps<FProceduralLayer>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFProceduralLayer;
	struct Z_Construct_UScriptStruct_FProceduralLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapBrushOrderIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapBrushOrderIndices;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_WeightmapBrushOrderIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapBrushOrderIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeightmapBrushOrderIndices;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_HeightmapBrushOrderIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Brushes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brushes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices = { "WeightmapBrushOrderIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayer, WeightmapBrushOrderIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices_Inner = { "WeightmapBrushOrderIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices = { "HeightmapBrushOrderIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayer, HeightmapBrushOrderIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices_Inner = { "HeightmapBrushOrderIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayer, Brushes), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayer, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((FProceduralLayer*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProceduralLayer), &Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_WeightmapBrushOrderIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_HeightmapBrushOrderIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Brushes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayer_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"ProceduralLayer",
		sizeof(FProceduralLayer),
		alignof(FProceduralLayer),
		Z_Construct_UScriptStruct_FProceduralLayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralLayer"), sizeof(FProceduralLayer), Get_Z_Construct_UScriptStruct_FProceduralLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralLayer_Hash() { return 1232303658U; }
class UScriptStruct* FLandscapeProceduralLayerBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeProceduralLayerBrush"), sizeof(FLandscapeProceduralLayerBrush), Get_Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeProceduralLayerBrush>()
{
	return FLandscapeProceduralLayerBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeProceduralLayerBrush(FLandscapeProceduralLayerBrush::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeProceduralLayerBrush"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeProceduralLayerBrush
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeProceduralLayerBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeProceduralLayerBrush")),new UScriptStruct::TCppStructOps<FLandscapeProceduralLayerBrush>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeProceduralLayerBrush;
	struct Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPCustomBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BPCustomBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeProceduralLayerBrush>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewProp_BPCustomBrush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewProp_BPCustomBrush = { "BPCustomBrush", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeProceduralLayerBrush, BPCustomBrush), Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewProp_BPCustomBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewProp_BPCustomBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::NewProp_BPCustomBrush,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeProceduralLayerBrush",
		sizeof(FLandscapeProceduralLayerBrush),
		alignof(FLandscapeProceduralLayerBrush),
		Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeProceduralLayerBrush"), sizeof(FLandscapeProceduralLayerBrush), Get_Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeProceduralLayerBrush_Hash() { return 3035903856U; }
	void ALandscape::StaticRegisterNativesALandscape()
	{
	}
	UClass* Z_Construct_UClass_ALandscape_NoRegister()
	{
		return ALandscape::StaticClass();
	}
	struct Z_Construct_UClass_ALandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeightmapRTList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapRTList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralContentUpdateFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ProceduralContentUpdateFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousExperimentalLandscapeProcedural_MetaData[];
#endif
		static void NewProp_PreviousExperimentalLandscapeProcedural_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviousExperimentalLandscapeProcedural;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProceduralLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralLayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Attachment Physics Debug Mobility" },
		{ "IncludePath", "Landscape.h" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, HeightmapRTList), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralContentUpdateFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralContentUpdateFlags = { "ProceduralContentUpdateFlags", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, ProceduralContentUpdateFlags), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralContentUpdateFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralContentUpdateFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->PreviousExperimentalLandscapeProcedural = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural = { "PreviousExperimentalLandscapeProcedural", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers = { "ProceduralLayers", nullptr, (EPropertyFlags)0x0010400800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, ProceduralLayers), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers_Inner = { "ProceduralLayers", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProceduralLayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralContentUpdateFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_PreviousExperimentalLandscapeProcedural,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_ProceduralLayers_Inner,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscape_Statics::ClassParams = {
		&ALandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscape_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscape, 1987011395);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscape>()
	{
		return ALandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscape(Z_Construct_UClass_ALandscape, &ALandscape::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
