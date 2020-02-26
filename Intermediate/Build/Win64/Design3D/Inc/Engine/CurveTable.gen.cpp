// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveTable() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveTableMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	static UEnum* ECurveTableMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveTableMode, Z_Construct_UPackage__Script_Engine(), TEXT("ECurveTableMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECurveTableMode>()
	{
		return ECurveTableMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurveTableMode(ECurveTableMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ECurveTableMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECurveTableMode_Hash() { return 1560652949U; }
	UEnum* Z_Construct_UEnum_Engine_ECurveTableMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurveTableMode"), 0, Get_Z_Construct_UEnum_Engine_ECurveTableMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurveTableMode::Empty", (int64)ECurveTableMode::Empty },
				{ "ECurveTableMode::SimpleCurves", (int64)ECurveTableMode::SimpleCurves },
				{ "ECurveTableMode::RichCurves", (int64)ECurveTableMode::RichCurves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
				{ "ToolTip", "Whether the curve table contains simple, rich, or no curves" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECurveTableMode",
				"ECurveTableMode",
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
class UScriptStruct* FCurveTableRowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTableRowHandle, Z_Construct_UPackage__Script_Engine(), TEXT("CurveTableRowHandle"), sizeof(FCurveTableRowHandle), Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveTableRowHandle>()
{
	return FCurveTableRowHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveTableRowHandle(FCurveTableRowHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveTableRowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveTableRowHandle")),new UScriptStruct::TCppStructOps<FCurveTableRowHandle>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveTableRowHandle;
	struct Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Handle to a particular row in a table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTableRowHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveTableRowHandle, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable = { "CurveTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveTableRowHandle, CurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveTableRowHandle",
		sizeof(FCurveTableRowHandle),
		alignof(FCurveTableRowHandle),
		Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveTableRowHandle"), sizeof(FCurveTableRowHandle), Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveTableRowHandle_Hash() { return 4252788055U; }
	void UCurveTable::StaticRegisterNativesUCurveTable()
	{
	}
	UClass* Z_Construct_UClass_UCurveTable_NoRegister()
	{
		return UCurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UCurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/CurveTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Imported spreadsheet table as curves." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveTable, ImportPath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveTable_Statics::ClassParams = {
		&UCurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCurveTable_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveTable, 3906804578);
	template<> ENGINE_API UClass* StaticClass<UCurveTable>()
	{
		return UCurveTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveTable(Z_Construct_UClass_UCurveTable, &UCurveTable::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveTable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveTable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
