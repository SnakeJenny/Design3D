// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxMeshImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxMeshImportData() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FImportMeshLodSectionsData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
// End Cross Module References
	static UEnum* EVertexColorImportOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EVertexColorImportOption"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EVertexColorImportOption::Type>()
	{
		return EVertexColorImportOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVertexColorImportOption(EVertexColorImportOption_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EVertexColorImportOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Hash() { return 1594535821U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVertexColorImportOption"), 0, Get_Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVertexColorImportOption::Replace", (int64)EVertexColorImportOption::Replace },
				{ "EVertexColorImportOption::Ignore", (int64)EVertexColorImportOption::Ignore },
				{ "EVertexColorImportOption::Override", (int64)EVertexColorImportOption::Override },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ignore.ToolTip", "Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors." },
				{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
				{ "Override.ToolTip", "Override all vertex colors with the specified color." },
				{ "Replace.ToolTip", "Import the static mesh using the vertex colors from the FBX file." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EVertexColorImportOption",
				"EVertexColorImportOption::Type",
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
	static UEnum* EFBXNormalGenerationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXNormalGenerationMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXNormalGenerationMethod::Type>()
	{
		return EFBXNormalGenerationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXNormalGenerationMethod(EFBXNormalGenerationMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXNormalGenerationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Hash() { return 1991016733U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXNormalGenerationMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFBXNormalGenerationMethod::BuiltIn", (int64)EFBXNormalGenerationMethod::BuiltIn },
				{ "EFBXNormalGenerationMethod::MikkTSpace", (int64)EFBXNormalGenerationMethod::MikkTSpace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BuiltIn.ToolTip", "Use the legacy built in method to generate normals (faster in some cases)" },
				{ "MikkTSpace.ToolTip", "Use MikkTSpace to generate normals and tangents" },
				{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXNormalGenerationMethod",
				"EFBXNormalGenerationMethod::Type",
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
	static UEnum* EFBXNormalImportMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXNormalImportMethod"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXNormalImportMethod>()
	{
		return EFBXNormalImportMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFBXNormalImportMethod(EFBXNormalImportMethod_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFBXNormalImportMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Hash() { return 872317253U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFBXNormalImportMethod"), 0, Get_Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FBXNIM_ComputeNormals", (int64)FBXNIM_ComputeNormals },
				{ "FBXNIM_ImportNormals", (int64)FBXNIM_ImportNormals },
				{ "FBXNIM_ImportNormalsAndTangents", (int64)FBXNIM_ImportNormalsAndTangents },
				{ "FBXNIM_MAX", (int64)FBXNIM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FBXNIM_ComputeNormals.DisplayName", "Compute Normals" },
				{ "FBXNIM_ImportNormals.DisplayName", "Import Normals" },
				{ "FBXNIM_ImportNormalsAndTangents.DisplayName", "Import Normals and Tangents" },
				{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFBXNormalImportMethod",
				"EFBXNormalImportMethod",
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
class UScriptStruct* FImportMeshLodSectionsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportMeshLodSectionsData, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ImportMeshLodSectionsData"), sizeof(FImportMeshLodSectionsData), Get_Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FImportMeshLodSectionsData>()
{
	return FImportMeshLodSectionsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportMeshLodSectionsData(FImportMeshLodSectionsData::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ImportMeshLodSectionsData"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFImportMeshLodSectionsData
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFImportMeshLodSectionsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportMeshLodSectionsData")),new UScriptStruct::TCppStructOps<FImportMeshLodSectionsData>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFImportMeshLodSectionsData;
	struct Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionOriginalMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionOriginalMaterialName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionOriginalMaterialName_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportMeshLodSectionsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Every original imported fbx material name for every section" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName = { "SectionOriginalMaterialName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportMeshLodSectionsData, SectionOriginalMaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_Inner = { "SectionOriginalMaterialName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ImportMeshLodSectionsData",
		sizeof(FImportMeshLodSectionsData),
		alignof(FImportMeshLodSectionsData),
		Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportMeshLodSectionsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportMeshLodSectionsData"), sizeof(FImportMeshLodSectionsData), Get_Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Hash() { return 476930995U; }
	void UFbxMeshImportData::StaticRegisterNativesUFbxMeshImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxMeshImportData_NoRegister()
	{
		return UFbxMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportMeshLodData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportMeshLodData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportMeshLodData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportMaterialOriginalNameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportMaterialOriginalNameData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportMaterialOriginalNameData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalGenerationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalImportMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalImportMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportMeshLODs_MetaData[];
#endif
		static void NewProp_bImportMeshLODs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportMeshLODs;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData = { "ImportMeshLodData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxMeshImportData, ImportMeshLodData), METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_Inner = { "ImportMeshLodData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FImportMeshLodSectionsData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Original import section/material data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData = { "ImportMaterialOriginalNameData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxMeshImportData, ImportMaterialOriginalNameData), METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_Inner = { "ImportMaterialOriginalNameData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod = { "NormalGenerationMethod", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxMeshImportData, NormalGenerationMethod), Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod = { "NormalImportMethod", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxMeshImportData, NormalImportMethod), Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal meshes from LODs in the import file; If not enabled, only the base mesh from the LOD group is imported" },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bImportMeshLODs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs = { "bImportMeshLODs", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "!bTransformVertexToAbsolute" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "- Experimental - If this option is true the inverse node rotation pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. Note: \"TransformVertexToAbsolute\" must be false." },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bBakePivotInVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex = { "bBakePivotInVertex", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices." },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bTransformVertexToAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute = { "bTransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxMeshImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxMeshImportData_Statics::ClassParams = {
		&UFbxMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers),
		0,
		0x400010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxMeshImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxMeshImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxMeshImportData, 3685711143);
	template<> UNREALED_API UClass* StaticClass<UFbxMeshImportData>()
	{
		return UFbxMeshImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxMeshImportData(Z_Construct_UClass_UFbxMeshImportData, &UFbxMeshImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxMeshImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxMeshImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
