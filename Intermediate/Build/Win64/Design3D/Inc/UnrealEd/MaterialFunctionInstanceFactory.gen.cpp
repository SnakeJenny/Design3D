// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/MaterialFunctionInstanceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstanceFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory();
// End Cross Module References
	void UMaterialFunctionInstanceFactory::StaticRegisterNativesUMaterialFunctionInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory_NoRegister()
	{
		return UMaterialFunctionInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent = { "InitialParent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInstanceFactory, InitialParent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionInstanceFactory, 2721100671);
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionInstanceFactory>()
	{
		return UMaterialFunctionInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionInstanceFactory(Z_Construct_UClass_UMaterialFunctionInstanceFactory, &UMaterialFunctionInstanceFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialFunctionInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstanceFactory);
	void UMaterialFunctionMaterialLayerInstanceFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerInstanceFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerInstanceFactory, 408520894);
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerInstanceFactory>()
	{
		return UMaterialFunctionMaterialLayerInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerInstanceFactory(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory, &UMaterialFunctionMaterialLayerInstanceFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialFunctionMaterialLayerInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerInstanceFactory);
	void UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerBlendInstanceFactory, 3100865507);
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendInstanceFactory>()
	{
		return UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory, &UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialFunctionMaterialLayerBlendInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendInstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
