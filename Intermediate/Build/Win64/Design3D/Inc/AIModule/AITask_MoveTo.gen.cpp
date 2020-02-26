// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Tasks/AITask_MoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_MoveTo() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventMoveTaskCompletedSignature_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> Result;
			AAIController* AIController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "MoveTaskCompletedSignature__DelegateSignature", sizeof(_Script_AIModule_eventMoveTaskCompletedSignature_Parms), Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAITask_MoveTo::StaticRegisterNativesUAITask_MoveTo()
	{
		UClass* Class = UAITask_MoveTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIMoveTo", &UAITask_MoveTo::execAIMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics
	{
		struct AITask_MoveTo_eventAIMoveTo_Parms
		{
			AAIController* Controller;
			FVector GoalLocation;
			AActor* GoalActor;
			float AcceptanceRadius;
			TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap;
			TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath;
			bool bUsePathfinding;
			bool bLockAILogic;
			bool bUseContinuosGoalTracking;
			UAITask_MoveTo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseContinuosGoalTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseContinuosGoalTracking;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AcceptPartialPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StopOnOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, ReturnValue), Z_Construct_UClass_UAITask_MoveTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuosGoalTracking_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUseContinuosGoalTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuosGoalTracking = { "bUseContinuosGoalTracking", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuosGoalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bLockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptPartialPath = { "AcceptPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptPartialPath), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_StopOnOverlap = { "StopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, StopOnOverlap), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuosGoalTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_StopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AcceptanceRadius,StopOnOverlap,AcceptPartialPath,bUsePathfinding,bUseContinuosGoalTracking" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_AcceptPartialPath", "Default" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "CPP_Default_bUseContinuosGoalTracking", "false" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_GoalActor", "None" },
		{ "CPP_Default_StopOnOverlap", "Default" },
		{ "DefaultToSelf", "Controller" },
		{ "DisplayName", "Move To Location or Actor" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_MoveTo, nullptr, "AIMoveTo", sizeof(AITask_MoveTo_eventAIMoveTo_Parms), Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister()
	{
		return UAITask_MoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_MoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoveFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_MoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITask_MoveTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo, "AIMoveTo" }, // 1579336065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/AITask_MoveTo.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
		{ "ToolTip", "parameters of move request" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest = { "MoveRequest", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITask_MoveTo, MoveRequest), Z_Construct_UScriptStruct_FAIMoveRequest, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished = { "OnMoveFinished", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITask_MoveTo, OnMoveFinished), Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITask_MoveTo, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_MoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_MoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAITask_MoveTo_Statics::ClassParams = {
		&UAITask_MoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_MoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAITask_MoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask_MoveTo, 548503887);
	template<> AIMODULE_API UClass* StaticClass<UAITask_MoveTo>()
	{
		return UAITask_MoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask_MoveTo(Z_Construct_UClass_UAITask_MoveTo, &UAITask_MoveTo::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
