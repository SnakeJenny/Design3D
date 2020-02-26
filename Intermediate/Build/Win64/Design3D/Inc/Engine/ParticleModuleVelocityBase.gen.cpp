// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Velocity/ParticleModuleVelocityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVelocityBase::StaticRegisterNativesUParticleModuleVelocityBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister()
	{
		return UParticleModuleVelocityBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[];
#endif
		static void NewProp_bApplyOwnerScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInWorldSpace_MetaData[];
#endif
		static void NewProp_bInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then apply the particle system components scale to the velocity value." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit(void* Obj)
	{
		((UParticleModuleVelocityBase*)Obj)->bApplyOwnerScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale = { "bApplyOwnerScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then treat the velocity as world-space defined.\nNOTE: LocalSpace emitters that are moving will see strange results..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit(void* Obj)
	{
		((UParticleModuleVelocityBase*)Obj)->bInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace = { "bInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams = {
		&UParticleModuleVelocityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVelocityBase, 3046904785);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityBase>()
	{
		return UParticleModuleVelocityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityBase(Z_Construct_UClass_UParticleModuleVelocityBase, &UParticleModuleVelocityBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
