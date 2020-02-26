// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportInteractor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractor() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetDraggingMode();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetHoverLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetLaserPointer();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_SetDraggingMode();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_Shutdown();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportInteractor_Tick();
// End Cross Module References
	static FName NAME_UViewportInteractor_HandleInputAxis_BP = FName(TEXT("HandleInputAxis_BP"));
	void UViewportInteractor::HandleInputAxis_BP(FViewportActionKeyInput const& Action, const FKey Key, const float Delta, const float DeltaTime, bool& bOutWasHandled)
	{
		ViewportInteractor_eventHandleInputAxis_BP_Parms Parms;
		Parms.Action=Action;
		Parms.Key=Key;
		Parms.Delta=Delta;
		Parms.DeltaTime=DeltaTime;
		Parms.bOutWasHandled=bOutWasHandled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_HandleInputAxis_BP),&Parms);
		bOutWasHandled=Parms.bOutWasHandled;
	}
	static FName NAME_UViewportInteractor_HandleInputKey_BP = FName(TEXT("HandleInputKey_BP"));
	void UViewportInteractor::HandleInputKey_BP(FViewportActionKeyInput const& Action, const FKey Key, const EInputEvent Event, bool& bOutWasHandled)
	{
		ViewportInteractor_eventHandleInputKey_BP_Parms Parms;
		Parms.Action=Action;
		Parms.Key=Key;
		Parms.Event=Event;
		Parms.bOutWasHandled=bOutWasHandled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_HandleInputKey_BP),&Parms);
		bOutWasHandled=Parms.bOutWasHandled;
	}
	static FName NAME_UViewportInteractor_Shutdown = FName(TEXT("Shutdown"));
	void UViewportInteractor::Shutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_Shutdown),NULL);
	}
	static FName NAME_UViewportInteractor_Tick = FName(TEXT("Tick"));
	void UViewportInteractor::Tick(const float DeltaTime)
	{
		ViewportInteractor_eventTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_Tick),&Parms);
	}
	void UViewportInteractor::StaticRegisterNativesUViewportInteractor()
	{
		UClass* Class = UViewportInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDraggingMode", &UViewportInteractor::execGetDraggingMode },
			{ "GetHoverLocation", &UViewportInteractor::execGetHoverLocation },
			{ "GetLaserPointer", &UViewportInteractor::execGetLaserPointer },
			{ "GetOtherInteractor", &UViewportInteractor::execGetOtherInteractor },
			{ "GetTransform", &UViewportInteractor::execGetTransform },
			{ "GetTransformAndForwardVector", &UViewportInteractor::execGetTransformAndForwardVector },
			{ "GetWorldInteraction", &UViewportInteractor::execGetWorldInteraction },
			{ "IsHoveringOverGizmo", &UViewportInteractor::execIsHoveringOverGizmo },
			{ "SetDraggingMode", &UViewportInteractor::execSetDraggingMode },
			{ "Shutdown", &UViewportInteractor::execShutdown },
			{ "Tick", &UViewportInteractor::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics
	{
		struct ViewportInteractor_eventGetDraggingMode_Parms
		{
			EViewportInteractionDraggingMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetDraggingMode_Parms, ReturnValue), Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the current interactor data dragging mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetDraggingMode", sizeof(ViewportInteractor_eventGetDraggingMode_Parms), Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetDraggingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics
	{
		struct ViewportInteractor_eventGetHoverLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetHoverLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the interactor laser hover location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetHoverLocation", sizeof(ViewportInteractor_eventGetHoverLocation_Parms), Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetHoverLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics
	{
		struct ViewportInteractor_eventGetLaserPointer_Parms
		{
			FVector LaserPointerStart;
			FVector LaserPointerEnd;
			bool bEvenIfBlocked;
			float LaserLengthOverride;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserLengthOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaserLengthOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvenIfBlocked_MetaData[];
#endif
		static void NewProp_bEvenIfBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvenIfBlocked;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserPointerEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaserPointerStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetLaserPointer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventGetLaserPointer_Parms), &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride = { "LaserLengthOverride", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserLengthOverride), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetLaserPointer_Parms*)Obj)->bEvenIfBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked = { "bEvenIfBlocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventGetLaserPointer_Parms), &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerEnd = { "LaserPointerEnd", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserPointerEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerStart = { "LaserPointerStart", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserPointerStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "CPP_Default_bEvenIfBlocked", "false" },
		{ "CPP_Default_LaserLengthOverride", "0.000000" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the start and end point of the laser pointer for the specified hand\n\n@param HandIndex                             Index of the hand to use\n@param LasertPointerStart    (Out) The start location of the laser pointer in world space\n@param LasertPointerEnd              (Out) The end location of the laser pointer in world space\n@param bEvenIfBlocked                If true, returns a laser pointer even if the hand has UI in front of it (defaults to false)\n@param LaserLengthOverride   If zero the default laser length (VREdMode::GetLaserLength) is used\n\n@return      True if we have motion controller data for this hand and could return a valid result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetLaserPointer", sizeof(ViewportInteractor_eventGetLaserPointer_Parms), Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetLaserPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics
	{
		struct ViewportInteractor_eventGetOtherInteractor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetOtherInteractor_Parms, ReturnValue), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the paired interactor assigned by the world interaction, can return null when there is no other interactor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetOtherInteractor", sizeof(ViewportInteractor_eventGetOtherInteractor_Parms), Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics
	{
		struct ViewportInteractor_eventGetTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the world transform of this interactor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetTransform", sizeof(ViewportInteractor_eventGetTransform_Parms), Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics
	{
		struct ViewportInteractor_eventGetTransformAndForwardVector_Parms
		{
			FTransform OutHandTransform;
			FVector OutForwardVector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutForwardVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHandTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetTransformAndForwardVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventGetTransformAndForwardVector_Parms), &Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutForwardVector = { "OutForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetTransformAndForwardVector_Parms, OutForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutHandTransform = { "OutHandTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetTransformAndForwardVector_Parms, OutHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutHandTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Creates a hand transform and forward vector for a laser pointer for a given hand\n\n@param HandIndex                     Index of the hand to use\n@param OutHandTransform      The created hand transform\n@param OutForwardVector      The forward vector of the hand\n\n@return      True if we have motion controller data for this hand and could return a valid result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetTransformAndForwardVector", sizeof(ViewportInteractor_eventGetTransformAndForwardVector_Parms), Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics
	{
		struct ViewportInteractor_eventGetWorldInteraction_Parms
		{
			UViewportWorldInteraction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventGetWorldInteraction_Parms, ReturnValue), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the world interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetWorldInteraction", sizeof(ViewportInteractor_eventGetWorldInteraction_Parms), Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics
	{
		static void NewProp_bOutWasHandled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutWasHandled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled_SetBit(void* Obj)
	{
		((ViewportInteractor_eventHandleInputAxis_BP_Parms*)Obj)->bOutWasHandled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled = { "bOutWasHandled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventHandleInputAxis_BP_Parms), &Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Delta), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Action), Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "DisplayName", "HandleInputAxis" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "To be overridden. Called by HandleInputAxis before delegates and default input implementation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "HandleInputAxis_BP", sizeof(ViewportInteractor_eventHandleInputAxis_BP_Parms), Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics
	{
		static void NewProp_bOutWasHandled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutWasHandled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Event;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled_SetBit(void* Obj)
	{
		((ViewportInteractor_eventHandleInputKey_BP_Parms*)Obj)->bOutWasHandled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled = { "bOutWasHandled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventHandleInputKey_BP_Parms), &Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Event), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Action), Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "DisplayName", "HandleInputKey" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "To be overridden. Called by HandleInputKey before delegates and default input implementation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "HandleInputKey_BP", sizeof(ViewportInteractor_eventHandleInputKey_BP_Parms), Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics
	{
		struct ViewportInteractor_eventIsHoveringOverGizmo_Parms
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
	void Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventIsHoveringOverGizmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ViewportInteractor_eventIsHoveringOverGizmo_Parms), &Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "If the interactor laser is currently hovering over a gizmo handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "IsHoveringOverGizmo", sizeof(ViewportInteractor_eventIsHoveringOverGizmo_Parms), Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics
	{
		struct ViewportInteractor_eventSetDraggingMode_Parms
		{
			EViewportInteractionDraggingMode NewDraggingMode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDraggingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDraggingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDraggingMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode = { "NewDraggingMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventSetDraggingMode_Parms, NewDraggingMode), Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Sets the current dragging mode for this interactor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "SetDraggingMode", sizeof(ViewportInteractor_eventSetDraggingMode_Parms), Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_SetDraggingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Whenever the ViewportWorldInteraction is shut down, the interacts will shut down as well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "Shutdown", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_Tick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportInteractor_eventTick_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Update for this interactor called by the ViewportWorldInteraction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "Tick", sizeof(ViewportInteractor_eventTick_Parms), Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportInteractor_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewportInteractor_NoRegister()
	{
		return UViewportInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UViewportInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToActionMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KeyToActionMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyToActionMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyToActionMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportInteractor_GetDraggingMode, "GetDraggingMode" }, // 4165962019
		{ &Z_Construct_UFunction_UViewportInteractor_GetHoverLocation, "GetHoverLocation" }, // 1169333155
		{ &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer, "GetLaserPointer" }, // 1109063011
		{ &Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor, "GetOtherInteractor" }, // 2616876139
		{ &Z_Construct_UFunction_UViewportInteractor_GetTransform, "GetTransform" }, // 2754932219
		{ &Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector, "GetTransformAndForwardVector" }, // 3832758351
		{ &Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction, "GetWorldInteraction" }, // 77571801
		{ &Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP, "HandleInputAxis_BP" }, // 1233457687
		{ &Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP, "HandleInputKey_BP" }, // 838163299
		{ &Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo, "IsHoveringOverGizmo" }, // 958603064
		{ &Z_Construct_UFunction_UViewportInteractor_SetDraggingMode, "SetDraggingMode" }, // 1360373090
		{ &Z_Construct_UFunction_UViewportInteractor_Shutdown, "Shutdown" }, // 1598647728
		{ &Z_Construct_UFunction_UViewportInteractor_Tick, "Tick" }, // 797059299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ViewportInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Represents the interactor in the world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "The paired interactor by the world interaction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor = { "OtherInteractor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportInteractor, OtherInteractor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "The owning world interaction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportInteractor, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Mapping of raw keys to actions" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap = { "KeyToActionMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportInteractor, KeyToActionMap), METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_Key_KeyProp = { "KeyToActionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_ValueProp = { "KeyToActionMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportInteractor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportInteractor_Statics::ClassParams = {
		&UViewportInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportInteractor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportInteractor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportInteractor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportInteractor, 1676205717);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportInteractor>()
	{
		return UViewportInteractor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportInteractor(Z_Construct_UClass_UViewportInteractor, &UViewportInteractor::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportInteractor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportInteractor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
