// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatConstant::StaticRegisterNativesUDistributionFloatConstant()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatConstant_NoRegister()
	{
		return UDistributionFloatConstant::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatConstant.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "DistributionFloatConstant" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstant.h" },
		{ "ToolTip", "This float will be returned for all values of time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionFloatConstant, Constant), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatConstant_Statics::NewProp_Constant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatConstant_Statics::ClassParams = {
		&UDistributionFloatConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatConstant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloatConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloatConstant, 3636041793);
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatConstant>()
	{
		return UDistributionFloatConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatConstant(Z_Construct_UClass_UDistributionFloatConstant, &UDistributionFloatConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
