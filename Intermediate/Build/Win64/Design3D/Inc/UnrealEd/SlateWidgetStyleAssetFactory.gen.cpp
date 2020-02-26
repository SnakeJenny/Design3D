// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/SlateWidgetStyleAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USlateWidgetStyleAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USlateWidgetStyleAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
// End Cross Module References
	void USlateWidgetStyleAssetFactory::StaticRegisterNativesUSlateWidgetStyleAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleAssetFactory_NoRegister()
	{
		return USlateWidgetStyleAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StyleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SlateWidgetStyleAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SlateWidgetStyleAssetFactory.h" },
		{ "ToolTip", "Factory for creating SlateStyles" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::NewProp_StyleType_MetaData[] = {
		{ "Category", "StyleType" },
		{ "ModuleRelativePath", "Classes/Factories/SlateWidgetStyleAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::NewProp_StyleType = { "StyleType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateWidgetStyleAssetFactory, StyleType), Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::NewProp_StyleType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::NewProp_StyleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::NewProp_StyleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::ClassParams = {
		&USlateWidgetStyleAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateWidgetStyleAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateWidgetStyleAssetFactory, 579884741);
	template<> UNREALED_API UClass* StaticClass<USlateWidgetStyleAssetFactory>()
	{
		return USlateWidgetStyleAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleAssetFactory(Z_Construct_UClass_USlateWidgetStyleAssetFactory, &USlateWidgetStyleAssetFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USlateWidgetStyleAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
