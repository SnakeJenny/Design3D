// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVectorUniform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorUniform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorUniform();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDistributionVectorUniform::StaticRegisterNativesUDistributionVectorUniform()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVectorUniform_NoRegister()
	{
		return UDistributionVectorUniform::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorUniform_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[];
#endif
		static void NewProp_bLockAxes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorUniform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorUniform.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_SetBit(void* Obj)
	{
		((UDistributionVectorUniform*)Obj)->bUseExtremes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes = { "bUseExtremes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorUniform), &Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags = { "MirrorFlags", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MirrorFlags, UDistributionVectorUniform), STRUCT_OFFSET(UDistributionVectorUniform, MirrorFlags), Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorUniform, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_SetBit(void* Obj)
	{
		((UDistributionVectorUniform*)Obj)->bLockAxes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVectorUniform), &Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "Lower end of FVector magnitude range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorUniform, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "DistributionVectorUniform" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorUniform.h" },
		{ "ToolTip", "Upper end of FVector magnitude range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionVectorUniform, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bUseExtremes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_MirrorFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_LockedAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_bLockAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorUniform_Statics::NewProp_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorUniform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorUniform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorUniform_Statics::ClassParams = {
		&UDistributionVectorUniform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorUniform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorUniform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorUniform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVectorUniform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVectorUniform, 214122136);
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorUniform>()
	{
		return UDistributionVectorUniform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVectorUniform(Z_Construct_UClass_UDistributionVectorUniform, &UDistributionVectorUniform::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVectorUniform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorUniform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
