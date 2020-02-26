// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageTile() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageTile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
// End Cross Module References
	void UProceduralFoliageTile::StaticRegisterNativesUProceduralFoliageTile()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFoliageTile_NoRegister()
	{
		return UProceduralFoliageTile::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstancesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageSpawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralFoliageTile.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
		{ "ToolTip", "Procedurally determines where to spawn foliage meshes within a discrete area.\nGenerally, a procedural foliage simulation as a whole is composed of multiple tiles.\nTiles are able to overlap one another as well to create a seamless appearance.\n\nNote that the tile is not responsible for actually spawning any instances, it only determines where they should be placed.\nFollowing a simulation, call ExtractDesiredInstances for information about where each instance should spawn.\n\nNote also that, barring any core changes to the ordering of TSet, foliage generation is deterministic\n(i.e. given the same inputs, the result of the simulation will always be the same)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray = { "InstancesArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageTile, InstancesArray), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_Inner = { "InstancesArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProceduralFoliageInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageTile.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner = { "FoliageSpawner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageTile, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_InstancesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageTile_Statics::NewProp_FoliageSpawner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageTile_Statics::ClassParams = {
		&UProceduralFoliageTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFoliageTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFoliageTile, 2677059);
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageTile>()
	{
		return UProceduralFoliageTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageTile(Z_Construct_UClass_UProceduralFoliageTile, &UProceduralFoliageTile::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
