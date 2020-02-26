// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportOptionsSkeletalMesh() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType();
// End Cross Module References
	void UFbxSceneImportOptionsSkeletalMesh::StaticRegisterNativesUFbxSceneImportOptionsSkeletalMesh()
	{
	}
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister()
	{
		return UFbxSceneImportOptionsSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingMorphTargetCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingMorphTargetCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveLocalTransform_MetaData[];
#endif
		static void NewProp_bPreserveLocalTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportCustomAttribute_MetaData[];
#endif
		static void NewProp_bImportCustomAttribute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportCustomAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultSampleRate_MetaData[];
#endif
		static void NewProp_bUseDefaultSampleRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameImportRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameImportRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAnimations_MetaData[];
#endif
		static void NewProp_bImportAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAnimations;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[];
#endif
		static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Type of asset to import from the FBX file" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bDeleteExistingMorphTargetCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves = { "bDeleteExistingMorphTargetCurves", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Type of asset to import from the FBX file" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bPreserveLocalTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform = { "bPreserveLocalTransform", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Import if custom attribute as a curve within the animation *" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bImportCustomAttribute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute = { "bImportCustomAttribute", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_CustomSampleRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditCondition", "!bUseDefaultSampleRate" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Sample fbx animation data at the specified sample rate, 0 find automaticaly the best sample rate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_CustomSampleRate = { "CustomSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, CustomSampleRate), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_CustomSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_CustomSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If enabled, samples all animation curves to 30 FPS" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bUseDefaultSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate = { "bUseDefaultSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_FrameImportRange_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Frame range used when Set Range is used in Animation Length" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_FrameImportRange = { "FrameImportRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, FrameImportRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_FrameImportRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_FrameImportRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_AnimationLength_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Animation Length" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "Type of asset to import from the FBX file" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_AnimationLength = { "AnimationLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, AnimationLength), Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_AnimationLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_AnimationLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "True to import animations from the FBX File" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bImportAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations = { "bImportAnimations", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdUV_MetaData[] = {
		{ "Category", "SkeletalMesh|Thresholds" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Threshold to compare UV equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdUV = { "ThresholdUV", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, ThresholdUV), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdTangentNormal_MetaData[] = {
		{ "Category", "SkeletalMesh|Thresholds" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Threshold to compare normal, tangent or bi-normal equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdTangentNormal = { "ThresholdTangentNormal", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, ThresholdTangentNormal), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdTangentNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdTangentNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdPosition_MetaData[] = {
		{ "Category", "SkeletalMesh|Thresholds" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Threshold to compare vertex position equality." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdPosition = { "ThresholdPosition", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptionsSkeletalMesh, ThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If enabled, creates Unreal morph objects for the imported meshes" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bImportMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If checked, triangles with non-matching smoothing groups will be physically split." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bPreserveSmoothingGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups = { "bPreserveSmoothingGroups", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "TODO support T0AsRefPose Enable this option to use frame 0 as reference pose" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bUseT0AsRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If checked, create new PhysicsAsset if it doesn't have it" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsSkeletalMesh.h" },
		{ "ToolTip", "If enabled, update the Skeleton (of the mesh being imported)'s reference pose." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsSkeletalMesh*)Obj)->bUpdateSkeletonReferencePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptionsSkeletalMesh), &Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bDeleteExistingMorphTargetCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportCustomAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_CustomSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseDefaultSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_FrameImportRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_AnimationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdTangentNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_ThresholdPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bPreserveSmoothingGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUseT0AsRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bCreatePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::NewProp_bUpdateSkeletonReferencePose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportOptionsSkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::ClassParams = {
		&UFbxSceneImportOptionsSkeletalMesh::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSceneImportOptionsSkeletalMesh, 2071495821);
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportOptionsSkeletalMesh>()
	{
		return UFbxSceneImportOptionsSkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSceneImportOptionsSkeletalMesh(Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh, &UFbxSceneImportOptionsSkeletalMesh::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSceneImportOptionsSkeletalMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportOptionsSkeletalMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
