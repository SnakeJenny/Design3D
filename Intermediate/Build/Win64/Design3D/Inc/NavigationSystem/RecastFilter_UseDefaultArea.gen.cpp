// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavFilters/RecastFilter_UseDefaultArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastFilter_UseDefaultArea() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void URecastFilter_UseDefaultArea::StaticRegisterNativesURecastFilter_UseDefaultArea()
	{
	}
	UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea_NoRegister()
	{
		return URecastFilter_UseDefaultArea::StaticClass();
	}
	struct Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavFilters/RecastFilter_UseDefaultArea.h" },
		{ "ModuleRelativePath", "Public/NavFilters/RecastFilter_UseDefaultArea.h" },
		{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecastFilter_UseDefaultArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::ClassParams = {
		&URecastFilter_UseDefaultArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecastFilter_UseDefaultArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecastFilter_UseDefaultArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecastFilter_UseDefaultArea, 2566541114);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<URecastFilter_UseDefaultArea>()
	{
		return URecastFilter_UseDefaultArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecastFilter_UseDefaultArea(Z_Construct_UClass_URecastFilter_UseDefaultArea, &URecastFilter_UseDefaultArea::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("URecastFilter_UseDefaultArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecastFilter_UseDefaultArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
