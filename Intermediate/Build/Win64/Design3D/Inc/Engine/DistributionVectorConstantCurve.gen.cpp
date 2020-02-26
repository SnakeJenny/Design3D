// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVectorConstantCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstantCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	void UDistributionVectorConstantCurve::StaticRegisterNativesUDistributionVectorConstantCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister()
	{
		return UDistributionVectorConstantCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorConstantCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[];
#endif
		static void NewProp_bLockAxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorConstantCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorConstantCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorConstantCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_SetBit(void* Obj)
	{
		((UDistributionVectorConstantCurve*)Obj)->bLockAxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorConstantCurve), &Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionVectorConstantCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
		{ "ToolTip", "Keyframe data for each component (X,Y,Z) over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorConstantCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::ClassParams = {
		&UDistributionVectorConstantCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVectorConstantCurve, 3570832756);
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorConstantCurve>()
	{
		return UDistributionVectorConstantCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorConstantCurve(Z_Construct_UClass_UDistributionVectorConstantCurve, &UDistributionVectorConstantCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorConstantCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstantCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
