// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/AimOffsetBlendSpaceFactory1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpaceFactory1D() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactory1D();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAimOffsetBlendSpaceFactory1D::StaticRegisterNativesUAimOffsetBlendSpaceFactory1D()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_NoRegister()
	{
		return UAimOffsetBlendSpaceFactory1D::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceFactory1D,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AimOffsetBlendSpaceFactory1D.h" },
		{ "ModuleRelativePath", "Classes/Factories/AimOffsetBlendSpaceFactory1D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpaceFactory1D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::ClassParams = {
		&UAimOffsetBlendSpaceFactory1D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimOffsetBlendSpaceFactory1D, 3654987076);
	template<> UNREALED_API UClass* StaticClass<UAimOffsetBlendSpaceFactory1D>()
	{
		return UAimOffsetBlendSpaceFactory1D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetBlendSpaceFactory1D(Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D, &UAimOffsetBlendSpaceFactory1D::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAimOffsetBlendSpaceFactory1D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpaceFactory1D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
