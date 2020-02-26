// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxImportUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxImportUI() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UFunction* Z_Construct_UFunction_UFbxImportUI_ResetToDefault();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	static UEnum* EFBXImportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXImportType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXImportType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXImportType>()
	{
		return EFBXImportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXImportType(EFBXImportType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXImportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXImportType_Hash() { return 2241367050U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXImportType"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXImportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXIT_StaticMesh", (int64)FBXIT_StaticMesh },
				{ "FBXIT_SkeletalMesh", (int64)FBXIT_SkeletalMesh },
				{ "FBXIT_Animation", (int64)FBXIT_Animation },
				{ "FBXIT_MAX", (int64)FBXIT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FBXIT_Animation.DisplayName", "Animation" },
				{ "FBXIT_Animation.ToolTip", "Select Animation if you'd like to import only animation." },
				{ "FBXIT_SkeletalMesh.DisplayName", "Skeletal Mesh" },
				{ "FBXIT_SkeletalMesh.ToolTip", "Select Skeletal Mesh if you'd like to import skeletal mesh." },
				{ "FBXIT_StaticMesh.DisplayName", "Static Mesh" },
				{ "FBXIT_StaticMesh.ToolTip", "Select Static Mesh if you'd like to import static mesh." },
				{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
				{ "ToolTip", "Import mesh type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXImportType",
				"EFBXImportType",
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
	void UFbxImportUI::StaticRegisterNativesUFbxImportUI()
	{
		UClass* Class = UFbxImportUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UFbxImportUI::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFbxImportUI, nullptr, "ResetToDefault", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFbxImportUI_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFbxImportUI_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFbxImportUI_NoRegister()
	{
		return UFbxImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UFbxImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileAxisDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileAxisDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileCreatorApplication_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileCreatorApplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileCreator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileCreator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomatedImportShouldDetectType_MetaData[];
#endif
		static void NewProp_bAutomatedImportShouldDetectType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomatedImportShouldDetectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequenceImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportTextures_MetaData[];
#endif
		static void NewProp_bImportTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMaterials_MetaData[];
#endif
		static void NewProp_bImportMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportRigidMesh_MetaData[];
#endif
		static void NewProp_bImportRigidMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportRigidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAnimations_MetaData[];
#endif
		static void NewProp_bImportAnimations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAnimations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumLodNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumLodNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance7_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance6_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance5_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance4_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance3_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodDistance0_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LodDistance0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLodDistances_MetaData[];
#endif
		static void NewProp_bAutoComputeLodDistances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLodDistances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMesh_MetaData[];
#endif
		static void NewProp_bImportMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsSkeletal_MetaData[];
#endif
		static void NewProp_bImportAsSkeletal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsSkeletal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[];
#endif
		static void NewProp_bOverrideFullName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTypeToImport_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshTypeToImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OriginalImportType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsObjImport_MetaData[];
#endif
		static void NewProp_bIsObjImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsObjImport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFbxImportUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFbxImportUI_ResetToDefault, "ResetToDefault" }, // 1336271088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxImportUI.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "Animation End Frame" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation end frame" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame = { "AnimEndFrame", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, AnimEndFrame), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "Animation Start Frame" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation start frame" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame = { "AnimStartFrame", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, AnimStartFrame), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Frame Rate" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx animation frame rate" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate = { "FileSampleRate", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileSampleRate), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Axis Direction" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file axis direction, up vector and hand" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection = { "FileAxisDirection", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileAxisDirection), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Units" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file units" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits = { "FileUnits", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileUnits), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Creator Application" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file vendor information, software name and version that was use to create the file" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication = { "FileCreatorApplication", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileCreatorApplication), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Creator" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The file creator information" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator = { "FileCreator", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileCreator), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData[] = {
		{ "Category", "FbxFileInformation" },
		{ "DisplayName", "File Version" },
		{ "ImportType", "Mesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The fbx file version" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion = { "FileVersion", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, FileVersion), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If true the automated import path should detect the import type.  If false the import type was specified by the user" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bAutomatedImportShouldDetectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType = { "bAutomatedImportShouldDetectType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData[] = {
		{ "Category", "Material" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing textures" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData = { "TextureImportData", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, TextureImportData), Z_Construct_UClass_UFbxTextureImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData[] = {
		{ "Category", "Animation" },
		{ "editcondition", "bImportAnimations" },
		{ "EditInline", "true" },
		{ "ImportType", "Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData = { "AnimSequenceImportData", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, AnimSequenceImportData), Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData = { "SkeletalMeshImportData", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, SkeletalMeshImportData), Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Import data used when importing static meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData = { "StaticMeshImportData", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, StaticMeshImportData), Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The option works only when option \"Import Material\" is OFF. If \"Import Material\" is ON, textures are always imported." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures = { "bImportTextures", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData[] = {
		{ "Category", "Material" },
		{ "ImportType", "GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether to automatically create Unreal materials for materials found in the FBX scene" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials = { "bImportMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Enables importing of 'rigid skeletalmesh' (unskinned, hierarchy-based animation) from this FBX file, no longer shown, used behind the scenes" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportRigidMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh = { "bImportRigidMesh", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData[] = {
		{ "Category", "Animation" },
		{ "editcondition", "bImportAnimations" },
		{ "ImportType", "SkeletalMesh|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Override for the name of the animation to import. By default, it will be the name of FBX *" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName = { "OverrideAnimationName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, OverrideAnimationName), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData[] = {
		{ "Category", "Animation" },
		{ "ImportType", "SkeletalMesh|Animation|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "True to import animations from the FBX File" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportAnimations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations = { "bImportAnimations", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Number of LODs" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set the number of LODs for the editor to import. Setting the value to 0 imports the number of LODs found in the file (up to the maximum)." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber = { "LodNumber", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodNumber), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Minimum LOD" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set the minimum LOD used for rendering. Setting the value to 0 will use the default value of LOD0." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber = { "MinimumLodNumber", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, MinimumLodNumber), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 7 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 7" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7 = { "LodDistance7", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance7), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 6 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 6" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6 = { "LodDistance6", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance6), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 5 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 5" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5 = { "LodDistance5", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance5), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 4 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 4" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4 = { "LodDistance4", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance4), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 3 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 3" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3 = { "LodDistance3", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance3), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 2 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 2" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2 = { "LodDistance2", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance2), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 1 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1 = { "LodDistance1", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance1), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "LOD 0 Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Set a screen size value for LOD 0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0 = { "LodDistance0", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, LodDistance0), METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Auto Compute LOD Screen Size" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If checked, the editor will automatically compute screen size values for the static mesh's LODs. If unchecked, the user can enter custom screen size values for each LOD." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bAutoComputeLodDistances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances = { "bAutoComputeLodDistances", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "editcondition", "!bCreatePhysicsAsset" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If this is set, use this PhysicsAsset. It is possible bCreatePhysicsAsset == false, and PhysicsAsset == NULL. It is possible they do not like to create anything." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "If checked, create new PhysicsAsset if it doesn't have it" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether to import the mesh. Allows animation only import when importing a skeletal mesh." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh = { "bImportMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Skeletal Mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether to import the incoming FBX as a skeletal object" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bImportAsSkeletal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal = { "bImportAsSkeletal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Use the string in \"Name\" field as full name of mesh. The option only works when the scene contains one mesh." },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bOverrideFullName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName = { "bOverrideFullName", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Type of asset to import from the FBX file" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport = { "MeshTypeToImport", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, MeshTypeToImport), Z_Construct_UEnum_UnrealEd_EFBXImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "The original detected type of this import" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType = { "OriginalImportType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxImportUI, OriginalImportType), Z_Construct_UEnum_UnrealEd_EFBXImportType, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Factories/FbxImportUI.h" },
		{ "ToolTip", "Whether or not the imported file is in OBJ format" },
	};
#endif
	void Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_SetBit(void* Obj)
	{
		((UFbxImportUI*)Obj)->bIsObjImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport = { "bIsObjImport", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxImportUI), &Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxImportUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileAxisDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreatorApplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileCreator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_FileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutomatedImportShouldDetectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_TextureImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_AnimSequenceImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_SkeletalMeshImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_StaticMeshImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportRigidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OverrideAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MinimumLodNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_LodDistance0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bAutoComputeLodDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bCreatePhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_Skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bImportAsSkeletal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bOverrideFullName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_MeshTypeToImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_OriginalImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxImportUI_Statics::NewProp_bIsObjImport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxImportUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxImportUI_Statics::ClassParams = {
		&UFbxImportUI::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFbxImportUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxImportUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxImportUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxImportUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxImportUI, 3697109976);
	template<> UNREALED_API UClass* StaticClass<UFbxImportUI>()
	{
		return UFbxImportUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxImportUI(Z_Construct_UClass_UFbxImportUI, &UFbxImportUI::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxImportUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxImportUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
