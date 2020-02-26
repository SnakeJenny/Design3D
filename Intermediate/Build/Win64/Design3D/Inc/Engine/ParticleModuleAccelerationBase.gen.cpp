// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAccelerationBase::StaticRegisterNativesUParticleModuleAccelerationBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase_NoRegister()
	{
		return UParticleModuleAccelerationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysInWorldSpace_MetaData[];
#endif
		static void NewProp_bAlwaysInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysInWorldSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h" },
		{ "ToolTip", "If true, then treat the acceleration as world-space" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit(void* Obj)
	{
		((UParticleModuleAccelerationBase*)Obj)->bAlwaysInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace = { "bAlwaysInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleAccelerationBase), &Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::NewProp_bAlwaysInWorldSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams = {
		&UParticleModuleAccelerationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAccelerationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAccelerationBase, 2441315302);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationBase>()
	{
		return UParticleModuleAccelerationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationBase(Z_Construct_UClass_UParticleModuleAccelerationBase, &UParticleModuleAccelerationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
