// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OverlayEditor/Private/Factories/BasicOverlaysFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlaysFactory() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory_NoRegister();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void UBasicOverlaysFactory::StaticRegisterNativesUBasicOverlaysFactory()
	{
	}
	UClass* Z_Construct_UClass_UBasicOverlaysFactory_NoRegister()
	{
		return UBasicOverlaysFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBasicOverlaysFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicOverlaysFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BasicOverlaysFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/BasicOverlaysFactory.h" },
		{ "ToolTip", "Implements a factory for UBasicOverlays objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicOverlaysFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicOverlaysFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasicOverlaysFactory_Statics::ClassParams = {
		&UBasicOverlaysFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicOverlaysFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasicOverlaysFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasicOverlaysFactory, 2710169876);
	template<> OVERLAYEDITOR_API UClass* StaticClass<UBasicOverlaysFactory>()
	{
		return UBasicOverlaysFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicOverlaysFactory(Z_Construct_UClass_UBasicOverlaysFactory, &UBasicOverlaysFactory::StaticClass, TEXT("/Script/OverlayEditor"), TEXT("UBasicOverlaysFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlaysFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
