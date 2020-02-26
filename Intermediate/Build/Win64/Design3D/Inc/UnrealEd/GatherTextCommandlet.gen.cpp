// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/GatherTextCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextCommandlet::StaticRegisterNativesUGatherTextCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGatherTextCommandlet_NoRegister()
	{
		return UGatherTextCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GatherTextCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextCommandlet.h" },
		{ "ToolTip", "UGatherTextCommandlet: One commandlet to rule them all. This commandlet loads a config file and then calls other localization commandlets. Allows localization system to be easily extendable and flexible." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextCommandlet_Statics::ClassParams = {
		&UGatherTextCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGatherTextCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGatherTextCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGatherTextCommandlet, 2522261467);
	template<> UNREALED_API UClass* StaticClass<UGatherTextCommandlet>()
	{
		return UGatherTextCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGatherTextCommandlet(Z_Construct_UClass_UGatherTextCommandlet, &UGatherTextCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UGatherTextCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
