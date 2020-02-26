// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit();
	ENGINE_API UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
// End Cross Module References
	static FName NAME_UGameInstance_HandleNetworkError = FName(TEXT("HandleNetworkError"));
	void UGameInstance::HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer)
	{
		GameInstance_eventHandleNetworkError_Parms Parms;
		Parms.FailureType=FailureType;
		Parms.bIsServer=bIsServer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleNetworkError),&Parms);
	}
	static FName NAME_UGameInstance_HandleTravelError = FName(TEXT("HandleTravelError"));
	void UGameInstance::HandleTravelError(ETravelFailure::Type FailureType)
	{
		GameInstance_eventHandleTravelError_Parms Parms;
		Parms.FailureType=FailureType;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleTravelError),&Parms);
	}
	static FName NAME_UGameInstance_ReceiveInit = FName(TEXT("ReceiveInit"));
	void UGameInstance::ReceiveInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveInit),NULL);
	}
	static FName NAME_UGameInstance_ReceiveShutdown = FName(TEXT("ReceiveShutdown"));
	void UGameInstance::ReceiveShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveShutdown),NULL);
	}
	void UGameInstance::StaticRegisterNativesUGameInstance()
	{
		UClass* Class = UGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugCreatePlayer", &UGameInstance::execDebugCreatePlayer },
			{ "DebugRemovePlayer", &UGameInstance::execDebugRemovePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics
	{
		struct GameInstance_eventDebugCreatePlayer_Parms
		{
			int32 ControllerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventDebugCreatePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to create a player.\n@param ControllerId - The controller ID the player should accept input from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugCreatePlayer", sizeof(GameInstance_eventDebugCreatePlayer_Parms), Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics
	{
		struct GameInstance_eventDebugRemovePlayer_Parms
		{
			int32 ControllerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventDebugRemovePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to remove the player with a given controller ID.\n@param ControllerId - The controller ID to search for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugRemovePlayer", sizeof(GameInstance_eventDebugRemovePlayer_Parms), Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics
	{
		static void NewProp_bIsServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit(void* Obj)
	{
		((GameInstance_eventHandleNetworkError_Parms*)Obj)->bIsServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer = { "bIsServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameInstance_eventHandleNetworkError_Parms), &Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventHandleNetworkError_Parms, FailureType), Z_Construct_UEnum_Engine_ENetworkFailure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "NetworkError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle network errors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleNetworkError", sizeof(GameInstance_eventHandleNetworkError_Parms), Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventHandleTravelError_Parms, FailureType), Z_Construct_UEnum_Engine_ETravelFailure, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "TravelError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle travel errors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleTravelError", sizeof(GameInstance_eventHandleTravelError_Parms), Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being initialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveInit", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Shutdown" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being shutdown." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveShutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameInstance_NoRegister()
	{
		return UGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInstance_DebugCreatePlayer, "DebugCreatePlayer" }, // 2781153059
		{ &Z_Construct_UFunction_UGameInstance_DebugRemovePlayer, "DebugRemovePlayer" }, // 1498958544
		{ &Z_Construct_UFunction_UGameInstance_HandleNetworkError, "HandleNetworkError" }, // 1107044051
		{ &Z_Construct_UFunction_UGameInstance_HandleTravelError, "HandleTravelError" }, // 617728135
		{ &Z_Construct_UFunction_UGameInstance_ReceiveInit, "ReceiveInit" }, // 153272772
		{ &Z_Construct_UFunction_UGameInstance_ReceiveShutdown, "ReceiveShutdown" }, // 1023838280
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/GameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "GameInstance: high-level manager object for an instance of the running game.\nSpawned at game creation and not destroyed until game instance is shut down.\nRunning as a standalone game, there will be one of these.\nRunning in PIE (play-in-editor) will generate one of these per PIE instance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, ReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Class to manage online services" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession = { "OnlineSession", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, OnlineSession), Z_Construct_UClass_UOnlineSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of locally participating players in this game instance" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers = { "LocalPlayers", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, LocalPlayers), METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner = { "LocalPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameInstance_Statics::ClassParams = {
		&UGameInstance::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameInstance, 227346323);
	template<> ENGINE_API UClass* StaticClass<UGameInstance>()
	{
		return UGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInstance(Z_Construct_UClass_UGameInstance, &UGameInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
