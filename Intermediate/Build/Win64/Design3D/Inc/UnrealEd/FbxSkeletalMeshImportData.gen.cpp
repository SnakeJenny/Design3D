// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSkeletalMeshImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSkeletalMeshImportData() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportContentType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
// End Cross Module References
	static UEnum* EFBXImportContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXImportContentType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXImportContentType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXImportContentType>()
	{
		return EFBXImportContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXImportContentType(EFBXImportContentType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXImportContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Hash() { return 3183192021U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXImportContentType"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXICT_All", (int64)FBXICT_All },
				{ "FBXICT_Geometry", (int64)FBXICT_Geometry },
				{ "FBXICT_SkinningWeights", (int64)FBXICT_SkinningWeights },
				{ "FBXICT_MAX", (int64)FBXICT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FBXICT_All.DisplayName", "Geometry and Skinning Weights." },
				{ "FBXICT_All.ToolTip", "Import all fbx content: geometry, skinning and weights." },
				{ "FBXICT_Geometry.DisplayName", "Geometry Only" },
				{ "FBXICT_Geometry.ToolTip", "Import the skeletal mesh geometry only (will create a default skeleton, or map the geometry to the existing one). Morph and LOD can be imported with it." },
				{ "FBXICT_SkinningWeights.DisplayName", "Skinning Weights Only" },
				{ "FBXICT_SkinningWeights.ToolTip", "Import the skeletal mesh skinning and weights only (no geometry will be imported). Morph and LOD will not be imported with this settings." },
				{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXImportContentType",
				"EFBXImportContentType",
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
	void UFbxSkeletalMeshImportData::StaticRegisterNativesUFbxSkeletalMeshImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister()
	{
		return UFbxSkeletalMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdTangentNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdTangentNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThresholdPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThresholdPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTargets_MetaData[];
#endif
		static void NewProp_bImportMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveSmoothingGroups_MetaData[];
#endif
		static void NewProp_bPreserveSmoothingGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveSmoothingGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseT0AsRefPose_MetaData[];
#endif
		static void NewProp_bUseT0AsRefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseT0AsRefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[];
#endif
		static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastImportContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastImportContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportContentType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSkeletalMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "Import data and options used when importing a static mesh from fbx" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare UV equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV = { "ThresholdUV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdUV), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare normal, tangent or bi-normal equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal = { "ThresholdTangentNormal", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdTangentNormal), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMin", "0.0" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare vertex position equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition = { "ThresholdPosition", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If enabled, creates Unreal morph objects for the imported meshes" },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bImportMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If checked, triangles with non-matching smoothing groups will be physically split." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bPreserveSmoothingGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups = { "bPreserveSmoothingGroups", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Use T0 As Ref Pose" },
		{ "ImportType", "SkeletalMesh|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "Enable this option to use frame 0 as reference pose" },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bUseT0AsRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If enabled, update the Skeleton (of the mesh being imported)'s reference pose." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bUpdateSkeletonReferencePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "The value of the content type during the last import. This cannot be edited and is set only on successful import or re-import" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType = { "LastImportContentType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, LastImportContentType), Z_Construct_UEnum_UnrealEd_EFBXImportContentType, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Import Content Type" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Filter the content we want to import from the incoming FBX skeletal mesh." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType = { "ImportContentType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ImportContentType), Z_Construct_UEnum_UnrealEd_EFBXImportContentType, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSkeletalMeshImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::ClassParams = {
		&UFbxSkeletalMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers),
		0,
		0x400810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSkeletalMeshImportData, 246403895);
	template<> UNREALED_API UClass* StaticClass<UFbxSkeletalMeshImportData>()
	{
		return UFbxSkeletalMeshImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSkeletalMeshImportData(Z_Construct_UClass_UFbxSkeletalMeshImportData, &UFbxSkeletalMeshImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSkeletalMeshImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSkeletalMeshImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
