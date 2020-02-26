// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/SequenceRecorderBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderBlueprintLibrary() {}
// Cross Module References
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
	SEQUENCERECORDER_API UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence();
	SEQUENCERECORDER_API UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SEQUENCERECORDER_API UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence();
// End Cross Module References
	void USequenceRecorderBlueprintLibrary::StaticRegisterNativesUSequenceRecorderBlueprintLibrary()
	{
		UClass* Class = USequenceRecorderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRecordingSequence", &USequenceRecorderBlueprintLibrary::execIsRecordingSequence },
			{ "StartRecordingSequence", &USequenceRecorderBlueprintLibrary::execStartRecordingSequence },
			{ "StopRecordingSequence", &USequenceRecorderBlueprintLibrary::execStopRecordingSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics
	{
		struct SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms
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
	void Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms), &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Are we currently recording a sequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "IsRecordingSequence", sizeof(SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms), Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics
	{
		struct SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms
		{
			TArray<AActor*> ActorsToRecord;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToRecord;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToRecord_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord = { "ActorsToRecord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms, ActorsToRecord), METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_Inner = { "ActorsToRecord", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Start recording the passed-in actors to a level sequence.\n@param       ActorsToRecord  The actors to record" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "StartRecordingSequence", sizeof(SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms), Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording the current sequence, if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "StopRecordingSequence", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister()
	{
		return USequenceRecorderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence, "IsRecordingSequence" }, // 158210900
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence, "StartRecordingSequence" }, // 3574237460
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence, "StopRecordingSequence" }, // 1697441266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ScriptName", "SequenceRecorderLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::ClassParams = {
		&USequenceRecorderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceRecorderBlueprintLibrary, 3272255746);
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderBlueprintLibrary>()
	{
		return USequenceRecorderBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceRecorderBlueprintLibrary(Z_Construct_UClass_USequenceRecorderBlueprintLibrary, &USequenceRecorderBlueprintLibrary::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("USequenceRecorderBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
