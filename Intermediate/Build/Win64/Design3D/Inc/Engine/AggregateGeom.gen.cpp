// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/AggregateGeom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregateGeom() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
// End Cross Module References
class UScriptStruct* FKAggregateGeom::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKAggregateGeom, Z_Construct_UPackage__Script_Engine(), TEXT("KAggregateGeom"), sizeof(FKAggregateGeom), Get_Z_Construct_UScriptStruct_FKAggregateGeom_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKAggregateGeom>()
{
	return FKAggregateGeom::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKAggregateGeom(FKAggregateGeom::StaticStruct, TEXT("/Script/Engine"), TEXT("KAggregateGeom"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom
{
	FScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KAggregateGeom")),new UScriptStruct::TCppStructOps<FKAggregateGeom>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKAggregateGeom;
	struct Z_Construct_UScriptStruct_FKAggregateGeom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperedCapsuleElems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaperedCapsuleElems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaperedCapsuleElems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvexElems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConvexElems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConvexElems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphylElems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphylElems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphylElems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxElems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxElems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxElems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereElems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphereElems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereElems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
		{ "ToolTip", "Container for an aggregate of collision shapes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKAggregateGeom>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Tapered Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKAggregateGeom, TaperedCapsuleElems), METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKTaperedCapsuleElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Convex Elements" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems = { "ConvexElems", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKAggregateGeom, ConvexElems), METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner = { "ConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems = { "SphylElems", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKAggregateGeom, SphylElems), METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner = { "SphylElems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKSphylElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Boxes" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems = { "BoxElems", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKAggregateGeom, BoxElems), METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner = { "BoxElems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKBoxElem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Spheres" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems = { "SphereElems", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKAggregateGeom, SphereElems), METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner = { "SphereElems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKSphereElem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KAggregateGeom",
		sizeof(FKAggregateGeom),
		alignof(FKAggregateGeom),
		Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KAggregateGeom"), sizeof(FKAggregateGeom), Get_Z_Construct_UScriptStruct_FKAggregateGeom_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKAggregateGeom_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKAggregateGeom_Hash() { return 1979268861U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
