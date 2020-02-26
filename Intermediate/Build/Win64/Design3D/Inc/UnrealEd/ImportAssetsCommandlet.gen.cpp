// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/Commandlets/ImportAssetsCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportAssetsCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UImportAssetsCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UImportAssetsCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
// End Cross Module References
	void UImportAssetsCommandlet::StaticRegisterNativesUImportAssetsCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UImportAssetsCommandlet_NoRegister()
	{
		return UImportAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UImportAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportDataList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalImportData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ImportAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
		{ "ToolTip", "List of import data to import.  Each element in the list represents a list of assets using the same import settings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList = { "ImportDataList", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportAssetsCommandlet, ImportDataList), METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_Inner = { "ImportDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
		{ "ToolTip", "Settings used when an import settings file is not used\nor as a base to fallback on if settings are not overridden by the file" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData = { "GlobalImportData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportAssetsCommandlet, GlobalImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportAssetsCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::ClassParams = {
		&UImportAssetsCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportAssetsCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportAssetsCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportAssetsCommandlet, 4186336970);
	template<> UNREALED_API UClass* StaticClass<UImportAssetsCommandlet>()
	{
		return UImportAssetsCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportAssetsCommandlet(Z_Construct_UClass_UImportAssetsCommandlet, &UImportAssetsCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UImportAssetsCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportAssetsCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
