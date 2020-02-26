// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OverlayEditor/Private/Factories/ReimportBasicOverlaysFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportBasicOverlaysFactory() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void UReimportBasicOverlaysFactory::StaticRegisterNativesUReimportBasicOverlaysFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister()
	{
		return UReimportBasicOverlaysFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicOverlaysFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ReimportBasicOverlaysFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/ReimportBasicOverlaysFactory.h" },
		{ "ToolTip", "A factory for reimporting basic overlays" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportBasicOverlaysFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::ClassParams = {
		&UReimportBasicOverlaysFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportBasicOverlaysFactory, 4025642174);
	template<> OVERLAYEDITOR_API UClass* StaticClass<UReimportBasicOverlaysFactory>()
	{
		return UReimportBasicOverlaysFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportBasicOverlaysFactory(Z_Construct_UClass_UReimportBasicOverlaysFactory, &UReimportBasicOverlaysFactory::StaticClass, TEXT("/Script/OverlayEditor"), TEXT("UReimportBasicOverlaysFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportBasicOverlaysFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
