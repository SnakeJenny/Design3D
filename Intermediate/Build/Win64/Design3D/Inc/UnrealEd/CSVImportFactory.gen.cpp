// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CSVImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSVImportFactory() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECSVImportType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FCSVImportSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
// End Cross Module References
	static UEnum* ECSVImportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECSVImportType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECSVImportType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECSVImportType>()
	{
		return ECSVImportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECSVImportType(ECSVImportType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ECSVImportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ECSVImportType_Hash() { return 120147004U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ECSVImportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECSVImportType"), 0, Get_Z_Construct_UEnum_UnrealEd_ECSVImportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECSVImportType::ECSV_DataTable", (int64)ECSVImportType::ECSV_DataTable },
				{ "ECSVImportType::ECSV_CurveTable", (int64)ECSVImportType::ECSV_CurveTable },
				{ "ECSVImportType::ECSV_CurveFloat", (int64)ECSVImportType::ECSV_CurveFloat },
				{ "ECSVImportType::ECSV_CurveVector", (int64)ECSVImportType::ECSV_CurveVector },
				{ "ECSVImportType::ECSV_CurveLinearColor", (int64)ECSVImportType::ECSV_CurveLinearColor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ECSV_CurveFloat.ToolTip", "Import as a UCurveFloat" },
				{ "ECSV_CurveLinearColor.ToolTip", "Import as a UCurveLinearColor" },
				{ "ECSV_CurveTable.ToolTip", "Import as UCurveTable" },
				{ "ECSV_CurveVector.ToolTip", "Import as a UCurveVector" },
				{ "ECSV_DataTable.ToolTip", "Import as UDataTable" },
				{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
				{ "ToolTip", "Enum to indicate what to import CSV as" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ECSVImportType",
				"ECSVImportType",
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
class UScriptStruct* FCSVImportSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FCSVImportSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCSVImportSettings, Z_Construct_UPackage__Script_UnrealEd(), TEXT("CSVImportSettings"), sizeof(FCSVImportSettings), Get_Z_Construct_UScriptStruct_FCSVImportSettings_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FCSVImportSettings>()
{
	return FCSVImportSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCSVImportSettings(FCSVImportSettings::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("CSVImportSettings"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFCSVImportSettings
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFCSVImportSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CSVImportSettings")),new UScriptStruct::TCppStructOps<FCSVImportSettings>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFCSVImportSettings;
	struct Z_Construct_UScriptStruct_FCSVImportSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportCurveInterpMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportCurveInterpMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportRowStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportRowStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCSVImportSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode = { "ImportCurveInterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCSVImportSettings, ImportCurveInterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCSVImportSettings, ImportType), Z_Construct_UEnum_UnrealEd_ECSVImportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct = { "ImportRowStruct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCSVImportSettings, ImportRowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"CSVImportSettings",
		sizeof(FCSVImportSettings),
		alignof(FCSVImportSettings),
		Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCSVImportSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCSVImportSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CSVImportSettings"), sizeof(FCSVImportSettings), Get_Z_Construct_UScriptStruct_FCSVImportSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCSVImportSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCSVImportSettings_Hash() { return 1841870703U; }
	void UCSVImportFactory::StaticRegisterNativesUCSVImportFactory()
	{
	}
	UClass* Z_Construct_UClass_UCSVImportFactory_NoRegister()
	{
		return UCSVImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCSVImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomatedImportSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutomatedImportSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSVImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CSVImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings = { "AutomatedImportSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSVImportFactory, AutomatedImportSettings), Z_Construct_UScriptStruct_FCSVImportSettings, METADATA_PARAMS(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSVImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSVImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCSVImportFactory_Statics::ClassParams = {
		&UCSVImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSVImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSVImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSVImportFactory, 3302825478);
	template<> UNREALED_API UClass* StaticClass<UCSVImportFactory>()
	{
		return UCSVImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSVImportFactory(Z_Construct_UClass_UCSVImportFactory, &UCSVImportFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCSVImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSVImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
