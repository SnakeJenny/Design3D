// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavigationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
// End Cross Module References
	static UEnum* ENavigationQueryResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationQueryResult, Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationQueryResult"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavigationQueryResult::Type>()
	{
		return ENavigationQueryResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavigationQueryResult(ENavigationQueryResult_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavigationQueryResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavigationQueryResult_Hash() { return 773557900U; }
	UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavigationQueryResult"), 0, Get_Z_Construct_UEnum_Engine_ENavigationQueryResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavigationQueryResult::Invalid", (int64)ENavigationQueryResult::Invalid },
				{ "ENavigationQueryResult::Error", (int64)ENavigationQueryResult::Error },
				{ "ENavigationQueryResult::Fail", (int64)ENavigationQueryResult::Fail },
				{ "ENavigationQueryResult::Success", (int64)ENavigationQueryResult::Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavigationQueryResult",
				"ENavigationQueryResult::Type",
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
	static UEnum* ENavPathEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavPathEvent, Z_Construct_UPackage__Script_Engine(), TEXT("ENavPathEvent"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavPathEvent::Type>()
	{
		return ENavPathEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavPathEvent(ENavPathEvent_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavPathEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavPathEvent_Hash() { return 2671973617U; }
	UEnum* Z_Construct_UEnum_Engine_ENavPathEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavPathEvent"), 0, Get_Z_Construct_UEnum_Engine_ENavPathEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavPathEvent::Cleared", (int64)ENavPathEvent::Cleared },
				{ "ENavPathEvent::NewPath", (int64)ENavPathEvent::NewPath },
				{ "ENavPathEvent::UpdatedDueToGoalMoved", (int64)ENavPathEvent::UpdatedDueToGoalMoved },
				{ "ENavPathEvent::UpdatedDueToNavigationChanged", (int64)ENavPathEvent::UpdatedDueToNavigationChanged },
				{ "ENavPathEvent::Invalidated", (int64)ENavPathEvent::Invalidated },
				{ "ENavPathEvent::RePathFailed", (int64)ENavPathEvent::RePathFailed },
				{ "ENavPathEvent::MetaPathUpdate", (int64)ENavPathEvent::MetaPathUpdate },
				{ "ENavPathEvent::Custom", (int64)ENavPathEvent::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavPathEvent",
				"ENavPathEvent::Type",
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
	static UEnum* ENavDataGatheringModeConfig_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringModeConfig"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringModeConfig>()
	{
		return ENavDataGatheringModeConfig_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavDataGatheringModeConfig(ENavDataGatheringModeConfig_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavDataGatheringModeConfig"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Hash() { return 453091621U; }
	UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavDataGatheringModeConfig"), 0, Get_Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavDataGatheringModeConfig::Invalid", (int64)ENavDataGatheringModeConfig::Invalid },
				{ "ENavDataGatheringModeConfig::Instant", (int64)ENavDataGatheringModeConfig::Instant },
				{ "ENavDataGatheringModeConfig::Lazy", (int64)ENavDataGatheringModeConfig::Lazy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavDataGatheringModeConfig",
				"ENavDataGatheringModeConfig",
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
	static UEnum* ENavDataGatheringMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringMode>()
	{
		return ENavDataGatheringMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavDataGatheringMode(ENavDataGatheringMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavDataGatheringMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavDataGatheringMode_Hash() { return 3513519703U; }
	UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavDataGatheringMode"), 0, Get_Z_Construct_UEnum_Engine_ENavDataGatheringMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavDataGatheringMode::Default", (int64)ENavDataGatheringMode::Default },
				{ "ENavDataGatheringMode::Instant", (int64)ENavDataGatheringMode::Instant },
				{ "ENavDataGatheringMode::Lazy", (int64)ENavDataGatheringMode::Lazy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavDataGatheringMode",
				"ENavDataGatheringMode",
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
	static UEnum* ENavigationOptionFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationOptionFlag, Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationOptionFlag"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavigationOptionFlag::Type>()
	{
		return ENavigationOptionFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavigationOptionFlag(ENavigationOptionFlag_StaticEnum, TEXT("/Script/Engine"), TEXT("ENavigationOptionFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENavigationOptionFlag_Hash() { return 4254745823U; }
	UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavigationOptionFlag"), 0, Get_Z_Construct_UEnum_Engine_ENavigationOptionFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavigationOptionFlag::Default", (int64)ENavigationOptionFlag::Default },
				{ "ENavigationOptionFlag::Enable", (int64)ENavigationOptionFlag::Enable },
				{ "ENavigationOptionFlag::Disable", (int64)ENavigationOptionFlag::Disable },
				{ "ENavigationOptionFlag::MAX", (int64)ENavigationOptionFlag::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disable.DisplayName", "No" },
				{ "Disable.ToolTip", "UHT was complaining when tried to use True as value instead of Enable" },
				{ "Enable.DisplayName", "Yes" },
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENavigationOptionFlag",
				"ENavigationOptionFlag::Type",
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
class UScriptStruct* FNavDataConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavDataConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavDataConfig, Z_Construct_UPackage__Script_Engine(), TEXT("NavDataConfig"), sizeof(FNavDataConfig), Get_Z_Construct_UScriptStruct_FNavDataConfig_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavDataConfig>()
{
	return FNavDataConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavDataConfig(FNavDataConfig::StaticStruct, TEXT("/Script/Engine"), TEXT("NavDataConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavDataConfig
{
	FScriptStruct_Engine_StaticRegisterNativesFNavDataConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavDataConfig")),new UScriptStruct::TCppStructOps<FNavDataConfig>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavDataConfig;
	struct Z_Construct_UScriptStruct_FNavDataConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDataClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationDataClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultQueryExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultQueryExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavDataConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClassName_MetaData[] = {
		{ "Category", "Navigation" },
		{ "MetaClass", "NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClassName = { "NavigationDataClassName", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavDataConfig, NavigationDataClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "mz@todo make sure we handle NavigationDataClass and NavigationDataClassName in PostEditChange" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass = { "NavigationDataClass", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavDataConfig, NavigationDataClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData[] = {
		{ "Category", "Querying" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent = { "DefaultQueryExtent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavDataConfig, DefaultQueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavDataConfig, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavDataConfig, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavAgentProperties,
		&NewStructOps,
		"NavDataConfig",
		sizeof(FNavDataConfig),
		alignof(FNavDataConfig),
		Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavDataConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavDataConfig"), sizeof(FNavDataConfig), Get_Z_Construct_UScriptStruct_FNavDataConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavDataConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavDataConfig_Hash() { return 1890138492U; }
class UScriptStruct* FNavAgentProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavAgentProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentProperties, Z_Construct_UPackage__Script_Engine(), TEXT("NavAgentProperties"), sizeof(FNavAgentProperties), Get_Z_Construct_UScriptStruct_FNavAgentProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAgentProperties>()
{
	return FNavAgentProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavAgentProperties(FNavAgentProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("NavAgentProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavAgentProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFNavAgentProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavAgentProperties")),new UScriptStruct::TCppStructOps<FNavAgentProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavAgentProperties;
	struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavWalkingSearchHeightScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavWalkingSearchHeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentStepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentStepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAgentProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "MetaClass", "NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MovementProperties)\n       TSubclassOf<ANavigationData> PreferredNavData;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData = { "PreferredNavData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavAgentProperties, PreferredNavData), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale = { "NavWalkingSearchHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavAgentProperties, NavWalkingSearchHeightScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "DisplayName", "Nav Agent Step Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Step height to use, or -1 for default value from navdata's config." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight = { "AgentStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavAgentProperties, AgentStepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "DisplayName", "Nav Agent Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Total height of the capsule used for navigation/pathfinding." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavAgentProperties, AgentHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "DisplayName", "Nav Agent Radius" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Radius of the capsule used for navigation/pathfinding." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavAgentProperties, AgentRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMovementProperties,
		&NewStructOps,
		"NavAgentProperties",
		sizeof(FNavAgentProperties),
		alignof(FNavAgentProperties),
		Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavAgentProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavAgentProperties"), sizeof(FNavAgentProperties), Get_Z_Construct_UScriptStruct_FNavAgentProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavAgentProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavAgentProperties_Hash() { return 662448881U; }
class UScriptStruct* FMovementProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMovementProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementProperties, Z_Construct_UPackage__Script_Engine(), TEXT("MovementProperties"), sizeof(FMovementProperties), Get_Z_Construct_UScriptStruct_FMovementProperties_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMovementProperties>()
{
	return FMovementProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovementProperties(FMovementProperties::StaticStruct, TEXT("/Script/Engine"), TEXT("MovementProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMovementProperties
{
	FScriptStruct_Engine_StaticRegisterNativesFMovementProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovementProperties")),new UScriptStruct::TCppStructOps<FMovementProperties>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMovementProperties;
	struct Z_Construct_UScriptStruct_FMovementProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFly_MetaData[];
#endif
		static void NewProp_bCanFly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSwim_MetaData[];
#endif
		static void NewProp_bCanSwim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSwim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanWalk_MetaData[];
#endif
		static void NewProp_bCanWalk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanWalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCrouch_MetaData[];
#endif
		static void NewProp_bCanCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCrouch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of flying." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanFly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly = { "bCanFly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of swimming or moving through fluid volumes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanSwim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim = { "bCanSwim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of walking or moving on the ground." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanWalk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk = { "bCanWalk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of jumping." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of crouching." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch = { "bCanCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MovementProperties",
		sizeof(FMovementProperties),
		alignof(FMovementProperties),
		Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovementProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovementProperties"), sizeof(FMovementProperties), Get_Z_Construct_UScriptStruct_FMovementProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovementProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovementProperties_Hash() { return 2312384216U; }
class UScriptStruct* FNavAgentSelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNavAgentSelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentSelector, Z_Construct_UPackage__Script_Engine(), TEXT("NavAgentSelector"), sizeof(FNavAgentSelector), Get_Z_Construct_UScriptStruct_FNavAgentSelector_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAgentSelector>()
{
	return FNavAgentSelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavAgentSelector(FNavAgentSelector::StaticStruct, TEXT("/Script/Engine"), TEXT("NavAgentSelector"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNavAgentSelector
{
	FScriptStruct_Engine_StaticRegisterNativesFNavAgentSelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavAgentSelector")),new UScriptStruct::TCppStructOps<FNavAgentSelector>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNavAgentSelector;
	struct Z_Construct_UScriptStruct_FNavAgentSelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[];
#endif
		static void NewProp_bSupportsAgent15_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[];
#endif
		static void NewProp_bSupportsAgent14_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[];
#endif
		static void NewProp_bSupportsAgent13_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[];
#endif
		static void NewProp_bSupportsAgent12_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[];
#endif
		static void NewProp_bSupportsAgent11_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[];
#endif
		static void NewProp_bSupportsAgent10_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[];
#endif
		static void NewProp_bSupportsAgent9_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[];
#endif
		static void NewProp_bSupportsAgent8_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[];
#endif
		static void NewProp_bSupportsAgent7_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[];
#endif
		static void NewProp_bSupportsAgent6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[];
#endif
		static void NewProp_bSupportsAgent5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[];
#endif
		static void NewProp_bSupportsAgent4_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[];
#endif
		static void NewProp_bSupportsAgent3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[];
#endif
		static void NewProp_bSupportsAgent2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[];
#endif
		static void NewProp_bSupportsAgent1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[];
#endif
		static void NewProp_bSupportsAgent0_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAgentSelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent15 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15 = { "bSupportsAgent15", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent14 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14 = { "bSupportsAgent14", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent13 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13 = { "bSupportsAgent13", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent12 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12 = { "bSupportsAgent12", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent11 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11 = { "bSupportsAgent11", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent10 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10 = { "bSupportsAgent10", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent9 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9 = { "bSupportsAgent9", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent8 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8 = { "bSupportsAgent8", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent7 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7 = { "bSupportsAgent7", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6 = { "bSupportsAgent6", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5 = { "bSupportsAgent5", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent4 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4 = { "bSupportsAgent4", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3 = { "bSupportsAgent3", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2 = { "bSupportsAgent2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1 = { "bSupportsAgent1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0_SetBit(void* Obj)
	{
		((FNavAgentSelector*)Obj)->bSupportsAgent0 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0 = { "bSupportsAgent0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNavAgentSelector), &Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavAgentSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent15,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent14,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent12,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent11,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentSelector_Statics::NewProp_bSupportsAgent0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAgentSelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NavAgentSelector",
		sizeof(FNavAgentSelector),
		alignof(FNavAgentSelector),
		Z_Construct_UScriptStruct_FNavAgentSelector_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentSelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavAgentSelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavAgentSelector"), sizeof(FNavAgentSelector), Get_Z_Construct_UScriptStruct_FNavAgentSelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavAgentSelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavAgentSelector_Hash() { return 2865064820U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
