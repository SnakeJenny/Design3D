// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageSpawner.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageSpawner() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeObject();
// End Cross Module References
	void UProceduralFoliageSpawner::StaticRegisterNativesUProceduralFoliageSpawner()
	{
		UClass* Class = UProceduralFoliageSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Simulate", &UProceduralFoliageSpawner::execSimulate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics
	{
		struct ProceduralFoliageSpawner_eventSimulate_Parms
		{
			int32 NumSteps;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProceduralFoliageSpawner_eventSimulate_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::NewProp_NumSteps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "CPP_Default_NumSteps", "-1" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralFoliageSpawner, nullptr, "Simulate", sizeof(ProceduralFoliageSpawner_eventSimulate_Parms), Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister()
	{
		return UProceduralFoliageSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsSimulation_MetaData[];
#endif
		static void NewProp_bNeedsSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumQuadTreeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumQuadTreeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumUniqueTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumUniqueTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralFoliageSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralFoliageSpawner_Simulate, "Simulate" }, // 1675433007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation_SetBit(void* Obj)
	{
		((UProceduralFoliageSpawner*)Obj)->bNeedsSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation = { "bNeedsSimulation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageSpawner), &Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The types of foliage to procedurally spawn." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes = { "FoliageTypes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, FoliageTypes), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner = { "FoliageTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFoliageTypeObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Minimum size of the quad tree used during the simulation. Reduce if too many instances are in splittable leaf quads (as warned in the log)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize = { "MinimumQuadTreeSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, MinimumQuadTreeSize), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The number of unique tiles to generate. The final simulation is a procedurally determined combination of the various unique tiles." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles = { "NumUniqueTiles", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, NumUniqueTiles), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "Length of the tile (in cm) along one axis. The total area of the tile will be TileSize*TileSize." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, TileSize), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "ProceduralFoliageSimulation" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageSpawner.h" },
		{ "ToolTip", "The seed used for generating the randomness of the simulation." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageSpawner, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_bNeedsSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_FoliageTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_MinimumQuadTreeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_NumUniqueTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageSpawner_Statics::NewProp_RandomSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams = {
		&UProceduralFoliageSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFoliageSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFoliageSpawner, 61801049);
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageSpawner>()
	{
		return UProceduralFoliageSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageSpawner(Z_Construct_UClass_UProceduralFoliageSpawner, &UProceduralFoliageSpawner::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageSpawner);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UProceduralFoliageSpawner)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
