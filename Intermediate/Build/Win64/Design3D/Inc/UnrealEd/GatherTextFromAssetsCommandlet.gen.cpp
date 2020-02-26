// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GatherTextFromAssetsCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextFromAssetsCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextFromAssetsCommandlet::StaticRegisterNativesUGatherTextFromAssetsCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister()
	{
		return UGatherTextFromAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GatherTextFromAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextFromAssetsCommandlet.h" },
		{ "ToolTip", "UGatherTextFromAssetsCommandlet: Localization commandlet that collects all text to be localized from the game assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextFromAssetsCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::ClassParams = {
		&UGatherTextFromAssetsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGatherTextFromAssetsCommandlet, 1962005053);
	template<> UNREALED_API UClass* StaticClass<UGatherTextFromAssetsCommandlet>()
	{
		return UGatherTextFromAssetsCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGatherTextFromAssetsCommandlet(Z_Construct_UClass_UGatherTextFromAssetsCommandlet, &UGatherTextFromAssetsCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGatherTextFromAssetsCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextFromAssetsCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
