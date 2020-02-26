// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbitBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrbitBase::StaticRegisterNativesUParticleModuleOrbitBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase_NoRegister()
	{
		return UParticleModuleOrbitBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrbitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orbit" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Orbit" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbitBase.h" },
		{ "ToolTip", "If true, distribution values will be retrieved using the EmitterTime.\nIf false (default), they will be retrieved using the Particle.RelativeTime." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleOrbitBase*)Obj)->bUseEmitterTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleOrbitBase), &Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbitBase_Statics::NewProp_bUseEmitterTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrbitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrbitBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams = {
		&UParticleModuleOrbitBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrbitBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleOrbitBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleOrbitBase, 2216470607);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrbitBase>()
	{
		return UParticleModuleOrbitBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrbitBase(Z_Construct_UClass_UParticleModuleOrbitBase, &UParticleModuleOrbitBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrbitBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbitBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
