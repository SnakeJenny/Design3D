// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UPlayer::StaticRegisterNativesUPlayer()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_NoRegister()
	{
		return UPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfiguredLanSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfiguredLanSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfiguredInternetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConfiguredInternetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Player.h" },
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed = { "ConfiguredLanSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer, ConfiguredLanSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed = { "ConfiguredInternetSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer, ConfiguredInternetSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "the current speed of the connection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed = { "CurrentNetSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer, CurrentNetSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Player.h" },
		{ "ToolTip", "The actor this player controls." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredLanSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_ConfiguredInternetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_CurrentNetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_Statics::ClassParams = {
		&UPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer, 3830596263);
	template<> ENGINE_API UClass* StaticClass<UPlayer>()
	{
		return UPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer(Z_Construct_UClass_UPlayer, &UPlayer::StaticClass, TEXT("/Script/Engine"), TEXT("UPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
