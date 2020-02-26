// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsViewer/Classes/LightingBuildInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightingBuildInfo() {}
// Cross Module References
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
	STATSVIEWER_API UClass* Z_Construct_UClass_ULightingBuildInfo_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_ULightingBuildInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ELightingBuildInfoObjectSets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets, Z_Construct_UPackage__Script_StatsViewer(), TEXT("ELightingBuildInfoObjectSets"));
		}
		return Singleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ELightingBuildInfoObjectSets>()
	{
		return ELightingBuildInfoObjectSets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELightingBuildInfoObjectSets(ELightingBuildInfoObjectSets_StaticEnum, TEXT("/Script/StatsViewer"), TEXT("ELightingBuildInfoObjectSets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Hash() { return 680449296U; }
	UEnum* Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsViewer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELightingBuildInfoObjectSets"), 0, Get_Z_Construct_UEnum_StatsViewer_ELightingBuildInfoObjectSets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LightingBuildInfoObjectSets_Default", (int64)LightingBuildInfoObjectSets_Default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LightingBuildInfoObjectSets_Default.DisplayName", "Default" },
				{ "LightingBuildInfoObjectSets_Default.ToolTip", "View lighting build statistics" },
				{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
				{ "ToolTip", "Enum defining the object sets for this stats object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
				nullptr,
				"ELightingBuildInfoObjectSets",
				"ELightingBuildInfoObjectSets",
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
	void ULightingBuildInfo::StaticRegisterNativesULightingBuildInfo()
	{
	}
	UClass* Z_Construct_UClass_ULightingBuildInfo_NoRegister()
	{
		return ULightingBuildInfo::StaticClass();
	}
	struct Z_Construct_UClass_ULightingBuildInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalTexelMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalTexelMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnmappedTexelsMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnmappedTexelsMemory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnmappedTexelsPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnmappedTexelsPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightingBuildInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Lighting Build Info" },
		{ "IncludePath", "LightingBuildInfo.h" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ObjectSetType", "ELightingBuildInfoObjectSets" },
		{ "ToolTip", "Statistics page for lighting." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "168" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ToolTip", "The name of the level this object resides in" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, LevelName), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "220" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "The memory consumed by all texels for this object, in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory = { "TotalTexelMemory", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, TotalTexelMemory), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "194" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The memory consumed by unmapped texels for this object, in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory = { "UnmappedTexelsMemory", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, UnmappedTexelsMemory), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "142" },
		{ "DisplayName", "Unmapped Texels" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The percentage of unmapped texels for this object." },
		{ "Unit", "%" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage = { "UnmappedTexelsPercentage", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, UnmappedTexelsPercentage), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The lighting time this object took." },
		{ "Unit", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime = { "LightingTime", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, LightingTime), METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "150" },
		{ "ModuleRelativePath", "Classes/LightingBuildInfo.h" },
		{ "ToolTip", "The actor and/or object that is related to this info." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightingBuildInfo, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_TotalTexelMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_UnmappedTexelsPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_LightingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightingBuildInfo_Statics::NewProp_Object,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightingBuildInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightingBuildInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightingBuildInfo_Statics::ClassParams = {
		&ULightingBuildInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightingBuildInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightingBuildInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightingBuildInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightingBuildInfo, 459376881);
	template<> STATSVIEWER_API UClass* StaticClass<ULightingBuildInfo>()
	{
		return ULightingBuildInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightingBuildInfo(Z_Construct_UClass_ULightingBuildInfo, &ULightingBuildInfo::StaticClass, TEXT("/Script/StatsViewer"), TEXT("ULightingBuildInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightingBuildInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
