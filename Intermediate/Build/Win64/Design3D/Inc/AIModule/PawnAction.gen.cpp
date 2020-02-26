// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_CreateActionInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_Finish();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnAction_GetActionPriority();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnActionsComponent_NoRegister();
// End Cross Module References
	static UEnum* EPawnActionFailHandling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionFailHandling, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionFailHandling"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionFailHandling::Type>()
	{
		return EPawnActionFailHandling_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionFailHandling(EPawnActionFailHandling_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionFailHandling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Hash() { return 208629586U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionFailHandling"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionFailHandling::RequireSuccess", (int64)EPawnActionFailHandling::RequireSuccess },
				{ "EPawnActionFailHandling::IgnoreFailure", (int64)EPawnActionFailHandling::IgnoreFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPawnActionFailHandling",
				"EPawnActionFailHandling::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPawnSubActionTriggeringPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnSubActionTriggeringPolicy"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnSubActionTriggeringPolicy::Type>()
	{
		return EPawnSubActionTriggeringPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnSubActionTriggeringPolicy(EPawnSubActionTriggeringPolicy_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnSubActionTriggeringPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Hash() { return 2123897387U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnSubActionTriggeringPolicy"), 0, Get_Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnSubActionTriggeringPolicy::CopyBeforeTriggering", (int64)EPawnSubActionTriggeringPolicy::CopyBeforeTriggering },
				{ "EPawnSubActionTriggeringPolicy::ReuseInstances", (int64)EPawnSubActionTriggeringPolicy::ReuseInstances },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPawnSubActionTriggeringPolicy",
				"EPawnSubActionTriggeringPolicy::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UPawnAction::StaticRegisterNativesUPawnAction()
	{
		UClass* Class = UPawnAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateActionInstance", &UPawnAction::execCreateActionInstance },
			{ "Finish", &UPawnAction::execFinish },
			{ "GetActionPriority", &UPawnAction::execGetActionPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics
	{
		struct PawnAction_eventCreateActionInstance_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UPawnAction>  ActionClass;
			UPawnAction* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ReturnValue), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ActionClass), Z_Construct_UClass_UPawnAction_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_ActionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, nullptr, "CreateActionInstance", sizeof(PawnAction_eventCreateActionInstance_Parms), Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_CreateActionInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_CreateActionInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_Finish_Statics
	{
		struct PawnAction_eventFinish_Parms
		{
			TEnumAsByte<EPawnActionResult::Type> WithResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WithResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnAction_Finish_Statics::NewProp_WithResult = { "WithResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_eventFinish_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_Finish_Statics::NewProp_WithResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, nullptr, "Finish", sizeof(PawnAction_eventFinish_Parms), Z_Construct_UFunction_UPawnAction_Finish_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_Finish_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics
	{
		struct PawnAction_eventGetActionPriority_Parms
		{
			TEnumAsByte<EAIRequestPriority::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PawnAction_eventGetActionPriority_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Blueprint interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnAction, nullptr, "GetActionPriority", sizeof(PawnAction_eventGetActionPriority_Parms), Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnAction_GetActionPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnAction_GetActionPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnAction_NoRegister()
	{
		return UPawnAction::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysNotifyOnFinished_MetaData[];
#endif
		static void NewProp_bAlwaysNotifyOnFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysNotifyOnFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseMovement_MetaData[];
#endif
		static void NewProp_bShouldPauseMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplaceActiveSameClassInstance_MetaData[];
#endif
		static void NewProp_bReplaceActiveSameClassInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplaceActiveSameClassInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNewSameClassInstance_MetaData[];
#endif
		static void NewProp_bAllowNewSameClassInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNewSameClassInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnAction_CreateActionInstance, "CreateActionInstance" }, // 982177271
		{ &Z_Construct_UFunction_UPawnAction_Finish, "Finish" }, // 1189902299
		{ &Z_Construct_UFunction_UPawnAction_GetActionPriority, "GetActionPriority" }, // 2629281744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Things to remember:\n* Actions are created paused" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if set, action will call OnFinished notify even when ending as FailedToStart" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_SetBit(void* Obj)
	{
		((UPawnAction*)Obj)->bAlwaysNotifyOnFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished = { "bAlwaysNotifyOnFinished", nullptr, (EPropertyFlags)0x00200c0000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction), &Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "this is a temporary solution to allow having movement action running in background while there's\n    another action on top doing its thing\n    @note should go away once AI resource locking comes on-line" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement_SetBit(void* Obj)
	{
		((UPawnAction*)Obj)->bShouldPauseMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement = { "bShouldPauseMovement", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction), &Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if this is TRUE, when we try to push a new instance of an action who has the\n    same class as the action on the top of the stack, pop the one on the stack, and push the new one\n    NOTE: This trumps bAllowNewClassInstance (e.g. if this is true and bAllowNewClassInstance\n    is false the active instance will still be replaced)" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_SetBit(void* Obj)
	{
		((UPawnAction*)Obj)->bReplaceActiveSameClassInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance = { "bReplaceActiveSameClassInstance", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction), &Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if this is FALSE and we're trying to push a new instance of a given class,\n    but the top of the stack is already an instance of that class ignore the attempted push" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance_SetBit(void* Obj)
	{
		((UPawnAction*)Obj)->bAllowNewSameClassInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance = { "bAllowNewSameClassInstance", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction), &Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_BrainComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "@Note: THIS IS HERE _ONLY_ BECAUSE OF THE WAY AI MESSAGING IS CURRENTLY IMPLEMENTED. WILL GO AWAY!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_BrainComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_BrainComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "indicates an object that caused this action. Used for mass removal of actions\n    by specific object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_Instigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Extra reference to the component this action is being governed by" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction, OwnerComponent), Z_Construct_UClass_UPawnActionsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_OwnerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_OwnerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_ParentAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_ParentAction = { "ParentAction", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction, ParentAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_ParentAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_ParentAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Statics::NewProp_ChildAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Current child node executing on top of this Action" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Statics::NewProp_ChildAction = { "ChildAction", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction, ChildAction), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::NewProp_ChildAction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::NewProp_ChildAction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_bAlwaysNotifyOnFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_bShouldPauseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_bReplaceActiveSameClassInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_bAllowNewSameClassInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_BrainComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_OwnerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_ParentAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Statics::NewProp_ChildAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Statics::ClassParams = {
		&UPawnAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnAction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction, 2703963649);
	template<> AIMODULE_API UClass* StaticClass<UPawnAction>()
	{
		return UPawnAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction(Z_Construct_UClass_UPawnAction, &UPawnAction::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
