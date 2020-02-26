// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/GameSessionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSessionSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameSessionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameSessionSettings::StaticRegisterNativesUGameSessionSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameSessionSettings_NoRegister()
	{
		return UGameSessionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameSessionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[];
#endif
		static void NewProp_bRequiresPushToTalk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSessionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSessionSettings.h" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Is voice enabled always or via a push to talk key binding." },
	};
#endif
	void Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_SetBit(void* Obj)
	{
		((UGameSessionSettings*)Obj)->bRequiresPushToTalk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk = { "bRequiresPushToTalk", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGameSessionSettings), &Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Maximum number of players allowed by this server." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSessionSettings, MaxPlayers), METADATA_PARAMS(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators_MetaData[] = {
		{ "Category", "GameSessionSettings" },
		{ "ModuleRelativePath", "Classes/GameSessionSettings.h" },
		{ "ToolTip", "Maximum number of spectators allowed by this server." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators = { "MaxSpectators", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSessionSettings, MaxSpectators), METADATA_PARAMS(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_bRequiresPushToTalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSessionSettings_Statics::NewProp_MaxSpectators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSessionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSessionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSessionSettings_Statics::ClassParams = {
		&UGameSessionSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSessionSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSessionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSessionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSessionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSessionSettings, 2052926445);
	template<> ENGINESETTINGS_API UClass* StaticClass<UGameSessionSettings>()
	{
		return UGameSessionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSessionSettings(Z_Construct_UClass_UGameSessionSettings, &UGameSessionSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameSessionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
