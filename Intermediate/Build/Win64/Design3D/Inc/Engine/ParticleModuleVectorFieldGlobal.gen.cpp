// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldGlobal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldGlobal::StaticRegisterNativesUParticleModuleVectorFieldGlobal()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal_NoRegister()
	{
		return UParticleModuleVectorFieldGlobal::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalVectorFieldTightness_MetaData[];
#endif
		static void NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalVectorFieldTightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Global Vector Fields" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverrideGlobalVectorFieldTightness" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field tightness override." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldTightness), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Global vector field scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldGlobal, GlobalVectorFieldScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h" },
		{ "ToolTip", "Property override value for global vector field tightness." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldGlobal*)Obj)->bOverrideGlobalVectorFieldTightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness = { "bOverrideGlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleVectorFieldGlobal), &Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldTightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_GlobalVectorFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::NewProp_bOverrideGlobalVectorFieldTightness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldGlobal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams = {
		&UParticleModuleVectorFieldGlobal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldGlobal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldGlobal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldGlobal, 593185791);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldGlobal>()
	{
		return UParticleModuleVectorFieldGlobal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldGlobal(Z_Construct_UClass_UParticleModuleVectorFieldGlobal, &UParticleModuleVectorFieldGlobal::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldGlobal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldGlobal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
