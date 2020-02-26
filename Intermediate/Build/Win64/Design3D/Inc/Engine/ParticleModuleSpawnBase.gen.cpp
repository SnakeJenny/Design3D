// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSpawnBase::StaticRegisterNativesUParticleModuleSpawnBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister()
	{
		return UParticleModuleSpawnBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSpawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessBurstList_MetaData[];
#endif
		static void NewProp_bProcessBurstList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessBurstList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessSpawnRate_MetaData[];
#endif
		static void NewProp_bProcessSpawnRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessSpawnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the BurstList of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule BurstList." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit(void* Obj)
	{
		((UParticleModuleSpawnBase*)Obj)->bProcessBurstList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList = { "bProcessBurstList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the SpawnRate of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule SpawnRate." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit(void* Obj)
	{
		((UParticleModuleSpawnBase*)Obj)->bProcessSpawnRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate = { "bProcessSpawnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSpawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams = {
		&UParticleModuleSpawnBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSpawnBase, 716180731);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawnBase>()
	{
		return UParticleModuleSpawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawnBase(Z_Construct_UClass_UParticleModuleSpawnBase, &UParticleModuleSpawnBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
