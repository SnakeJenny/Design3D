// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CameraAnimFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCameraAnimFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCameraAnimFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCameraAnimFactory::StaticRegisterNativesUCameraAnimFactory()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnimFactory_NoRegister()
	{
		return UCameraAnimFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CameraAnimFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CameraAnimFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimFactory_Statics::ClassParams = {
		&UCameraAnimFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraAnimFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnimFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnimFactory, 806861261);
	template<> UNREALED_API UClass* StaticClass<UCameraAnimFactory>()
	{
		return UCameraAnimFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnimFactory(Z_Construct_UClass_UCameraAnimFactory, &UCameraAnimFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCameraAnimFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
