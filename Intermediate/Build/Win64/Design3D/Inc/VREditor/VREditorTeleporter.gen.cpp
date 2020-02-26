// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/Teleporter/VREditorTeleporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorTeleporter() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_DoTeleport();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetVRMode();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_Init();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsAiming();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetVisibility();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_Shutdown();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartAiming();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartTeleport();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_StopAiming();
	VREDITOR_API UFunction* Z_Construct_UFunction_AVREditorTeleporter_TeleportDone();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVREditorTeleporter_GetSlideDelta = FName(TEXT("GetSlideDelta"));
	float AVREditorTeleporter::GetSlideDelta(UVREditorInteractor* Interactor, bool Axis)
	{
		VREditorTeleporter_eventGetSlideDelta_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.Axis=Axis ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_GetSlideDelta),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AVREditorTeleporter_Init = FName(TEXT("Init"));
	void AVREditorTeleporter::Init(UVREditorMode* InMode)
	{
		VREditorTeleporter_eventInit_Parms Parms;
		Parms.InMode=InMode;
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_Init),&Parms);
	}
	static FName NAME_AVREditorTeleporter_Shutdown = FName(TEXT("Shutdown"));
	void AVREditorTeleporter::Shutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_Shutdown),NULL);
	}
	static FName NAME_AVREditorTeleporter_StartTeleport = FName(TEXT("StartTeleport"));
	void AVREditorTeleporter::StartTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_StartTeleport),NULL);
	}
	static FName NAME_AVREditorTeleporter_TeleportDone = FName(TEXT("TeleportDone"));
	void AVREditorTeleporter::TeleportDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_TeleportDone),NULL);
	}
	void AVREditorTeleporter::StaticRegisterNativesAVREditorTeleporter()
	{
		UClass* Class = AVREditorTeleporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoTeleport", &AVREditorTeleporter::execDoTeleport },
			{ "GetInteractorTryingTeleport", &AVREditorTeleporter::execGetInteractorTryingTeleport },
			{ "GetSlideDelta", &AVREditorTeleporter::execGetSlideDelta },
			{ "GetVRMode", &AVREditorTeleporter::execGetVRMode },
			{ "Init", &AVREditorTeleporter::execInit },
			{ "IsAiming", &AVREditorTeleporter::execIsAiming },
			{ "IsTeleporting", &AVREditorTeleporter::execIsTeleporting },
			{ "SetColor", &AVREditorTeleporter::execSetColor },
			{ "SetVisibility", &AVREditorTeleporter::execSetVisibility },
			{ "Shutdown", &AVREditorTeleporter::execShutdown },
			{ "StartAiming", &AVREditorTeleporter::execStartAiming },
			{ "StartTeleport", &AVREditorTeleporter::execStartTeleport },
			{ "StopAiming", &AVREditorTeleporter::execStopAiming },
			{ "TeleportDone", &AVREditorTeleporter::execTeleportDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Do and finalize teleport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "DoTeleport", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_DoTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics
	{
		struct VREditorTeleporter_eventGetInteractorTryingTeleport_Parms
		{
			UViewportInteractor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventGetInteractorTryingTeleport_Parms, ReturnValue), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Get the actor we're currently trying to teleport with.\nValid during aiming and teleporting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetInteractorTryingTeleport", sizeof(VREditorTeleporter_eventGetInteractorTryingTeleport_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static void NewProp_Axis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventGetSlideDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventGetSlideDelta_Parms*)Obj)->Axis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorTeleporter_eventGetSlideDelta_Parms), &Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventGetSlideDelta_Parms, Interactor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Get slide delta to push/pull or scale the teleporter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetSlideDelta", sizeof(VREditorTeleporter_eventGetSlideDelta_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics
	{
		struct VREditorTeleporter_eventGetVRMode_Parms
		{
			UVREditorMode* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventGetVRMode_Parms, ReturnValue), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetVRMode", sizeof(VREditorTeleporter_eventGetVRMode_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_Init_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventInit_Parms, InMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::NewProp_InMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Initializes the teleporter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "Init", sizeof(VREditorTeleporter_eventInit_Parms), Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics
	{
		struct VREditorTeleporter_eventIsAiming_Parms
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
	void Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorTeleporter_eventIsAiming_Parms), &Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Whether we are currently aiming to teleport." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "IsAiming", sizeof(VREditorTeleporter_eventIsAiming_Parms), Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics
	{
		struct VREditorTeleporter_eventIsTeleporting_Parms
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
	void Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventIsTeleporting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorTeleporter_eventIsTeleporting_Parms), &Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "IsTeleporting", sizeof(VREditorTeleporter_eventIsTeleporting_Parms), Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics
	{
		struct VREditorTeleporter_eventSetColor_Parms
		{
			FLinearColor Color;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventSetColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Sets the color for the teleporter visuals" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "SetColor", sizeof(VREditorTeleporter_eventSetColor_Parms), Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics
	{
		struct VREditorTeleporter_eventSetVisibility_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventSetVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VREditorTeleporter_eventSetVisibility_Parms), &Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Hide or show the teleporter visuals" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "SetVisibility", sizeof(VREditorTeleporter_eventSetVisibility_Parms), Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Shuts down the teleporter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "Shutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics
	{
		struct VREditorTeleporter_eventStartAiming_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VREditorTeleporter_eventStartAiming_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Functions we call to handle teleporting in navigation mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StartAiming", sizeof(VREditorTeleporter_eventStartAiming_Parms), Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Start teleporting, does a ray trace with the hand passed and calculates the locations for lerp movement in Teleport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StartTeleport", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Cancel teleport aiming mode without doing the teleport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StopAiming", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Called when teleport is done for cleanup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "TeleportDone", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_TeleportDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister()
	{
		return AVREditorTeleporter::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorTeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractorTryingTeleport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractorTryingTeleport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMotionControllerMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightMotionControllerMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMotionControllerMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftMotionControllerMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMDMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HMDMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDirectionMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportDirectionMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorTeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVREditorTeleporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVREditorTeleporter_DoTeleport, "DoTeleport" }, // 2356304768
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport, "GetInteractorTryingTeleport" }, // 3753393234
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta, "GetSlideDelta" }, // 2566636240
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetVRMode, "GetVRMode" }, // 2897060771
		{ &Z_Construct_UFunction_AVREditorTeleporter_Init, "Init" }, // 294861422
		{ &Z_Construct_UFunction_AVREditorTeleporter_IsAiming, "IsAiming" }, // 3216073107
		{ &Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting, "IsTeleporting" }, // 2662051455
		{ &Z_Construct_UFunction_AVREditorTeleporter_SetColor, "SetColor" }, // 3617816899
		{ &Z_Construct_UFunction_AVREditorTeleporter_SetVisibility, "SetVisibility" }, // 1329641663
		{ &Z_Construct_UFunction_AVREditorTeleporter_Shutdown, "Shutdown" }, // 3468538149
		{ &Z_Construct_UFunction_AVREditorTeleporter_StartAiming, "StartAiming" }, // 1643458851
		{ &Z_Construct_UFunction_AVREditorTeleporter_StartTeleport, "StartTeleport" }, // 1637026069
		{ &Z_Construct_UFunction_AVREditorTeleporter_StopAiming, "StopAiming" }, // 1776984298
		{ &Z_Construct_UFunction_AVREditorTeleporter_TeleportDone, "TeleportDone" }, // 3371593424
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Teleporter/VREditorTeleporter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "VR Editor teleport manager and the visual representation of the teleport" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData[] = {
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "The interactor that started aiming to teleport" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport = { "InteractorTryingTeleport", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, InteractorTryingTeleport), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData[] = {
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Dynamic material for teleport visuals" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID = { "TeleportMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, TeleportMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport right motion controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent = { "RightMotionControllerMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, RightMotionControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport left motion controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent = { "LeftMotionControllerMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, LeftMotionControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport HMD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent = { "HMDMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, HMDMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for the feet location of the teleporter with the same direction of the HMD yaw" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent = { "TeleportDirectionMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, TeleportDirectionMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "The owning VR mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorTeleporter, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorTeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorTeleporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorTeleporter_Statics::ClassParams = {
		&AVREditorTeleporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorTeleporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorTeleporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorTeleporter, 3392376975);
	template<> VREDITOR_API UClass* StaticClass<AVREditorTeleporter>()
	{
		return AVREditorTeleporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorTeleporter(Z_Construct_UClass_AVREditorTeleporter, &AVREditorTeleporter::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorTeleporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorTeleporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
