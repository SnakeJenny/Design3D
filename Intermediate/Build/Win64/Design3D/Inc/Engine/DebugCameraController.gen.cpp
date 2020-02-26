// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DebugCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_GetSelectedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_ADebugCameraController_ToggleDisplay();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
// End Cross Module References
	static FName NAME_ADebugCameraController_ReceiveOnActivate = FName(TEXT("ReceiveOnActivate"));
	void ADebugCameraController::ReceiveOnActivate(APlayerController* OriginalPC)
	{
		DebugCameraController_eventReceiveOnActivate_Parms Parms;
		Parms.OriginalPC=OriginalPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActivate),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnActorSelected = FName(TEXT("ReceiveOnActorSelected"));
	void ADebugCameraController::ReceiveOnActorSelected(AActor* NewSelectedActor, FVector const& SelectHitLocation, FVector const& SelectHitNormal, FHitResult const& Hit)
	{
		DebugCameraController_eventReceiveOnActorSelected_Parms Parms;
		Parms.NewSelectedActor=NewSelectedActor;
		Parms.SelectHitLocation=SelectHitLocation;
		Parms.SelectHitNormal=SelectHitNormal;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnActorSelected),&Parms);
	}
	static FName NAME_ADebugCameraController_ReceiveOnDeactivate = FName(TEXT("ReceiveOnDeactivate"));
	void ADebugCameraController::ReceiveOnDeactivate(APlayerController* RestoredPC)
	{
		DebugCameraController_eventReceiveOnDeactivate_Parms Parms;
		Parms.RestoredPC=RestoredPC;
		ProcessEvent(FindFunctionChecked(NAME_ADebugCameraController_ReceiveOnDeactivate),&Parms);
	}
	void ADebugCameraController::StaticRegisterNativesADebugCameraController()
	{
		UClass* Class = ADebugCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedActor", &ADebugCameraController::execGetSelectedActor },
			{ "SetPawnMovementSpeedScale", &ADebugCameraController::execSetPawnMovementSpeedScale },
			{ "ShowDebugSelectedInfo", &ADebugCameraController::execShowDebugSelectedInfo },
			{ "ToggleDisplay", &ADebugCameraController::execToggleDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics
	{
		struct DebugCameraController_eventGetSelectedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventGetSelectedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Returns the currently selected actor, or null if it is invalid or not set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "GetSelectedActor", sizeof(DebugCameraController_eventGetSelectedActor_Parms), Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_GetSelectedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_GetSelectedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::NewProp_OriginalPC = { "OriginalPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActivate_Parms, OriginalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::NewProp_OriginalPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnActivate" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Function called on activation of debug camera controller.\n@param OriginalPC The active player controller before this debug camera controller was possessed by the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnActivate", sizeof(DebugCameraController_eventReceiveOnActivate_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectHitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSelectedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal = { "SelectHitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation = { "SelectHitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, SelectHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_NewSelectedActor = { "NewSelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnActorSelected_Parms, NewSelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_SelectHitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::NewProp_NewSelectedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "DisplayName", "OnActorSelected" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Called when an actor has been selected with the primary key (e.g. left mouse button).\n\nThe selection trace starts from the center of the debug camera's view.\n\n@param SelectHitLocation The exact world-space location where the selection trace hit the New Selected Actor.\n@param SelectHitNormal The world-space surface normal of the New Selected Actor at the hit location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnActorSelected", sizeof(DebugCameraController_eventReceiveOnActorSelected_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestoredPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::NewProp_RestoredPC = { "RestoredPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventReceiveOnDeactivate_Parms, RestoredPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::NewProp_RestoredPC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnDeactivate" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Function called on deactivation of debug camera controller.\n@param RestoredPC The Player Controller that the player input is being returned to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ReceiveOnDeactivate", sizeof(DebugCameraController_eventReceiveOnDeactivate_Parms), Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics
	{
		struct DebugCameraController_eventSetPawnMovementSpeedScale_Parms
		{
			float NewSpeedScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::NewProp_NewSpeedScale = { "NewSpeedScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DebugCameraController_eventSetPawnMovementSpeedScale_Parms, NewSpeedScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::NewProp_NewSpeedScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Sets the pawn movement speed scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "SetPawnMovementSpeedScale", sizeof(DebugCameraController_eventSetPawnMovementSpeedScale_Parms), Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Sets whether to show information about the selected actor on the debug camera HUD.t" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ShowDebugSelectedInfo", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Toggles the display of debug info and input commands for the Debug Camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADebugCameraController, nullptr, "ToggleDisplay", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADebugCameraController_ToggleDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADebugCameraController_ToggleDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADebugCameraController_NoRegister()
	{
		return ADebugCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ADebugCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDecel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDecel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAccel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAccel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalControllerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalControllerRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFrozenRendering_MetaData[];
#endif
		static void NewProp_bIsFrozenRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFrozenRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSelectedInfo_MetaData[];
#endif
		static void NewProp_bShowSelectedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSelectedInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADebugCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADebugCameraController_GetSelectedActor, "GetSelectedActor" }, // 3088763530
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActivate, "ReceiveOnActivate" }, // 812161456
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnActorSelected, "ReceiveOnActorSelected" }, // 3678759945
		{ &Z_Construct_UFunction_ADebugCameraController_ReceiveOnDeactivate, "ReceiveOnDeactivate" }, // 1550448620
		{ &Z_Construct_UFunction_ADebugCameraController_SetPawnMovementSpeedScale, "SetPawnMovementSpeedScale" }, // 483232579
		{ &Z_Construct_UFunction_ADebugCameraController_ShowDebugSelectedInfo, "ShowDebugSelectedInfo" }, // 1953511172
		{ &Z_Construct_UFunction_ADebugCameraController_ToggleDisplay, "ToggleDisplay" }, // 3437249977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Engine/DebugCameraController.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Camera controller that allows you to fly around a level mostly unrestricted by normal movement rules.\n\nTo turn it on, please press Alt+C or both (left and right) analogs on XBox pad,\nor use the \"ToggleDebugCamera\" console command. Check the debug camera bindings\nin DefaultPawn.cpp for the camera controls." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial deceleration of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel = { "InitialDecel", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialDecel), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial acceleration of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel = { "InitialAccel", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialAccel), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Initial max speed of the spectator pawn when we start possession." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed = { "InitialMaxSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, InitialMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "Debug Camera" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Allows control over the speed of the spectator pawn. This scales the speed based on the InitialMaxSpeed. Use Set Pawn Movement Speed Scale during runtime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SpeedScale), METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Player object that was active before this was spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer = { "OriginalPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, OriginalPlayer), Z_Construct_UClass_UPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Controller that was active before this was spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef = { "OriginalControllerRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, OriginalControllerRef), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Currently selected component, may be invalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SelectedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Currently selected actor, may be invalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Visualizes the frustum of the camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum = { "DrawFrustum", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADebugCameraController, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Saves whether the FreezeRendering console command is active" },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bIsFrozenRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering = { "bIsFrozenRendering", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraController.h" },
		{ "ToolTip", "Whether to show information about the selected actor on the debug camera HUD." },
	};
#endif
	void Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_SetBit(void* Obj)
	{
		((ADebugCameraController*)Obj)->bShowSelectedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo = { "bShowSelectedInfo", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ADebugCameraController), &Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADebugCameraController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialDecel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialAccel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_InitialMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_OriginalControllerRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_SelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_DrawFrustum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bIsFrozenRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADebugCameraController_Statics::NewProp_bShowSelectedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugCameraController_Statics::ClassParams = {
		&ADebugCameraController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADebugCameraController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugCameraController, 778523863);
	template<> ENGINE_API UClass* StaticClass<ADebugCameraController>()
	{
		return ADebugCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugCameraController(Z_Construct_UClass_ADebugCameraController, &ADebugCameraController::StaticClass, TEXT("/Script/Engine"), TEXT("ADebugCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
