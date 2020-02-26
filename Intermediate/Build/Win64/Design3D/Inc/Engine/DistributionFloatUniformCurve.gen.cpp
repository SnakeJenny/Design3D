// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatUniformCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniformCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector2D();
// End Cross Module References
	void UDistributionFloatUniformCurve::StaticRegisterNativesUDistributionFloatUniformCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister()
	{
		return UDistributionFloatUniformCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatUniformCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniformCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionFloatUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionFloatUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector2D, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniformCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams = {
		&UDistributionFloatUniformCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatUniformCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloatUniformCurve, 2363835202);
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniformCurve>()
	{
		return UDistributionFloatUniformCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatUniformCurve(Z_Construct_UClass_UDistributionFloatUniformCurve, &UDistributionFloatUniformCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatUniformCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniformCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
