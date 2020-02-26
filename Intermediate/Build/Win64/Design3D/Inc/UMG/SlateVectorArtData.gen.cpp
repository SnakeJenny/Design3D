// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Slate/SlateVectorArtData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtData() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FSlateMeshVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateMeshVertex, Z_Construct_UPackage__Script_UMG(), TEXT("SlateMeshVertex"), sizeof(FSlateMeshVertex), Get_Z_Construct_UScriptStruct_FSlateMeshVertex_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateMeshVertex>()
{
	return FSlateMeshVertex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateMeshVertex(FSlateMeshVertex::StaticStruct, TEXT("/Script/UMG"), TEXT("SlateMeshVertex"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex
{
	FScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateMeshVertex")),new UScriptStruct::TCppStructOps<FSlateMeshVertex>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFSlateMeshVertex;
	struct Z_Construct_UScriptStruct_FSlateMeshVertex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateMeshVertex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5 = { "UV5", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV5), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4 = { "UV4", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV4), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateMeshVertex, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"SlateMeshVertex",
		sizeof(FSlateMeshVertex),
		alignof(FSlateMeshVertex),
		Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateMeshVertex"), sizeof(FSlateMeshVertex), Get_Z_Construct_UScriptStruct_FSlateMeshVertex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateMeshVertex_Hash() { return 1257217606U; }
	void USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData()
	{
	}
	UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister()
	{
		return USlateVectorArtData::StaticClass();
	}
	struct Z_Construct_UClass_USlateVectorArtData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexData;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IndexData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshAsset;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateVectorArtData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Slate/SlateVectorArtData.h" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "Turn static mesh data into Slate's simple vector art format." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax = { "ExtentMax", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, ExtentMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin = { "ExtentMin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, ExtentMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetMaterial()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetIndexData()" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData = { "IndexData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, IndexData), METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner = { "IndexData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetVertexData()" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, VertexData), METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSlateMeshVertex, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The material which we are using, or the material from with the MIC was constructed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData[] = {
		{ "Category", "Vector Art" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The mesh data asset from which the vector art is sourced" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset = { "MeshAsset", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateVectorArtData, MeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateVectorArtData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateVectorArtData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams = {
		&USlateVectorArtData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateVectorArtData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateVectorArtData, 1897209292);
	template<> UMG_API UClass* StaticClass<USlateVectorArtData>()
	{
		return USlateVectorArtData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateVectorArtData(Z_Construct_UClass_USlateVectorArtData, &USlateVectorArtData::StaticClass, TEXT("/Script/UMG"), TEXT("USlateVectorArtData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
