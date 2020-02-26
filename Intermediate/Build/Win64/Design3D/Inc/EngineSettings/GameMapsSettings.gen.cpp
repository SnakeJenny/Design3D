// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/GameMapsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMapsSettings() {}
// Cross Module References
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_ESubLevelStripMode();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType();
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType();
	ENGINESETTINGS_API UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType();
	ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameMapsSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* ESubLevelStripMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ESubLevelStripMode, Z_Construct_UPackage__Script_EngineSettings(), TEXT("ESubLevelStripMode"));
		}
		return Singleton;
	}
	template<> ENGINESETTINGS_API UEnum* StaticEnum<ESubLevelStripMode>()
	{
		return ESubLevelStripMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubLevelStripMode(ESubLevelStripMode_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("ESubLevelStripMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Hash() { return 1335630491U; }
	UEnum* Z_Construct_UEnum_EngineSettings_ESubLevelStripMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubLevelStripMode"), 0, Get_Z_Construct_UEnum_EngineSettings_ESubLevelStripMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubLevelStripMode::ExactClass", (int64)ESubLevelStripMode::ExactClass },
				{ "ESubLevelStripMode::IsChildOf", (int64)ESubLevelStripMode::IsChildOf },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ExactClass.ToolTip", "The class of the sub level actor must be exactly this class" },
				{ "IsChildOf.ToolTip", "Any child class of this class will be stripped, this is more expensive than ExactClass" },
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				"ESubLevelStripMode",
				"ESubLevelStripMode",
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
	static UEnum* EFourPlayerSplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("EFourPlayerSplitScreenType"));
		}
		return Singleton;
	}
	template<> ENGINESETTINGS_API UEnum* StaticEnum<EFourPlayerSplitScreenType>()
	{
		return EFourPlayerSplitScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFourPlayerSplitScreenType(EFourPlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("EFourPlayerSplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Hash() { return 120544073U; }
	UEnum* Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFourPlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFourPlayerSplitScreenType::Grid", (int64)EFourPlayerSplitScreenType::Grid },
				{ "EFourPlayerSplitScreenType::Vertical", (int64)EFourPlayerSplitScreenType::Vertical },
				{ "EFourPlayerSplitScreenType::Horizontal", (int64)EFourPlayerSplitScreenType::Horizontal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				"EFourPlayerSplitScreenType",
				"EFourPlayerSplitScreenType",
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
	static UEnum* EThreePlayerSplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("EThreePlayerSplitScreenType"));
		}
		return Singleton;
	}
	template<> ENGINESETTINGS_API UEnum* StaticEnum<EThreePlayerSplitScreenType::Type>()
	{
		return EThreePlayerSplitScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThreePlayerSplitScreenType(EThreePlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("EThreePlayerSplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Hash() { return 1259380036U; }
	UEnum* Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThreePlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThreePlayerSplitScreenType::FavorTop", (int64)EThreePlayerSplitScreenType::FavorTop },
				{ "EThreePlayerSplitScreenType::FavorBottom", (int64)EThreePlayerSplitScreenType::FavorBottom },
				{ "EThreePlayerSplitScreenType::Vertical", (int64)EThreePlayerSplitScreenType::Vertical },
				{ "EThreePlayerSplitScreenType::Horizontal", (int64)EThreePlayerSplitScreenType::Horizontal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Ways the screen can be split with three players." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				"EThreePlayerSplitScreenType",
				"EThreePlayerSplitScreenType::Type",
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
	static UEnum* ETwoPlayerSplitScreenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, Z_Construct_UPackage__Script_EngineSettings(), TEXT("ETwoPlayerSplitScreenType"));
		}
		return Singleton;
	}
	template<> ENGINESETTINGS_API UEnum* StaticEnum<ETwoPlayerSplitScreenType::Type>()
	{
		return ETwoPlayerSplitScreenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETwoPlayerSplitScreenType(ETwoPlayerSplitScreenType_StaticEnum, TEXT("/Script/EngineSettings"), TEXT("ETwoPlayerSplitScreenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Hash() { return 618071681U; }
	UEnum* Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETwoPlayerSplitScreenType"), 0, Get_Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETwoPlayerSplitScreenType::Horizontal", (int64)ETwoPlayerSplitScreenType::Horizontal },
				{ "ETwoPlayerSplitScreenType::Vertical", (int64)ETwoPlayerSplitScreenType::Vertical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
				{ "ToolTip", "Ways the screen can be split with two players." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EngineSettings,
				nullptr,
				"ETwoPlayerSplitScreenType",
				"ETwoPlayerSplitScreenType::Type",
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
class UScriptStruct* FGameModeName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FGameModeName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeName, Z_Construct_UPackage__Script_EngineSettings(), TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_Hash());
	}
	return Singleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FGameModeName>()
{
	return FGameModeName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeName(FGameModeName::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("GameModeName"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeName")),new UScriptStruct::TCppStructOps<FGameModeName>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFGameModeName;
	struct Z_Construct_UScriptStruct_FGameModeName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Helper structure, used to associate GameModes with shortcut names." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameModeName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "MetaClass", "GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode class to load" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameModeName, GameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "MetaClass", "GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Abbreviation/prefix that can be used as an alias for the class name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameModeName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameModeName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
		nullptr,
		&NewStructOps,
		"GameModeName",
		sizeof(FGameModeName),
		alignof(FGameModeName),
		Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeName_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeName"), sizeof(FGameModeName), Get_Z_Construct_UScriptStruct_FGameModeName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameModeName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeName_Hash() { return 1723445692U; }
	void UGameMapsSettings::StaticRegisterNativesUGameMapsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameMapsSettings_NoRegister()
	{
		return UGameMapsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameMapsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeClassAliases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModeClassAliases;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeClassAliases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeMapPrefixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModeMapPrefixes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeMapPrefixes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultServerGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultServerGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDefaultGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalDefaultGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDefaultMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerDefaultMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDefaultMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameDefaultMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameInstanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetPlayerGamepadIds_MetaData[];
#endif
		static void NewProp_bOffsetPlayerGamepadIds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetPlayerGamepadIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourPlayerSplitscreenLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FourPlayerSplitscreenLayout;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FourPlayerSplitscreenLayout_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreePlayerSplitscreenLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThreePlayerSplitscreenLayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoPlayerSplitscreenLayout_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwoPlayerSplitscreenLayout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSplitscreen_MetaData[];
#endif
		static void NewProp_bUseSplitscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSplitscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalMapOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalMapOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorStartupMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorStartupMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameMapsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameMapsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "List of GameModes to load when game= is specified in the URL (e.g. \"DM\" could be an alias for \"MyProject.MyGameModeMP_DM\")" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases = { "GameModeClassAliases", nullptr, (EPropertyFlags)0x0040040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GameModeClassAliases), METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_Inner = { "GameModeClassAliases", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Overrides the GameMode to use when loading a map that starts with a specific prefix" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes = { "GameModeMapPrefixes", nullptr, (EPropertyFlags)0x0040040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GameModeMapPrefixes), METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_Inner = { "GameModeMapPrefixes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameModeName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "MetaClass", "GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL) (DEDICATED SERVERS)\nIf not set, the GlobalDefaultGameMode value will be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode = { "GlobalDefaultServerGameMode", nullptr, (EPropertyFlags)0x0040040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultServerGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode_MetaData[] = {
		{ "Category", "DefaultModes" },
		{ "DisplayName", "Default GameMode" },
		{ "MetaClass", "GameModeBase" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "GameMode to use if not specified in any other way. (e.g. per-map DefaultGameMode or on the URL)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode = { "GlobalDefaultGameMode", nullptr, (EPropertyFlags)0x0040000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "DefaultMaps" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map that will be loaded by default when no other map is loaded (DEDICATED SERVER)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap = { "ServerDefaultMap", nullptr, (EPropertyFlags)0x0040040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, ServerDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "DefaultMaps" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map that will be loaded by default when no other map is loaded." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap = { "GameDefaultMap", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GameDefaultMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass_MetaData[] = {
		{ "Category", "GameInstance" },
		{ "MetaClass", "GameInstance" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The class to use when instantiating the transient GameInstance class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass = { "GameInstanceClass", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, GameInstanceClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "DisplayName", "Skip Assigning Gamepad to Player 1" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "If enabled, this will make so that gamepads start being assigned to the second controller ID in local multiplayer games.\nIn PIE sessions with multiple windows, this has the same effect as enabling \"Route 1st Gamepad to 2nd Client\"" },
	};
#endif
	void Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_SetBit(void* Obj)
	{
		((UGameMapsSettings*)Obj)->bOffsetPlayerGamepadIds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds = { "bOffsetPlayerGamepadIds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameMapsSettings), &Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are three local players" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout = { "FourPlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, FourPlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_EFourPlayerSplitScreenType, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are three local players" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout = { "ThreePlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, ThreePlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_EThreePlayerSplitScreenType, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "editcondition", "bUseSplitScreen" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The viewport layout to use if the screen should be split and there are two local players" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout = { "TwoPlayerSplitscreenLayout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, TwoPlayerSplitscreenLayout), Z_Construct_UEnum_EngineSettings_ETwoPlayerSplitScreenType, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_MetaData[] = {
		{ "Category", "LocalMultiplayer" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "Whether the screen should be split or not when multiple local players are present" },
	};
#endif
	void Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_SetBit(void* Obj)
	{
		((UGameMapsSettings*)Obj)->bUseSplitscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen = { "bUseSplitscreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameMapsSettings), &Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "DefaultMaps" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The map loaded when transition from one map to another." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap = { "TransitionMap", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, TransitionMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions_MetaData[] = {
		{ "Category", "DefaultMaps" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "The default options that will be appended to a map being loaded." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions = { "LocalMapOptions", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, LocalMapOptions), METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap_MetaData[] = {
		{ "AllowedClasses", "World" },
		{ "Category", "DefaultMaps" },
		{ "ModuleRelativePath", "Classes/GameMapsSettings.h" },
		{ "ToolTip", "If set, this map will be loaded when the Editor starts up." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap = { "EditorStartupMap", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMapsSettings, EditorStartupMap), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeClassAliases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameModeMapPrefixes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultServerGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GlobalDefaultGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ServerDefaultMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameDefaultMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_GameInstanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bOffsetPlayerGamepadIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_FourPlayerSplitscreenLayout_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_ThreePlayerSplitscreenLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TwoPlayerSplitscreenLayout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_bUseSplitscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_TransitionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_LocalMapOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMapsSettings_Statics::NewProp_EditorStartupMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameMapsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMapsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameMapsSettings_Statics::ClassParams = {
		&UGameMapsSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameMapsSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameMapsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameMapsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameMapsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameMapsSettings, 1888612499);
	template<> ENGINESETTINGS_API UClass* StaticClass<UGameMapsSettings>()
	{
		return UGameMapsSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMapsSettings(Z_Construct_UClass_UGameMapsSettings, &UGameMapsSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameMapsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMapsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
