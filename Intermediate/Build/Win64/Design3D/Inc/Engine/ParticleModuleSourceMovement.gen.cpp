// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleSourceMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSourceMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSourceMovement();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSourceMovement::StaticRegisterNativesUParticleModuleSourceMovement()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement_NoRegister()
	{
		return UParticleModuleSourceMovement::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSourceMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMovementScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceMovementScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Source Movement" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData[] = {
		{ "Category", "SourceMovement" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleSourceMovement.h" },
		{ "ToolTip", "The scale factor to apply to the source movement before adding to the particle location.\nThe value is looked up using the particles RELATIVE time [0..1]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale = { "SourceMovementScale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSourceMovement, SourceMovementScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSourceMovement_Statics::NewProp_SourceMovementScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSourceMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSourceMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams = {
		&UParticleModuleSourceMovement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSourceMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSourceMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSourceMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSourceMovement, 2184833162);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSourceMovement>()
	{
		return UParticleModuleSourceMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSourceMovement(Z_Construct_UClass_UParticleModuleSourceMovement, &UParticleModuleSourceMovement::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSourceMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSourceMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
