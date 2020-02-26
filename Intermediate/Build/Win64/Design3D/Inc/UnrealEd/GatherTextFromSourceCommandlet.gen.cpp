// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GatherTextFromSourceCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextFromSourceCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextFromSourceCommandlet::StaticRegisterNativesUGatherTextFromSourceCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister()
	{
		return UGatherTextFromSourceCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GatherTextFromSourceCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextFromSourceCommandlet.h" },
		{ "ToolTip", "UGatherTextFromSourceCommandlet: Localization commandlet that collects all text to be localized from the source code." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextFromSourceCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::ClassParams = {
		&UGatherTextFromSourceCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGatherTextFromSourceCommandlet, 1859994642);
	template<> UNREALED_API UClass* StaticClass<UGatherTextFromSourceCommandlet>()
	{
		return UGatherTextFromSourceCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGatherTextFromSourceCommandlet(Z_Construct_UClass_UGatherTextFromSourceCommandlet, &UGatherTextFromSourceCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGatherTextFromSourceCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextFromSourceCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
