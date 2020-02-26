// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSceneImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister();
// End Cross Module References
	void UFbxSceneImportFactory::StaticRegisterNativesUFbxSceneImportFactory()
	{
	}
	UClass* Z_Construct_UClass_UFbxSceneImportFactory_NoRegister()
	{
		return UFbxSceneImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReimportData;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptionsSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneImportOptionsSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptionsStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneImportOptionsStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneImportOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Pointer on the fbx scene import data, we fill this object to be able to do re import of the scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData = { "ReimportData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, ReimportData), Z_Construct_UClass_UFbxSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing textures" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData = { "TextureImportData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, TextureImportData), Z_Construct_UClass_UFbxTextureImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData = { "AnimSequenceImportData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, AnimSequenceImportData), Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData = { "SkeletalMeshImportData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, SkeletalMeshImportData), Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing static meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData = { "StaticMeshImportData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, StaticMeshImportData), Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh = { "SceneImportOptionsSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptionsSkeletalMesh), Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene static mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh = { "SceneImportOptionsStaticMesh", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptionsStaticMesh), Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions = { "SceneImportOptions", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptions), Z_Construct_UClass_UFbxSceneImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::ClassParams = {
		&UFbxSceneImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSceneImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSceneImportFactory, 1484290662);
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportFactory>()
	{
		return UFbxSceneImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSceneImportFactory(Z_Construct_UClass_UFbxSceneImportFactory, &UFbxSceneImportFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSceneImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
