// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/UnrealPakCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealPakCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UUnrealPakCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealPakCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UUnrealPakCommandlet::StaticRegisterNativesUUnrealPakCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UUnrealPakCommandlet_NoRegister()
	{
		return UUnrealPakCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealPakCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealPakCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealPakCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/UnrealPakCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/UnrealPakCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealPakCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealPakCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealPakCommandlet_Statics::ClassParams = {
		&UUnrealPakCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealPakCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealPakCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealPakCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealPakCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealPakCommandlet, 703500410);
	template<> UNREALED_API UClass* StaticClass<UUnrealPakCommandlet>()
	{
		return UUnrealPakCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealPakCommandlet(Z_Construct_UClass_UUnrealPakCommandlet, &UUnrealPakCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUnrealPakCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealPakCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
