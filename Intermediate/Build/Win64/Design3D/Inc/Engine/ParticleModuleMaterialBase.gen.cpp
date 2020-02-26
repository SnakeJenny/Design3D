// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Material/ParticleModuleMaterialBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMaterialBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleMaterialBase::StaticRegisterNativesUParticleModuleMaterialBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMaterialBase_NoRegister()
	{
		return UParticleModuleMaterialBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMaterialBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMaterialBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Material" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Material/ParticleModuleMaterialBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMaterialBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMaterialBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMaterialBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMaterialBase_Statics::ClassParams = {
		&UParticleModuleMaterialBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMaterialBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMaterialBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMaterialBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMaterialBase, 1079261024);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMaterialBase>()
	{
		return UParticleModuleMaterialBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMaterialBase(Z_Construct_UClass_UParticleModuleMaterialBase, &UParticleModuleMaterialBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMaterialBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMaterialBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
