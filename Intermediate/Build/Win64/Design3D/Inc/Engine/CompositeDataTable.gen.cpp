// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CompositeDataTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeDataTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCompositeDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UCompositeDataTable::StaticRegisterNativesUCompositeDataTable()
	{
	}
	UClass* Z_Construct_UClass_UCompositeDataTable_NoRegister()
	{
		return UCompositeDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldParentTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldParentTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/CompositeDataTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Data table composed of a stack of other data tables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables = { "OldParentTables", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeDataTable, OldParentTables), METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner = { "OldParentTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeDataTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables = { "ParentTables", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCompositeDataTable, ParentTables), METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner = { "ParentTables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_OldParentTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeDataTable_Statics::NewProp_ParentTables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeDataTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams = {
		&UCompositeDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeDataTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeDataTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeDataTable, 2497692746);
	template<> ENGINE_API UClass* StaticClass<UCompositeDataTable>()
	{
		return UCompositeDataTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeDataTable(Z_Construct_UClass_UCompositeDataTable, &UCompositeDataTable::StaticClass, TEXT("/Script/Engine"), TEXT("UCompositeDataTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeDataTable);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeDataTable)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
