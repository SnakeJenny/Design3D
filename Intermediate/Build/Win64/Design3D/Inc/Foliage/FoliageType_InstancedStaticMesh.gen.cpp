// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageType_InstancedStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void UFoliageType_InstancedStaticMesh::StaticRegisterNativesUFoliageType_InstancedStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister()
	{
		return UFoliageType_InstancedStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoliageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_InstancedStaticMesh.h" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "The component class to use for foliage instances.\nYou can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, ComponentClass), Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "Material overrides for foliage instances." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, OverrideMaterials), METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams = {
		&UFoliageType_InstancedStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageType_InstancedStaticMesh, 2115961991);
	template<> FOLIAGE_API UClass* StaticClass<UFoliageType_InstancedStaticMesh>()
	{
		return UFoliageType_InstancedStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType_InstancedStaticMesh(Z_Construct_UClass_UFoliageType_InstancedStaticMesh, &UFoliageType_InstancedStaticMesh::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageType_InstancedStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_InstancedStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
