// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueprintHelperLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation();
// End Cross Module References
	void UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary()
	{
		UClass* Class = UAIBlueprintHelperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMoveToProxyObject", &UAIBlueprintHelperLibrary::execCreateMoveToProxyObject },
			{ "GetAIController", &UAIBlueprintHelperLibrary::execGetAIController },
			{ "GetBlackboard", &UAIBlueprintHelperLibrary::execGetBlackboard },
			{ "GetCurrentPath", &UAIBlueprintHelperLibrary::execGetCurrentPath },
			{ "IsValidAIDirection", &UAIBlueprintHelperLibrary::execIsValidAIDirection },
			{ "IsValidAILocation", &UAIBlueprintHelperLibrary::execIsValidAILocation },
			{ "IsValidAIRotation", &UAIBlueprintHelperLibrary::execIsValidAIRotation },
			{ "LockAIResourcesWithAnimation", &UAIBlueprintHelperLibrary::execLockAIResourcesWithAnimation },
			{ "SendAIMessage", &UAIBlueprintHelperLibrary::execSendAIMessage },
			{ "SimpleMoveToActor", &UAIBlueprintHelperLibrary::execSimpleMoveToActor },
			{ "SimpleMoveToLocation", &UAIBlueprintHelperLibrary::execSimpleMoveToLocation },
			{ "SpawnAIFromClass", &UAIBlueprintHelperLibrary::execSpawnAIFromClass },
			{ "UnlockAIResourcesWithAnimation", &UAIBlueprintHelperLibrary::execUnlockAIResourcesWithAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics
	{
		struct AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			FVector Destination;
			AActor* TargetActor;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			UAIAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, ReturnValue), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "CPP_Default_AcceptanceRadius", "5.000000" },
		{ "CPP_Default_bStopOnOverlap", "false" },
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "CreateMoveToProxyObject", sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetAIController_Parms
		{
			AActor* ControlledActor;
			AAIController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ControlledActor = { "ControlledActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ControlledActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DefaultToSelf", "ControlledObject" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "The way it works exactly is if the actor passed in is a pawn, then the function retrieves\n    pawn's controller cast to AIController. Otherwise the function returns actor cast to AIController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "GetAIController", sizeof(AIBlueprintHelperLibrary_eventGetAIController_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetBlackboard_Parms
		{
			AActor* Target;
			UBlackboardComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "GetBlackboard", sizeof(AIBlueprintHelperLibrary_eventGetBlackboard_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetCurrentPath_Parms
		{
			AController* Controller;
			UNavigationPath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "Returns a copy of navigation path given controller is currently using.\n    The result being a copy means you won't be able to influence agent's pathfollowing\n    by manipulating received path" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "GetCurrentPath", sizeof(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms
		{
			FVector DirectionVector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_DirectionVector = { "DirectionVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms, DirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_DirectionVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "IsValidAIDirection", sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAILocation_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAILocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "IsValidAILocation", sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms
		{
			FRotator Rotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "IsValidAIRotation", sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics
	{
		struct AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bLockMovement;
			bool LockAILogic;
		};
		static void NewProp_LockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockAILogic;
		static void NewProp_bLockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMovement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->LockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic = { "LockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->bLockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement = { "bLockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "DefaultToSelf", "AnimInstance" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "locks indicated AI resources of animated pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "LockAIResourcesWithAnimation", sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics
	{
		struct AIBlueprintHelperLibrary_eventSendAIMessage_Parms
		{
			APawn* Target;
			FName Message;
			UObject* MessageSource;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageSource;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventSendAIMessage_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_MessageSource = { "MessageSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, MessageSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_MessageSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_bSuccess", "true" },
		{ "DefaultToSelf", "MessageSource" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "SendAIMessage", sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics
	{
		struct AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms
		{
			AController* Controller;
			const AActor* Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "SimpleMoveToActor", sizeof(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics
	{
		struct AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms
		{
			AController* Controller;
			FVector Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "SimpleMoveToLocation", sizeof(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics
	{
		struct AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<APawn>  PawnClass;
			UBehaviorTree* BehaviorTree;
			FVector Location;
			FRotator Rotation;
			bool bNoCollisionFail;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bNoCollisionFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoCollisionFail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms*)Obj)->bNoCollisionFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail = { "bNoCollisionFail", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_bNoCollisionFail", "false" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "SpawnAIFromClass", sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics
	{
		struct AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bUnlockMovement;
			bool UnlockAILogic;
		};
		static void NewProp_UnlockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlockAILogic;
		static void NewProp_bUnlockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockMovement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->UnlockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic = { "UnlockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->bUnlockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement = { "bUnlockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "DefaultToSelf", "AnimInstance" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, nullptr, "UnlockAIResourcesWithAnimation", sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister()
	{
		return UAIBlueprintHelperLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject, "CreateMoveToProxyObject" }, // 278805477
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController, "GetAIController" }, // 2996405610
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard, "GetBlackboard" }, // 589267710
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath, "GetCurrentPath" }, // 2610756989
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection, "IsValidAIDirection" }, // 3674604684
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation, "IsValidAILocation" }, // 1147762510
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation, "IsValidAIRotation" }, // 2366697297
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation, "LockAIResourcesWithAnimation" }, // 2851803263
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage, "SendAIMessage" }, // 2305073180
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor, "SimpleMoveToActor" }, // 3811322733
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation, "SimpleMoveToLocation" }, // 3313478894
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass, "SpawnAIFromClass" }, // 1814941008
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation, "UnlockAIResourcesWithAnimation" }, // 708559839
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ScriptName", "AIHelperLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBlueprintHelperLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::ClassParams = {
		&UAIBlueprintHelperLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIBlueprintHelperLibrary, 1949478569);
	template<> AIMODULE_API UClass* StaticClass<UAIBlueprintHelperLibrary>()
	{
		return UAIBlueprintHelperLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary(Z_Construct_UClass_UAIBlueprintHelperLibrary, &UAIBlueprintHelperLibrary::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIBlueprintHelperLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBlueprintHelperLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
