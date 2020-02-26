// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Velocity/ParticleModuleVelocityCone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityCone() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityCone();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleVelocityCone::StaticRegisterNativesUParticleModuleVelocityCone()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityCone_NoRegister()
	{
		return UParticleModuleVelocityCone::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocityCone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocityCone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityCone_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity Cone" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Cone" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The direction FVector of the cone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Cone" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The initial velocity of the particles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Velocity), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Cone" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityCone.h" },
		{ "ToolTip", "The Min value represents the inner cone angle value and the Max value represents the outer cone angle value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocityCone, Angle), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityCone_Statics::NewProp_Angle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocityCone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityCone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityCone_Statics::ClassParams = {
		&UParticleModuleVelocityCone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityCone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocityCone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVelocityCone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVelocityCone, 368338451);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityCone>()
	{
		return UParticleModuleVelocityCone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityCone(Z_Construct_UClass_UParticleModuleVelocityCone, &UParticleModuleVelocityCone::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityCone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityCone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
