// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelScriptActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_LevelReset();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_RemoteEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode();
	ENGINE_API UFunction* Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	static FName NAME_ALevelScriptActor_LevelReset = FName(TEXT("LevelReset"));
	void ALevelScriptActor::LevelReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_LevelReset),NULL);
	}
	static FName NAME_ALevelScriptActor_WorldOriginLocationChanged = FName(TEXT("WorldOriginLocationChanged"));
	void ALevelScriptActor::WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation)
	{
		LevelScriptActor_eventWorldOriginLocationChanged_Parms Parms;
		Parms.OldOriginLocation=OldOriginLocation;
		Parms.NewOriginLocation=NewOriginLocation;
		ProcessEvent(FindFunctionChecked(NAME_ALevelScriptActor_WorldOriginLocationChanged),&Parms);
	}
	void ALevelScriptActor::StaticRegisterNativesALevelScriptActor()
	{
		UClass* Class = ALevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoteEvent", &ALevelScriptActor::execRemoteEvent },
			{ "SetCinematicMode", &ALevelScriptActor::execSetCinematicMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "LevelReset", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_LevelReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_LevelReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics
	{
		struct LevelScriptActor_eventRemoteEvent_Parms
		{
			FName EventName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelScriptActor_eventRemoteEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventRemoteEvent_Parms), &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelScriptActor_eventRemoteEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Tries to find an event named \"EventName\" on all other levels, and calls it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "RemoteEvent", sizeof(LevelScriptActor_eventRemoteEvent_Parms), Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_RemoteEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_RemoteEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics
	{
		struct LevelScriptActor_eventSetCinematicMode_Parms
		{
			bool bCinematicMode;
			bool bHidePlayer;
			bool bAffectsHUD;
			bool bAffectsMovement;
			bool bAffectsTurning;
		};
		static void NewProp_bAffectsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
		static void NewProp_bAffectsMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
		static void NewProp_bAffectsHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
		static void NewProp_bCinematicMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCinematicMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bHidePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode_SetBit(void* Obj)
	{
		((LevelScriptActor_eventSetCinematicMode_Parms*)Obj)->bCinematicMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode = { "bCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelScriptActor_eventSetCinematicMode_Parms), &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bAffectsHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bHidePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::NewProp_bCinematicMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Game|Cinematic" },
		{ "CPP_Default_bAffectsHUD", "true" },
		{ "CPP_Default_bAffectsMovement", "false" },
		{ "CPP_Default_bAffectsTurning", "false" },
		{ "CPP_Default_bHidePlayer", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Sets the cinematic mode on all PlayerControllers\n\n@param       bInCinematicMode        specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n@param       bHidePlayer                     specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n@param       bAffectsHUD                     specify true if we should show/hide the HUD to match the value of bCinematicMode\n@param       bAffectsMovement        specify true to disable movement in cinematic mode, enable it when leaving\n@param       bAffectsTurning         specify true to disable turning in cinematic mode or enable it when leaving" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "SetCinematicMode", sizeof(LevelScriptActor_eventSetCinematicMode_Parms), Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewOriginLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldOriginLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_NewOriginLocation = { "NewOriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, NewOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_OldOriginLocation = { "OldOriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelScriptActor_eventWorldOriginLocationChanged_Parms, OldOriginLocation), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_NewOriginLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::NewProp_OldOriginLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "Event called on world origin location changes\n\n@param       OldOriginLocation       Previous world origin location\n@param       NewOriginLocation       New world origin location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptActor, nullptr, "WorldOriginLocationChanged", sizeof(LevelScriptActor_eventWorldOriginLocationChanged_Parms), Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister()
	{
		return ALevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputEnabled_MetaData[];
#endif
		static void NewProp_bInputEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelScriptActor_LevelReset, "LevelReset" }, // 1028819605
		{ &Z_Construct_UFunction_ALevelScriptActor_RemoteEvent, "RemoteEvent" }, // 3263653954
		{ &Z_Construct_UFunction_ALevelScriptActor_SetCinematicMode, "SetCinematicMode" }, // 127810198
		{ &Z_Construct_UFunction_ALevelScriptActor_WorldOriginLocationChanged, "WorldOriginLocationChanged" }, // 2125252701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Engine/LevelScriptActor.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
		{ "ToolTip", "ALevelScriptActor is the base class for classes generated by\nULevelScriptBlueprints. ALevelScriptActor instances are hidden actors that\nexist within a level, and can execute level-wide logic (operating on specific\nactor instances within the level). The level-script's functionality is defined\ninside the ULevelScriptBlueprint itself (using the blueprint's node-based\ninterface).\n\n@see AActor\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see ULevelScriptBlueprint\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_SetBit(void* Obj)
	{
		((ALevelScriptActor*)Obj)->bInputEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled = { "bInputEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelScriptActor), &Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptActor_Statics::NewProp_bInputEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelScriptActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelScriptActor_Statics::ClassParams = {
		&ALevelScriptActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelScriptActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelScriptActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelScriptActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelScriptActor, 4147040880);
	template<> ENGINE_API UClass* StaticClass<ALevelScriptActor>()
	{
		return ALevelScriptActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelScriptActor(Z_Construct_UClass_ALevelScriptActor, &ALevelScriptActor::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelScriptActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelScriptActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
