// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/ParticleSystemAuditCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemAuditCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UParticleSystemAuditCommandlet::StaticRegisterNativesUParticleSystemAuditCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet_NoRegister()
	{
		return UParticleSystemAuditCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarLODDistanceTheshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarLODDistanceTheshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighSpawnRateOrBurstThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighSpawnRateOrBurstThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ToolTip", "If a particle system has an LODDistance larger than this value, it will be reported" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold = { "FarLODDistanceTheshold", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemAuditCommandlet, FarLODDistanceTheshold), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ParticleSystemAuditCommandlet.h" },
		{ "ToolTip", "If a particle system has a spawn rate or burst count greater than this value, it will be reported" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold = { "HighSpawnRateOrBurstThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemAuditCommandlet, HighSpawnRateOrBurstThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_FarLODDistanceTheshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::NewProp_HighSpawnRateOrBurstThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemAuditCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::ClassParams = {
		&UParticleSystemAuditCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemAuditCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleSystemAuditCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleSystemAuditCommandlet, 2716445865);
	template<> UNREALED_API UClass* StaticClass<UParticleSystemAuditCommandlet>()
	{
		return UParticleSystemAuditCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystemAuditCommandlet(Z_Construct_UClass_UParticleSystemAuditCommandlet, &UParticleSystemAuditCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UParticleSystemAuditCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemAuditCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
