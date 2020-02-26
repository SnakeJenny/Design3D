// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveCoding/Private/LiveCodingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveCodingSettings() {}
// Cross Module References
	LIVECODING_API UEnum* Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode();
	UPackage* Z_Construct_UPackage__Script_LiveCoding();
	LIVECODING_API UClass* Z_Construct_UClass_ULiveCodingSettings_NoRegister();
	LIVECODING_API UClass* Z_Construct_UClass_ULiveCodingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ELiveCodingStartupMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode, Z_Construct_UPackage__Script_LiveCoding(), TEXT("ELiveCodingStartupMode"));
		}
		return Singleton;
	}
	template<> LIVECODING_API UEnum* StaticEnum<ELiveCodingStartupMode>()
	{
		return ELiveCodingStartupMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveCodingStartupMode(ELiveCodingStartupMode_StaticEnum, TEXT("/Script/LiveCoding"), TEXT("ELiveCodingStartupMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Hash() { return 3904264780U; }
	UEnum* Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveCoding();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveCodingStartupMode"), 0, Get_Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveCodingStartupMode::Automatic", (int64)ELiveCodingStartupMode::Automatic },
				{ "ELiveCodingStartupMode::AutomaticButHidden", (int64)ELiveCodingStartupMode::AutomaticButHidden },
				{ "ELiveCodingStartupMode::Manual", (int64)ELiveCodingStartupMode::Manual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.DisplayName", "Start automatically and show console" },
				{ "AutomaticButHidden.DisplayName", "Start automatically but hide console until summoned" },
				{ "Manual.DisplayName", "Manual" },
				{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveCoding,
				nullptr,
				"ELiveCodingStartupMode",
				"ELiveCodingStartupMode",
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
	void ULiveCodingSettings::StaticRegisterNativesULiveCodingSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveCodingSettings_NoRegister()
	{
		return ULiveCodingSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveCodingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreloadNamedModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreloadNamedModules;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreloadNamedModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreloadProjectPluginModules_MetaData[];
#endif
		static void NewProp_bPreloadProjectPluginModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreloadProjectPluginModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreloadProjectModules_MetaData[];
#endif
		static void NewProp_bPreloadProjectModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreloadProjectModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreloadEnginePluginModules_MetaData[];
#endif
		static void NewProp_bPreloadEnginePluginModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreloadEnginePluginModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreloadEngineModules_MetaData[];
#endif
		static void NewProp_bPreloadEngineModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreloadEngineModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Startup_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Startup;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Startup_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveCodingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveCoding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Live Coding" },
		{ "IncludePath", "LiveCodingSettings.h" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules = { "PreloadNamedModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveCodingSettings, PreloadNamedModules), METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_Inner = { "PreloadNamedModules", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadProjectPluginModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules = { "bPreloadProjectPluginModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadProjectModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules = { "bPreloadProjectModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadEnginePluginModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules = { "bPreloadEnginePluginModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadEngineModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules = { "bPreloadEngineModules", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup = { "Startup", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveCodingSettings, Startup), Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Live Coding" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveCodingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveCodingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveCodingSettings_Statics::ClassParams = {
		&ULiveCodingSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveCodingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveCodingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveCodingSettings, 2943714682);
	template<> LIVECODING_API UClass* StaticClass<ULiveCodingSettings>()
	{
		return ULiveCodingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveCodingSettings(Z_Construct_UClass_ULiveCodingSettings, &ULiveCodingSettings::StaticClass, TEXT("/Script/LiveCoding"), TEXT("ULiveCodingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveCodingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
