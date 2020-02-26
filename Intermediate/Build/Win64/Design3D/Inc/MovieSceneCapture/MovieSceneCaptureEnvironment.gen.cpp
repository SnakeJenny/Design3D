// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress();
// End Cross Module References
	void UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment()
	{
		UClass* Class = UMovieSceneCaptureEnvironment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAudioCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindAudioCaptureProtocol },
			{ "FindImageCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindImageCaptureProtocol },
			{ "GetCaptureElapsedTime", &UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime },
			{ "GetCaptureFrameNumber", &UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber },
			{ "IsCaptureInProgress", &UMovieSceneCaptureEnvironment::execIsCaptureInProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms
		{
			UMovieSceneAudioCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "FindAudioCaptureProtocol", sizeof(MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms
		{
			UMovieSceneImageCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "FindImageCaptureProtocol", sizeof(MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the total elapsed time of the current capture in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "GetCaptureElapsedTime", sizeof(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the frame number of the current capture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "GetCaptureFrameNumber", sizeof(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics
	{
		struct MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms
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
	void Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Return true if there is any capture currently active (even in a warm-up state).\nUseful for checking whether to do certain operations in BeginPlay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "IsCaptureInProgress", sizeof(MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol, "FindAudioCaptureProtocol" }, // 3531791531
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol, "FindImageCaptureProtocol" }, // 2237700063
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime, "GetCaptureElapsedTime" }, // 1208528021
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber, "GetCaptureFrameNumber" }, // 4107557361
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress, "IsCaptureInProgress" }, // 3394569028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureEnvironment.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureEnvironment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams = {
		&UMovieSceneCaptureEnvironment::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCaptureEnvironment, 4031866358);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCaptureEnvironment>()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment(Z_Construct_UClass_UMovieSceneCaptureEnvironment, &UMovieSceneCaptureEnvironment::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCaptureEnvironment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureEnvironment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
