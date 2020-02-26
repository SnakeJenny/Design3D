// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnActionsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnActionsComponent() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPawnActionStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionStack, Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionStack"), sizeof(FPawnActionStack), Get_Z_Construct_UScriptStruct_FPawnActionStack_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionStack>()
{
	return FPawnActionStack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnActionStack(FPawnActionStack::StaticStruct, TEXT("/Script/AIModule"), TEXT("PawnActionStack"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack
{
	FScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnActionStack")),new UScriptStruct::TCppStructOps<FPawnActionStack>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFPawnActionStack;
	struct Z_Construct_UScriptStruct_FPawnActionStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionStack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction = { "TopAction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnActionStack, TopAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"PawnActionStack",
		sizeof(FPawnActionStack),
		alignof(FPawnActionStack),
		Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnActionStack"), sizeof(FPawnActionStack), Get_Z_Construct_UScriptStruct_FPawnActionStack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPawnActionStack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnActionStack_Hash() { return 1023827899U; }
class UScriptStruct* FPawnActionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionEvent"), sizeof(FPawnActionEvent), Get_Z_Construct_UScriptStruct_FPawnActionEvent_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionEvent>()
{
	return FPawnActionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnActionEvent(FPawnActionEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("PawnActionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnActionEvent")),new UScriptStruct::TCppStructOps<FPawnActionEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFPawnActionEvent;
	struct Z_Construct_UScriptStruct_FPawnActionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnActionEvent, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"PawnActionEvent",
		sizeof(FPawnActionEvent),
		alignof(FPawnActionEvent),
		Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnActionEvent"), sizeof(FPawnActionEvent), Get_Z_Construct_UScriptStruct_FPawnActionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPawnActionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnActionEvent_Hash() { return 1568671119U; }
	void UPawnActionsComponent::StaticRegisterNativesUPawnActionsComponent()
	{
		UClass* Class = UPawnActionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AbortAction", &UPawnActionsComponent::execK2_AbortAction },
			{ "K2_ForceAbortAction", &UPawnActionsComponent::execK2_ForceAbortAction },
			{ "K2_PerformAction", &UPawnActionsComponent::execK2_PerformAction },
			{ "K2_PushAction", &UPawnActionsComponent::execK2_PushAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics
	{
		struct PawnActionsComponent_eventK2_AbortAction_Parms
		{
			UPawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ActionToAbort), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "DisplayName", "AbortAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "AbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, nullptr, "K2_AbortAction", sizeof(PawnActionsComponent_eventK2_AbortAction_Parms), Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics
	{
		struct PawnActionsComponent_eventK2_ForceAbortAction_Parms
		{
			UPawnAction* ActionToAbort;
			TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ActionToAbort), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "DisplayName", "ForceAbortAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "ForceAbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, nullptr, "K2_ForceAbortAction", sizeof(PawnActionsComponent_eventK2_ForceAbortAction_Parms), Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics
	{
		struct PawnActionsComponent_eventK2_PerformAction_Parms
		{
			APawn* Pawn;
			UPawnAction* Action;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PawnActionsComponent_eventK2_PerformAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), &Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "CPP_Default_Priority", "HardScript" },
		{ "DisplayName", "PerformAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PerformAction" },
		{ "ToolTip", "blueprint interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, nullptr, "K2_PerformAction", sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics
	{
		struct PawnActionsComponent_eventK2_PushAction_Parms
		{
			UPawnAction* NewAction;
			TEnumAsByte<EAIRequestPriority::Type> Priority;
			UObject* Instigator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PawnActionsComponent_eventK2_PushAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PushAction_Parms), &Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, NewAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "CPP_Default_Instigator", "None" },
		{ "DisplayName", "PushAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PushAction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnActionsComponent, nullptr, "K2_PushAction", sizeof(PawnActionsComponent_eventK2_PushAction_Parms), Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister()
	{
		return UPawnActionsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnActionsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionStacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionStacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionStacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnActionsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnActionsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnActionsComponent_K2_AbortAction, "K2_AbortAction" }, // 2812799132
		{ &Z_Construct_UFunction_UPawnActionsComponent_K2_ForceAbortAction, "K2_ForceAbortAction" }, // 4206270620
		{ &Z_Construct_UFunction_UPawnActionsComponent_K2_PerformAction, "K2_PerformAction" }, // 2669101036
		{ &Z_Construct_UFunction_UPawnActionsComponent_K2_PushAction, "K2_PushAction" }, // 1030410582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnActionsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnActionsComponent.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnActionsComponent, CurrentAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_CurrentAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_CurrentAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents = { "ActionEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnActionsComponent, ActionEvents), METADATA_PARAMS(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents_Inner = { "ActionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPawnActionEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks = { "ActionStacks", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnActionsComponent, ActionStacks), METADATA_PARAMS(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks_Inner = { "ActionStacks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPawnActionStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "Category", "PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnActionsComponent, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ControlledPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnActionsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_CurrentAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ActionStacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnActionsComponent_Statics::NewProp_ControlledPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnActionsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnActionsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnActionsComponent_Statics::ClassParams = {
		&UPawnActionsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnActionsComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnActionsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnActionsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnActionsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnActionsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnActionsComponent, 572263663);
	template<> AIMODULE_API UClass* StaticClass<UPawnActionsComponent>()
	{
		return UPawnActionsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnActionsComponent(Z_Construct_UClass_UPawnActionsComponent, &UPawnActionsComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnActionsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnActionsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
