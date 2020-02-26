// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
// End Cross Module References
	void UFbxFactory::StaticRegisterNativesUFbxFactory()
	{
	}
	UClass* Z_Construct_UClass_UFbxFactory_NoRegister()
	{
		return UFbxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFbxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalImportUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalImportUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
		{ "ToolTip", "Prevent garbage collection of original when overriding ImportUI property" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI = { "OriginalImportUI", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxFactory, OriginalImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxFactory, ImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxFactory_Statics::ClassParams = {
		&UFbxFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxFactory, 3454759549);
	template<> UNREALED_API UClass* StaticClass<UFbxFactory>()
	{
		return UFbxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxFactory(Z_Construct_UClass_UFbxFactory, &UFbxFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
