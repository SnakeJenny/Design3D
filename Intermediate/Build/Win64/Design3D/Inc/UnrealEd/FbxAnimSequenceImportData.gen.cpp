// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxAnimSequenceImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAnimSequenceImportData() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
	static UEnum* EFBXAnimationLengthImportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXAnimationLengthImportType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXAnimationLengthImportType>()
	{
		return EFBXAnimationLengthImportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXAnimationLengthImportType(EFBXAnimationLengthImportType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXAnimationLengthImportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Hash() { return 2445004067U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXAnimationLengthImportType"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXALIT_ExportedTime", (int64)FBXALIT_ExportedTime },
				{ "FBXALIT_AnimatedKey", (int64)FBXALIT_AnimatedKey },
				{ "FBXALIT_SetRange", (int64)FBXALIT_SetRange },
				{ "FBXALIT_MAX", (int64)FBXALIT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FBXALIT_AnimatedKey.DisplayName", "Animated Time" },
				{ "FBXALIT_AnimatedKey.ToolTip", "Will import the range of frames that have animation. Can be useful if the exported range is longer than the actual animation in the FBX file" },
				{ "FBXALIT_ExportedTime.DisplayName", "Exported Time" },
				{ "FBXALIT_ExportedTime.ToolTip", "This option imports animation frames based on what is defined at the time of export" },
				{ "FBXALIT_SetRange.DisplayName", "Set Range" },
				{ "FBXALIT_SetRange.ToolTip", "This will enable the Start Frame and End Frame properties for you to define the frames of animation to import" },
				{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
				{ "ToolTip", "Animation length type when importing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXAnimationLengthImportType",
				"EFBXAnimationLengthImportType",
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
	void UFbxAnimSequenceImportData::StaticRegisterNativesUFbxAnimSequenceImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister()
	{
		return UFbxAnimSequenceImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxAnimSequenceImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreserveLocalTransform_MetaData[];
#endif
		static void NewProp_bPreserveLocalTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreserveLocalTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotImportCurveWithZero_MetaData[];
#endif
		static void NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotImportCurveWithZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteExistingMorphTargetCurves_MetaData[];
#endif
		static void NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingMorphTargetCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveRedundantKeys_MetaData[];
#endif
		static void NewProp_bRemoveRedundantKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveRedundantKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialCurveSuffixes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[];
#endif
		static void NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetMaterialDriveParameterOnCustomAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportBoneTracks_MetaData[];
#endif
		static void NewProp_bImportBoneTracks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportBoneTracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportCustomAttribute_MetaData[];
#endif
		static void NewProp_bImportCustomAttribute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportCustomAttribute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceAnimationName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxAnimSequenceImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, this will import a curve within the animation" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bPreserveLocalTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform = { "bPreserveLocalTransform", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Do not import curves with only 0 values" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "When importing custom attribute or morphtarget as curve, do not import if it doens't have any value other than zero. This is to avoid adding extra curves to evaluate" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDoNotImportCurveWithZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero = { "bDoNotImportCurveWithZero", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, this will delete this type of asset from the FBX" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bDeleteExistingMorphTargetCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves = { "bDeleteExistingMorphTargetCurves", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Remove Redundant Keys" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "When importing custom attribute as curve, remove redundant keys" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bRemoveRedundantKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys = { "bRemoveRedundantKeys", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Material Curve Suffixes" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Set Material Curve Type for the custom attribute with the following suffixes. This doesn't matter if Set Material Curve Type is true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, MaterialCurveSuffixes), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_Inner = { "MaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Set Material Curve Type" },
		{ "EditCondition", "bImportCustomAttribute" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Set Material Curve Type for all custom attributes that exists" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bSetMaterialDriveParameterOnCustomAttribute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute = { "bSetMaterialDriveParameterOnCustomAttribute", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Import bone transform tracks. If false, this will discard any bone transform tracks. (useful for curves only animations)" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportBoneTracks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks = { "bImportBoneTracks", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Import if custom attribute as a curve within the animation" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportCustomAttribute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute = { "bImportCustomAttribute", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Name of source animation that was imported, used to reimport correct animation from the FBX file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName = { "SourceAnimationName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, SourceAnimationName), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ClampMax", "48000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bUseDefaultSampleRate" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Sample fbx animation data at the specified sample rate, 0 find automaticaly the best sample rate" },
		{ "UIMax", "60" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate = { "CustomSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, CustomSampleRate), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If enabled, samples all animation curves to 30 FPS" },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bUseDefaultSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate = { "bUseDefaultSampleRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Frame range used when Set Range is used in Animation Length" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange = { "FrameImportRange", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, FrameImportRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "End frame when Set Range is used in Animation Length" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, EndFrame_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Start frame when Set Range is used in Animation Length" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, StartFrame_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Animation Length" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "Which animation range to import. The one defined at Exported, at Animated time or define a range manually" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength = { "AnimationLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAnimSequenceImportData, AnimationLength), Z_Construct_UEnum_UnrealEd_EFBXAnimationLengthImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ImportType", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAnimSequenceImportData.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UFbxAnimSequenceImportData*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAnimSequenceImportData), &Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bPreserveLocalTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDoNotImportCurveWithZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bDeleteExistingMorphTargetCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bRemoveRedundantKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_MaterialCurveSuffixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bSetMaterialDriveParameterOnCustomAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportBoneTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportCustomAttribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_SourceAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_CustomSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bUseDefaultSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_FrameImportRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_EndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_StartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_AnimationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::NewProp_bImportMeshesInBoneHierarchy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxAnimSequenceImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::ClassParams = {
		&UFbxAnimSequenceImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::PropPointers),
		0,
		0x401010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxAnimSequenceImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxAnimSequenceImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxAnimSequenceImportData, 3609690032);
	template<> UNREALED_API UClass* StaticClass<UFbxAnimSequenceImportData>()
	{
		return UFbxAnimSequenceImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxAnimSequenceImportData(Z_Construct_UClass_UFbxAnimSequenceImportData, &UFbxAnimSequenceImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxAnimSequenceImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxAnimSequenceImportData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxAnimSequenceImportData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
