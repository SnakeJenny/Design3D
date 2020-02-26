// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Velocity/ParticleModuleVelocity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleVelocity::StaticRegisterNativesUParticleModuleVelocity()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocity_NoRegister()
	{
		return UParticleModuleVelocity::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVelocityRadial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartVelocityRadial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Velocity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle along its radial direction.\nDirection is determined by subtracting the location of the emitter from the particle location at spawn.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial = { "StartVelocityRadial", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocityRadial), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocity.h" },
		{ "ToolTip", "The velocity to apply to a particle when it is spawned.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity = { "StartVelocity", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocity, StartVelocity), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocityRadial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocity_Statics::NewProp_StartVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams = {
		&UParticleModuleVelocity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVelocity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVelocity, 1474209183);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocity>()
	{
		return UParticleModuleVelocity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocity(Z_Construct_UClass_UParticleModuleVelocity, &UParticleModuleVelocity::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
