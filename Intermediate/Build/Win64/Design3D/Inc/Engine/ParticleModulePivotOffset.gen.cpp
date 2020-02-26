// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Modules/Location/ParticleModulePivotOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModulePivotOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModulePivotOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UParticleModulePivotOffset::StaticRegisterNativesUParticleModulePivotOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModulePivotOffset_NoRegister()
	{
		return UParticleModulePivotOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModulePivotOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModulePivotOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pivot Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Modules/Location/ParticleModulePivotOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData[] = {
		{ "Category", "PivotOffset" },
		{ "ModuleRelativePath", "Classes/Particles/Modules/Location/ParticleModulePivotOffset.h" },
		{ "ToolTip", "Offset applied in UV space to the particle vertex positions. Defaults to (0.5,0.5) putting the pivot in the centre of the partilce." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModulePivotOffset, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModulePivotOffset_Statics::NewProp_PivotOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModulePivotOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModulePivotOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModulePivotOffset_Statics::ClassParams = {
		&UParticleModulePivotOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModulePivotOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModulePivotOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModulePivotOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModulePivotOffset, 1882220715);
	template<> ENGINE_API UClass* StaticClass<UParticleModulePivotOffset>()
	{
		return UParticleModulePivotOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModulePivotOffset(Z_Construct_UClass_UParticleModulePivotOffset, &UParticleModulePivotOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModulePivotOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModulePivotOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
