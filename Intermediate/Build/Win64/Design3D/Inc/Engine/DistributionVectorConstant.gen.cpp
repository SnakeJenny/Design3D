// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVectorConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorConstant::StaticRegisterNativesUDistributionVectorConstant()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister()
	{
		return UDistributionVectorConstant::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorConstant_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Constant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorConstant.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorConstant" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorConstant, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_SetBit(void* Obj)
	{
		((UDistributionVectorConstant*)Obj)->bLockAxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorConstant), &Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "DistributionVectorConstant" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
		{ "ToolTip", "This FVector will be returned for all input times." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorConstant, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorConstant_Statics::ClassParams = {
		&UDistributionVectorConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVectorConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVectorConstant, 2839159040);
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorConstant>()
	{
		return UDistributionVectorConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorConstant(Z_Construct_UClass_UDistributionVectorConstant, &UDistributionVectorConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
