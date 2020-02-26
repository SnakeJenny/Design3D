// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
// End Cross Module References
	void ULocalPlayer::StaticRegisterNativesULocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_ULocalPlayer_NoRegister()
	{
		return ULocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSentSplitJoin_MetaData[];
#endif
		static void NewProp_bSentSplitJoin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSentSplitJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingLevelPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PendingLevelPlayerControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LocalPlayer.h" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "Each player that is active on the current client has a LocalPlayer. It stays active across maps\nThere may be several spawned in the case of splitscreen/coop.\nThere may be 0 spawned on servers." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The controller ID which this player accepts input from." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalPlayer, ControllerId), METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "set when we've sent a split join request" },
	};
#endif
	void Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_SetBit(void* Obj)
	{
		((ULocalPlayer*)Obj)->bSentSplitJoin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin = { "bSentSplitJoin", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULocalPlayer), &Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass = { "PendingLevelPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalPlayer, PendingLevelPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "How to constrain perspective viewport FOV" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalPlayer, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LocalPlayer.h" },
		{ "ToolTip", "The master viewport containing this player's view." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient = { "ViewportClient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalPlayer, ViewportClient), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_bSentSplitJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_PendingLevelPlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_AspectRatioAxisConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayer_Statics::NewProp_ViewportClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayer_Statics::ClassParams = {
		&ULocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_ULocalPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalPlayer, 1426342591);
	template<> ENGINE_API UClass* StaticClass<ULocalPlayer>()
	{
		return ULocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalPlayer(Z_Construct_UClass_ULocalPlayer, &ULocalPlayer::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalPlayer"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
