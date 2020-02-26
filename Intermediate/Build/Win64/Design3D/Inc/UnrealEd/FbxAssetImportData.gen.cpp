// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxAssetImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAssetImportData() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFbxAssetImportData::StaticRegisterNativesUFbxAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxAssetImportData_NoRegister()
	{
		return UFbxAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FbxSceneImportDataReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FbxSceneImportDataReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportAsScene_MetaData[];
#endif
		static void NewProp_bImportAsScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportAsScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConvertSceneUnit_MetaData[];
#endif
		static void NewProp_bConvertSceneUnit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertSceneUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConvertScene_MetaData[];
#endif
		static void NewProp_bConvertScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertScene;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxAssetImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from FBX" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference = { "FbxSceneImportDataReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAssetImportData, FbxSceneImportDataReference), Z_Construct_UClass_UFbxSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bImportAsScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene = { "bImportAsScene", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX unit to UE4 unit (centimeter)." },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bConvertSceneUnit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit = { "bConvertSceneUnit", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "editcondition", "bConvertScene" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE4 coordinate system with front X axis instead of -Y" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bForceFrontXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE4 coordinate system" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bConvertScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene = { "bConvertScene", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAssetImportData, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation = { "ImportRotation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAssetImportData, ImportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation = { "ImportTranslation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxAssetImportData, ImportTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxAssetImportData_Statics::ClassParams = {
		&UFbxAssetImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers),
		0,
		0x001010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxAssetImportData, 1955286389);
	template<> UNREALED_API UClass* StaticClass<UFbxAssetImportData>()
	{
		return UFbxAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxAssetImportData(Z_Construct_UClass_UFbxAssetImportData, &UFbxAssetImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxAssetImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
