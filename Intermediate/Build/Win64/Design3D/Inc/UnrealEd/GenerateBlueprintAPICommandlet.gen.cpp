// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GenerateBlueprintAPICommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateBlueprintAPICommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGenerateBlueprintAPICommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateBlueprintAPICommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateBlueprintAPICommandlet::StaticRegisterNativesUGenerateBlueprintAPICommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGenerateBlueprintAPICommandlet_NoRegister()
	{
		return UGenerateBlueprintAPICommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GenerateBlueprintAPICommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateBlueprintAPICommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateBlueprintAPICommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::ClassParams = {
		&UGenerateBlueprintAPICommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateBlueprintAPICommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateBlueprintAPICommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateBlueprintAPICommandlet, 4190875859);
	template<> UNREALED_API UClass* StaticClass<UGenerateBlueprintAPICommandlet>()
	{
		return UGenerateBlueprintAPICommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateBlueprintAPICommandlet(Z_Construct_UClass_UGenerateBlueprintAPICommandlet, &UGenerateBlueprintAPICommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGenerateBlueprintAPICommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateBlueprintAPICommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
