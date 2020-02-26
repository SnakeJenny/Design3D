// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_PathingGrid() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
// End Cross Module References
	void UEnvQueryGenerator_PathingGrid::StaticRegisterNativesUEnvQueryGenerator_PathingGrid()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_NoRegister()
	{
		return UEnvQueryGenerator_PathingGrid::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathToItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Pathing Grid" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "Navigation grid, generates points on navmesh\nwith paths to/from context no further than given limit" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "multiplier for max distance between point and context" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier = { "ScanRangeMultiplier", nullptr, (EPropertyFlags)0x0010048000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "navigation filter to use in pathfinding" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, NavigationFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_PathingGrid.h" },
		{ "ToolTip", "pathfinding direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem = { "PathToItem", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_PathingGrid, PathToItem), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_ScanRangeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_NavigationFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::NewProp_PathToItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_PathingGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::ClassParams = {
		&UEnvQueryGenerator_PathingGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_PathingGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_PathingGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_PathingGrid, 3144216173);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_PathingGrid>()
	{
		return UEnvQueryGenerator_PathingGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_PathingGrid(Z_Construct_UClass_UEnvQueryGenerator_PathingGrid, &UEnvQueryGenerator_PathingGrid::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_PathingGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_PathingGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
