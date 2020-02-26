// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_HasBegunPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchStarted();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
// End Cross Module References
	void AGameStateBase::StaticRegisterNativesAGameStateBase()
	{
		UClass* Class = AGameStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerRespawnDelay", &AGameStateBase::execGetPlayerRespawnDelay },
			{ "GetPlayerStartTime", &AGameStateBase::execGetPlayerStartTime },
			{ "GetServerWorldTimeSeconds", &AGameStateBase::execGetServerWorldTimeSeconds },
			{ "HasBegunPlay", &AGameStateBase::execHasBegunPlay },
			{ "HasMatchStarted", &AGameStateBase::execHasMatchStarted },
			{ "OnRep_GameModeClass", &AGameStateBase::execOnRep_GameModeClass },
			{ "OnRep_ReplicatedHasBegunPlay", &AGameStateBase::execOnRep_ReplicatedHasBegunPlay },
			{ "OnRep_ReplicatedWorldTimeSeconds", &AGameStateBase::execOnRep_ReplicatedWorldTimeSeconds },
			{ "OnRep_SpectatorClass", &AGameStateBase::execOnRep_SpectatorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics
	{
		struct GameStateBase_eventGetPlayerRespawnDelay_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameStateBase_eventGetPlayerRespawnDelay_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns how much time needs to be spent before a player can respawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetPlayerRespawnDelay", sizeof(GameStateBase_eventGetPlayerRespawnDelay_Parms), Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics
	{
		struct GameStateBase_eventGetPlayerStartTime_Parms
		{
			AController* Controller;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameStateBase_eventGetPlayerStartTime_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns the time that should be used as when a player started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetPlayerStartTime", sizeof(GameStateBase_eventGetPlayerStartTime_Parms), Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics
	{
		struct GameStateBase_eventGetServerWorldTimeSeconds_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameStateBase_eventGetServerWorldTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns the simulated TimeSeconds on the server, will be synchronized on client and server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "GetServerWorldTimeSeconds", sizeof(GameStateBase_eventGetServerWorldTimeSeconds_Parms), Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics
	{
		struct GameStateBase_eventHasBegunPlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameStateBase_eventHasBegunPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameStateBase_eventHasBegunPlay_Parms), &Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns true if the world has started play (called BeginPlay on actors)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "HasBegunPlay", sizeof(GameStateBase_eventHasBegunPlay_Parms), Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_HasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_HasBegunPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics
	{
		struct GameStateBase_eventHasMatchStarted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameStateBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameStateBase_eventHasMatchStarted_Parms), &Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Returns true if the world has started match (called MatchStarted callbacks)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "HasMatchStarted", sizeof(GameStateBase_eventHasMatchStarted_Parms), Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_HasMatchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_HasMatchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "GameModeBase class notification callback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_GameModeClass", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "By default calls BeginPlay and StartMatch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_ReplicatedHasBegunPlay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Allows clients to calculate ServerWorldTimeSecondsDelta" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_ReplicatedWorldTimeSeconds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Callback when we receive the spectator class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameStateBase, nullptr, "OnRep_SpectatorClass", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameStateBase_NoRegister()
	{
		return AGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorldTimeSecondsDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerWorldTimeSecondsDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedWorldTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedWorldTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicatedHasBegunPlay_MetaData[];
#endif
		static void NewProp_bReplicatedHasBegunPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicatedHasBegunPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthorityGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameModeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameStateBase_GetPlayerRespawnDelay, "GetPlayerRespawnDelay" }, // 1432361840
		{ &Z_Construct_UFunction_AGameStateBase_GetPlayerStartTime, "GetPlayerStartTime" }, // 1074628808
		{ &Z_Construct_UFunction_AGameStateBase_GetServerWorldTimeSeconds, "GetServerWorldTimeSeconds" }, // 3290754911
		{ &Z_Construct_UFunction_AGameStateBase_HasBegunPlay, "HasBegunPlay" }, // 616522928
		{ &Z_Construct_UFunction_AGameStateBase_HasMatchStarted, "HasMatchStarted" }, // 2174220303
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_GameModeClass, "OnRep_GameModeClass" }, // 3453453307
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedHasBegunPlay, "OnRep_ReplicatedHasBegunPlay" }, // 2249664322
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_ReplicatedWorldTimeSeconds, "OnRep_ReplicatedWorldTimeSeconds" }, // 1506225983
		{ &Z_Construct_UFunction_AGameStateBase_OnRep_SpectatorClass, "OnRep_SpectatorClass" }, // 3991599368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameStateBase is a class that manages the game's global state, and is spawned by GameModeBase.\nIt exists on both the client and the server and is fully replicated." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Frequency that the server updates the replicated TimeSeconds from the world. Set to zero to disable periodic updates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency = { "ServerWorldTimeSecondsUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "The difference from the local world's TimeSeconds and the server world's TimeSeconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta = { "ServerWorldTimeSecondsDelta", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, ServerWorldTimeSecondsDelta), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Server TimeSeconds. Useful for syncing up animation and gameplay." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds = { "ReplicatedWorldTimeSeconds", "OnRep_ReplicatedWorldTimeSeconds", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, ReplicatedWorldTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Replicated when GameModeBase->StartPlay has been called so the client will also start play" },
	};
#endif
	void Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_SetBit(void* Obj)
	{
		((AGameStateBase*)Obj)->bReplicatedHasBegunPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay = { "bReplicatedHasBegunPlay", "OnRep_ReplicatedHasBegunPlay", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameStateBase), &Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Array of all PlayerStates, maintained on both server and clients (PlayerStates are always relevant)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray = { "PlayerArray", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, PlayerArray), METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_Inner = { "PlayerArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Class used by spectators, assigned by GameModeBase." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass = { "SpectatorClass", "OnRep_SpectatorClass", (EPropertyFlags)0x0014000100002034, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, SpectatorClass), Z_Construct_UClass_ASpectatorPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Instance of the current game mode, exists only on the server. For non-authority clients, this will be NULL." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode = { "AuthorityGameMode", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, AuthorityGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData[] = {
		{ "Category", "GameState" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameStateBase.h" },
		{ "ToolTip", "Class of the server's game mode, assigned by GameModeBase." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass = { "GameModeClass", "OnRep_GameModeClass", (EPropertyFlags)0x0014000100002034, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameStateBase, GameModeClass), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ServerWorldTimeSecondsDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_ReplicatedWorldTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_bReplicatedHasBegunPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_PlayerArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_SpectatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_AuthorityGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameStateBase_Statics::NewProp_GameModeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameStateBase_Statics::ClassParams = {
		&AGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameStateBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameStateBase, 2303033890);
	template<> ENGINE_API UClass* StaticClass<AGameStateBase>()
	{
		return AGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameStateBase(Z_Construct_UClass_AGameStateBase, &AGameStateBase::StaticClass, TEXT("/Script/Engine"), TEXT("AGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
