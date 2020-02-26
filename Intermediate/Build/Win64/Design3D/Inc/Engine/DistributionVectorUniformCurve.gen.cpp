// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVectorUniformCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniformCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniformCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveTwoVectors();
// End Cross Module References
	void UDistributionVectorUniformCurve::StaticRegisterNativesUDistributionVectorUniformCurve()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniformCurve_NoRegister()
	{
		return UDistributionVectorUniformCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorUniformCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseExtremes_MetaData[];
#endif
		static void NewProp_bUseExtremes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseExtremes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes2_MetaData[];
#endif
		static void NewProp_bLockAxes2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes1_MetaData[];
#endif
		static void NewProp_bLockAxes1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorUniformCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_SetBit(void* Obj)
	{
		((UDistributionVectorUniformCurve*)Obj)->bUseExtremes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes = { "bUseExtremes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags = { "MirrorFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniformCurve), STRUCT_OFFSET(UDistributionVectorUniformCurve, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LockedAxes, UDistributionVectorUniformCurve), STRUCT_OFFSET(UDistributionVectorUniformCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_SetBit(void* Obj)
	{
		((UDistributionVectorUniformCurve*)Obj)->bLockAxes2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2 = { "bLockAxes2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_SetBit(void* Obj)
	{
		((UDistributionVectorUniformCurve*)Obj)->bLockAxes1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1 = { "bLockAxes1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorUniformCurve), &Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionVectorUniformCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniformCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveTwoVectors, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bUseExtremes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_MirrorFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_LockedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_bLockAxes1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::NewProp_ConstantCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorUniformCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::ClassParams = {
		&UDistributionVectorUniformCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorUniformCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVectorUniformCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVectorUniformCurve, 3783540440);
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorUniformCurve>()
	{
		return UDistributionVectorUniformCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorUniformCurve(Z_Construct_UClass_UDistributionVectorUniformCurve, &UDistributionVectorUniformCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorUniformCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniformCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
