// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAcceleration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAcceleration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAcceleration();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleAcceleration::StaticRegisterNativesUParticleModuleAcceleration()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAcceleration_NoRegister()
	{
		return UParticleModuleAcceleration::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAcceleration_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAcceleration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAcceleration_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Acceleration" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ToolTip", "If true, then apply the particle system components scale\nto the acceleration value." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_SetBit(void* Obj)
	{
		((UParticleModuleAcceleration*)Obj)->bApplyOwnerScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale = { "bApplyOwnerScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleAcceleration), &Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAcceleration.h" },
		{ "ToolTip", "The initial acceleration of the particle.\nValue is obtained using the EmitterTime at particle spawn.\nEach frame, the current and base velocity of the particle\nis then updated using the formula\n        velocity += acceleration * DeltaTime\nwhere DeltaTime is the time passed since the last frame." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAcceleration, Acceleration), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_bApplyOwnerScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAcceleration_Statics::NewProp_Acceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAcceleration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAcceleration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAcceleration_Statics::ClassParams = {
		&UParticleModuleAcceleration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAcceleration_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAcceleration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAcceleration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAcceleration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAcceleration, 2139468743);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAcceleration>()
	{
		return UParticleModuleAcceleration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAcceleration(Z_Construct_UClass_UParticleModuleAcceleration, &UParticleModuleAcceleration::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAcceleration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAcceleration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
