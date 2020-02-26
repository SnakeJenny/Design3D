// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Material/ParticleModuleMeshMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMaterialBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UParticleModuleMeshMaterial::StaticRegisterNativesUParticleModuleMeshMaterial()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister()
	{
		return UParticleModuleMeshMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMaterials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleMaterialBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Material" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Material/ParticleModuleMeshMaterial.h" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_MetaData[] = {
		{ "Category", "MeshMaterials" },
		{ "ModuleRelativePath", "Classes/Particles/Material/ParticleModuleMeshMaterial.h" },
		{ "ToolTip", "The array of materials to apply to the mesh particles." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials = { "MeshMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleMeshMaterial, MeshMaterials), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_Inner = { "MeshMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::NewProp_MeshMaterials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::ClassParams = {
		&UParticleModuleMeshMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMeshMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMeshMaterial, 2521475272);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshMaterial>()
	{
		return UParticleModuleMeshMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshMaterial(Z_Construct_UClass_UParticleModuleMeshMaterial, &UParticleModuleMeshMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
