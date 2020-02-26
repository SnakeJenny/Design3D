// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GatherTextFromMetadataCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextFromMetadataCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromMetaDataCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextFromMetaDataCommandlet::StaticRegisterNativesUGatherTextFromMetaDataCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_NoRegister()
	{
		return UGatherTextFromMetaDataCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GatherTextFromMetadataCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextFromMetadataCommandlet.h" },
		{ "ToolTip", "UGatherTextFromMetaDataCommandlet: Localization commandlet that collects all text to be localized from generated metadata." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextFromMetaDataCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::ClassParams = {
		&UGatherTextFromMetaDataCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextFromMetaDataCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGatherTextFromMetaDataCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGatherTextFromMetaDataCommandlet, 2172829571);
	template<> UNREALED_API UClass* StaticClass<UGatherTextFromMetaDataCommandlet>()
	{
		return UGatherTextFromMetaDataCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGatherTextFromMetaDataCommandlet(Z_Construct_UClass_UGatherTextFromMetaDataCommandlet, &UGatherTextFromMetaDataCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGatherTextFromMetaDataCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextFromMetaDataCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
