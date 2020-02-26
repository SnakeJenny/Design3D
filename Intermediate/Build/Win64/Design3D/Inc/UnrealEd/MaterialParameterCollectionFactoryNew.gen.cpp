// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialParameterCollectionFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialParameterCollectionFactoryNew::StaticRegisterNativesUMaterialParameterCollectionFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister()
	{
		return UMaterialParameterCollectionFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialParameterCollectionFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialParameterCollectionFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollectionFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::ClassParams = {
		&UMaterialParameterCollectionFactoryNew::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialParameterCollectionFactoryNew, 1749276750);
	template<> UNREALED_API UClass* StaticClass<UMaterialParameterCollectionFactoryNew>()
	{
		return UMaterialParameterCollectionFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollectionFactoryNew(Z_Construct_UClass_UMaterialParameterCollectionFactoryNew, &UMaterialParameterCollectionFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialParameterCollectionFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
