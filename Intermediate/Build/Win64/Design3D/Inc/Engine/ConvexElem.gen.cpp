// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ConvexElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvexElem() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FKConvexElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKConvexElem, Z_Construct_UPackage__Script_Engine(), TEXT("KConvexElem"), sizeof(FKConvexElem), Get_Z_Construct_UScriptStruct_FKConvexElem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKConvexElem>()
{
	return FKConvexElem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKConvexElem(FKConvexElem::StaticStruct, TEXT("/Script/Engine"), TEXT("KConvexElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKConvexElem
{
	FScriptStruct_Engine_StaticRegisterNativesFKConvexElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KConvexElem")),new UScriptStruct::TCppStructOps<FKConvexElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKConvexElem;
	struct Z_Construct_UScriptStruct_FKConvexElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElemBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElemBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "One convex hull, used for simplified collision." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKConvexElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKConvexElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Transform of this element" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKConvexElem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Bounding box of this convex hull." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox = { "ElemBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKConvexElem, ElemBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConvexElem.h" },
		{ "ToolTip", "Array of indices that make up the convex hull." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKConvexElem, VertexData), METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_ElemBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKConvexElem_Statics::NewProp_VertexData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKConvexElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KConvexElem",
		sizeof(FKConvexElem),
		alignof(FKConvexElem),
		Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKConvexElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KConvexElem"), sizeof(FKConvexElem), Get_Z_Construct_UScriptStruct_FKConvexElem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKConvexElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKConvexElem_Hash() { return 2706028311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
