// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsViewer/Classes/CookerStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookerStats() {}
// Cross Module References
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
	STATSVIEWER_API UClass* Z_Construct_UClass_UCookerStats_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UCookerStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ECookerStatsObjectSets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets, Z_Construct_UPackage__Script_StatsViewer(), TEXT("ECookerStatsObjectSets"));
		}
		return Singleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ECookerStatsObjectSets>()
	{
		return ECookerStatsObjectSets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECookerStatsObjectSets(ECookerStatsObjectSets_StaticEnum, TEXT("/Script/StatsViewer"), TEXT("ECookerStatsObjectSets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Hash() { return 4016628147U; }
	UEnum* Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsViewer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECookerStatsObjectSets"), 0, Get_Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CookerStatsObjectSets_Default", (int64)CookerStatsObjectSets_Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CookerStatsObjectSets_Default.DisplayName", "Default" },
				{ "CookerStatsObjectSets_Default.ToolTip", "View cooker statistics" },
				{ "ModuleRelativePath", "Classes/CookerStats.h" },
				{ "ToolTip", "Enum defining the object sets for this stats object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
				nullptr,
				"ECookerStatsObjectSets",
				"ECookerStatsObjectSets",
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
	void UCookerStats::StaticRegisterNativesUCookerStats()
	{
	}
	UClass* Z_Construct_UClass_UCookerStats_NoRegister()
	{
		return UCookerStats::StaticClass();
	}
	struct Z_Construct_UClass_UCookerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeAfter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeAfter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeBefore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeBefore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Assets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cooker Stats" },
		{ "IncludePath", "CookerStats.h" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ObjectSetType", "ECookerStatsObjectSets" },
		{ "ToolTip", "Statistics for a cooked asset.\n\nNote: We assume that asset files are not larger than 2GB, because the StatsViewer is still lacking int64 support." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "300" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ToolTip", "Asset path without the name \"package.[group.]\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerStats, Path), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "DisplayName", "Size (Cooked)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The size of the assets after cooking." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter = { "SizeAfter", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerStats, SizeAfter), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "DisplayName", "Size (Original)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The size of the assets before cooking." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore = { "SizeBefore", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerStats, SizeBefore), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "DisplayName", "Asset(s)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ToolTip", "The assets contained in the file." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCookerStats, Assets), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookerStats_Statics::ClassParams = {
		&UCookerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCookerStats_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookerStats, 165587755);
	template<> STATSVIEWER_API UClass* StaticClass<UCookerStats>()
	{
		return UCookerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookerStats(Z_Construct_UClass_UCookerStats, &UCookerStats::StaticClass, TEXT("/Script/StatsViewer"), TEXT("UCookerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
