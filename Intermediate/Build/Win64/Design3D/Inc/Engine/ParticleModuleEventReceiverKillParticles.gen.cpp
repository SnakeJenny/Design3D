// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverKillParticles() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventReceiverKillParticles::StaticRegisterNativesUParticleModuleEventReceiverKillParticles()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_NoRegister()
	{
		return UParticleModuleEventReceiverKillParticles::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopSpawning_MetaData[];
#endif
		static void NewProp_bStopSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopSpawning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "EventReceiver Kill All" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_MetaData[] = {
		{ "Category", "ParticleModuleEventReceiverKillParticles" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverKillParticles.h" },
		{ "ToolTip", "If true, stop this emitter from spawning as well." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverKillParticles*)Obj)->bStopSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning = { "bStopSpawning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleEventReceiverKillParticles), &Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::NewProp_bStopSpawning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverKillParticles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::ClassParams = {
		&UParticleModuleEventReceiverKillParticles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverKillParticles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleEventReceiverKillParticles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleEventReceiverKillParticles, 109998771);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverKillParticles>()
	{
		return UParticleModuleEventReceiverKillParticles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleEventReceiverKillParticles(Z_Construct_UClass_UParticleModuleEventReceiverKillParticles, &UParticleModuleEventReceiverKillParticles::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleEventReceiverKillParticles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverKillParticles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
