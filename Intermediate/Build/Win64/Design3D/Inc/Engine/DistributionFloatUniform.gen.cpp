// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatUniform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatUniform::StaticRegisterNativesUDistributionFloatUniform()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister()
	{
		return UDistributionFloatUniform::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatUniform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatUniform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniform.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "High end of output float distribution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionFloatUniform, Max), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "Low end of output float distribution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionFloatUniform, Min), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatUniform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams = {
		&UDistributionFloatUniform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatUniform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloatUniform, 3899964190);
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniform>()
	{
		return UDistributionFloatUniform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatUniform(Z_Construct_UClass_UDistributionFloatUniform, &UDistributionFloatUniform::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatUniform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
