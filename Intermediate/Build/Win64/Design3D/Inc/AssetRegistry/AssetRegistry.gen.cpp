// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Private/AssetRegistry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistry() {}
// Cross Module References
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistryImpl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
	ASSETREGISTRY_API UClass* Z_Construct_UClass_UAssetRegistry_NoRegister();
// End Cross Module References
	void UAssetRegistryImpl::StaticRegisterNativesUAssetRegistryImpl()
	{
	}
	UClass* Z_Construct_UClass_UAssetRegistryImpl_NoRegister()
	{
		return UAssetRegistryImpl::StaticClass();
	}
	struct Z_Construct_UClass_UAssetRegistryImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetRegistryImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetRegistry.h" },
		{ "ModuleRelativePath", "Private/AssetRegistry.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetRegistryImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetRegistry_NoRegister, (int32)VTABLE_OFFSET(UAssetRegistryImpl, IAssetRegistry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetRegistryImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetRegistryImpl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams = {
		&UAssetRegistryImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetRegistryImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetRegistryImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetRegistryImpl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetRegistryImpl, 2762871239);
	template<> ASSETREGISTRY_API UClass* StaticClass<UAssetRegistryImpl>()
	{
		return UAssetRegistryImpl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetRegistryImpl(Z_Construct_UClass_UAssetRegistryImpl, &UAssetRegistryImpl::StaticClass, TEXT("/Script/AssetRegistry"), TEXT("UAssetRegistryImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetRegistryImpl);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAssetRegistryImpl)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
