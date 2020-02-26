// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/InterpDataFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpDataFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UInterpDataFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UInterpDataFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UInterpDataFactoryNew::StaticRegisterNativesUInterpDataFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UInterpDataFactoryNew_NoRegister()
	{
		return UInterpDataFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UInterpDataFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpDataFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpDataFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/InterpDataFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/InterpDataFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpDataFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpDataFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpDataFactoryNew_Statics::ClassParams = {
		&UInterpDataFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterpDataFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpDataFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpDataFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpDataFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpDataFactoryNew, 2694568311);
	template<> UNREALED_API UClass* StaticClass<UInterpDataFactoryNew>()
	{
		return UInterpDataFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpDataFactoryNew(Z_Construct_UClass_UInterpDataFactoryNew, &UInterpDataFactoryNew::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UInterpDataFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpDataFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
