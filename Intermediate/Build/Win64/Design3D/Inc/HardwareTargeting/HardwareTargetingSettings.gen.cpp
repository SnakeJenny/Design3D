// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HardwareTargeting/Public/HardwareTargetingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareTargetingSettings() {}
// Cross Module References
	HARDWARETARGETING_API UEnum* Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset();
	UPackage* Z_Construct_UPackage__Script_HardwareTargeting();
	HARDWARETARGETING_API UEnum* Z_Construct_UEnum_HardwareTargeting_EHardwareClass();
	HARDWARETARGETING_API UClass* Z_Construct_UClass_UHardwareTargetingSettings_NoRegister();
	HARDWARETARGETING_API UClass* Z_Construct_UClass_UHardwareTargetingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EGraphicsPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, Z_Construct_UPackage__Script_HardwareTargeting(), TEXT("EGraphicsPreset"));
		}
		return Singleton;
	}
	template<> HARDWARETARGETING_API UEnum* StaticEnum<EGraphicsPreset::Type>()
	{
		return EGraphicsPreset_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphicsPreset(EGraphicsPreset_StaticEnum, TEXT("/Script/HardwareTargeting"), TEXT("EGraphicsPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Hash() { return 946462364U; }
	UEnum* Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HardwareTargeting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphicsPreset"), 0, Get_Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGraphicsPreset::Unspecified", (int64)EGraphicsPreset::Unspecified },
				{ "EGraphicsPreset::Maximum", (int64)EGraphicsPreset::Maximum },
				{ "EGraphicsPreset::Scalable", (int64)EGraphicsPreset::Scalable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Maximum.ToolTip", "Maximum quality - High-end features default to enabled" },
				{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
				{ "Scalable.ToolTip", "Scalable quality - Some features are disabled by default but can be enabled based on the actual hardware" },
				{ "ToolTip", "Enum specifying a graphics preset preference" },
				{ "Unspecified.ToolTip", "Unspecified, meaning no choice has been made yet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HardwareTargeting,
				nullptr,
				"EGraphicsPreset",
				"EGraphicsPreset::Type",
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
	static UEnum* EHardwareClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HardwareTargeting_EHardwareClass, Z_Construct_UPackage__Script_HardwareTargeting(), TEXT("EHardwareClass"));
		}
		return Singleton;
	}
	template<> HARDWARETARGETING_API UEnum* StaticEnum<EHardwareClass::Type>()
	{
		return EHardwareClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHardwareClass(EHardwareClass_StaticEnum, TEXT("/Script/HardwareTargeting"), TEXT("EHardwareClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Hash() { return 111482680U; }
	UEnum* Z_Construct_UEnum_HardwareTargeting_EHardwareClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HardwareTargeting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHardwareClass"), 0, Get_Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHardwareClass::Unspecified", (int64)EHardwareClass::Unspecified },
				{ "EHardwareClass::Desktop", (int64)EHardwareClass::Desktop },
				{ "EHardwareClass::Mobile", (int64)EHardwareClass::Mobile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Desktop.ToolTip", "Desktop or console" },
				{ "Mobile.ToolTip", "Mobile or tablet" },
				{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
				{ "ToolTip", "Enum specifying a class of hardware" },
				{ "Unspecified.ToolTip", "Unspecified, meaning no choice has been made yet" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HardwareTargeting,
				nullptr,
				"EHardwareClass",
				"EHardwareClass::Type",
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
	void UHardwareTargetingSettings::StaticRegisterNativesUHardwareTargetingSettings()
	{
	}
	UClass* Z_Construct_UClass_UHardwareTargetingSettings_NoRegister()
	{
		return UHardwareTargetingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHardwareTargetingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedDefaultGraphicsPerformance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedDefaultGraphicsPerformance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGraphicsPerformance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultGraphicsPerformance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedTargetedHardwareClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppliedTargetedHardwareClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetedHardwareClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetedHardwareClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardwareTargetingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HardwareTargeting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HardwareTargetingSettings.h" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Hardware targeting settings, stored in default config, per-project" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum that is set to DefaultGraphicsPerformance when the settings have been successfully applied" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance = { "AppliedDefaultGraphicsPerformance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHardwareTargetingSettings, AppliedDefaultGraphicsPerformance), Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData[] = {
		{ "Category", "None" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum specifying a graphics preset to use for this game" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance = { "DefaultGraphicsPerformance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHardwareTargetingSettings, DefaultGraphicsPerformance), Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum that is set to TargetedHardwareClass when the settings have been successfully applied" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass = { "AppliedTargetedHardwareClass", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHardwareTargetingSettings, AppliedTargetedHardwareClass), Z_Construct_UEnum_HardwareTargeting_EHardwareClass, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData[] = {
		{ "Category", "None" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum specifying which class of hardware this game is targeting" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass = { "TargetedHardwareClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHardwareTargetingSettings, TargetedHardwareClass), Z_Construct_UEnum_HardwareTargeting_EHardwareClass, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardwareTargetingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardwareTargetingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::ClassParams = {
		&UHardwareTargetingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardwareTargetingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHardwareTargetingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHardwareTargetingSettings, 1304960912);
	template<> HARDWARETARGETING_API UClass* StaticClass<UHardwareTargetingSettings>()
	{
		return UHardwareTargetingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHardwareTargetingSettings(Z_Construct_UClass_UHardwareTargetingSettings, &UHardwareTargetingSettings::StaticClass, TEXT("/Script/HardwareTargeting"), TEXT("UHardwareTargetingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardwareTargetingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
