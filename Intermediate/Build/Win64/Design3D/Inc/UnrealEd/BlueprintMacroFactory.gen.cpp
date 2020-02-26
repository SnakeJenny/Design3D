// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/BlueprintMacroFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMacroFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintMacroFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintMacroFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlueprintMacroFactory::StaticRegisterNativesUBlueprintMacroFactory()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintMacroFactory_NoRegister()
	{
		return UBlueprintMacroFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintMacroFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintMacroFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/BlueprintMacroFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintMacroFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintMacroFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMacroFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMacroFactory_Statics::ClassParams = {
		&UBlueprintMacroFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintMacroFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintMacroFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintMacroFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintMacroFactory, 2444010033);
	template<> UNREALED_API UClass* StaticClass<UBlueprintMacroFactory>()
	{
		return UBlueprintMacroFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintMacroFactory(Z_Construct_UClass_UBlueprintMacroFactory, &UBlueprintMacroFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UBlueprintMacroFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMacroFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
