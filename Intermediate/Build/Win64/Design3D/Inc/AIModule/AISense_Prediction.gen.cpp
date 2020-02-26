// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Prediction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Prediction() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
class UScriptStruct* FAIPredictionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIPredictionEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AIPredictionEvent"), sizeof(FAIPredictionEvent), Get_Z_Construct_UScriptStruct_FAIPredictionEvent_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIPredictionEvent>()
{
	return FAIPredictionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIPredictionEvent(FAIPredictionEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIPredictionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIPredictionEvent")),new UScriptStruct::TCppStructOps<FAIPredictionEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIPredictionEvent;
	struct Z_Construct_UScriptStruct_FAIPredictionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requestor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIPredictionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIPredictionEvent, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIPredictionEvent, Requestor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIPredictionEvent",
		sizeof(FAIPredictionEvent),
		alignof(FAIPredictionEvent),
		Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIPredictionEvent"), sizeof(FAIPredictionEvent), Get_Z_Construct_UScriptStruct_FAIPredictionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIPredictionEvent_Hash() { return 3911769711U; }
	void UAISense_Prediction::StaticRegisterNativesUAISense_Prediction()
	{
		UClass* Class = UAISense_Prediction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestControllerPredictionEvent", &UAISense_Prediction::execRequestControllerPredictionEvent },
			{ "RequestPawnPredictionEvent", &UAISense_Prediction::execRequestPawnPredictionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics
	{
		struct AISense_Prediction_eventRequestControllerPredictionEvent_Parms
		{
			AAIController* Requestor;
			AActor* PredictedActor;
			float PredictionTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, Requestor), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_Requestor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
		{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, nullptr, "RequestControllerPredictionEvent", sizeof(AISense_Prediction_eventRequestControllerPredictionEvent_Parms), Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics
	{
		struct AISense_Prediction_eventRequestPawnPredictionEvent_Parms
		{
			APawn* Requestor;
			AActor* PredictedActor;
			float PredictionTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Requestor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, Requestor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_Requestor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
		{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, nullptr, "RequestPawnPredictionEvent", sizeof(AISense_Prediction_eventRequestPawnPredictionEvent_Parms), Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister()
	{
		return UAISense_Prediction::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Prediction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Prediction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Prediction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent, "RequestControllerPredictionEvent" }, // 2611051349
		{ &Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent, "RequestPawnPredictionEvent" }, // 361511322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Prediction_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Prediction.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Prediction, RegisteredEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIPredictionEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Prediction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Prediction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Prediction_Statics::ClassParams = {
		&UAISense_Prediction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Prediction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Prediction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Prediction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Prediction, 1033432520);
	template<> AIMODULE_API UClass* StaticClass<UAISense_Prediction>()
	{
		return UAISense_Prediction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Prediction(Z_Construct_UClass_UAISense_Prediction, &UAISense_Prediction::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Prediction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Prediction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
