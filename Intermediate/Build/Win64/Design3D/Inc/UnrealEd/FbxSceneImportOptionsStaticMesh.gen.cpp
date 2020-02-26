// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSceneImportOptionsStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportOptionsStaticMesh() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EFBXSceneNormalGenerationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneNormalGenerationMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneNormalGenerationMethod::Type>()
	{
		return EFBXSceneNormalGenerationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXSceneNormalGenerationMethod(EFBXSceneNormalGenerationMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXSceneNormalGenerationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Hash() { return 49136784U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXSceneNormalGenerationMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFBXSceneNormalGenerationMethod::BuiltIn", (int64)EFBXSceneNormalGenerationMethod::BuiltIn },
				{ "EFBXSceneNormalGenerationMethod::MikkTSpace", (int64)EFBXSceneNormalGenerationMethod::MikkTSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BuiltIn.ToolTip", "Use the legacy built in method to generate normals (faster in some cases)" },
				{ "MikkTSpace.ToolTip", "Use MikkTSpace to generate normals and tangents" },
				{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXSceneNormalGenerationMethod",
				"EFBXSceneNormalGenerationMethod::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFBXSceneNormalImportMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneNormalImportMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneNormalImportMethod>()
	{
		return EFBXSceneNormalImportMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXSceneNormalImportMethod(EFBXSceneNormalImportMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXSceneNormalImportMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Hash() { return 1420732405U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXSceneNormalImportMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXSceneNIM_ComputeNormals", (int64)FBXSceneNIM_ComputeNormals },
				{ "FBXSceneNIM_ImportNormals", (int64)FBXSceneNIM_ImportNormals },
				{ "FBXSceneNIM_ImportNormalsAndTangents", (int64)FBXSceneNIM_ImportNormalsAndTangents },
				{ "FBXSceneNIM_MAX", (int64)FBXSceneNIM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FBXSceneNIM_ComputeNormals.DisplayName", "Compute Normals" },
				{ "FBXSceneNIM_ImportNormals.DisplayName", "Import Normals" },
				{ "FBXSceneNIM_ImportNormalsAndTangents.DisplayName", "Import Normals and Tangents" },
				{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXSceneNormalImportMethod",
				"EFBXSceneNormalImportMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EFbxSceneVertexColorImportOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxSceneVertexColorImportOption"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxSceneVertexColorImportOption::Type>()
	{
		return EFbxSceneVertexColorImportOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFbxSceneVertexColorImportOption(EFbxSceneVertexColorImportOption_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFbxSceneVertexColorImportOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Hash() { return 4281304481U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFbxSceneVertexColorImportOption"), 0, Get_Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFbxSceneVertexColorImportOption::Replace", (int64)EFbxSceneVertexColorImportOption::Replace },
				{ "EFbxSceneVertexColorImportOption::Ignore", (int64)EFbxSceneVertexColorImportOption::Ignore },
				{ "EFbxSceneVertexColorImportOption::Override", (int64)EFbxSceneVertexColorImportOption::Override },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ignore.ToolTip", "Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors." },
				{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
				{ "Override.ToolTip", "Override all vertex colors with the specified color." },
				{ "Replace.ToolTip", "Import the static mesh using the vertex colors from the FBX file." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFbxSceneVertexColorImportOption",
				"EFbxSceneVertexColorImportOption::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFbxSceneImportOptionsStaticMesh::StaticRegisterNativesUFbxSceneImportOptionsStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister()
	{
		return UFbxSceneImportOptionsStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalGenerationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalImportMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalImportMethod;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateCollision_MetaData[];
#endif
		static void NewProp_bAutoGenerateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticMeshLODGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod = { "NormalGenerationMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, NormalGenerationMethod), Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod = { "NormalImportMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, NormalImportMethod), Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Required for PNT tessellation but can be slow. Recommend disabling for larger meshes." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bBuildAdjacencyBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer = { "bBuildAdjacencyBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Disabling this option will keep degenerate triangles found.  In general you should leave this option on." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bRemoveDegenerates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "If checked, collision will automatically be generated (ignored if custom collision is imported or used)." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bAutoGenerateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision = { "bAutoGenerateCollision", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "For static meshes, enabling this option will combine all meshes in the FBX into a single monolithic mesh in Unreal" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup = { "StaticMeshLODGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, StaticMeshLODGroup), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildAdjacencyBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportOptionsStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::ClassParams = {
		&UFbxSceneImportOptionsStaticMesh::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSceneImportOptionsStaticMesh, 451227738);
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportOptionsStaticMesh>()
	{
		return UFbxSceneImportOptionsStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSceneImportOptionsStaticMesh(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh, &UFbxSceneImportOptionsStaticMesh::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSceneImportOptionsStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportOptionsStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
