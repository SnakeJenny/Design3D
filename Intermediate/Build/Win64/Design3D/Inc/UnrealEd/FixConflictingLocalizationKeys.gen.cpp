// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/FixConflictingLocalizationKeys.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixConflictingLocalizationKeys() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFixConflictingLocalizationKeysCommandlet::StaticRegisterNativesUFixConflictingLocalizationKeysCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_NoRegister()
	{
		return UFixConflictingLocalizationKeysCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/FixConflictingLocalizationKeys.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/FixConflictingLocalizationKeys.h" },
		{ "ToolTip", "Internal commandlet to fix any conflicting localization keys that are found in a manifest.\n@note Hard-coded to work with the \"Game\" localization target." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixConflictingLocalizationKeysCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::ClassParams = {
		&UFixConflictingLocalizationKeysCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFixConflictingLocalizationKeysCommandlet, 662696259);
	template<> UNREALED_API UClass* StaticClass<UFixConflictingLocalizationKeysCommandlet>()
	{
		return UFixConflictingLocalizationKeysCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFixConflictingLocalizationKeysCommandlet(Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet, &UFixConflictingLocalizationKeysCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFixConflictingLocalizationKeysCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixConflictingLocalizationKeysCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
