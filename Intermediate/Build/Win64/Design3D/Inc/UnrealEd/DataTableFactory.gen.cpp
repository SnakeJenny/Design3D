// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/DataTableFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
// End Cross Module References
	void UDataTableFactory::StaticRegisterNativesUDataTableFactory()
	{
	}
	UClass* Z_Construct_UClass_UDataTableFactory_NoRegister()
	{
		return UDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DataTableFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "Data Table Factory" },
		{ "ModuleRelativePath", "Classes/Factories/DataTableFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataTableFactory, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataTableFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTableFactory_Statics::NewProp_Struct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTableFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataTableFactory_Statics::ClassParams = {
		&UDataTableFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataTableFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTableFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataTableFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataTableFactory, 2227647273);
	template<> UNREALED_API UClass* StaticClass<UDataTableFactory>()
	{
		return UDataTableFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataTableFactory(Z_Construct_UClass_UDataTableFactory, &UDataTableFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDataTableFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTableFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
