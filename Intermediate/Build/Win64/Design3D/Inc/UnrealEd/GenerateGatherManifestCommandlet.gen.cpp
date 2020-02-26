// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GenerateGatherManifestCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateGatherManifestCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateGatherManifestCommandlet::StaticRegisterNativesUGenerateGatherManifestCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet_NoRegister()
	{
		return UGenerateGatherManifestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GenerateGatherManifestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateGatherManifestCommandlet.h" },
		{ "ToolTip", "UGenerateGatherManifestCommandlet: Generates a localisation manifest; generally used as a gather step." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateGatherManifestCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::ClassParams = {
		&UGenerateGatherManifestCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateGatherManifestCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateGatherManifestCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateGatherManifestCommandlet, 736574425);
	template<> UNREALED_API UClass* StaticClass<UGenerateGatherManifestCommandlet>()
	{
		return UGenerateGatherManifestCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateGatherManifestCommandlet(Z_Construct_UClass_UGenerateGatherManifestCommandlet, &UGenerateGatherManifestCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGenerateGatherManifestCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateGatherManifestCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
