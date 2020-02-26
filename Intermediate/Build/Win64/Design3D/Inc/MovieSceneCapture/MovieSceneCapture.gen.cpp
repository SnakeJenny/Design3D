// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCapture() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister();
// End Cross Module References
	void UMovieSceneCapture::StaticRegisterNativesUMovieSceneCapture()
	{
		UClass* Class = UMovieSceneCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioCaptureProtocol", &UMovieSceneCapture::execGetAudioCaptureProtocol },
			{ "GetImageCaptureProtocol", &UMovieSceneCapture::execGetImageCaptureProtocol },
			{ "SetAudioCaptureProtocolType", &UMovieSceneCapture::execSetAudioCaptureProtocolType },
			{ "SetImageCaptureProtocolType", &UMovieSceneCapture::execSetImageCaptureProtocolType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics
	{
		struct MovieSceneCapture_eventGetAudioCaptureProtocol_Parms
		{
			UMovieSceneCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCapture_eventGetAudioCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "GetAudioCaptureProtocol", sizeof(MovieSceneCapture_eventGetAudioCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics
	{
		struct MovieSceneCapture_eventGetImageCaptureProtocol_Parms
		{
			UMovieSceneCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCapture_eventGetImageCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Access the capture protocol we are using" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "GetImageCaptureProtocol", sizeof(MovieSceneCapture_eventGetImageCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics
	{
		struct MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms
		{
			TSubclassOf<UMovieSceneCaptureProtocolBase>  ProtocolType;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProtocolType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::NewProp_ProtocolType = { "ProtocolType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms, ProtocolType), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::NewProp_ProtocolType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "SetAudioCaptureProtocolType", sizeof(MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms), Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics
	{
		struct MovieSceneCapture_eventSetImageCaptureProtocolType_Parms
		{
			TSubclassOf<UMovieSceneCaptureProtocolBase>  ProtocolType;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProtocolType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::NewProp_ProtocolType = { "ProtocolType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCapture_eventSetImageCaptureProtocolType_Parms, ProtocolType), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::NewProp_ProtocolType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "SetImageCaptureProtocolType", sizeof(MovieSceneCapture_eventSetImageCaptureProtocolType_Parms), Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister()
	{
		return UMovieSceneCapture::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritedCommandLineArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InheritedCommandLineArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalCommandLineArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdditionalCommandLineArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCloseEditorWhenCaptureStarts_MetaData[];
#endif
		static void NewProp_bCloseEditorWhenCaptureStarts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCloseEditorWhenCaptureStarts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateProcess_MetaData[];
#endif
		static void NewProp_bUseSeparateProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureProtocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioCaptureProtocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageCaptureProtocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageCaptureProtocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureProtocolType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioCaptureProtocolType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageCaptureProtocolType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageCaptureProtocolType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol, "GetAudioCaptureProtocol" }, // 1805671097
		{ &Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol, "GetImageCaptureProtocol" }, // 1720411253
		{ &Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType, "SetAudioCaptureProtocolType" }, // 3454055147
		{ &Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType, "SetImageCaptureProtocolType" }, // 3158548274
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCapture.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for capturing scene data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Command line arguments inherited from this process" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments = { "InheritedCommandLineArguments", nullptr, (EPropertyFlags)0x0010040000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, InheritedCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Additional command line arguments to pass to the external process when capturing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments = { "AdditionalCommandLineArguments", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, AdditionalCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "When enabled, the editor will shutdown when the capture starts" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_SetBit(void* Obj)
	{
		((UMovieSceneCapture*)Obj)->bCloseEditorWhenCaptureStarts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts = { "bCloseEditorWhenCaptureStarts", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneCapture), &Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Whether to capture the movie in a separate process or not" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_SetBit(void* Obj)
	{
		((UMovieSceneCapture*)Obj)->bUseSeparateProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess = { "bUseSeparateProcess", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneCapture), &Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings that define how to capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, Settings), Z_Construct_UScriptStruct_FMovieSceneCaptureSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol = { "AudioCaptureProtocol", nullptr, (EPropertyFlags)0x00120000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, AudioCaptureProtocol), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Capture protocol responsible for actually capturing frame data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol = { "ImageCaptureProtocol", nullptr, (EPropertyFlags)0x00120000000a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, ImageCaptureProtocol), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "DisplayName", "Audio Output Format" },
		{ "HideViewOptions", "" },
		{ "MetaClass", "MovieSceneAudioCaptureProtocolBase" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "The type of capture protocol to use for audio data. Requires experimental audio mixer (launch editor via with -audiomixer)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType = { "AudioCaptureProtocolType", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, AudioCaptureProtocolType), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "DisplayName", "Image Output Format" },
		{ "HideViewOptions", "" },
		{ "MetaClass", "MovieSceneImageCaptureProtocolBase" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "The type of capture protocol to use for image data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType = { "ImageCaptureProtocolType", nullptr, (EPropertyFlags)0x0010000002004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCapture, ImageCaptureProtocolType), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCapture_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCapture, IMovieSceneCaptureInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCapture_Statics::ClassParams = {
		&UMovieSceneCapture::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCapture, 2849693173);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCapture>()
	{
		return UMovieSceneCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCapture(Z_Construct_UClass_UMovieSceneCapture, &UMovieSceneCapture::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
