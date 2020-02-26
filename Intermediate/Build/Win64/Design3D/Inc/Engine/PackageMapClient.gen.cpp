// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PackageMapClient.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageMapClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPackageMapClient::StaticRegisterNativesUPackageMapClient()
	{
	}
	UClass* Z_Construct_UClass_UPackageMapClient_NoRegister()
	{
		return UPackageMapClient::StaticClass();
	}
	struct Z_Construct_UClass_UPackageMapClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageMapClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPackageMap,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PackageMapClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/PackageMapClient.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageMapClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageMapClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPackageMapClient_Statics::ClassParams = {
		&UPackageMapClient::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPackageMapClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageMapClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPackageMapClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackageMapClient, 2517440750);
	template<> ENGINE_API UClass* StaticClass<UPackageMapClient>()
	{
		return UPackageMapClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackageMapClient(Z_Construct_UClass_UPackageMapClient, &UPackageMapClient::StaticClass, TEXT("/Script/Engine"), TEXT("UPackageMapClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageMapClient);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPackageMapClient)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
