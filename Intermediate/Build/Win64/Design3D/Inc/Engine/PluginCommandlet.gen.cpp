// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Commandlets/PluginCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPluginCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPluginCommandlet::StaticRegisterNativesUPluginCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UPluginCommandlet_NoRegister()
	{
		return UPluginCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UPluginCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/PluginCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/PluginCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams = {
		&UPluginCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPluginCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPluginCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPluginCommandlet, 3545337954);
	template<> ENGINE_API UClass* StaticClass<UPluginCommandlet>()
	{
		return UPluginCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPluginCommandlet(Z_Construct_UClass_UPluginCommandlet, &UPluginCommandlet::StaticClass, TEXT("/Script/Engine"), TEXT("UPluginCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
