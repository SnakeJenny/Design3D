// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConfigEditor/Public/ConfigPropertyHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigPropertyHelper() {}
// Cross Module References
	CONFIGEDITOR_API UEnum* Z_Construct_UEnum_ConfigEditor_EConfigFileSourceControlStatus();
	UPackage* Z_Construct_UPackage__Script_ConfigEditor();
	CONFIGEDITOR_API UClass* Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister();
	CONFIGEDITOR_API UClass* Z_Construct_UClass_UPropertyConfigFileDisplayRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	CONFIGEDITOR_API UClass* Z_Construct_UClass_UConfigHierarchyPropertyView_NoRegister();
	CONFIGEDITOR_API UClass* Z_Construct_UClass_UConfigHierarchyPropertyView();
// End Cross Module References
	static UEnum* EConfigFileSourceControlStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ConfigEditor_EConfigFileSourceControlStatus, Z_Construct_UPackage__Script_ConfigEditor(), TEXT("EConfigFileSourceControlStatus"));
		}
		return Singleton;
	}
	template<> CONFIGEDITOR_API UEnum* StaticEnum<EConfigFileSourceControlStatus>()
	{
		return EConfigFileSourceControlStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConfigFileSourceControlStatus(EConfigFileSourceControlStatus_StaticEnum, TEXT("/Script/ConfigEditor"), TEXT("EConfigFileSourceControlStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ConfigEditor_EConfigFileSourceControlStatus_Hash() { return 1808778636U; }
	UEnum* Z_Construct_UEnum_ConfigEditor_EConfigFileSourceControlStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ConfigEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConfigFileSourceControlStatus"), 0, Get_Z_Construct_UEnum_ConfigEditor_EConfigFileSourceControlStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CFSCS_Unknown", (int64)CFSCS_Unknown },
				{ "CFSCS_Writable", (int64)CFSCS_Writable },
				{ "CFSCS_Locked", (int64)CFSCS_Locked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CFSCS_Locked.DisplayName", "File is locked" },
				{ "CFSCS_Unknown.DisplayName", "Unknown" },
				{ "CFSCS_Writable.DisplayName", "Available to edit" },
				{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ConfigEditor,
				nullptr,
				"EConfigFileSourceControlStatus",
				"EConfigFileSourceControlStatus",
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
	void UPropertyConfigFileDisplayRow::StaticRegisterNativesUPropertyConfigFileDisplayRow()
	{
	}
	UClass* Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister()
	{
		return UPropertyConfigFileDisplayRow::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFileWritable_MetaData[];
#endif
		static void NewProp_bIsFileWritable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFileWritable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConfigEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConfigPropertyHelper.h" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable_MetaData[] = {
		{ "Category", "Helper" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable_SetBit(void* Obj)
	{
		((UPropertyConfigFileDisplayRow*)Obj)->bIsFileWritable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable = { "bIsFileWritable", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPropertyConfigFileDisplayRow), &Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ExternalProperty_MetaData[] = {
		{ "Category", "Helper" },
		{ "EditCondition", "bIsFileWritable" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ExternalProperty = { "ExternalProperty", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyConfigFileDisplayRow, ExternalProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ExternalProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ExternalProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ConfigFileName_MetaData[] = {
		{ "Category", "Helper" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ConfigFileName = { "ConfigFileName", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPropertyConfigFileDisplayRow, ConfigFileName), METADATA_PARAMS(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ConfigFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ConfigFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_bIsFileWritable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ExternalProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::NewProp_ConfigFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyConfigFileDisplayRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::ClassParams = {
		&UPropertyConfigFileDisplayRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyConfigFileDisplayRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPropertyConfigFileDisplayRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPropertyConfigFileDisplayRow, 4135514064);
	template<> CONFIGEDITOR_API UClass* StaticClass<UPropertyConfigFileDisplayRow>()
	{
		return UPropertyConfigFileDisplayRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPropertyConfigFileDisplayRow(Z_Construct_UClass_UPropertyConfigFileDisplayRow, &UPropertyConfigFileDisplayRow::StaticClass, TEXT("/Script/ConfigEditor"), TEXT("UPropertyConfigFileDisplayRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyConfigFileDisplayRow);
	void UConfigHierarchyPropertyView::StaticRegisterNativesUConfigHierarchyPropertyView()
	{
	}
	UClass* Z_Construct_UClass_UConfigHierarchyPropertyView_NoRegister()
	{
		return UConfigHierarchyPropertyView::StaticClass();
	}
	struct Z_Construct_UClass_UConfigHierarchyPropertyView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFilePropertyObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigFilePropertyObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigFilePropertyObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_EditProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConfigEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConfigPropertyHelper.h" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects_MetaData[] = {
		{ "Category", "Helper" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects = { "ConfigFilePropertyObjects", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfigHierarchyPropertyView, ConfigFilePropertyObjects), METADATA_PARAMS(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects_Inner = { "ConfigFilePropertyObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPropertyConfigFileDisplayRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_EditProperty_MetaData[] = {
		{ "Category", "Helper" },
		{ "ModuleRelativePath", "Public/ConfigPropertyHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_EditProperty = { "EditProperty", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConfigHierarchyPropertyView, EditProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_EditProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_EditProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_ConfigFilePropertyObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::NewProp_EditProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConfigHierarchyPropertyView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::ClassParams = {
		&UConfigHierarchyPropertyView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConfigHierarchyPropertyView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConfigHierarchyPropertyView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConfigHierarchyPropertyView, 398671432);
	template<> CONFIGEDITOR_API UClass* StaticClass<UConfigHierarchyPropertyView>()
	{
		return UConfigHierarchyPropertyView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConfigHierarchyPropertyView(Z_Construct_UClass_UConfigHierarchyPropertyView, &UConfigHierarchyPropertyView::StaticClass, TEXT("/Script/ConfigEditor"), TEXT("UConfigHierarchyPropertyView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConfigHierarchyPropertyView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
