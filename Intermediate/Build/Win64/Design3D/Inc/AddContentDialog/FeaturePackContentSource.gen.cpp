// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AddContentDialog/Public/FeaturePackContentSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturePackContentSource() {}
// Cross Module References
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel();
	UPackage* Z_Construct_UPackage__Script_AddContentDialog();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureAdditionalFiles();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet();
// End Cross Module References
	static UEnum* EFeaturePackDetailLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, Z_Construct_UPackage__Script_AddContentDialog(), TEXT("EFeaturePackDetailLevel"));
		}
		return Singleton;
	}
	template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EFeaturePackDetailLevel>()
	{
		return EFeaturePackDetailLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFeaturePackDetailLevel(EFeaturePackDetailLevel_StaticEnum, TEXT("/Script/AddContentDialog"), TEXT("EFeaturePackDetailLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Hash() { return 171883242U; }
	UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AddContentDialog();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFeaturePackDetailLevel"), 0, Get_Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFeaturePackDetailLevel::Standard", (int64)EFeaturePackDetailLevel::Standard },
				{ "EFeaturePackDetailLevel::High", (int64)EFeaturePackDetailLevel::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
				{ "ToolTip", "Defines categories for shared template resource levels." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AddContentDialog,
				nullptr,
				"EFeaturePackDetailLevel",
				"EFeaturePackDetailLevel",
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
class UScriptStruct* FFeatureAdditionalFiles::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADDCONTENTDIALOG_API uint32 Get_Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeatureAdditionalFiles, Z_Construct_UPackage__Script_AddContentDialog(), TEXT("FeatureAdditionalFiles"), sizeof(FFeatureAdditionalFiles), Get_Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Hash());
	}
	return Singleton;
}
template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<FFeatureAdditionalFiles>()
{
	return FFeatureAdditionalFiles::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeatureAdditionalFiles(FFeatureAdditionalFiles::StaticStruct, TEXT("/Script/AddContentDialog"), TEXT("FeatureAdditionalFiles"), false, nullptr, nullptr);
static struct FScriptStruct_AddContentDialog_StaticRegisterNativesFFeatureAdditionalFiles
{
	FScriptStruct_AddContentDialog_StaticRegisterNativesFFeatureAdditionalFiles()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeatureAdditionalFiles")),new UScriptStruct::TCppStructOps<FFeatureAdditionalFiles>);
	}
} ScriptStruct_AddContentDialog_StaticRegisterNativesFFeatureAdditionalFiles;
	struct Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalFilesList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalFilesList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalFilesList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationFilesFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationFilesFolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Structure that defines a shared feature pack resource." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeatureAdditionalFiles>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "List of files to insert" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList = { "AdditionalFilesList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeatureAdditionalFiles, AdditionalFilesList), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_Inner = { "AdditionalFilesList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Name of the folder to insert the files to" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder = { "DestinationFilesFolder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeatureAdditionalFiles, DestinationFilesFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		&NewStructOps,
		"FeatureAdditionalFiles",
		sizeof(FFeatureAdditionalFiles),
		alignof(FFeatureAdditionalFiles),
		Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeatureAdditionalFiles()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AddContentDialog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeatureAdditionalFiles"), sizeof(FFeatureAdditionalFiles), Get_Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Hash() { return 553567232U; }
class UScriptStruct* FFeaturePackLevelSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADDCONTENTDIALOG_API uint32 Get_Z_Construct_UScriptStruct_FFeaturePackLevelSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturePackLevelSet, Z_Construct_UPackage__Script_AddContentDialog(), TEXT("FeaturePackLevelSet"), sizeof(FFeaturePackLevelSet), Get_Z_Construct_UScriptStruct_FFeaturePackLevelSet_Hash());
	}
	return Singleton;
}
template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<FFeaturePackLevelSet>()
{
	return FFeaturePackLevelSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeaturePackLevelSet(FFeaturePackLevelSet::StaticStruct, TEXT("/Script/AddContentDialog"), TEXT("FeaturePackLevelSet"), false, nullptr, nullptr);
static struct FScriptStruct_AddContentDialog_StaticRegisterNativesFFeaturePackLevelSet
{
	FScriptStruct_AddContentDialog_StaticRegisterNativesFFeaturePackLevelSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeaturePackLevelSet")),new UScriptStruct::TCppStructOps<FFeaturePackLevelSet>);
	}
} ScriptStruct_AddContentDialog_StaticRegisterNativesFFeaturePackLevelSet;
	struct Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MountName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MountName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetailLevels;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetailLevels_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetailLevels_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Structure that defines a shared feature pack resource." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturePackLevelSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Mount name for the shared resource - this is the folder the resource will be copied to on project generation as well as the name of the folder that will appear in the content browser." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName = { "MountName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturePackLevelSet, MountName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "List of shared resource levels for this shared resource." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels = { "DetailLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeaturePackLevelSet, DetailLevels), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner = { "DetailLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		&NewStructOps,
		"FeaturePackLevelSet",
		sizeof(FFeaturePackLevelSet),
		alignof(FFeaturePackLevelSet),
		Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeaturePackLevelSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AddContentDialog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeaturePackLevelSet"), sizeof(FFeaturePackLevelSet), Get_Z_Construct_UScriptStruct_FFeaturePackLevelSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeaturePackLevelSet_Hash() { return 2382088999U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
