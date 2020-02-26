// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blutility/Classes/PlacedEditorUtilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacedEditorUtilityBase() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_APlacedEditorUtilityBase_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_APlacedEditorUtilityBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Blutility();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState();
	BLUTILITY_API UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo();
// End Cross Module References
	void APlacedEditorUtilityBase::StaticRegisterNativesAPlacedEditorUtilityBase()
	{
		UClass* Class = APlacedEditorUtilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActorSelectionSet", &APlacedEditorUtilityBase::execClearActorSelectionSet },
			{ "GetActorReference", &APlacedEditorUtilityBase::execGetActorReference },
			{ "GetLevelViewportCameraInfo", &APlacedEditorUtilityBase::execGetLevelViewportCameraInfo },
			{ "GetSelectionSet", &APlacedEditorUtilityBase::execGetSelectionSet },
			{ "SelectNothing", &APlacedEditorUtilityBase::execSelectNothing },
			{ "SetActorSelectionState", &APlacedEditorUtilityBase::execSetActorSelectionState },
			{ "SetLevelViewportCameraInfo", &APlacedEditorUtilityBase::execSetLevelViewportCameraInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Remove all actors from the selection set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "ClearActorSelectionSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics
	{
		struct PlacedEditorUtilityBase_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "GetActorReference", sizeof(PlacedEditorUtilityBase_eventGetActorReference_Parms), Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics
	{
		struct PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms), &Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed\n\n@param       CameraLocation  (out) Current location of the level editing viewport camera, or zero if none found\n@param       CameraRotation  (out) Current rotation of the level editing viewport camera, or zero if none found\n@return      Whether or not we were able to get a camera for a level editing viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "GetLevelViewportCameraInfo", sizeof(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics
	{
		struct PlacedEditorUtilityBase_eventGetSelectionSet_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetSelectionSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Returns the current selection set in the editor.  Note that for non-editor builds, this will return an empty array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "GetSelectionSet", sizeof(PlacedEditorUtilityBase_eventGetSelectionSet_Parms), Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Selects nothing in the editor (another way to clear the selection)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "SelectNothing", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics
	{
		struct PlacedEditorUtilityBase_eventSetActorSelectionState_Parms
		{
			AActor* Actor;
			bool bShouldBeSelected;
		};
		static void NewProp_bShouldBeSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeSelected;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit(void* Obj)
	{
		((PlacedEditorUtilityBase_eventSetActorSelectionState_Parms*)Obj)->bShouldBeSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected = { "bShouldBeSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlacedEditorUtilityBase_eventSetActorSelectionState_Parms), &Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetActorSelectionState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Set the selection state for the selected actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "SetActorSelectionState", sizeof(PlacedEditorUtilityBase_eventSetActorSelectionState_Parms), Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics
	{
		struct PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Sets information about the camera position for the primary level editor viewport.\n\n@param        CameraLocation  Location the camera will be moved to.\n@param        CameraRotation  Rotation the camera will be set to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacedEditorUtilityBase, nullptr, "SetLevelViewportCameraInfo", sizeof(PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlacedEditorUtilityBase_NoRegister()
	{
		return APlacedEditorUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_APlacedEditorUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlacedEditorUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlacedEditorUtilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_ClearActorSelectionSet, "ClearActorSelectionSet" }, // 2898938819
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_GetActorReference, "GetActorReference" }, // 4228897588
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_GetLevelViewportCameraInfo, "GetLevelViewportCameraInfo" }, // 3121865346
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_GetSelectionSet, "GetSelectionSet" }, // 1563885306
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_SelectNothing, "SelectNothing" }, // 2928178380
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_SetActorSelectionState, "SetActorSelectionState" }, // 3521702046
		{ &Z_Construct_UFunction_APlacedEditorUtilityBase_SetLevelViewportCameraInfo, "SetLevelViewportCameraInfo" }, // 2243572585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacedEditorUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "PlacedEditorUtilityBase.h" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", ", Blueprintable" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlacedEditorUtilityBase_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlacedEditorUtilityBase, HelpText), METADATA_PARAMS(Z_Construct_UClass_APlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlacedEditorUtilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacedEditorUtilityBase_Statics::NewProp_HelpText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlacedEditorUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlacedEditorUtilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlacedEditorUtilityBase_Statics::ClassParams = {
		&APlacedEditorUtilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlacedEditorUtilityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlacedEditorUtilityBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_APlacedEditorUtilityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlacedEditorUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlacedEditorUtilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlacedEditorUtilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlacedEditorUtilityBase, 1789014181);
	template<> BLUTILITY_API UClass* StaticClass<APlacedEditorUtilityBase>()
	{
		return APlacedEditorUtilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlacedEditorUtilityBase(Z_Construct_UClass_APlacedEditorUtilityBase, &APlacedEditorUtilityBase::StaticClass, TEXT("/Script/Blutility"), TEXT("APlacedEditorUtilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlacedEditorUtilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
