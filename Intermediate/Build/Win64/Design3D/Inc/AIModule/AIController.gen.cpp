// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_ClaimTaskResource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocalPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocalPointOnActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetFocusActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetImmediateMoveDestination();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetMoveStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_GetPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_HasPartialPath();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_ClearFocus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_SetFocalPoint();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_K2_SetFocus();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_MoveToActor();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_MoveToLocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_OnUsingBlackBoard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_RunBehaviorTree();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_SetMoveBlockDetection();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_SetPathFollowingComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_UnclaimTaskResource();
	AIMODULE_API UFunction* Z_Construct_UFunction_AAIController_UseBlackboard();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventAIMoveCompletedSignature_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "AIMoveCompletedSignature__DelegateSignature", sizeof(_Script_AIModule_eventAIMoveCompletedSignature_Parms), Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AAIController_OnUsingBlackBoard = FName(TEXT("OnUsingBlackBoard"));
	void AAIController::OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset)
	{
		AIController_eventOnUsingBlackBoard_Parms Parms;
		Parms.BlackboardComp=BlackboardComp;
		Parms.BlackboardAsset=BlackboardAsset;
		ProcessEvent(FindFunctionChecked(NAME_AAIController_OnUsingBlackBoard),&Parms);
	}
	void AAIController::StaticRegisterNativesAAIController()
	{
		UClass* Class = AAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimTaskResource", &AAIController::execClaimTaskResource },
			{ "GetAIPerceptionComponent", &AAIController::execGetAIPerceptionComponent },
			{ "GetFocalPoint", &AAIController::execGetFocalPoint },
			{ "GetFocalPointOnActor", &AAIController::execGetFocalPointOnActor },
			{ "GetFocusActor", &AAIController::execGetFocusActor },
			{ "GetImmediateMoveDestination", &AAIController::execGetImmediateMoveDestination },
			{ "GetMoveStatus", &AAIController::execGetMoveStatus },
			{ "GetPathFollowingComponent", &AAIController::execGetPathFollowingComponent },
			{ "HasPartialPath", &AAIController::execHasPartialPath },
			{ "K2_ClearFocus", &AAIController::execK2_ClearFocus },
			{ "K2_SetFocalPoint", &AAIController::execK2_SetFocalPoint },
			{ "K2_SetFocus", &AAIController::execK2_SetFocus },
			{ "MoveToActor", &AAIController::execMoveToActor },
			{ "MoveToLocation", &AAIController::execMoveToLocation },
			{ "OnGameplayTaskResourcesClaimed", &AAIController::execOnGameplayTaskResourcesClaimed },
			{ "RunBehaviorTree", &AAIController::execRunBehaviorTree },
			{ "SetMoveBlockDetection", &AAIController::execSetMoveBlockDetection },
			{ "SetPathFollowingComponent", &AAIController::execSetPathFollowingComponent },
			{ "UnclaimTaskResource", &AAIController::execUnclaimTaskResource },
			{ "UseBlackboard", &AAIController::execUseBlackboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics
	{
		struct AIController_eventClaimTaskResource_Parms
		{
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::NewProp_ResourceClass = { "ResourceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventClaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::NewProp_ResourceClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "ClaimTaskResource", sizeof(AIController_eventClaimTaskResource_Parms), Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_ClaimTaskResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics
	{
		struct AIController_eventGetAIPerceptionComponent_Parms
		{
			UAIPerceptionComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetAIPerceptionComponent_Parms, ReturnValue), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetAIPerceptionComponent", sizeof(AIController_eventGetAIPerceptionComponent_Parms), Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetAIPerceptionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetFocalPoint_Statics
	{
		struct AIController_eventGetFocalPoint_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetFocalPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Retrieve the final position that controller should be looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocalPoint", sizeof(AIController_eventGetFocalPoint_Parms), Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetFocalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics
	{
		struct AIController_eventGetFocalPointOnActor_Parms
		{
			const AActor* Actor;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Retrieve the focal point this controller should focus to on given actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocalPointOnActor", sizeof(AIController_eventGetFocalPointOnActor_Parms), Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetFocalPointOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetFocusActor_Statics
	{
		struct AIController_eventGetFocusActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocusActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetFocusActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Get the focused actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocusActor", sizeof(AIController_eventGetFocusActor_Parms), Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetFocusActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetFocusActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics
	{
		struct AIController_eventGetImmediateMoveDestination_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetImmediateMoveDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns position of current path segment's end." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetImmediateMoveDestination", sizeof(AIController_eventGetImmediateMoveDestination_Parms), Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetImmediateMoveDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetMoveStatus_Statics
	{
		struct AIController_eventGetMoveStatus_Parms
		{
			TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns status of path following" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetMoveStatus", sizeof(AIController_eventGetMoveStatus_Parms), Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetMoveStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics
	{
		struct AIController_eventGetPathFollowingComponent_Parms
		{
			UPathFollowingComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventGetPathFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns PathFollowingComponent subobject *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetPathFollowingComponent", sizeof(AIController_eventGetPathFollowingComponent_Parms), Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_GetPathFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_HasPartialPath_Statics
	{
		struct AIController_eventHasPartialPath_Parms
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
	void Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIController_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventHasPartialPath_Parms), &Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_HasPartialPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_HasPartialPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "HasPartialPath", sizeof(AIController_eventHasPartialPath_Parms), Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_HasPartialPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_HasPartialPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DisplayName", "ClearFocus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "ClearFocus" },
		{ "ToolTip", "Clears Focus, will also clear FocalPoint as a result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_ClearFocus", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_K2_ClearFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics
	{
		struct AIController_eventK2_SetFocalPoint_Parms
		{
			FVector FP;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::NewProp_FP = { "FP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventK2_SetFocalPoint_Parms, FP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::NewProp_FP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DisplayName", "SetFocalPoint" },
		{ "Keywords", "focus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "SetFocalPoint" },
		{ "ToolTip", "Set the position that controller should be looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_SetFocalPoint", sizeof(AIController_eventK2_SetFocalPoint_Parms), Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_K2_SetFocalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_K2_SetFocus_Statics
	{
		struct AIController_eventK2_SetFocus_Parms
		{
			AActor* NewFocus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventK2_SetFocus_Parms, NewFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::NewProp_NewFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DisplayName", "SetFocus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "SetFocus" },
		{ "ToolTip", "Set Focus for actor, will set FocalPoint as a result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_SetFocus", sizeof(AIController_eventK2_SetFocus_Parms), Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_K2_SetFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_MoveToActor_Statics
	{
		struct AIController_eventMoveToActor_Parms
		{
			AActor* Goal;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
			TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_bCanStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((AIController_eventMoveToActor_Parms*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
	{
		((AIController_eventMoveToActor_Parms*)Obj)->bCanStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((AIController_eventMoveToActor_Parms*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((AIController_eventMoveToActor_Parms*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_Goal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_MoveToActor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "true" },
		{ "CPP_Default_bStopOnOverlap", "true" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI go toward specified Goal actor (destination will be continuously updated), aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "MoveToActor", sizeof(AIController_eventMoveToActor_Parms), Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_MoveToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_MoveToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_MoveToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_MoveToLocation_Statics
	{
		struct AIController_eventMoveToLocation_Parms
		{
			FVector Dest;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
			TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_bCanStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
		static void NewProp_bProjectDestinationToNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation;
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((AIController_eventMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
	{
		((AIController_eventMoveToLocation_Parms*)Obj)->bCanStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit(void* Obj)
	{
		((AIController_eventMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation = { "bProjectDestinationToNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((AIController_eventMoveToLocation_Parms*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((AIController_eventMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_MoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "true" },
		{ "CPP_Default_bProjectDestinationToNavigation", "false" },
		{ "CPP_Default_bStopOnOverlap", "true" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI go toward specified Dest location, aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bProjectDestinationToNavigation - project location on navigation data before using it\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "MoveToLocation", sizeof(AIController_eventMoveToLocation_Parms), Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_MoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_MoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics
	{
		struct AIController_eventOnGameplayTaskResourcesClaimed_Parms
		{
			FGameplayResourceSet NewlyClaimed;
			FGameplayResourceSet FreshlyReleased;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_FreshlyReleased = { "FreshlyReleased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_NewlyClaimed = { "NewlyClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_FreshlyReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_NewlyClaimed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "OnGameplayTaskResourcesClaimed", sizeof(AIController_eventOnGameplayTaskResourcesClaimed_Parms), Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "OnUsingBlackBoard", sizeof(AIController_eventOnUsingBlackBoard_Parms), Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_OnUsingBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics
	{
		struct AIController_eventRunBehaviorTree_Parms
		{
			UBehaviorTree* BTAsset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIController_eventRunBehaviorTree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventRunBehaviorTree_Parms), &Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventRunBehaviorTree_Parms, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_BTAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Starts executing behavior tree." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "RunBehaviorTree", sizeof(AIController_eventRunBehaviorTree_Parms), Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_RunBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics
	{
		struct AIController_eventSetMoveBlockDetection_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AIController_eventSetMoveBlockDetection_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventSetMoveBlockDetection_Parms), &Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Updates state of movement block detection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "SetMoveBlockDetection", sizeof(AIController_eventSetMoveBlockDetection_Parms), Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_SetMoveBlockDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics
	{
		struct AIController_eventSetPathFollowingComponent_Parms
		{
			UPathFollowingComponent* NewPFComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPFComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPFComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent = { "NewPFComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventSetPathFollowingComponent_Parms, NewPFComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Note that his function does not do any pathfollowing state transfer.\n    Intended to be called as part of initialization/setup process" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "SetPathFollowingComponent", sizeof(AIController_eventSetPathFollowingComponent_Parms), Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_SetPathFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics
	{
		struct AIController_eventUnclaimTaskResource_Parms
		{
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::NewProp_ResourceClass = { "ResourceClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventUnclaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::NewProp_ResourceClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "UnclaimTaskResource", sizeof(AIController_eventUnclaimTaskResource_Parms), Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_UnclaimTaskResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIController_UseBlackboard_Statics
	{
		struct AIController_eventUseBlackboard_Parms
		{
			UBlackboardData* BlackboardAsset;
			UBlackboardComponent* BlackboardComponent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIController_eventUseBlackboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIController_eventUseBlackboard_Parms), &Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIController_UseBlackboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI use the specified Blackboard asset & creates a Blackboard Component if one does not already exist.\n@param       BlackboardAsset                 The Blackboard asset to use.\n@param       BlackboardComponent             The Blackboard component that was used or created to work with the passed-in Blackboard Asset.\n@return true if we successfully linked the blackboard asset to the blackboard component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "UseBlackboard", sizeof(AIController_eventUseBlackboard_Parms), Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIController_UseBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAIController_UseBlackboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAIController_NoRegister()
	{
		return AAIController::StaticClass();
	}
	struct Z_Construct_UClass_AAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveMoveCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceiveMoveCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTasksComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedGameplayTasksComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blackboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionsComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionsComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetControlRotationFromPawnOrientation_MetaData[];
#endif
		static void NewProp_bSetControlRotationFromPawnOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetControlRotationFromPawnOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsPlayerState_MetaData[];
#endif
		static void NewProp_bWantsPlayerState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[];
#endif
		static void NewProp_bAllowStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipExtraLOSChecks_MetaData[];
#endif
		static void NewProp_bSkipExtraLOSChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipExtraLOSChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLOSflag_MetaData[];
#endif
		static void NewProp_bLOSflag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLOSflag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopAILogicOnUnposses_MetaData[];
#endif
		static void NewProp_bStopAILogicOnUnposses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopAILogicOnUnposses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIController_ClaimTaskResource, "ClaimTaskResource" }, // 1999721346
		{ &Z_Construct_UFunction_AAIController_GetAIPerceptionComponent, "GetAIPerceptionComponent" }, // 1018186453
		{ &Z_Construct_UFunction_AAIController_GetFocalPoint, "GetFocalPoint" }, // 2093019916
		{ &Z_Construct_UFunction_AAIController_GetFocalPointOnActor, "GetFocalPointOnActor" }, // 3708332861
		{ &Z_Construct_UFunction_AAIController_GetFocusActor, "GetFocusActor" }, // 3678706138
		{ &Z_Construct_UFunction_AAIController_GetImmediateMoveDestination, "GetImmediateMoveDestination" }, // 108317125
		{ &Z_Construct_UFunction_AAIController_GetMoveStatus, "GetMoveStatus" }, // 318011357
		{ &Z_Construct_UFunction_AAIController_GetPathFollowingComponent, "GetPathFollowingComponent" }, // 2911128095
		{ &Z_Construct_UFunction_AAIController_HasPartialPath, "HasPartialPath" }, // 1173463341
		{ &Z_Construct_UFunction_AAIController_K2_ClearFocus, "K2_ClearFocus" }, // 3239486099
		{ &Z_Construct_UFunction_AAIController_K2_SetFocalPoint, "K2_SetFocalPoint" }, // 577891373
		{ &Z_Construct_UFunction_AAIController_K2_SetFocus, "K2_SetFocus" }, // 697302330
		{ &Z_Construct_UFunction_AAIController_MoveToActor, "MoveToActor" }, // 1580953021
		{ &Z_Construct_UFunction_AAIController_MoveToLocation, "MoveToLocation" }, // 1547078353
		{ &Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed, "OnGameplayTaskResourcesClaimed" }, // 3077551626
		{ &Z_Construct_UFunction_AAIController_OnUsingBlackBoard, "OnUsingBlackBoard" }, // 2959474291
		{ &Z_Construct_UFunction_AAIController_RunBehaviorTree, "RunBehaviorTree" }, // 394404961
		{ &Z_Construct_UFunction_AAIController_SetMoveBlockDetection, "SetMoveBlockDetection" }, // 3846229644
		{ &Z_Construct_UFunction_AAIController_SetPathFollowingComponent, "SetPathFollowingComponent" }, // 1702562330
		{ &Z_Construct_UFunction_AAIController_UnclaimTaskResource, "UnclaimTaskResource" }, // 4132577519
		{ &Z_Construct_UFunction_AAIController_UseBlackboard, "UseBlackboard" }, // 496040614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AIController is the base class of controllers for AI-controlled Pawns.\n\nControllers are non-physical actors that can be attached to a pawn to control its actions.\nAIControllers manage the artificial intelligence for the pawns they control.\nIn networked games, they only exist on the server.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted_MetaData[] = {
		{ "DisplayName", "MoveCompleted" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Blueprint notification that we've completed the current movement request" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted = { "ReceiveMoveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, ReceiveMoveCompleted), Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass = { "DefaultNavigationFilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, DefaultNavigationFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent = { "CachedGameplayTasksComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, CachedGameplayTasksComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "blackboard" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard = { "Blackboard", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, Blackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp = { "ActionsComp", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, ActionsComp), Z_Construct_UClass_UPawnActionsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Component responsible for behaviors." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent = { "BrainComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, BrainComponent), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Component used for moving along a path." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent = { "PathFollowingComponent", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIController, PathFollowingComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Copy Pawn rotation to ControlRotation, if there is no focus point." },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bSetControlRotationFromPawnOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation = { "bSetControlRotationFromPawnOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Specifies if this AI wants its own PlayerState." },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bWantsPlayerState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState = { "bWantsPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Is strafing allowed during movement?" },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bAllowStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Skip extra line of sight traces to extremities of target being checked." },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bSkipExtraLOSChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks = { "bSkipExtraLOSChecks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "used for alternating LineOfSight traces" },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bLOSflag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag = { "bLOSflag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "By default AI's logic gets stopped when controlled Pawn is unpossesed. Setting this flag to false\n    will make AI logic persist past loosing controll over a pawn" },
	};
#endif
	void Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_SetBit(void* Obj)
	{
		((AAIController*)Obj)->bStopAILogicOnUnposses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses = { "bStopAILogicOnUnposses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAIController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IAIPerceptionListenerInterface), false },
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGameplayTaskOwnerInterface), false },
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGenericTeamAgentInterface), false },
			{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IVisualLoggerDebugSnapshotInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIController_Statics::ClassParams = {
		&AAIController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIController_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIController, 2626432349);
	template<> AIMODULE_API UClass* StaticClass<AAIController>()
	{
		return AAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIController(Z_Construct_UClass_AAIController, &AAIController::StaticClass, TEXT("/Script/AIModule"), TEXT("AAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
