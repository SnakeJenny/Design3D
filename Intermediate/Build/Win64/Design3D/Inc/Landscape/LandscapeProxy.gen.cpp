// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeProxy() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralLayerData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FRenderDataPerHeightmap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerStruct();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeLODFalloff_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLODFalloff"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLODFalloff::Type>()
	{
		return ELandscapeLODFalloff_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLODFalloff(ELandscapeLODFalloff_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLODFalloff"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Hash() { return 1720415506U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLODFalloff()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLODFalloff"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLODFalloff_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLODFalloff::Linear", (int64)ELandscapeLODFalloff::Linear },
				{ "ELandscapeLODFalloff::SquareRoot", (int64)ELandscapeLODFalloff::SquareRoot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Linear.DisplayName", "Linear" },
				{ "Linear.ToolTip", "Default mode." },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "SquareRoot.DisplayName", "Square Root" },
				{ "SquareRoot.ToolTip", "Square Root give more natural transition, and also keep the same LOD." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeLODFalloff",
				"ELandscapeLODFalloff::Type",
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
	static UEnum* ELandscapeLayerDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerDisplayMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>()
	{
		return ELandscapeLayerDisplayMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLayerDisplayMode(ELandscapeLayerDisplayMode_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLayerDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Hash() { return 580697666U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLayerDisplayMode"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLayerDisplayMode::Default", (int64)ELandscapeLayerDisplayMode::Default },
				{ "ELandscapeLayerDisplayMode::Alphabetical", (int64)ELandscapeLayerDisplayMode::Alphabetical },
				{ "ELandscapeLayerDisplayMode::UserSpecific", (int64)ELandscapeLayerDisplayMode::UserSpecific },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alphabetical.ToolTip", "Alphabetical sorting display mode" },
				{ "Default.ToolTip", "Material sorting display mode" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "UserSpecific.ToolTip", "User specific sorting display mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeLayerDisplayMode",
				"ELandscapeLayerDisplayMode",
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
	static UEnum* ELandscapeLayerPaintingRestriction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerPaintingRestriction"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>()
	{
		return ELandscapeLayerPaintingRestriction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeLayerPaintingRestriction(ELandscapeLayerPaintingRestriction_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeLayerPaintingRestriction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Hash() { return 648897086U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeLayerPaintingRestriction"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeLayerPaintingRestriction::None", (int64)ELandscapeLayerPaintingRestriction::None },
				{ "ELandscapeLayerPaintingRestriction::UseMaxLayers", (int64)ELandscapeLayerPaintingRestriction::UseMaxLayers },
				{ "ELandscapeLayerPaintingRestriction::ExistingOnly", (int64)ELandscapeLayerPaintingRestriction::ExistingOnly },
				{ "ELandscapeLayerPaintingRestriction::UseComponentWhitelist", (int64)ELandscapeLayerPaintingRestriction::UseComponentWhitelist },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExistingOnly.DisplayName", "Existing Layers Only" },
				{ "ExistingOnly.ToolTip", "Restricts painting to only components that already have this layer." },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
				{ "None.DisplayName", "None" },
				{ "None.ToolTip", "No restriction, can paint anywhere (default)." },
				{ "ToolTip", "this is only here because putting it in LandscapeEditorObject.h (where it belongs)\nresults in Engine being dependent on LandscapeEditor, as the actual landscape editing\ncode (e.g. LandscapeEdit.h) is in /Engine/ for some reason..." },
				{ "UseComponentWhitelist.DisplayName", "Component Whitelist" },
				{ "UseComponentWhitelist.ToolTip", "Restricts painting to only components that have this layer in their whitelist." },
				{ "UseMaxLayers.DisplayName", "Limit Layer Count" },
				{ "UseMaxLayers.ToolTip", "Uses the MaxPaintedLayersPerComponent setting from the LandscapeProxy." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeLayerPaintingRestriction",
				"ELandscapeLayerPaintingRestriction",
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
	static UEnum* ELandscapeImportAlphamapType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeImportAlphamapType"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>()
	{
		return ELandscapeImportAlphamapType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeImportAlphamapType(ELandscapeImportAlphamapType_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeImportAlphamapType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Hash() { return 1272502003U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeImportAlphamapType"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeImportAlphamapType::Additive", (int64)ELandscapeImportAlphamapType::Additive },
				{ "ELandscapeImportAlphamapType::Layered", (int64)ELandscapeImportAlphamapType::Layered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Additive.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.3, and 0.2 in the alpha maps\nAll alpha maps for blended layers total to 1.0\nThis is the style used by UE4 internally for blended layers" },
				{ "Layered.ToolTip", "Three layers blended 50/30/20 represented as 0.5, 0.6, and 1.0 in the alpha maps\nEach alpha map only specifies the remainder from previous layers, so the last layer used will always be 1.0\nSome other tools use this format" },
				{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeImportAlphamapType",
				"ELandscapeImportAlphamapType",
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
class UScriptStruct* FProceduralLayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FProceduralLayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralLayerData, Z_Construct_UPackage__Script_Landscape(), TEXT("ProceduralLayerData"), sizeof(FProceduralLayerData), Get_Z_Construct_UScriptStruct_FProceduralLayerData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FProceduralLayerData>()
{
	return FProceduralLayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralLayerData(FProceduralLayerData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ProceduralLayerData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFProceduralLayerData
{
	FScriptStruct_Landscape_StaticRegisterNativesFProceduralLayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralLayerData")),new UScriptStruct::TCppStructOps<FProceduralLayerData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFProceduralLayerData;
	struct Z_Construct_UScriptStruct_FProceduralLayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Heightmaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Heightmaps;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Heightmaps_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Heightmaps_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralLayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps = { "Heightmaps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProceduralLayerData, Heightmaps), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_Key_KeyProp = { "Heightmaps_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_ValueProp = { "Heightmaps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralLayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralLayerData_Statics::NewProp_Heightmaps_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralLayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"ProceduralLayerData",
		sizeof(FProceduralLayerData),
		alignof(FProceduralLayerData),
		Z_Construct_UScriptStruct_FProceduralLayerData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralLayerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralLayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralLayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralLayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralLayerData"), sizeof(FProceduralLayerData), Get_Z_Construct_UScriptStruct_FProceduralLayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralLayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralLayerData_Hash() { return 64719685U; }
class UScriptStruct* FRenderDataPerHeightmap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderDataPerHeightmap, Z_Construct_UPackage__Script_Landscape(), TEXT("RenderDataPerHeightmap"), sizeof(FRenderDataPerHeightmap), Get_Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FRenderDataPerHeightmap>()
{
	return FRenderDataPerHeightmap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRenderDataPerHeightmap(FRenderDataPerHeightmap::StaticStruct, TEXT("/Script/Landscape"), TEXT("RenderDataPerHeightmap"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFRenderDataPerHeightmap
{
	FScriptStruct_Landscape_StaticRegisterNativesFRenderDataPerHeightmap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RenderDataPerHeightmap")),new UScriptStruct::TCppStructOps<FRenderDataPerHeightmap>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFRenderDataPerHeightmap;
	struct Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopLeftSectionBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TopLeftSectionBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalHeightmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalHeightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderDataPerHeightmap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_TopLeftSectionBase_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_TopLeftSectionBase = { "TopLeftSectionBase", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderDataPerHeightmap, TopLeftSectionBase), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_TopLeftSectionBase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_TopLeftSectionBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderDataPerHeightmap, Components), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_OriginalHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_OriginalHeightmap = { "OriginalHeightmap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRenderDataPerHeightmap, OriginalHeightmap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_OriginalHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_OriginalHeightmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_TopLeftSectionBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::NewProp_OriginalHeightmap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"RenderDataPerHeightmap",
		sizeof(FRenderDataPerHeightmap),
		alignof(FRenderDataPerHeightmap),
		Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderDataPerHeightmap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RenderDataPerHeightmap"), sizeof(FRenderDataPerHeightmap), Get_Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRenderDataPerHeightmap_Hash() { return 2701052597U; }
class UScriptStruct* FLandscapeProxyMaterialOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeProxyMaterialOverride"), sizeof(FLandscapeProxyMaterialOverride), Get_Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeProxyMaterialOverride>()
{
	return FLandscapeProxyMaterialOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeProxyMaterialOverride(FLandscapeProxyMaterialOverride::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeProxyMaterialOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeProxyMaterialOverride
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeProxyMaterialOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeProxyMaterialOverride")),new UScriptStruct::TCppStructOps<FLandscapeProxyMaterialOverride>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeProxyMaterialOverride;
	struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeProxyMaterialOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeProxyMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeProxyMaterialOverride, LODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::NewProp_LODIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeProxyMaterialOverride",
		sizeof(FLandscapeProxyMaterialOverride),
		alignof(FLandscapeProxyMaterialOverride),
		Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeProxyMaterialOverride"), sizeof(FLandscapeProxyMaterialOverride), Get_Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Hash() { return 1463887182U; }
class UScriptStruct* FLandscapeImportLayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeImportLayerInfo"), sizeof(FLandscapeImportLayerInfo), Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeImportLayerInfo>()
{
	return FLandscapeImportLayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeImportLayerInfo(FLandscapeImportLayerInfo::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeImportLayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeImportLayerInfo")),new UScriptStruct::TCppStructOps<FLandscapeImportLayerInfo>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeImportLayerInfo;
	struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Structure storing Layer Data for import" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportLayerInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, SourceFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayerInfo, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::NewProp_LayerName,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeImportLayerInfo",
		sizeof(FLandscapeImportLayerInfo),
		alignof(FLandscapeImportLayerInfo),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeImportLayerInfo"), sizeof(FLandscapeImportLayerInfo), Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Hash() { return 1081649865U; }
class UScriptStruct* FLandscapeLayerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerStruct, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerStruct"), sizeof(FLandscapeLayerStruct), Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerStruct>()
{
	return FLandscapeLayerStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeLayerStruct(FLandscapeLayerStruct::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeLayerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeLayerStruct")),new UScriptStruct::TCppStructOps<FLandscapeLayerStruct>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerStruct;
	struct Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColorChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugColorChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerStruct>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerStruct, SourceFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((FLandscapeLayerStruct*)Obj)->bSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLandscapeLayerStruct), &Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_DebugColorChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_DebugColorChannel = { "DebugColorChannel", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerStruct, DebugColorChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_DebugColorChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_DebugColorChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerStruct, Owner), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_ThumbnailMIC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_ThumbnailMIC = { "ThumbnailMIC", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerStruct, ThumbnailMIC), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_ThumbnailMIC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_ThumbnailMIC_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_LayerInfoObj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_LayerInfoObj = { "LayerInfoObj", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerStruct, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_LayerInfoObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_bSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_DebugColorChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_ThumbnailMIC,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::NewProp_LayerInfoObj,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayerStruct",
		sizeof(FLandscapeLayerStruct),
		alignof(FLandscapeLayerStruct),
		Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeLayerStruct"), sizeof(FLandscapeLayerStruct), Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerStruct_Hash() { return 2565272147U; }
class UScriptStruct* FLandscapeEditorLayerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditorLayerSettings"), sizeof(FLandscapeEditorLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeEditorLayerSettings>()
{
	return FLandscapeEditorLayerSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeEditorLayerSettings(FLandscapeEditorLayerSettings::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeEditorLayerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeEditorLayerSettings")),new UScriptStruct::TCppStructOps<FLandscapeEditorLayerSettings>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeEditorLayerSettings;
	struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportLayerFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportLayerFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditorLayerSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath = { "ReimportLayerFilePath", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditorLayerSettings, ReimportLayerFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj = { "LayerInfoObj", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeEditorLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_ReimportLayerFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::NewProp_LayerInfoObj,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeEditorLayerSettings",
		sizeof(FLandscapeEditorLayerSettings),
		alignof(FLandscapeEditorLayerSettings),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeEditorLayerSettings"), sizeof(FLandscapeEditorLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Hash() { return 2246738504U; }
class UScriptStruct* FLandscapeWeightmapUsage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeWeightmapUsage"), sizeof(FLandscapeWeightmapUsage), Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeWeightmapUsage>()
{
	return FLandscapeWeightmapUsage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeWeightmapUsage(FLandscapeWeightmapUsage::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeWeightmapUsage"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeWeightmapUsage")),new UScriptStruct::TCppStructOps<FLandscapeWeightmapUsage>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeWeightmapUsage;
	struct Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChannelUsage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Structure storing channel usage for weightmap textures" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeWeightmapUsage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewProp_ChannelUsage = { "ChannelUsage", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ChannelUsage, FLandscapeWeightmapUsage), STRUCT_OFFSET(FLandscapeWeightmapUsage, ChannelUsage), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::NewProp_ChannelUsage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeWeightmapUsage",
		sizeof(FLandscapeWeightmapUsage),
		alignof(FLandscapeWeightmapUsage),
		Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeWeightmapUsage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeWeightmapUsage"), sizeof(FLandscapeWeightmapUsage), Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeWeightmapUsage_Hash() { return 989630867U; }
	void ALandscapeProxy::StaticRegisterNativesALandscapeProxy()
	{
		UClass* Class = ALandscapeProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeComponentScreenSizeToUseSubSections", &ALandscapeProxy::execChangeComponentScreenSizeToUseSubSections },
			{ "ChangeLODDistanceFactor", &ALandscapeProxy::execChangeLODDistanceFactor },
			{ "ChangeTessellationComponentScreenSize", &ALandscapeProxy::execChangeTessellationComponentScreenSize },
			{ "ChangeTessellationComponentScreenSizeFalloff", &ALandscapeProxy::execChangeTessellationComponentScreenSizeFalloff },
			{ "ChangeUseTessellationComponentScreenSizeFalloff", &ALandscapeProxy::execChangeUseTessellationComponentScreenSizeFalloff },
			{ "EditorApplySpline", &ALandscapeProxy::execEditorApplySpline },
			{ "EditorSetLandscapeMaterial", &ALandscapeProxy::execEditorSetLandscapeMaterial },
#if WITH_EDITOR
			{ "LandscapeExportHeightmapToRenderTarget", &ALandscapeProxy::execLandscapeExportHeightmapToRenderTarget },
			{ "LandscapeExportWeightmapToRenderTarget", &ALandscapeProxy::execLandscapeExportWeightmapToRenderTarget },
			{ "LandscapeImportHeightmapFromRenderTarget", &ALandscapeProxy::execLandscapeImportHeightmapFromRenderTarget },
			{ "LandscapeImportWeightmapFromRenderTarget", &ALandscapeProxy::execLandscapeImportWeightmapFromRenderTarget },
#endif // WITH_EDITOR
			{ "SetLandscapeMaterialScalarParameterValue", &ALandscapeProxy::execSetLandscapeMaterialScalarParameterValue },
			{ "SetLandscapeMaterialTextureParameterValue", &ALandscapeProxy::execSetLandscapeMaterialTextureParameterValue },
			{ "SetLandscapeMaterialVectorParameterValue", &ALandscapeProxy::execSetLandscapeMaterialVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics
	{
		struct LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms
		{
			float InComponentScreenSizeToUseSubSections;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InComponentScreenSizeToUseSubSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::NewProp_InComponentScreenSizeToUseSubSections = { "InComponentScreenSizeToUseSubSections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms, InComponentScreenSizeToUseSubSections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::NewProp_InComponentScreenSizeToUseSubSections,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change ComponentScreenSizeToUseSubSections value on the render proxy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeComponentScreenSizeToUseSubSections", sizeof(LandscapeProxy_eventChangeComponentScreenSizeToUseSubSections_Parms), Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics
	{
		struct LandscapeProxy_eventChangeLODDistanceFactor_Parms
		{
			float InLODDistanceFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InLODDistanceFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::NewProp_InLODDistanceFactor = { "InLODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeLODDistanceFactor_Parms, InLODDistanceFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::NewProp_InLODDistanceFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This value can't be changed anymore, you should edit the property LODDistributionSetting of the Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change the Level of Detail distance factor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeLODDistanceFactor", sizeof(LandscapeProxy_eventChangeLODDistanceFactor_Parms), Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics
	{
		struct LandscapeProxy_eventChangeTessellationComponentScreenSize_Parms
		{
			float InTessellationComponentScreenSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTessellationComponentScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::NewProp_InTessellationComponentScreenSize = { "InTessellationComponentScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeTessellationComponentScreenSize_Parms, InTessellationComponentScreenSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::NewProp_InTessellationComponentScreenSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change TessellationComponentScreenSize value on the render proxy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeTessellationComponentScreenSize", sizeof(LandscapeProxy_eventChangeTessellationComponentScreenSize_Parms), Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics
	{
		struct LandscapeProxy_eventChangeTessellationComponentScreenSizeFalloff_Parms
		{
			float InUseTessellationComponentScreenSizeFalloff;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InUseTessellationComponentScreenSizeFalloff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::NewProp_InUseTessellationComponentScreenSizeFalloff = { "InUseTessellationComponentScreenSizeFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventChangeTessellationComponentScreenSizeFalloff_Parms, InUseTessellationComponentScreenSizeFalloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::NewProp_InUseTessellationComponentScreenSizeFalloff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change TessellationComponentScreenSizeFalloff value on the render proxy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeTessellationComponentScreenSizeFalloff", sizeof(LandscapeProxy_eventChangeTessellationComponentScreenSizeFalloff_Parms), Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics
	{
		struct LandscapeProxy_eventChangeUseTessellationComponentScreenSizeFalloff_Parms
		{
			bool InComponentScreenSizeToUseSubSections;
		};
		static void NewProp_InComponentScreenSizeToUseSubSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InComponentScreenSizeToUseSubSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::NewProp_InComponentScreenSizeToUseSubSections_SetBit(void* Obj)
	{
		((LandscapeProxy_eventChangeUseTessellationComponentScreenSizeFalloff_Parms*)Obj)->InComponentScreenSizeToUseSubSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::NewProp_InComponentScreenSizeToUseSubSections = { "InComponentScreenSizeToUseSubSections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventChangeUseTessellationComponentScreenSizeFalloff_Parms), &Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::NewProp_InComponentScreenSizeToUseSubSections_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::NewProp_InComponentScreenSizeToUseSubSections,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Change UseTessellationComponentScreenSizeFalloff value on the render proxy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "ChangeUseTessellationComponentScreenSizeFalloff", sizeof(LandscapeProxy_eventChangeUseTessellationComponentScreenSizeFalloff_Parms), Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics
	{
		struct LandscapeProxy_eventEditorApplySpline_Parms
		{
			USplineComponent* InSplineComponent;
			float StartWidth;
			float EndWidth;
			float StartSideFalloff;
			float EndSideFalloff;
			float StartRoll;
			float EndRoll;
			int32 NumSubdivisions;
			bool bRaiseHeights;
			bool bLowerHeights;
			ULandscapeLayerInfoObject* PaintLayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaintLayer;
		static void NewProp_bLowerHeights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLowerHeights;
		static void NewProp_bRaiseHeights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseHeights;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSubdivisions;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndRoll;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartRoll;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndSideFalloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSideFalloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndWidth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, PaintLayer), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights_SetBit(void* Obj)
	{
		((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bLowerHeights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights = { "bLowerHeights", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights_SetBit(void* Obj)
	{
		((LandscapeProxy_eventEditorApplySpline_Parms*)Obj)->bRaiseHeights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights = { "bRaiseHeights", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventEditorApplySpline_Parms), &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, NumSubdivisions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndRoll = { "EndRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartRoll), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndSideFalloff = { "EndSideFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndSideFalloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartSideFalloff = { "StartSideFalloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartSideFalloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndWidth = { "EndWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, EndWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartWidth = { "StartWidth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, StartWidth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent = { "InSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorApplySpline_Parms, InSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_PaintLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bLowerHeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_bRaiseHeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_NumSubdivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndSideFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartSideFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_EndWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_StartWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::NewProp_InSplineComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "CPP_Default_bLowerHeights", "true" },
		{ "CPP_Default_bRaiseHeights", "true" },
		{ "CPP_Default_EndRoll", "0.000000" },
		{ "CPP_Default_EndSideFalloff", "200.000000" },
		{ "CPP_Default_EndWidth", "200.000000" },
		{ "CPP_Default_NumSubdivisions", "20" },
		{ "CPP_Default_PaintLayer", "None" },
		{ "CPP_Default_StartRoll", "0.000000" },
		{ "CPP_Default_StartSideFalloff", "200.000000" },
		{ "CPP_Default_StartWidth", "200.000000" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Deform landscape using a given spline\n@param StartWidth - Width of the spline at the start node, in Spline Component local space\n@param EndWidth   - Width of the spline at the end node, in Spline Component local space\n@param StartSideFalloff - Width of the falloff at either side of the spline at the start node, in Spline Component local space\n@param EndSideFalloff - Width of the falloff at either side of the spline at the end node, in Spline Component local space\n@param StartRoll - Roll applied to the spline at the start node, in degrees. 0 is flat\n@param EndRoll - Roll applied to the spline at the end node, in degrees. 0 is flat\n@param NumSubdivisions - Number of triangles to place along the spline when applying it to the landscape. Higher numbers give better results, but setting it too high will be slow and may cause artifacts\n@param bRaiseHeights - Allow the landscape to be raised up to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param bLowerHeights - Allow the landscape to be lowered down to the level of the spline. If both bRaiseHeights and bLowerHeights are false, no height modification of the landscape will be performed\n@param PaintLayer - LayerInfo to paint, or none to skip painting. The landscape must be configured with the same layer info in one of its layers or this will do nothing!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "EditorApplySpline", sizeof(LandscapeProxy_eventEditorApplySpline_Parms), Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics
	{
		struct LandscapeProxy_eventEditorSetLandscapeMaterial_Parms
		{
			UMaterialInterface* NewLandscapeMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLandscapeMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::NewProp_NewLandscapeMaterial = { "NewLandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventEditorSetLandscapeMaterial_Parms, NewLandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::NewProp_NewLandscapeMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Setter for LandscapeMaterial. Has no effect outside the editor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "EditorSetLandscapeMaterial", sizeof(LandscapeProxy_eventEditorSetLandscapeMaterial_Parms), Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics
	{
		struct LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			bool InExportHeightIntoRGChannel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_InExportHeightIntoRGChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InExportHeightIntoRGChannel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms*)Obj)->InExportHeightIntoRGChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel = { "InExportHeightIntoRGChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InExportHeightIntoRGChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_InExportHeightIntoRGChannel", "false" },
		{ "DisplayName", "Landscape Export Heightmap to RenderTarget" },
		{ "Keywords", "Push Landscape Heightmap to RenderTarget" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Output a landscape heightmap to a render target\n@param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n@param InExportHeightIntoRGChannel - Tell us if we should export the height that is internally stored as R & G (for 16 bits) to a single R channel of the render target (the format need to be RTF_RGBA16f or RTF_RGBA32f)\n                                                                         Note that using RTF_RGBA16f with InExportHeightIntoRGChannel == false, could have precision loss." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeExportHeightmapToRenderTarget", sizeof(LandscapeProxy_eventLandscapeExportHeightmapToRenderTarget_Parms), Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics
	{
		struct LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FName InLayerName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InLayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms, InLayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InLayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Landscape Export Weightmap to RenderTarget" },
		{ "Keywords", "Push Landscape Weightmap to RenderTarget" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Output a landscape weightmap to a render target\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeExportWeightmapToRenderTarget", sizeof(LandscapeProxy_eventLandscapeExportWeightmapToRenderTarget_Parms), Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics
	{
		struct LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			bool InImportHeightFromRGChannel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_InImportHeightFromRGChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InImportHeightFromRGChannel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms*)Obj)->InImportHeightFromRGChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel = { "InImportHeightFromRGChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InImportHeightFromRGChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_InImportHeightFromRGChannel", "false" },
		{ "DisplayName", "Landscape Import Heightmap from RenderTarget" },
		{ "Keywords", "Push RenderTarget to Landscape Heightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Overwrites a landscape heightmap with render target data\n@param InRenderTarget - Valid render target with a format of RTF_RGBA16f, RTF_RGBA32f or RTF_RGBA8\n@param InImportHeightFromRGChannel - Only relevant when using format RTF_RGBA16f or RTF_RGBA32f, and will tell us if we should import the height data from the R channel only of the Render target or from R & G.\n                                                                         Note that using RTF_RGBA16f with InImportHeightFromRGChannel == false, could have precision loss\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeImportHeightmapFromRenderTarget", sizeof(LandscapeProxy_eventLandscapeImportHeightmapFromRenderTarget_Parms), Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics
	{
		struct LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FName InLayerName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InLayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms), &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms, InLayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InLayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Landscape Import Weightmap from RenderTarget" },
		{ "Keywords", "Push RenderTarget to Landscape Weightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Overwrites a landscape weightmap with render target data\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "LandscapeImportWeightmapFromRenderTarget", sizeof(LandscapeProxy_eventLandscapeImportWeightmapFromRenderTarget_Parms), Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics
	{
		struct LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms
		{
			FName ParameterName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value for all landscape components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialScalarParameterValue", sizeof(LandscapeProxy_eventSetLandscapeMaterialScalarParameterValue_Parms), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics
	{
		struct LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set an MID texture parameter value for all landscape components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialTextureParameterValue", sizeof(LandscapeProxy_eventSetLandscapeMaterialTextureParameterValue_Parms), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics
	{
		struct LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Set an MID vector parameter value for all landscape components." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeProxy, nullptr, "SetLandscapeMaterialVectorParameterValue", sizeof(LandscapeProxy_eventSetLandscapeMaterialVectorParameterValue_Parms), Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister()
	{
		return ALandscapeProxy::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData[];
#endif
		static void NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeForCullingInvisibleHLODVertices;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPaintedLayersPerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPaintedLayersPerComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicMaterialInstance_MetaData[];
#endif
		static void NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedForNavigation_MetaData[];
#endif
		static void NewProp_bUsedForNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedForNavigation;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderDataPerHeightmap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RenderDataPerHeightmap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderDataPerHeightmap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderDataPerHeightmap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasProceduralContent_MetaData[];
#endif
		static void NewProp_HasProceduralContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasProceduralContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralLayersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProceduralLayersData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProceduralLayersData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralLayersData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLayerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorLayerSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorLayerSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportHeightmapFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportHeightmapFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCachedLayerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorCachedLayerInfos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCachedLayerInfos_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData[];
#endif
		static void NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeMaterialPositionOffsetIntoCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingToLevel_MetaData[];
#endif
		static void NewProp_bIsMovingToLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingToLevel;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LDMaxDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LDMaxDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData[];
#endif
		static void NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialPositionOffsetInStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastFarShadow_MetaData[];
#endif
		static void NewProp_bCastFarShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastFarShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[];
#endif
		static void NewProp_bCastStaticShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLandscapeGrass_MetaData[];
#endif
		static void NewProp_bHasLandscapeGrass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLandscapeGrass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialsOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeMaterialsOverride;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeMaterialsOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeHoleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeHoleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticLightingLOD;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDisplayOrder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDisplayOrder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrderList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetDisplayOrderList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetDisplayOrderList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExportLOD;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OccluderGeometryLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OccluderGeometryLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationComponentScreenSizeFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TessellationComponentScreenSizeFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseTessellationComponentScreenSizeFalloff_MetaData[];
#endif
		static void NewProp_UseTessellationComponentScreenSizeFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseTessellationComponentScreenSizeFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationComponentScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TessellationComponentScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistributionSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistributionSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD0DistributionSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LOD0DistributionSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentScreenSizeToUseSubSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComponentScreenSizeToUseSubSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeSectionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
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
	UObject* (*const Z_Construct_UClass_ALandscapeProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALandscapeProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections, "ChangeComponentScreenSizeToUseSubSections" }, // 581579865
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeLODDistanceFactor, "ChangeLODDistanceFactor" }, // 563172911
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSize, "ChangeTessellationComponentScreenSize" }, // 2360702741
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff, "ChangeTessellationComponentScreenSizeFalloff" }, // 4056142371
		{ &Z_Construct_UFunction_ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff, "ChangeUseTessellationComponentScreenSizeFalloff" }, // 310568047
		{ &Z_Construct_UFunction_ALandscapeProxy_EditorApplySpline, "EditorApplySpline" }, // 1722260698
		{ &Z_Construct_UFunction_ALandscapeProxy_EditorSetLandscapeMaterial, "EditorSetLandscapeMaterial" }, // 436782516
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportHeightmapToRenderTarget, "LandscapeExportHeightmapToRenderTarget" }, // 2599269898
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeExportWeightmapToRenderTarget, "LandscapeExportWeightmapToRenderTarget" }, // 2246099556
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportHeightmapFromRenderTarget, "LandscapeImportHeightmapFromRenderTarget" }, // 1567330859
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_LandscapeImportWeightmapFromRenderTarget, "LandscapeImportWeightmapFromRenderTarget" }, // 242346670
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialScalarParameterValue, "SetLandscapeMaterialScalarParameterValue" }, // 1349394205
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialTextureParameterValue, "SetLandscapeMaterialTextureParameterValue" }, // 2860101545
		{ &Z_Construct_UFunction_ALandscapeProxy_SetLandscapeMaterialVectorParameterValue, "SetLandscapeMaterialVectorParameterValue" }, // 1055256819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug LOD Mobility" },
		{ "IncludePath", "LandscapeProxy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData[] = {
		{ "Category", "HierarchicalLOD" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Flag whether or not this Landscape's surface can be used for culling hidden triangles *" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bUseLandscapeForCullingInvisibleHLODVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices = { "bUseLandscapeForCullingInvisibleHLODVertices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent = { "MaxPaintedLayersPerComponent", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, MaxPaintedLayersPerComponent), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode = { "NavigationGeometryGatheringMode", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "When set to true it will generate MaterialInstanceDynamic for each components, so material can be changed at runtime" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bUseDynamicMaterialInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance = { "bUseDynamicMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Hints navigation system whether this landscape will ever be navigated on. true by default, but make sure to set it to false for faraway, background landscapes" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bUsedForNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation = { "bUsedForNavigation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Number of quads for a subsection of a component. SubsectionSizeQuads+1 must be a power of two." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections = { "NumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, NumSubsections), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Total number of quads in each component" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, SubsectionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Data set at creation time" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, ComponentSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap = { "RenderDataPerHeightmap", nullptr, (EPropertyFlags)0x0010008800002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, RenderDataPerHeightmap), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_Key_KeyProp = { "RenderDataPerHeightmap_Key", nullptr, (EPropertyFlags)0x0000008800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_ValueProp = { "RenderDataPerHeightmap", nullptr, (EPropertyFlags)0x0000008800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRenderDataPerHeightmap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->HasProceduralContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent = { "HasProceduralContent", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData = { "ProceduralLayersData", nullptr, (EPropertyFlags)0x0010400800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, ProceduralLayersData), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_Key_KeyProp = { "ProceduralLayersData_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_ValueProp = { "ProceduralLayersData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FProceduralLayerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings = { "EditorLayerSettings", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, EditorLayerSettings), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_Inner = { "EditorLayerSettings", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath = { "ReimportHeightmapFilePath", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, ReimportHeightmapFilePath), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos = { "EditorCachedLayerInfos", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, EditorCachedLayerInfos_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_Inner = { "EditorCachedLayerInfos", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether to bake the landscape material's vertical world position offset into the collision heightfield.\n              Note: Only z (vertical) offset is supported. XY offsets are ignored.\n              Does not work with an XY offset map (mesh collision)" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bBakeMaterialPositionOffsetIntoCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision = { "bBakeMaterialPositionOffsetIntoCollision", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If true, Landscape will generate overlap events when other components are overlapping it (eg Begin Overlap).\nBoth the Landscape and the other component must have this flag enabled for overlap events to occur.\n\n@see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n@see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bGenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Collision profile settings for this landscape" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionThickness_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Thickness of the collision surface, in unreal units" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, CollisionThickness), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If set higher than the \"Collision Mip Level\", this specifies the Landscape LOD to use for \"simple collision\" tests, otherwise the \"Collision Mip Level\" is used for both simple and complex collision.\nDoes not work with an XY offset map (mesh collision)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel = { "SimpleCollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, SimpleCollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Landscape LOD to use for collision tests. Higher numbers use less memory and process faster, but are much less accurate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel = { "CollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, CollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bIsMovingToLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel = { "bIsMovingToLevel", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance_MetaData[] = {
		{ "Category", "LOD" },
		{ "DisplayName", "Desired Max Draw Distance" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Max draw distance exposed to LDs. The real max draw distance is the min (disregarding 0) of this and volumes affecting this object." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance = { "LDMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LDMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "If true, the Landscape will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bRenderCustomDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether to use the landscape material's vertical world position offset when calculating static lighting.\n              Note: Only z (vertical) offset is supported. XY offsets are ignored.\n              Does not work correctly with an XY offset map (mesh collision)" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bUseMaterialPositionOffsetInStaticLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting = { "bUseMaterialPositionOffsetInStaticLighting", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Channels that this Landscape should be in.  Lights with matching channels will affect the Landscape.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Controls whether the landscape should affect dynamic distance field lighting methods. *" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Far Shadow" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether this primitive should cast shadows in the far shadow cascades." },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bCastFarShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow = { "bCastFarShadow", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Shadow Two Sided" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Whether this primitive should cast dynamic shadows as if it were a two sided material." },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Static Shadow" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bCastStaticShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The resolution to cache lighting at, in texels/quad in one axis\nTotal resolution would be changed by StaticLightingResolution*StaticLightingResolution\nAutomatically calculate proper value for removing seams" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, StaticLightingResolution), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Only used outside of the editor (e.g. in cooked builds)\nDisables landscape grass processing entirely if no landscape components have landscape grass configured" },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->bHasLandscapeGrass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass = { "bHasLandscapeGrass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents = { "FoliageComponents", nullptr, (EPropertyFlags)0x0010008000202008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, FoliageComponents), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_Inner = { "FoliageComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Array of LandscapeHeightfieldCollisionComponent" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents = { "CollisionComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, CollisionComponents), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_Inner = { "CollisionComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The array of LandscapeComponent that are used by the landscape" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents = { "LandscapeComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeComponents), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_Inner = { "LandscapeComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension = { "PositiveZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, PositiveZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size\nNote that this can also be overridden per-component when the component is selected with the component select tool" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension = { "NegativeZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, NegativeZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride = { "LandscapeMaterialsOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeMaterialsOverride), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_Inner = { "LandscapeMaterialsOverride", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Material used to render landscape components with holes. If not set, LandscapeMaterial will be used (blend mode will be overridden to Masked if it is set to Opaque)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial = { "LandscapeHoleMaterial", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial_MetaData[] = {
		{ "BlueprintSetter", "EditorSetLandscapeMaterial" },
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Combined material used to render the landscape" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Allows artists to adjust the distance where textures using UV 0 are streamed in/out.\n1.0 is the default, whereas a higher value increases the streamed-in resolution.\nValue can be < 0 (from legcay content, or code changes)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Default physical material, used when no per-layer values physical materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial = { "DefaultPhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, DefaultPhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "LOD level to use when running lightmass (increase to 1 or 2 for large landscapes to stop lightmass crashing)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD = { "StaticLightingLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, StaticLightingLOD), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Display Order mode for the targets" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder = { "TargetDisplayOrder", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrder), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Display Order of the targets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList = { "TargetDisplayOrderList", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, TargetDisplayOrderList), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_Inner = { "TargetDisplayOrderList", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "LOD level to use when exporting the landscape to obj or FBX" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD = { "ExportLOD", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, ExportLOD), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_OccluderGeometryLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Landscape LOD to use as an occluder geometry for software occlusion" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_OccluderGeometryLOD = { "OccluderGeometryLOD", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, OccluderGeometryLOD), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_OccluderGeometryLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_OccluderGeometryLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSizeFalloff_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Tessellation Component Screen Size Falloff" },
		{ "editcondition", "UseTessellationComponentScreenSizeFalloff" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Component screen size (0.0 - 1.0) at which we start the tessellation falloff." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSizeFalloff = { "TessellationComponentScreenSizeFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, TessellationComponentScreenSizeFalloff), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSizeFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSizeFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "DisplayName", "Use Default Falloff" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Tell if we should enable tessellation falloff. It will ramp down the Tessellation Multiplier from the material linearly. It should be disabled if you plan on using a custom implementation in material/shaders." },
	};
#endif
	void Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff_SetBit(void* Obj)
	{
		((ALandscapeProxy*)Obj)->UseTessellationComponentScreenSizeFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff = { "UseTessellationComponentScreenSizeFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeProxy), &Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSize_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Component screen size (0.0 - 1.0) at which we should enable tessellation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSize = { "TessellationComponentScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, TessellationComponentScreenSize), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Other LODs" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The distribution setting used to change the LOD generation, 2 is the normal distribution, small number mean you want your last LODs to take more screen space and big number mean you want your first LODs to take more screen space." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting = { "LODDistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LODDistributionSetting), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting_MetaData[] = {
		{ "Category", "LOD Distribution" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "LOD 0" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "The distribution setting used to change the LOD 0 generation, 1.75 is the normal distribution, numbers influence directly the LOD0 proportion on screen." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting = { "LOD0DistributionSetting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LOD0DistributionSetting), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections_MetaData[] = {
		{ "Category", "LOD" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "SubSection Min Component ScreenSize" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Component screen size (0.0 - 1.0) at which we should keep sub sections. This is mostly pertinent if you have large component of > 64 and component are close to the camera. The goal is to reduce draw call, so if a component is smaller than the value, we merge all subsections into 1 drawcall." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections = { "ComponentScreenSizeToUseSubSections", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, ComponentScreenSizeToUseSubSections), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff = { "LODFalloff", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LODFalloff_DEPRECATED), Z_Construct_UEnum_Landscape_ELandscapeLODFalloff, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LODDistanceFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Max LOD level to use when rendering, -1 means the max available" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel = { "MaxLODLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, MaxLODLevel), METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Offset in quads from global components grid origin (in quads) *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset = { "LandscapeSectionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeSectionOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
		{ "ToolTip", "Guid for LandscapeEditorInfo *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeProxy, SplineComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseLandscapeForCullingInvisibleHLODVertices,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxPaintedLayersPerComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NavigationGeometryGatheringMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseDynamicMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUsedForNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NumSubsections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SubsectionSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentSizeQuads,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_RenderDataPerHeightmap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_HasProceduralContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ProceduralLayersData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorLayerSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ReimportHeightmapFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_EditorCachedLayerInfos_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bBakeMaterialPositionOffsetIntoCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bGenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_BodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SimpleCollisionMipLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionMipLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightmassSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bIsMovingToLevel,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LDMaxDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CustomDepthStencilValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bRenderCustomDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bUseMaterialPositionOffsetInStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastFarShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastShadowAsTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bCastStaticShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_bHasLandscapeGrass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_FoliageComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_CollisionComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_PositiveZBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_NegativeZBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterialsOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeHoleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StreamingDistanceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_DefaultPhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_StaticLightingLOD,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TargetDisplayOrderList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ExportLOD,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_OccluderGeometryLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSizeFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_UseTessellationComponentScreenSizeFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_TessellationComponentScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistributionSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LOD0DistributionSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_ComponentScreenSizeToUseSubSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LODDistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_MaxLODLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeSectionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_LandscapeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeProxy_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeProxy_Statics::ClassParams = {
		&ALandscapeProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::PropPointers),
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeProxy, 238554117);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeProxy>()
	{
		return ALandscapeProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeProxy(Z_Construct_UClass_ALandscapeProxy, &ALandscapeProxy::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeProxy);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
