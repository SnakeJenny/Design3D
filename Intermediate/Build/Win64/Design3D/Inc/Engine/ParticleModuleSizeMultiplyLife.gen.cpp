// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeMultiplyLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSizeMultiplyLife::StaticRegisterNativesUParticleModuleSizeMultiplyLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife_NoRegister()
	{
		return UParticleModuleSizeMultiplyLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyZ_MetaData[];
#endif
		static void NewProp_MultiplyZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyY_MetaData[];
#endif
		static void NewProp_MultiplyY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplyX_MetaData[];
#endif
		static void NewProp_MultiplyX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MultiplyX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Z-component of the scale factor will be applied to the particle size Z-component.\nIf false, the Z-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ = { "MultiplyZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the Y-component of the scale factor will be applied to the particle size Y-component.\nIf false, the Y-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY = { "MultiplyY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "If true, the X-component of the scale factor will be applied to the particle size X-component.\nIf false, the X-component is left unaltered." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit(void* Obj)
	{
		((UParticleModuleSizeMultiplyLife*)Obj)->MultiplyX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX = { "MultiplyX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSizeMultiplyLife), &Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h" },
		{ "ToolTip", "The scale factor for the size that should be used for a particle.\nThe value is retrieved using the RelativeTime of the particle during its update." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier = { "LifeMultiplier", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeMultiplyLife, LifeMultiplier), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_MultiplyX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::NewProp_LifeMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeMultiplyLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams = {
		&UParticleModuleSizeMultiplyLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeMultiplyLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSizeMultiplyLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSizeMultiplyLife, 3116843009);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeMultiplyLife>()
	{
		return UParticleModuleSizeMultiplyLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeMultiplyLife(Z_Construct_UClass_UParticleModuleSizeMultiplyLife, &UParticleModuleSizeMultiplyLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeMultiplyLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeMultiplyLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
