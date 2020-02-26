// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ShapeElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FKShapeElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKShapeElem, Z_Construct_UPackage__Script_Engine(), TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKShapeElem>()
{
	return FKShapeElem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKShapeElem(FKShapeElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KShapeElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKShapeElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKShapeElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KShapeElem")),new UScriptStruct::TCppStructOps<FKShapeElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKShapeElem;
	struct Z_Construct_UScriptStruct_FKShapeElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContributeToMass_MetaData[];
#endif
		static void NewProp_bContributeToMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContributeToMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Sphere shape used for collision" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKShapeElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKShapeElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "True if this shape should contribute to the overall mass of the body it\n              belongs to. This lets you create extra collision volumes which do not affect\n              the mass properties of an object." },
	};
#endif
	void Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit(void* Obj)
	{
		((FKShapeElem*)Obj)->bContributeToMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass = { "bContributeToMass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FKShapeElem), &Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "User-defined name for this shape" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKShapeElem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ShapeElem.h" },
		{ "ToolTip", "Offset used when generating contact points. This allows you to smooth out\n              the Minkowski sum by radius R. Useful for making objects slide smoothly\n              on top of irregularities" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset = { "RestOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKShapeElem, RestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_bContributeToMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKShapeElem_Statics::NewProp_RestOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKShapeElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KShapeElem",
		sizeof(FKShapeElem),
		alignof(FKShapeElem),
		Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKShapeElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KShapeElem"), sizeof(FKShapeElem), Get_Z_Construct_UScriptStruct_FKShapeElem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKShapeElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKShapeElem_Hash() { return 358586061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
