// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTools/Private/AssetTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTools() {}
// Cross Module References
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsImpl_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsImpl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools_NoRegister();
// End Cross Module References
	void UAssetToolsImpl::StaticRegisterNativesUAssetToolsImpl()
	{
	}
	UClass* Z_Construct_UClass_UAssetToolsImpl_NoRegister()
	{
		return UAssetToolsImpl::StaticClass();
	}
	struct Z_Construct_UClass_UAssetToolsImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetToolsImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetTools.h" },
		{ "ModuleRelativePath", "Private/AssetTools.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAssetToolsImpl_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetTools_NoRegister, (int32)VTABLE_OFFSET(UAssetToolsImpl, IAssetTools), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetToolsImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetToolsImpl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetToolsImpl_Statics::ClassParams = {
		&UAssetToolsImpl::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetToolsImpl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetToolsImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetToolsImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetToolsImpl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetToolsImpl, 1233869196);
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetToolsImpl>()
	{
		return UAssetToolsImpl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetToolsImpl(Z_Construct_UClass_UAssetToolsImpl, &UAssetToolsImpl::StaticClass, TEXT("/Script/AssetTools"), TEXT("UAssetToolsImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetToolsImpl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
