// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialInstanceConstantFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstantFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMaterialInstanceConstantFactoryNew::StaticRegisterNativesUMaterialInstanceConstantFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister()
	{
		return UMaterialInstanceConstantFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialInstanceConstantFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialInstanceConstantFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MaterialInstanceConstantFactoryNew.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent = { "InitialParent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInstanceConstantFactoryNew, InitialParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceConstantFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::ClassParams = {
		&UMaterialInstanceConstantFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceConstantFactoryNew, 2393851787);
	template<> UNREALED_API UClass* StaticClass<UMaterialInstanceConstantFactoryNew>()
	{
		return UMaterialInstanceConstantFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceConstantFactoryNew(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew, &UMaterialInstanceConstantFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialInstanceConstantFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstantFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
