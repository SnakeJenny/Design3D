// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTools/Public/AdvancedCopyCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCopyCustomization() {}
// Cross Module References
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAdvancedCopyCustomization_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAdvancedCopyCustomization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	void UAdvancedCopyCustomization::StaticRegisterNativesUAdvancedCopyCustomization()
	{
	}
	UClass* Z_Construct_UClass_UAdvancedCopyCustomization_NoRegister()
	{
		return UAdvancedCopyCustomization::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedCopyCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedCopyCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedCopyCustomization.h" },
		{ "ModuleRelativePath", "Public/AdvancedCopyCustomization.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedCopyCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedCopyCustomization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedCopyCustomization_Statics::ClassParams = {
		&UAdvancedCopyCustomization::StaticClass,
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
		0x001002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedCopyCustomization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedCopyCustomization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdvancedCopyCustomization, 2071008209);
	template<> ASSETTOOLS_API UClass* StaticClass<UAdvancedCopyCustomization>()
	{
		return UAdvancedCopyCustomization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedCopyCustomization(Z_Construct_UClass_UAdvancedCopyCustomization, &UAdvancedCopyCustomization::StaticClass, TEXT("/Script/AssetTools"), TEXT("UAdvancedCopyCustomization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedCopyCustomization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
