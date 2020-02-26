// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_CanSpectate();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ChangeName();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_FindPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetNumPlayers();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_GetNumSpectators();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchStarted();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_InitStartSpot();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnChangeName();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnLogout();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_K2_PostLogin();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_MustSpectate();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_PlayerCanRestart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ResetLevel();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayer();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_ShouldReset();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor();
	ENGINE_API UFunction* Z_Construct_UFunction_AGameModeBase_StartPlay();
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
// End Cross Module References
	static FName NAME_AGameModeBase_CanSpectate = FName(TEXT("CanSpectate"));
	bool AGameModeBase::CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget)
	{
		GameModeBase_eventCanSpectate_Parms Parms;
		Parms.Viewer=Viewer;
		Parms.ViewTarget=ViewTarget;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_CanSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ChoosePlayerStart = FName(TEXT("ChoosePlayerStart"));
	AActor* AGameModeBase::ChoosePlayerStart(AController* Player)
	{
		GameModeBase_eventChoosePlayerStart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ChoosePlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_FindPlayerStart = FName(TEXT("FindPlayerStart"));
	AActor* AGameModeBase::FindPlayerStart(AController* Player, const FString& IncomingName)
	{
		GameModeBase_eventFindPlayerStart_Parms Parms;
		Parms.Player=Player;
		Parms.IncomingName=IncomingName;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_FindPlayerStart),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_GetDefaultPawnClassForController = FName(TEXT("GetDefaultPawnClassForController"));
	UClass* AGameModeBase::GetDefaultPawnClassForController(AController* InController)
	{
		GameModeBase_eventGetDefaultPawnClassForController_Parms Parms;
		Parms.InController=InController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_GetDefaultPawnClassForController),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_HandleStartingNewPlayer = FName(TEXT("HandleStartingNewPlayer"));
	void AGameModeBase::HandleStartingNewPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventHandleStartingNewPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_HandleStartingNewPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitializeHUDForPlayer = FName(TEXT("InitializeHUDForPlayer"));
	void AGameModeBase::InitializeHUDForPlayer(APlayerController* NewPlayer)
	{
		GameModeBase_eventInitializeHUDForPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitializeHUDForPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_InitStartSpot = FName(TEXT("InitStartSpot"));
	void AGameModeBase::InitStartSpot(AActor* StartSpot, AController* NewPlayer)
	{
		GameModeBase_eventInitStartSpot_Parms Parms;
		Parms.StartSpot=StartSpot;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_InitStartSpot),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnChangeName = FName(TEXT("K2_OnChangeName"));
	void AGameModeBase::K2_OnChangeName(AController* Other, const FString& NewName, bool bNameChange)
	{
		GameModeBase_eventK2_OnChangeName_Parms Parms;
		Parms.Other=Other;
		Parms.NewName=NewName;
		Parms.bNameChange=bNameChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnChangeName),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnLogout = FName(TEXT("K2_OnLogout"));
	void AGameModeBase::K2_OnLogout(AController* ExitingController)
	{
		GameModeBase_eventK2_OnLogout_Parms Parms;
		Parms.ExitingController=ExitingController;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnLogout),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnRestartPlayer = FName(TEXT("K2_OnRestartPlayer"));
	void AGameModeBase::K2_OnRestartPlayer(AController* NewPlayer)
	{
		GameModeBase_eventK2_OnRestartPlayer_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnRestartPlayer),&Parms);
	}
	static FName NAME_AGameModeBase_K2_OnSwapPlayerControllers = FName(TEXT("K2_OnSwapPlayerControllers"));
	void AGameModeBase::K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
	{
		GameModeBase_eventK2_OnSwapPlayerControllers_Parms Parms;
		Parms.OldPC=OldPC;
		Parms.NewPC=NewPC;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_OnSwapPlayerControllers),&Parms);
	}
	static FName NAME_AGameModeBase_K2_PostLogin = FName(TEXT("K2_PostLogin"));
	void AGameModeBase::K2_PostLogin(APlayerController* NewPlayer)
	{
		GameModeBase_eventK2_PostLogin_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_K2_PostLogin),&Parms);
	}
	static FName NAME_AGameModeBase_MustSpectate = FName(TEXT("MustSpectate"));
	bool AGameModeBase::MustSpectate(APlayerController* NewPlayerController) const
	{
		GameModeBase_eventMustSpectate_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		const_cast<AGameModeBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_MustSpectate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_PlayerCanRestart = FName(TEXT("PlayerCanRestart"));
	bool AGameModeBase::PlayerCanRestart(APlayerController* Player)
	{
		GameModeBase_eventPlayerCanRestart_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_PlayerCanRestart),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_ShouldReset = FName(TEXT("ShouldReset"));
	bool AGameModeBase::ShouldReset(AActor* ActorToReset)
	{
		GameModeBase_eventShouldReset_Parms Parms;
		Parms.ActorToReset=ActorToReset;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_ShouldReset),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnAtTransform = FName(TEXT("SpawnDefaultPawnAtTransform"));
	APawn* AGameModeBase::SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform const& SpawnTransform)
	{
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.SpawnTransform=SpawnTransform;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnAtTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGameModeBase_SpawnDefaultPawnFor = FName(TEXT("SpawnDefaultPawnFor"));
	APawn* AGameModeBase::SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot)
	{
		GameModeBase_eventSpawnDefaultPawnFor_Parms Parms;
		Parms.NewPlayer=NewPlayer;
		Parms.StartSpot=StartSpot;
		ProcessEvent(FindFunctionChecked(NAME_AGameModeBase_SpawnDefaultPawnFor),&Parms);
		return Parms.ReturnValue;
	}
	void AGameModeBase::StaticRegisterNativesAGameModeBase()
	{
		UClass* Class = AGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpectate", &AGameModeBase::execCanSpectate },
			{ "ChangeName", &AGameModeBase::execChangeName },
			{ "ChoosePlayerStart", &AGameModeBase::execChoosePlayerStart },
			{ "FindPlayerStart", &AGameModeBase::execFindPlayerStart },
			{ "GetDefaultPawnClassForController", &AGameModeBase::execGetDefaultPawnClassForController },
			{ "GetNumPlayers", &AGameModeBase::execGetNumPlayers },
			{ "GetNumSpectators", &AGameModeBase::execGetNumSpectators },
			{ "HandleStartingNewPlayer", &AGameModeBase::execHandleStartingNewPlayer },
			{ "HasMatchStarted", &AGameModeBase::execHasMatchStarted },
			{ "InitializeHUDForPlayer", &AGameModeBase::execInitializeHUDForPlayer },
			{ "InitStartSpot", &AGameModeBase::execInitStartSpot },
			{ "K2_FindPlayerStart", &AGameModeBase::execK2_FindPlayerStart },
			{ "MustSpectate", &AGameModeBase::execMustSpectate },
			{ "PlayerCanRestart", &AGameModeBase::execPlayerCanRestart },
			{ "ResetLevel", &AGameModeBase::execResetLevel },
			{ "RestartPlayer", &AGameModeBase::execRestartPlayer },
			{ "RestartPlayerAtPlayerStart", &AGameModeBase::execRestartPlayerAtPlayerStart },
			{ "RestartPlayerAtTransform", &AGameModeBase::execRestartPlayerAtTransform },
			{ "ReturnToMainMenuHost", &AGameModeBase::execReturnToMainMenuHost },
			{ "ShouldReset", &AGameModeBase::execShouldReset },
			{ "SpawnDefaultPawnAtTransform", &AGameModeBase::execSpawnDefaultPawnAtTransform },
			{ "SpawnDefaultPawnFor", &AGameModeBase::execSpawnDefaultPawnFor },
			{ "StartPlay", &AGameModeBase::execStartPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Viewer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventCanSpectate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventCanSpectate_Parms), &Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, ViewTarget), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_Viewer = { "Viewer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventCanSpectate_Parms, Viewer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_ViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::NewProp_Viewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return whether Viewer is allowed to spectate from the point of view of ViewTarget." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "CanSpectate", sizeof(GameModeBase_eventCanSpectate_Parms), Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_CanSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_CanSpectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ChangeName_Statics
	{
		struct GameModeBase_eventChangeName_Parms
		{
			AController* Controller;
			FString NewName;
			bool bNameChange;
		};
		static void NewProp_bNameChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNameChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange_SetBit(void* Obj)
	{
		((GameModeBase_eventChangeName_Parms*)Obj)->bNameChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange = { "bNameChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventChangeName_Parms), &Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventChangeName_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_bNameChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Sets the name for a controller\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ChangeName", sizeof(GameModeBase_eventChangeName_Parms), Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_ChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventChoosePlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the 'best' player start for this player to spawn from\nDefault implementation looks for a random unoccupied spot\n\n@param Player is the controller for whom we are choosing a playerstart\n@returns AActor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ChoosePlayerStart", sizeof(GameModeBase_eventChoosePlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName = { "IncomingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, IncomingName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventFindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_IncomingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "FindPlayerStart", sizeof(GameModeBase_eventFindPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_FindPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_FindPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventGetDefaultPawnClassForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns default pawn class for given controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetDefaultPawnClassForController", sizeof(GameModeBase_eventGetDefaultPawnClassForController_Parms), Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics
	{
		struct GameModeBase_eventGetNumPlayers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventGetNumPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns number of active human players, excluding spectators" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetNumPlayers", sizeof(GameModeBase_eventGetNumPlayers_Parms), Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetNumPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics
	{
		struct GameModeBase_eventGetNumSpectators_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventGetNumSpectators_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns number of human players currently spectating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "GetNumSpectators", sizeof(GameModeBase_eventGetNumSpectators_Parms), Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_GetNumSpectators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_GetNumSpectators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventHandleStartingNewPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Signals that a player is ready to enter the game, which may start it up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "HandleStartingNewPlayer", sizeof(GameModeBase_eventHandleStartingNewPlayer_Parms), Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics
	{
		struct GameModeBase_eventHasMatchStarted_Parms
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
	void Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventHasMatchStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventHasMatchStarted_Parms), &Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if the match start callbacks have been called" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "HasMatchStarted", sizeof(GameModeBase_eventHasMatchStarted_Parms), Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_HasMatchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_HasMatchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventInitializeHUDForPlayer_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Initialize the AHUD object for a player. Games can override this to do something different" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "InitializeHUDForPlayer", sizeof(GameModeBase_eventInitializeHUDForPlayer_Parms), Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventInitStartSpot_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_NewPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::NewProp_StartSpot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called from RestartPlayerAtPlayerStart, can be used to initialize the start spawn actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "InitStartSpot", sizeof(GameModeBase_eventInitStartSpot_Parms), Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_InitStartSpot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_InitStartSpot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics
	{
		struct GameModeBase_eventK2_FindPlayerStart_Parms
		{
			AController* Player;
			FString IncomingName;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName = { "IncomingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, IncomingName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_FindPlayerStart_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_IncomingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "CPP_Default_IncomingName", "" },
		{ "DisplayName", "FindPlayerStart" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return the specific player start actor that should be used for the next spawn\nThis will either use a previously saved startactor, or calls ChoosePlayerStart\n\n@param Player The AController for whom we are choosing a Player Start\n@param IncomingName Specifies the tag of a Player Start to use\n@returns Actor chosen as player start (usually a PlayerStart)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_FindPlayerStart", sizeof(GameModeBase_eventK2_FindPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics
	{
		static void NewProp_bNameChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNameChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange_SetBit(void* Obj)
	{
		((GameModeBase_eventK2_OnChangeName_Parms*)Obj)->bNameChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange = { "bNameChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventK2_OnChangeName_Parms), &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnChangeName_Parms, Other), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_bNameChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_NewName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnChangeName" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnChangeName" },
		{ "ToolTip", "Overridable event for GameMode blueprint to respond to a change name call\n@param Controller    The controller of the player to change the name of\n@param NewName               The name to set the player to\n@param bNameChange   Whether the name is changing or if this is the first time it has been set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnChangeName", sizeof(GameModeBase_eventK2_OnChangeName_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::NewProp_ExitingController = { "ExitingController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnLogout_Parms, ExitingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::NewProp_ExitingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnLogout" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnLogout" },
		{ "ToolTip", "Implementable event when a Controller with a PlayerState leaves the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnLogout", sizeof(GameModeBase_eventK2_OnLogout_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnLogout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnLogout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnRestartPlayer" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnRestartPlayer" },
		{ "ToolTip", "Implementable event called at the end of RestartPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnRestartPlayer", sizeof(GameModeBase_eventK2_OnRestartPlayer_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_NewPC = { "NewPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, NewPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_OldPC = { "OldPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_OnSwapPlayerControllers_Parms, OldPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_NewPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::NewProp_OldPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnSwapPlayerControllers" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnSwapPlayerControllers" },
		{ "ToolTip", "Called when a PlayerController is swapped to a new one during seamless travel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_OnSwapPlayerControllers", sizeof(GameModeBase_eventK2_OnSwapPlayerControllers_Parms), Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventK2_PostLogin_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnPostLogin" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ScriptName", "OnPostLogin" },
		{ "ToolTip", "Notification that a player has successfully logged in, and has been given a player controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "K2_PostLogin", sizeof(GameModeBase_eventK2_PostLogin_Parms), Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_K2_PostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_K2_PostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventMustSpectate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventMustSpectate_Parms), &Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventMustSpectate_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if NewPlayerController may only join the server as a spectator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "MustSpectate", sizeof(GameModeBase_eventMustSpectate_Parms), Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_MustSpectate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_MustSpectate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventPlayerCanRestart_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventPlayerCanRestart_Parms), &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventPlayerCanRestart_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "PlayerCanRestart", sizeof(GameModeBase_eventPlayerCanRestart_Parms), Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_PlayerCanRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_PlayerCanRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Overridable function called when resetting level. This is used to reset the game state while staying in the same map\nDefault implementation calls Reset() on all actors except GameMode and Controllers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ResetLevel", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ResetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_ResetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics
	{
		struct GameModeBase_eventRestartPlayer_Parms
		{
			AController* NewPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventRestartPlayer_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn, at the location returned by FindPlayerStart" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayer", sizeof(GameModeBase_eventRestartPlayer_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics
	{
		struct GameModeBase_eventRestartPlayerAtPlayerStart_Parms
		{
			AController* NewPlayer;
			AActor* StartSpot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtPlayerStart_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_StartSpot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn at the specified actor's location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayerAtPlayerStart", sizeof(GameModeBase_eventRestartPlayerAtPlayerStart_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics
	{
		struct GameModeBase_eventRestartPlayerAtTransform_Parms
		{
			AController* NewPlayer;
			FTransform SpawnTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventRestartPlayerAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Tries to spawn the player's pawn at a specific location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "RestartPlayerAtTransform", sizeof(GameModeBase_eventRestartPlayerAtTransform_Parms), Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Return to main menu, and disconnect any players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ReturnToMainMenuHost", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameModeBase_eventShouldReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameModeBase_eventShouldReset_Parms), &Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ActorToReset = { "ActorToReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventShouldReset_Parms, ActorToReset), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::NewProp_ActorToReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Overridable function to determine whether an Actor should have Reset called when the game has Reset called on it.\nDefault implementation returns true\n@param ActorToReset The actor to make a determination for\n@return true if ActorToReset should have Reset() called on it while restarting the game,\n                false if the GameMode will manually reset it or if the actor does not need to be reset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "ShouldReset", sizeof(GameModeBase_eventShouldReset_Parms), Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_ShouldReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_ShouldReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a transform\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       StartSpot - Actor at which to spawn pawn\n@return      a pawn of the default pawn class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "SpawnDefaultPawnAtTransform", sizeof(GameModeBase_eventSpawnDefaultPawnAtTransform_Parms), Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartSpot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_StartSpot = { "StartSpot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, StartSpot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameModeBase_eventSpawnDefaultPawnFor_Parms, NewPlayer), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_StartSpot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Called during RestartPlayer to actually spawn the player's pawn, when using a start spot\n@param       NewPlayer - Controller for whom this pawn is spawned\n@param       StartSpot - Actor at which to spawn pawn\n@return      a pawn of the default pawn class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "SpawnDefaultPawnFor", sizeof(GameModeBase_eventSpawnDefaultPawnFor_Parms), Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeBase_StartPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Transitions to calls BeginPlay on actors." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeBase, nullptr, "StartPlay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeBase_StartPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeBase_StartPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameModeBase_NoRegister()
	{
		return AGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseable_MetaData[];
#endif
		static void NewProp_bPauseable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartPlayersAsSpectators_MetaData[];
#endif
		static void NewProp_bStartPlayersAsSpectators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartPlayersAsSpectators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeamlessTravel_MetaData[];
#endif
		static void NewProp_bUseSeamlessTravel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeamlessTravel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultPlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatReplicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerStatReplicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatReplicatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ServerStatReplicatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaySpectatorPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReplaySpectatorPlayerControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpectatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameSessionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionsString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameModeBase_CanSpectate, "CanSpectate" }, // 3430260584
		{ &Z_Construct_UFunction_AGameModeBase_ChangeName, "ChangeName" }, // 151946050
		{ &Z_Construct_UFunction_AGameModeBase_ChoosePlayerStart, "ChoosePlayerStart" }, // 1505035593
		{ &Z_Construct_UFunction_AGameModeBase_FindPlayerStart, "FindPlayerStart" }, // 3702470636
		{ &Z_Construct_UFunction_AGameModeBase_GetDefaultPawnClassForController, "GetDefaultPawnClassForController" }, // 362108302
		{ &Z_Construct_UFunction_AGameModeBase_GetNumPlayers, "GetNumPlayers" }, // 325795027
		{ &Z_Construct_UFunction_AGameModeBase_GetNumSpectators, "GetNumSpectators" }, // 2060317153
		{ &Z_Construct_UFunction_AGameModeBase_HandleStartingNewPlayer, "HandleStartingNewPlayer" }, // 2746633284
		{ &Z_Construct_UFunction_AGameModeBase_HasMatchStarted, "HasMatchStarted" }, // 4056493326
		{ &Z_Construct_UFunction_AGameModeBase_InitializeHUDForPlayer, "InitializeHUDForPlayer" }, // 46574508
		{ &Z_Construct_UFunction_AGameModeBase_InitStartSpot, "InitStartSpot" }, // 1323259541
		{ &Z_Construct_UFunction_AGameModeBase_K2_FindPlayerStart, "K2_FindPlayerStart" }, // 2667079238
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnChangeName, "K2_OnChangeName" }, // 4244824195
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnLogout, "K2_OnLogout" }, // 3443857747
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnRestartPlayer, "K2_OnRestartPlayer" }, // 1894650208
		{ &Z_Construct_UFunction_AGameModeBase_K2_OnSwapPlayerControllers, "K2_OnSwapPlayerControllers" }, // 4029310037
		{ &Z_Construct_UFunction_AGameModeBase_K2_PostLogin, "K2_PostLogin" }, // 4078558582
		{ &Z_Construct_UFunction_AGameModeBase_MustSpectate, "MustSpectate" }, // 3585137922
		{ &Z_Construct_UFunction_AGameModeBase_PlayerCanRestart, "PlayerCanRestart" }, // 2542109662
		{ &Z_Construct_UFunction_AGameModeBase_ResetLevel, "ResetLevel" }, // 922647630
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayer, "RestartPlayer" }, // 3931557005
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtPlayerStart, "RestartPlayerAtPlayerStart" }, // 81710918
		{ &Z_Construct_UFunction_AGameModeBase_RestartPlayerAtTransform, "RestartPlayerAtTransform" }, // 3892320293
		{ &Z_Construct_UFunction_AGameModeBase_ReturnToMainMenuHost, "ReturnToMainMenuHost" }, // 604641981
		{ &Z_Construct_UFunction_AGameModeBase_ShouldReset, "ShouldReset" }, // 3516829678
		{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnAtTransform, "SpawnDefaultPawnAtTransform" }, // 3638571971
		{ &Z_Construct_UFunction_AGameModeBase_SpawnDefaultPawnFor, "SpawnDefaultPawnFor" }, // 1220819753
		{ &Z_Construct_UFunction_AGameModeBase_StartPlay, "StartPlay" }, // 4143216343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ShortTooltip", "Game Mode Base defines the game being played, its rules, scoring, and other facets of the game type." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameModeBase defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nIt is only instanced on the server and will never exist on the client.\n\nA GameModeBase actor is instantiated when the level is initialized for gameplay in\nC++ UGameEngine::LoadMap().\n\nThe class of this GameMode actor is determined by (in order) either the URL ?game=xxx,\nthe GameMode Override value set in the World Settings, or the DefaultGameMode entry set\nin the game's Project Settings.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/GameMode/index.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether the game is pauseable." },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bPauseable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable = { "bPauseable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn" },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bStartPlayersAsSpectators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators = { "bStartPlayersAsSpectators", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients" },
	};
#endif
	void Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_SetBit(void* Obj)
	{
		((AGameModeBase*)Obj)->bUseSeamlessTravel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel = { "bUseSeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameModeBase), &Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The default player name assigned to players that join with no name specified." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName = { "DefaultPlayerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, DefaultPlayerName), METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator = { "ServerStatReplicator", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, ServerStatReplicator), Z_Construct_UClass_AServerStatReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "GameState is used to replicate game state relevant properties to all clients." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState = { "GameState", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Game Session handles login approval, arbitration, online game interface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession = { "GameSession", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, GameSession), Z_Construct_UClass_AGameSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass = { "ServerStatReplicatorClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, ServerStatReplicatorClass), Z_Construct_UClass_AServerStatReplicator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The PlayerController class used when spectating a network replay." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass = { "ReplaySpectatorPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, ReplaySpectatorPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The pawn class used by the PlayerController for players when spectating." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass = { "SpectatorClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, SpectatorClass), Z_Construct_UClass_ASpectatorPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The default pawn class used by players." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass = { "DefaultPawnClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, DefaultPawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "DisplayName", "HUD Class" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "HUD class this game uses." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, HUDClass), Z_Construct_UClass_AHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "A PlayerState of this class will be associated with every player to replicate relevant player information to all clients." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass = { "PlayerStateClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, PlayerStateClass), Z_Construct_UClass_APlayerState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "The class of PlayerController to spawn for players logging in." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass = { "PlayerControllerClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, PlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Class of GameState associated with this GameMode." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass = { "GameStateClass", nullptr, (EPropertyFlags)0x0014000002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, GameStateClass), Z_Construct_UClass_AGameStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Class of GameSession, which handles login approval and online game interface" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass = { "GameSessionClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, GameSessionClass), Z_Construct_UClass_AGameSession_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData[] = {
		{ "Category", "GameMode" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameModeBase.h" },
		{ "ToolTip", "Save options string and parse it when needed" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString = { "OptionsString", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameModeBase, OptionsString), METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bPauseable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bStartPlayersAsSpectators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_bUseSeamlessTravel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ServerStatReplicatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_ReplaySpectatorPlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_SpectatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_DefaultPawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_HUDClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_PlayerControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_GameSessionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeBase_Statics::NewProp_OptionsString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBase_Statics::ClassParams = {
		&AGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameModeBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::PropPointers),
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeBase, 1220639249);
	template<> ENGINE_API UClass* StaticClass<AGameModeBase>()
	{
		return AGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeBase(Z_Construct_UClass_AGameModeBase, &AGameModeBase::StaticClass, TEXT("/Script/Engine"), TEXT("AGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
