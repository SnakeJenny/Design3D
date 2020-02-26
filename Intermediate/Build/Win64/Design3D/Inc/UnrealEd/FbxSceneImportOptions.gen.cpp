// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSceneImportOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportOptions() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EFBXSceneOptionsCreateHierarchyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneOptionsCreateHierarchyType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneOptionsCreateHierarchyType>()
	{
		return EFBXSceneOptionsCreateHierarchyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXSceneOptionsCreateHierarchyType(EFBXSceneOptionsCreateHierarchyType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXSceneOptionsCreateHierarchyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Hash() { return 3933146678U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXSceneOptionsCreateHierarchyType"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXSOCHT_CreateLevelActors", (int64)FBXSOCHT_CreateLevelActors },
				{ "FBXSOCHT_CreateActorComponents", (int64)FBXSOCHT_CreateActorComponents },
				{ "FBXSOCHT_CreateBlueprint", (int64)FBXSOCHT_CreateBlueprint },
				{ "FBXSOCHT_MAX", (int64)FBXSOCHT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FBXSOCHT_CreateActorComponents.DisplayName", "Create one Actor with Components" },
				{ "FBXSOCHT_CreateActorComponents.ToolTip", "Create one actor and a component for every node in the fbx hierarchy. No reimport of the hierarchy." },
				{ "FBXSOCHT_CreateBlueprint.DisplayName", "Create one Blueprint asset" },
				{ "FBXSOCHT_CreateBlueprint.ToolTip", "Create one blueprint and a component for every node in the fbx hierarchy. Hierarchy can be reimport." },
				{ "FBXSOCHT_CreateLevelActors.DisplayName", "Create Level Actors" },
				{ "FBXSOCHT_CreateLevelActors.ToolTip", "Create an actor for every node in the fbx hierarchy. No reimport of the hierarchy." },
				{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXSceneOptionsCreateHierarchyType",
				"EFBXSceneOptionsCreateHierarchyType",
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
	void UFbxSceneImportOptions::StaticRegisterNativesUFbxSceneImportOptions()
	{
	}
	UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister()
	{
		return UFbxSceneImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertNormalMaps_MetaData[];
#endif
		static void NewProp_bInvertNormalMaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertNormalMaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMeshLODs_MetaData[];
#endif
		static void NewProp_bImportSkeletalMeshLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMeshLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMeshLODs_MetaData[];
#endif
		static void NewProp_bImportStaticMeshLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMeshLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakePivotInVertex_MetaData[];
#endif
		static void NewProp_bBakePivotInVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakePivotInVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransformVertexToAbsolute_MetaData[];
#endif
		static void NewProp_bTransformVertexToAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransformVertexToAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HierarchyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsDynamic_MetaData[];
#endif
		static void NewProp_bImportAsDynamic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateContentFolderHierarchy_MetaData[];
#endif
		static void NewProp_bCreateContentFolderHierarchy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateContentFolderHierarchy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportOptions.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Fbx_AddToBlueprint UMETA(DisplayName = \"Add to an existing Blueprint asset\")," },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, this option will cause normal map Y (Green) values to be inverted when importing textures" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bInvertNormalMaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps = { "bInvertNormalMaps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal skeletal meshes from LODs in the import file; If not enabled, only the base skeletal mesh from the LOD group is imported." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportSkeletalMeshLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs = { "bImportSkeletalMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal static meshes from LODs in the import file; If not enabled, only the base static mesh from the LOD group is imported." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportStaticMeshLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs = { "bImportStaticMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData[] = {
		{ "Category", "Meshes" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "- Experimental - If this option is true the inverse node pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. This option only work with static meshes." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bBakePivotInVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex = { "bBakePivotInVertex", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bTransformVertexToAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute = { "bTransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptions, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation = { "ImportRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptions, ImportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation = { "ImportTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptions, ImportTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Whether to force the front axis to be align with X instead of -Y." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bForceFrontXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "Choose if you want to generate the scene hierarchy with normal level actors, one actor with multiple components, or one blueprint asset with multiple components." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType = { "HierarchyType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportOptions, HierarchyType), Z_Construct_UEnum_UnrealEd_EFBXSceneOptionsCreateHierarchyType, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If checked, the mobility of all actors or components will be dynamic. If unchecked, they will be static." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bImportAsDynamic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic = { "bImportAsDynamic", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptions.h" },
		{ "ToolTip", "If checked, a folder's hierarchy will be created under the import asset path. All the created folders will match the actor hierarchy. In case there is more than one actor that links to an asset, the shared asset will be placed at the first actor's place." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_SetBit(void* Obj)
	{
		((UFbxSceneImportOptions*)Obj)->bCreateContentFolderHierarchy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy = { "bCreateContentFolderHierarchy", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxSceneImportOptions), &Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bInvertNormalMaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportSkeletalMeshLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportStaticMeshLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bBakePivotInVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bTransformVertexToAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_ImportTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bForceFrontXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_HierarchyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bImportAsDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptions_Statics::NewProp_bCreateContentFolderHierarchy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportOptions_Statics::ClassParams = {
		&UFbxSceneImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSceneImportOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSceneImportOptions, 3496161750);
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportOptions>()
	{
		return UFbxSceneImportOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSceneImportOptions(Z_Construct_UClass_UFbxSceneImportOptions, &UFbxSceneImportOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSceneImportOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
