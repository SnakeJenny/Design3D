// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolBase() {}
// Cross Module References
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase();
// End Cross Module References
	static UEnum* EMovieSceneCaptureProtocolState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EMovieSceneCaptureProtocolState"));
		}
		return Singleton;
	}
	template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EMovieSceneCaptureProtocolState>()
	{
		return EMovieSceneCaptureProtocolState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneCaptureProtocolState(EMovieSceneCaptureProtocolState_StaticEnum, TEXT("/Script/MovieSceneCapture"), TEXT("EMovieSceneCaptureProtocolState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Hash() { return 1685653581U; }
	UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneCaptureProtocolState"), 0, Get_Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneCaptureProtocolState::Idle", (int64)EMovieSceneCaptureProtocolState::Idle },
				{ "EMovieSceneCaptureProtocolState::Initialized", (int64)EMovieSceneCaptureProtocolState::Initialized },
				{ "EMovieSceneCaptureProtocolState::Capturing", (int64)EMovieSceneCaptureProtocolState::Capturing },
				{ "EMovieSceneCaptureProtocolState::Finalizing", (int64)EMovieSceneCaptureProtocolState::Finalizing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Capturing.ToolTip", "The protocol has been initialized, bound to a viewport and is capturing data" },
				{ "Finalizing.ToolTip", "The protocol has finished capturing data, and is pending finalization" },
				{ "Idle.ToolTip", "The protocol is idle, and has not even been initialized" },
				{ "Initialized.ToolTip", "The protocol has been initialized (and bound to a viewport) but is not capturing frames yet" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				nullptr,
				"EMovieSceneCaptureProtocolState",
				"EMovieSceneCaptureProtocolState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFrameMetrics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameMetrics, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("FrameMetrics"), sizeof(FFrameMetrics), Get_Z_Construct_UScriptStruct_FFrameMetrics_Hash());
	}
	return Singleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FFrameMetrics>()
{
	return FFrameMetrics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrameMetrics(FFrameMetrics::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("FrameMetrics"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrameMetrics")),new UScriptStruct::TCppStructOps<FFrameMetrics>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics;
	struct Z_Construct_UScriptStruct_FFrameMetrics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDroppedFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDroppedFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Metrics that correspond to a particular frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameMetrics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The number of frames we dropped in-between this frame, and the last one we captured" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames = { "NumDroppedFrames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameMetrics, NumDroppedFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The index of this frame from the start of the capture, including dropped frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameMetrics, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, that this specific frame took to render (not accounting for dropped frames)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta = { "FrameDelta", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameMetrics, FrameDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, since the capture started" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime = { "TotalElapsedTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrameMetrics, TotalElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"FrameMetrics",
		sizeof(FFrameMetrics),
		alignof(FFrameMetrics),
		Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrameMetrics"), sizeof(FFrameMetrics), Get_Z_Construct_UScriptStruct_FFrameMetrics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrameMetrics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_Hash() { return 932795000U; }
	void UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase()
	{
		UClass* Class = UMovieSceneCaptureProtocolBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetState", &UMovieSceneCaptureProtocolBase::execGetState },
			{ "IsCapturing", &UMovieSceneCaptureProtocolBase::execIsCapturing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics
	{
		struct MovieSceneCaptureProtocolBase_eventGetState_Parms
		{
			EMovieSceneCaptureProtocolState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCaptureProtocolBase_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Get the current state of this capture protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, nullptr, "GetState", sizeof(MovieSceneCaptureProtocolBase_eventGetState_Parms), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics
	{
		struct MovieSceneCaptureProtocolBase_eventIsCapturing_Parms
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
	void Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneCaptureProtocolBase_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Check whether we can capture a frame from this protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, nullptr, "IsCapturing", sizeof(MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState, "GetState" }, // 640096358
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing, "IsCapturing" }, // 2836385444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A capture protocol responsible for dealing with captured frames using some custom method (writing out to disk, streaming, etc)\n\nA typical process for capture consits of the following process:\n    Setup -> [ Warm up -> [ Capture Frame ] ] -> Begin Finalize -> [ HasFinishedProcessing ] -> Finalize" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The current state of the protocol" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCaptureProtocolBase, State), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneCaptureProtocolBase::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers),
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCaptureProtocolBase, 341530043);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCaptureProtocolBase>()
	{
		return UMovieSceneCaptureProtocolBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCaptureProtocolBase(Z_Construct_UClass_UMovieSceneCaptureProtocolBase, &UMovieSceneCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureProtocolBase);
	void UMovieSceneImageCaptureProtocolBase::StaticRegisterNativesUMovieSceneImageCaptureProtocolBase()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneImageCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for image capture protocols. Used to filter the UI for protocols used on the image capture pass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneImageCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneImageCaptureProtocolBase::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneImageCaptureProtocolBase, 4228322577);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneImageCaptureProtocolBase>()
	{
		return UMovieSceneImageCaptureProtocolBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneImageCaptureProtocolBase(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase, &UMovieSceneImageCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneImageCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneImageCaptureProtocolBase);
	void UMovieSceneAudioCaptureProtocolBase::StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneAudioCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for audio capture protocols. Used to filter the UI for protocols used on the audio capture pass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneAudioCaptureProtocolBase::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAudioCaptureProtocolBase, 2645137362);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneAudioCaptureProtocolBase>()
	{
		return UMovieSceneAudioCaptureProtocolBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAudioCaptureProtocolBase(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase, &UMovieSceneAudioCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneAudioCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioCaptureProtocolBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
