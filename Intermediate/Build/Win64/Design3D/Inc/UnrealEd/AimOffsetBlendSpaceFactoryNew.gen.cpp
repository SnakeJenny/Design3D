// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/AimOffsetBlendSpaceFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpaceFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactoryNew();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAimOffsetBlendSpaceFactoryNew::StaticRegisterNativesUAimOffsetBlendSpaceFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_NoRegister()
	{
		return UAimOffsetBlendSpaceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceFactoryNew,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AimOffsetBlendSpaceFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/AimOffsetBlendSpaceFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpaceFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::ClassParams = {
		&UAimOffsetBlendSpaceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAimOffsetBlendSpaceFactoryNew, 2531802768);
	template<> UNREALED_API UClass* StaticClass<UAimOffsetBlendSpaceFactoryNew>()
	{
		return UAimOffsetBlendSpaceFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAimOffsetBlendSpaceFactoryNew(Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew, &UAimOffsetBlendSpaceFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAimOffsetBlendSpaceFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpaceFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
