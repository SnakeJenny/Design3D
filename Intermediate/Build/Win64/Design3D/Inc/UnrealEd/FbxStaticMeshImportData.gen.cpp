// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxStaticMeshImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxStaticMeshImportData() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
// End Cross Module References
	void UFbxStaticMeshImportData::StaticRegisterNativesUFbxStaticMeshImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister()
	{
		return UFbxStaticMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxStaticMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCombineMeshes_MetaData[];
#endif
		static void NewProp_bCombineMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCombineMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateCollision_MetaData[];
#endif
		static void NewProp_bAutoGenerateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[];
#endif
		static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAdjacencyBuffer_MetaData[];
#endif
		static void NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAdjacencyBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticMeshLODGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxStaticMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxStaticMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ToolTip", "If enabled, combines all meshes into a single mesh" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bCombineMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes = { "bCombineMeshes", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If checked, collision will automatically be generated (ignored if custom collision is imported or used)." },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bAutoGenerateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision = { "bAutoGenerateCollision", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "Required for PNT tessellation but can be slow. Recommend disabling for larger meshes." },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "Disabling this option will keep degenerate triangles found.  In general you should leave this option on." },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxStaticMeshImportData, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxStaticMeshImportData, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ToolTip", "The LODGroup to associate with this mesh when it is imported" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup = { "StaticMeshLODGroup", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxStaticMeshImportData, StaticMeshLODGroup), METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxStaticMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxStaticMeshImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::ClassParams = {
		&UFbxStaticMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers),
		0,
		0x400810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxStaticMeshImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxStaticMeshImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxStaticMeshImportData, 895644332);
	template<> UNREALED_API UClass* StaticClass<UFbxStaticMeshImportData>()
	{
		return UFbxStaticMeshImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxStaticMeshImportData(Z_Construct_UClass_UFbxStaticMeshImportData, &UFbxStaticMeshImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxStaticMeshImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxStaticMeshImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
