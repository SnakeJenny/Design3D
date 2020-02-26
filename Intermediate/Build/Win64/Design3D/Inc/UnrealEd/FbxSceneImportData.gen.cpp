// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FbxSceneImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportData() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EFbxSceneReimportStatusFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxSceneReimportStatusFlags"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxSceneReimportStatusFlags>()
	{
		return EFbxSceneReimportStatusFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFbxSceneReimportStatusFlags(EFbxSceneReimportStatusFlags_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFbxSceneReimportStatusFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Hash() { return 3780815209U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFbxSceneReimportStatusFlags"), 0, Get_Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFbxSceneReimportStatusFlags::None", (int64)EFbxSceneReimportStatusFlags::None },
				{ "EFbxSceneReimportStatusFlags::Added", (int64)EFbxSceneReimportStatusFlags::Added },
				{ "EFbxSceneReimportStatusFlags::Removed", (int64)EFbxSceneReimportStatusFlags::Removed },
				{ "EFbxSceneReimportStatusFlags::Same", (int64)EFbxSceneReimportStatusFlags::Same },
				{ "EFbxSceneReimportStatusFlags::FoundContentBrowserAsset", (int64)EFbxSceneReimportStatusFlags::FoundContentBrowserAsset },
				{ "EFbxSceneReimportStatusFlags::ReimportAsset", (int64)EFbxSceneReimportStatusFlags::ReimportAsset },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFbxSceneReimportStatusFlags",
				"EFbxSceneReimportStatusFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFbxSceneImportData::StaticRegisterNativesUFbxSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister()
	{
		return UFbxSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFbxFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFbxFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FbxSceneImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
		{ "ToolTip", "The path of the fbx file use for the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile = { "SourceFbxFile", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxSceneImportData, SourceFbxFile), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportData_Statics::ClassParams = {
		&UFbxSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxSceneImportData, 2381515024);
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportData>()
	{
		return UFbxSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxSceneImportData(Z_Construct_UClass_UFbxSceneImportData, &UFbxSceneImportData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportData);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSceneImportData)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
