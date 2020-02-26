// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintRuntime/Public/BlueprintRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintRuntimeSettings() {}
// Cross Module References
	BLUEPRINTRUNTIME_API UEnum* Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior();
	UPackage* Z_Construct_UPackage__Script_BlueprintRuntime();
	BLUEPRINTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWarningSettings();
	BLUEPRINTRUNTIME_API UClass* Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister();
	BLUEPRINTRUNTIME_API UClass* Z_Construct_UClass_UBlueprintRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EBlueprintWarningBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior, Z_Construct_UPackage__Script_BlueprintRuntime(), TEXT("EBlueprintWarningBehavior"));
		}
		return Singleton;
	}
	template<> BLUEPRINTRUNTIME_API UEnum* StaticEnum<EBlueprintWarningBehavior>()
	{
		return EBlueprintWarningBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintWarningBehavior(EBlueprintWarningBehavior_StaticEnum, TEXT("/Script/BlueprintRuntime"), TEXT("EBlueprintWarningBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Hash() { return 4155316881U; }
	UEnum* Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintWarningBehavior"), 0, Get_Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintWarningBehavior::Warn", (int64)EBlueprintWarningBehavior::Warn },
				{ "EBlueprintWarningBehavior::Error", (int64)EBlueprintWarningBehavior::Error },
				{ "EBlueprintWarningBehavior::Suppress", (int64)EBlueprintWarningBehavior::Suppress },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintRuntime,
				nullptr,
				"EBlueprintWarningBehavior",
				"EBlueprintWarningBehavior",
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
class UScriptStruct* FBlueprintWarningSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintWarningSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWarningSettings, Z_Construct_UPackage__Script_BlueprintRuntime(), TEXT("BlueprintWarningSettings"), sizeof(FBlueprintWarningSettings), Get_Z_Construct_UScriptStruct_FBlueprintWarningSettings_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTRUNTIME_API UScriptStruct* StaticStruct<FBlueprintWarningSettings>()
{
	return FBlueprintWarningSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintWarningSettings(FBlueprintWarningSettings::StaticStruct, TEXT("/Script/BlueprintRuntime"), TEXT("BlueprintWarningSettings"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintRuntime_StaticRegisterNativesFBlueprintWarningSettings
{
	FScriptStruct_BlueprintRuntime_StaticRegisterNativesFBlueprintWarningSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintWarningSettings")),new UScriptStruct::TCppStructOps<FBlueprintWarningSettings>);
	}
} ScriptStruct_BlueprintRuntime_StaticRegisterNativesFBlueprintWarningSettings;
	struct Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WarningBehavior;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WarningBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WarningDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WarningIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWarningSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior = { "WarningBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWarningSettings, WarningBehavior), Z_Construct_UEnum_BlueprintRuntime_EBlueprintWarningBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription = { "WarningDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWarningSettings, WarningDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier = { "WarningIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWarningSettings, WarningIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::NewProp_WarningIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintRuntime,
		nullptr,
		&NewStructOps,
		"BlueprintWarningSettings",
		sizeof(FBlueprintWarningSettings),
		alignof(FBlueprintWarningSettings),
		Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWarningSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintWarningSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintWarningSettings"), sizeof(FBlueprintWarningSettings), Get_Z_Construct_UScriptStruct_FBlueprintWarningSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintWarningSettings_Hash() { return 1125618412U; }
	void UBlueprintRuntimeSettings::StaticRegisterNativesUBlueprintRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintRuntimeSettings_NoRegister()
	{
		return UBlueprintRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarningSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WarningSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the BlueprintRuntime module" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData[] = {
		{ "Category", "Warnings" },
		{ "ModuleRelativePath", "Public/BlueprintRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings = { "WarningSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintRuntimeSettings, WarningSettings), METADATA_PARAMS(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_Inner = { "WarningSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintWarningSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::NewProp_WarningSettings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::ClassParams = {
		&UBlueprintRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintRuntimeSettings, 1804284807);
	template<> BLUEPRINTRUNTIME_API UClass* StaticClass<UBlueprintRuntimeSettings>()
	{
		return UBlueprintRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintRuntimeSettings(Z_Construct_UClass_UBlueprintRuntimeSettings, &UBlueprintRuntimeSettings::StaticClass, TEXT("/Script/BlueprintRuntime"), TEXT("UBlueprintRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
