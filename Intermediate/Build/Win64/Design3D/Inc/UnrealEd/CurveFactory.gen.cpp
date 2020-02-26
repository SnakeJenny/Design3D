// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CurveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFloatFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFloatFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveVectorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveVectorFactory();
// End Cross Module References
	void UCurveFactory::StaticRegisterNativesUCurveFactory()
	{
	}
	UClass* Z_Construct_UClass_UCurveFactory_NoRegister()
	{
		return UCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CurveClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates curve assets, prompting to pick the kind of curve at creation time" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass = { "CurveClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveFactory, CurveClass), Z_Construct_UClass_UCurveBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveFactory_Statics::ClassParams = {
		&UCurveFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveFactory, 2005705462);
	template<> UNREALED_API UClass* StaticClass<UCurveFactory>()
	{
		return UCurveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveFactory(Z_Construct_UClass_UCurveFactory, &UCurveFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFactory);
	void UCurveFloatFactory::StaticRegisterNativesUCurveFloatFactory()
	{
	}
	UClass* Z_Construct_UClass_UCurveFloatFactory_NoRegister()
	{
		return UCurveFloatFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFloatFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFloatFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates float curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFloatFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFloatFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveFloatFactory_Statics::ClassParams = {
		&UCurveFloatFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFloatFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveFloatFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveFloatFactory, 2525541943);
	template<> UNREALED_API UClass* StaticClass<UCurveFloatFactory>()
	{
		return UCurveFloatFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveFloatFactory(Z_Construct_UClass_UCurveFloatFactory, &UCurveFloatFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurveFloatFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloatFactory);
	void UCurveLinearColorFactory::StaticRegisterNativesUCurveLinearColorFactory()
	{
	}
	UClass* Z_Construct_UClass_UCurveLinearColorFactory_NoRegister()
	{
		return UCurveLinearColorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates linear color curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorFactory_Statics::ClassParams = {
		&UCurveLinearColorFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveLinearColorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveLinearColorFactory, 3214706602);
	template<> UNREALED_API UClass* StaticClass<UCurveLinearColorFactory>()
	{
		return UCurveLinearColorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColorFactory(Z_Construct_UClass_UCurveLinearColorFactory, &UCurveLinearColorFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurveLinearColorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorFactory);
	void UCurveVectorFactory::StaticRegisterNativesUCurveVectorFactory()
	{
	}
	UClass* Z_Construct_UClass_UCurveVectorFactory_NoRegister()
	{
		return UCurveVectorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveVectorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveVectorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates vector curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveVectorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveVectorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveVectorFactory_Statics::ClassParams = {
		&UCurveVectorFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveVectorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveVectorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveVectorFactory, 2885843908);
	template<> UNREALED_API UClass* StaticClass<UCurveVectorFactory>()
	{
		return UCurveVectorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveVectorFactory(Z_Construct_UClass_UCurveVectorFactory, &UCurveVectorFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurveVectorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveVectorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
