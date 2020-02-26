// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventBase::StaticRegisterNativesUParticleModuleEventBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventBase_NoRegister()
	{
		return UParticleModuleEventBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Event" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventBase_Statics::ClassParams = {
		&UParticleModuleEventBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleEventBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventBase, 3287492719);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventBase>()
	{
		return UParticleModuleEventBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventBase(Z_Construct_UClass_UParticleModuleEventBase, &UParticleModuleEventBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
