// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/PhysicalMaterialFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void UPhysicalMaterialFactoryNew::StaticRegisterNativesUPhysicalMaterialFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister()
	{
		return UPhysicalMaterialFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PhysicalMaterialClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PhysicalMaterialFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData[] = {
		{ "Category", "PhysicalMaterialFactory" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialFactoryNew.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass = { "PhysicalMaterialClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterialFactoryNew, PhysicalMaterialClass), Z_Construct_UClass_UPhysicalMaterial_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::ClassParams = {
		&UPhysicalMaterialFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterialFactoryNew, 4292211281);
	template<> UNREALED_API UClass* StaticClass<UPhysicalMaterialFactoryNew>()
	{
		return UPhysicalMaterialFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterialFactoryNew(Z_Construct_UClass_UPhysicalMaterialFactoryNew, &UPhysicalMaterialFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPhysicalMaterialFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
