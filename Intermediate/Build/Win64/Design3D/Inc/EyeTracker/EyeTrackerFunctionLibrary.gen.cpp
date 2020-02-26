// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EyeTracker/Public/EyeTrackerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeTrackerFunctionLibrary() {}
// Cross Module References
	EYETRACKER_API UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister();
	EYETRACKER_API UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EyeTracker();
	EYETRACKER_API UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData();
	EYETRACKER_API UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData();
	EYETRACKER_API UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected();
	EYETRACKER_API UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable();
	EYETRACKER_API UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UEyeTrackerFunctionLibrary::StaticRegisterNativesUEyeTrackerFunctionLibrary()
	{
		UClass* Class = UEyeTrackerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGazeData", &UEyeTrackerFunctionLibrary::execGetGazeData },
			{ "GetStereoGazeData", &UEyeTrackerFunctionLibrary::execGetStereoGazeData },
			{ "IsEyeTrackerConnected", &UEyeTrackerFunctionLibrary::execIsEyeTrackerConnected },
			{ "IsStereoGazeDataAvailable", &UEyeTrackerFunctionLibrary::execIsStereoGazeDataAvailable },
			{ "SetEyeTrackedPlayer", &UEyeTrackerFunctionLibrary::execSetEyeTrackedPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics
	{
		struct EyeTrackerFunctionLibrary_eventGetGazeData_Parms
		{
			FEyeTrackerGazeData OutGazeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGazeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EyeTrackerFunctionLibrary_eventGetGazeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventGetGazeData_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_OutGazeData = { "OutGazeData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventGetGazeData_Parms, OutGazeData), Z_Construct_UScriptStruct_FEyeTrackerGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_OutGazeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns unfied gaze data from the eye tracker. This is a single gaze ray, representing the fusion of both eyes.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n@return                                              True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "GetGazeData", sizeof(EyeTrackerFunctionLibrary_eventGetGazeData_Parms), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics
	{
		struct EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms
		{
			FEyeTrackerStereoGazeData OutGazeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGazeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_OutGazeData = { "OutGazeData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms, OutGazeData), Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_OutGazeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns stereo gaze data from the eye tracker. This includes a gaze ray per eye, as well as a fixation point.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n@return                                              True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "GetStereoGazeData", sizeof(EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics
	{
		struct EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms
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
	void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n@return (Boolean)  true if eye tracker is connected and ready to use, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "IsEyeTrackerConnected", sizeof(EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics
	{
		struct EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms
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
	void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n@return true if the connected eye tracker supports per-eye gaze data, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "IsStereoGazeDataAvailable", sizeof(EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics
	{
		struct EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Specifies player being eye-tracked. This is not necessary for all devices, but is necessary for some to determine viewport properties, etc.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "SetEyeTrackedPlayer", sizeof(EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister()
	{
		return UEyeTrackerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData, "GetGazeData" }, // 3954507620
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData, "GetStereoGazeData" }, // 3027088218
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected, "IsEyeTrackerConnected" }, // 2608259902
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable, "IsStereoGazeDataAvailable" }, // 3641743737
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer, "SetEyeTrackedPlayer" }, // 2545620222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EyeTrackerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEyeTrackerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::ClassParams = {
		&UEyeTrackerFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEyeTrackerFunctionLibrary, 1511558052);
	template<> EYETRACKER_API UClass* StaticClass<UEyeTrackerFunctionLibrary>()
	{
		return UEyeTrackerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEyeTrackerFunctionLibrary(Z_Construct_UClass_UEyeTrackerFunctionLibrary, &UEyeTrackerFunctionLibrary::StaticClass, TEXT("/Script/EyeTracker"), TEXT("UEyeTrackerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEyeTrackerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
