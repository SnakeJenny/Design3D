// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeComponent.h"
#include "Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeComponent() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
class UScriptStruct* FLandscapeComponentMaterialOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeComponentMaterialOverride"), sizeof(FLandscapeComponentMaterialOverride), Get_Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeComponentMaterialOverride>()
{
	return FLandscapeComponentMaterialOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeComponentMaterialOverride(FLandscapeComponentMaterialOverride::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeComponentMaterialOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeComponentMaterialOverride
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeComponentMaterialOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeComponentMaterialOverride")),new UScriptStruct::TCppStructOps<FLandscapeComponentMaterialOverride>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeComponentMaterialOverride;
	struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeComponentMaterialOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, LODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeComponentMaterialOverride",
		sizeof(FLandscapeComponentMaterialOverride),
		alignof(FLandscapeComponentMaterialOverride),
		Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeComponentMaterialOverride"), sizeof(FLandscapeComponentMaterialOverride), Get_Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Hash() { return 3842623863U; }
class UScriptStruct* FWeightmapLayerAllocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapLayerAllocationInfo"), sizeof(FWeightmapLayerAllocationInfo), Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FWeightmapLayerAllocationInfo>()
{
	return FWeightmapLayerAllocationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightmapLayerAllocationInfo(FWeightmapLayerAllocationInfo::StaticStruct, TEXT("/Script/Landscape"), TEXT("WeightmapLayerAllocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo
{
	FScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightmapLayerAllocationInfo")),new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFWeightmapLayerAllocationInfo;
	struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Stores information about which weightmap texture and channel each layer is stored" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel = { "WeightmapTextureChannel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureChannel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex = { "WeightmapTextureIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"WeightmapLayerAllocationInfo",
		sizeof(FWeightmapLayerAllocationInfo),
		alignof(FWeightmapLayerAllocationInfo),
		Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightmapLayerAllocationInfo"), sizeof(FWeightmapLayerAllocationInfo), Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Hash() { return 1891711529U; }
class UScriptStruct* FLandscapeEditToolRenderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditToolRenderData"), sizeof(FLandscapeEditToolRenderData), Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeEditToolRenderData>()
{
	return FLandscapeEditToolRenderData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeEditToolRenderData(FLandscapeEditToolRenderData::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeEditToolRenderData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeEditToolRenderData")),new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditToolRenderData;
	struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelG_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugChannelR_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugChannelR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SelectedType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "FLandscapeEditToolRenderData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture = { "DataTexture", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB = { "DebugChannelB", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelB), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG = { "DebugChannelG", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelG), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR = { "DebugChannelR", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelR), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Component is selected" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType = { "SelectedType", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, SelectedType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the gizmo selection region..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the tool." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditToolRenderData, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeEditToolRenderData",
		sizeof(FLandscapeEditToolRenderData),
		alignof(FLandscapeEditToolRenderData),
		Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeEditToolRenderData"), sizeof(FLandscapeEditToolRenderData), Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Hash() { return 2801564570U; }
	void ULandscapeComponent::StaticRegisterNativesULandscapeComponent()
	{
		UClass* Class = ULandscapeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialInstanceDynamic", &ULandscapeComponent::execGetMaterialInstanceDynamic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics
	{
		struct LandscapeComponent_eventGetMaterialInstanceDynamic_Parms
		{
			int32 InIndex;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape material instance dynamic for this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "GetMaterialInstanceDynamic", sizeof(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms), Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister()
	{
		return ULandscapeComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileCombinationMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MobileCombinationMaterialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileCombinationMaterialInstances_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileWeightmapTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MobileWeightmapTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileWeightmapTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MobileMaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileMaterialInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MobileMaterialInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileBlendableLayerMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileBlendableLayerMask;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPerLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialPerLOD;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialPerLOD_Key_KeyProp;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_MaterialPerLOD_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileDataSourceHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MobileDataSourceHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditToolRenderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditToolRenderData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerWhitelist_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerWhitelist;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerWhitelist_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingLODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightingLODBias;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GIBakedBaseColorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GIBakedBaseColorTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedTextureMaterialGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedTextureMaterialGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEditingHeightmapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentEditingHeightmapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightmapScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapSubsectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightmapSubsectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightmapScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XYOffsetmapTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XYOffsetmapTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightmapTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapLayerAllocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightmapLayerAllocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndexToDisabledTessellationMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialIndexToDisabledTessellationMaterial;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_MaterialIndexToDisabledTessellationMaterial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndexToMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODIndexToMaterialIndex;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_LODIndexToMaterialIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstancesDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstancesDynamic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstancesDynamic_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideHoleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideHoleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubsections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic, "GetMaterialInstanceDynamic" }, // 3859729604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Collision Movement Rendering PrimitiveComponent Object Transform Mobility Mobility Trigger" },
		{ "IncludePath", "LandscapeComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Rendering|Material" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance = { "MobileCombinationMaterialInstance", nullptr, (EPropertyFlags)0x0010800820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The editor needs to save out the combination MIC we'll use for mobile,\n        because we cannot generate it at runtime for standalone PIE games" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0010800800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstances), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Generated weightmap textures used for ES2. The first entry is also used for the normal map.\nSerialized only when cooking or loading cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0010800000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileWeightmapTextures), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material interfaces used for mobile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0010800000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterfaces), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface = { "MobileMaterialInterface", nullptr, (EPropertyFlags)0x0010800020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterface_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileBlendableLayerMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "For ES2" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileBlendableLayerMask = { "MobileBlendableLayerMask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileBlendableLayerMask), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileBlendableLayerMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileBlendableLayerMask_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represent the chosen material for each LOD" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0010000800200000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialPerLOD), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp = { "MaterialPerLOD_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Hash of source for ES2 generated data. Used determine if we need to re-generate ES2 pixel data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash = { "MobileDataSourceHash", nullptr, (EPropertyFlags)0x0010000800200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MobileDataSourceHash), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Pointer to data shared with the render thread, used by the editor tools" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData = { "EditToolRenderData", nullptr, (EPropertyFlags)0x0010000c00202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, EditToolRenderData), Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers allowed to be painted on this component" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist = { "LayerWhitelist", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, LayerWhitelist), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist_Inner = { "LayerWhitelist", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when lighting buidling via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias = { "LightingLODBias", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, LightingLODBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData[] = {
		{ "Category", "BakedTextures" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Pre-baked Base Color texture for use by distance field GI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture = { "GIBakedBaseColorTexture", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, GIBakedBaseColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The Material Guid that used when baking, to detect material recompilations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid = { "BakedTextureMaterialGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, BakedTextureMaterialGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when rendering" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, LODBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Forced LOD level to use when rendering" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, ForcedLOD), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ClampMax", "4096" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "StaticLightingResolution overriding per component, default value 0 means no overriding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, StaticLightingResolution), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "EditCondition", "bOverrideBounds" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension = { "PositiveZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, PositiveZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "EditCondition", "bOverrideBounds" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension = { "NegativeZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, NegativeZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate simple collision" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel = { "SimpleCollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, SimpleCollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate collision" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel = { "CollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, CollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Legacy irrelevant lights" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, IrrelevantLights_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Uniquely identifies this component's built map data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightmap texture reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0040400000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CurrentEditingHeightmapTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightmap texture reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CurrentEditingHeightmapTexture = { "CurrentEditingHeightmapTexture", nullptr, (EPropertyFlags)0x0040400800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, CurrentEditingHeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CurrentEditingHeightmapTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CurrentEditingHeightmapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Unique ID for this component, used for caching during distributed lighting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Reference to associated collision component" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, CollisionComponent), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to Heightmap data from component local coordinates" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias = { "HeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, HeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "U or V offset into the weightmap for the first subsection, in texture UV space" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset = { "WeightmapSubsectionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapSubsectionOffset), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to component's weightmap data from component local coordinates" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias = { "WeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "XYOffsetmap texture reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture = { "XYOffsetmapTexture", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, XYOffsetmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Weightmap texture reference" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapTextures), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers, and the weightmap and channel they are stored" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, WeightmapLayerAllocations), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Mapping between Material Index to associated generated disabled Tessellation Material" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial = { "MaterialIndexToDisabledTessellationMaterial", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialIndexToDisabledTessellationMaterial), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial_Inner = { "MaterialIndexToDisabledTessellationMaterial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Mapping between LOD and Material Index" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, LODIndexToMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0010400000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstancesDynamic), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0010400000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstances), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, MaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterials), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial = { "OverrideHoleMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of subsections in X or Y axis" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections = { "NumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, NumSubsections), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, SubsectionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Total number of quads for this component, has to be >0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, ComponentSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Y offset from global components grid origin (in quads)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, SectionBaseY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "X offset from global components grid origin (in quads)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeComponent, SectionBaseX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileBlendableLayerMask,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerWhitelist_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CurrentEditingHeightmapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialIndexToDisabledTessellationMaterial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams = {
		&ULandscapeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeComponent, 2893093655);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeComponent>()
	{
		return ULandscapeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeComponent(Z_Construct_UClass_ULandscapeComponent, &ULandscapeComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
