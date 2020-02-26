// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDragScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleAccelerationDragScaleOverLife::StaticRegisterNativesUParticleModuleAccelerationDragScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_NoRegister()
	{
		return UParticleModuleAccelerationDragScaleOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragScaleRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragScaleRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Drag Scale/Life" },
		{ "HideCategories", "UObject Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw_MetaData[] = {
		{ "Category", "Drag" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw = { "DragScaleRaw", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h" },
		{ "ToolTip", "Per-particle drag scale. Evaluted using particle relative time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale = { "DragScale", nullptr, (EPropertyFlags)0x0010000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAccelerationDragScaleOverLife, DragScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScaleRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::NewProp_DragScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationDragScaleOverLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::ClassParams = {
		&UParticleModuleAccelerationDragScaleOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAccelerationDragScaleOverLife, 3814719920);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAccelerationDragScaleOverLife>()
	{
		return UParticleModuleAccelerationDragScaleOverLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationDragScaleOverLife(Z_Construct_UClass_UParticleModuleAccelerationDragScaleOverLife, &UParticleModuleAccelerationDragScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationDragScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDragScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
