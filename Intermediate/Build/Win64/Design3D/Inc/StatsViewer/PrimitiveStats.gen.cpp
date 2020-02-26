// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsViewer/Classes/PrimitiveStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimitiveStats() {}
// Cross Module References
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
	STATSVIEWER_API UClass* Z_Construct_UClass_UPrimitiveStats_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UPrimitiveStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EPrimitiveObjectSets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets, Z_Construct_UPackage__Script_StatsViewer(), TEXT("EPrimitiveObjectSets"));
		}
		return Singleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<EPrimitiveObjectSets>()
	{
		return EPrimitiveObjectSets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimitiveObjectSets(EPrimitiveObjectSets_StaticEnum, TEXT("/Script/StatsViewer"), TEXT("EPrimitiveObjectSets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Hash() { return 2251011453U; }
	UEnum* Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsViewer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimitiveObjectSets"), 0, Get_Z_Construct_UEnum_StatsViewer_EPrimitiveObjectSets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PrimitiveObjectSets_AllObjects", (int64)PrimitiveObjectSets_AllObjects },
				{ "PrimitiveObjectSets_CurrentLevel", (int64)PrimitiveObjectSets_CurrentLevel },
				{ "PrimitiveObjectSets_SelectedObjects", (int64)PrimitiveObjectSets_SelectedObjects },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
				{ "PrimitiveObjectSets_AllObjects.DisplayName", "All Objects" },
				{ "PrimitiveObjectSets_AllObjects.ToolTip", "View primitive statistics for all objects in all levels" },
				{ "PrimitiveObjectSets_CurrentLevel.DisplayName", "Current Level" },
				{ "PrimitiveObjectSets_CurrentLevel.ToolTip", "View primitive statistics for objects in the current level" },
				{ "PrimitiveObjectSets_SelectedObjects.DisplayName", "Selected Objects" },
				{ "PrimitiveObjectSets_SelectedObjects.ToolTip", "View primitive statistics for selected objects" },
				{ "ToolTip", "Enum defining the object sets for this stats object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
				nullptr,
				"EPrimitiveObjectSets",
				"EPrimitiveObjectSets",
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
	void UPrimitiveStats::StaticRegisterNativesUPrimitiveStats()
	{
	}
	UClass* Z_Construct_UClass_UPrimitiveStats_NoRegister()
	{
		return UPrimitiveStats::StaticClass();
	}
	struct Z_Construct_UClass_UPrimitiveStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LMSMResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LMSMResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightMapData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjLightCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObjLightCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightsTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsOther_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightsOther;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsLM_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightsLM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstVertexColorMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstVertexColorMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexColorMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResourceSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HWInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HWInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimitiveStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Primitive Stats" },
		{ "IncludePath", "PrimitiveStats.h" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ObjectSetType", "EPrimitiveObjectSets" },
		{ "ToolTip", "Statistics page for primitives." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "86" },
		{ "DisplayName", "Avg R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average radius of bounding sphere of instance in map" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg = { "RadiusAvg", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, RadiusAvg), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "88" },
		{ "DisplayName", "Max R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Maximum radius of bounding sphere of instance in map" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, RadiusMax), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "84" },
		{ "DisplayName", "Min R" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Minimum radius of bounding sphere of instance in map" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, RadiusMin), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Res" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Light/shadow map resolution" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution = { "LMSMResolution", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, LMSMResolution), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "DisplayName", "LM" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Light map data in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData = { "LightMapData", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, LightMapData), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "DisplayName", "Cost" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Avg OL * Sections" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost = { "ObjLightCost", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, ObjLightCost), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "104" },
		{ "DisplayName", "Sum Avg" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "(Avg OL + Avg LM) / Count" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal = { "LightsTotal", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, LightsTotal), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "DisplayName", "Avg OL" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average number of other lights relevant to each instance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther = { "LightsOther", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, LightsOther), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "96" },
		{ "DisplayName", "Avg LM" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Average number of lightmap lights relevant to each instance" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM = { "LightsLM", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, LightsLM), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "DisplayName", "Inst VC" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Per component vertex color stat for static meshes in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem = { "InstVertexColorMem", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, InstVertexColorMem), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "68" },
		{ "DisplayName", "VC" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Vertex color stat for static and skeletal meshes in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem = { "VertexColorMem", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, VertexColorMem), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "DisplayName", "Size" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "Resource size in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize = { "ResourceSize", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, ResourceSize), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "104" },
		{ "DisplayName", "Sum Tris" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Triangle count of all mesh occurances (Count * Tris)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles = { "InstTriangles", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, InstTriangles), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Tris" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Triangle count of mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Triangles), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Instanced section count of mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections = { "InstSections", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, InstSections), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Hardware instances" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances = { "HWInstances", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, HWInstances), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Section count of mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Sections), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "86" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of occurrences in map" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Count), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Type name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Type), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "DisplayName", "Actor(s)" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Actor(s) that use the resource - click to select & zoom Actor(s)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Actors), METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "DisplayName", "Object" },
		{ "ModuleRelativePath", "Classes/PrimitiveStats.h" },
		{ "ToolTip", "Resource (e.g. UStaticMesh, USkeletalMesh, UModelComponent, UTerrainComponent, etc" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimitiveStats, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_RadiusMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LMSMResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ObjLightCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsOther,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_LightsLM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstVertexColorMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_VertexColorMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_ResourceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_InstSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_HWInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimitiveStats_Statics::NewProp_Object,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimitiveStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimitiveStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrimitiveStats_Statics::ClassParams = {
		&UPrimitiveStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPrimitiveStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimitiveStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrimitiveStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimitiveStats, 2053512079);
	template<> STATSVIEWER_API UClass* StaticClass<UPrimitiveStats>()
	{
		return UPrimitiveStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimitiveStats(Z_Construct_UClass_UPrimitiveStats, &UPrimitiveStats::StaticClass, TEXT("/Script/StatsViewer"), TEXT("UPrimitiveStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimitiveStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
