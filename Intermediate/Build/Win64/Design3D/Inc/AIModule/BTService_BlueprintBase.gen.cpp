// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Services/BTService_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI();
// End Cross Module References
	static FName NAME_UBTService_BlueprintBase_ReceiveActivation = FName(TEXT("ReceiveActivation"));
	void UBTService_BlueprintBase::ReceiveActivation(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveActivation_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivation),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveActivationAI = FName(TEXT("ReceiveActivationAI"));
	void UBTService_BlueprintBase::ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveActivationAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveActivationAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveDeactivation = FName(TEXT("ReceiveDeactivation"));
	void UBTService_BlueprintBase::ReceiveDeactivation(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveDeactivation_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivation),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveDeactivationAI = FName(TEXT("ReceiveDeactivationAI"));
	void UBTService_BlueprintBase::ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveDeactivationAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveDeactivationAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveSearchStart = FName(TEXT("ReceiveSearchStart"));
	void UBTService_BlueprintBase::ReceiveSearchStart(AActor* OwnerActor)
	{
		BTService_BlueprintBase_eventReceiveSearchStart_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStart),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveSearchStartAI = FName(TEXT("ReceiveSearchStartAI"));
	void UBTService_BlueprintBase::ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTService_BlueprintBase_eventReceiveSearchStartAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveSearchStartAI),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTService_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTService_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTService_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTService_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTService_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTService_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTService_BlueprintBase::StaticRegisterNativesUBTService_BlueprintBase()
	{
		UClass* Class = UBTService_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsServiceActive", &UBTService_BlueprintBase::execIsServiceActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics
	{
		struct BTService_BlueprintBase_eventIsServiceActive_Parms
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
	void Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTService_BlueprintBase_eventIsServiceActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BTService_BlueprintBase_eventIsServiceActive_Parms), &Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "check if service is currently being active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "IsServiceActive", sizeof(BTService_BlueprintBase_eventIsServiceActive_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "service became active\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveActivation", sizeof(BTService_BlueprintBase_eventReceiveActivation_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveActivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveActivation function.\n    @see ReceiveActivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveActivationAI", sizeof(BTService_BlueprintBase_eventReceiveActivationAI_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivation_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "service became inactive\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveDeactivation", sizeof(BTService_BlueprintBase_eventReceiveDeactivation_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveDeactivation function.\n    @see ReceiveDeactivation for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveDeactivationAI", sizeof(BTService_BlueprintBase_eventReceiveDeactivationAI_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStart_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "task search enters branch of tree\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveSearchStart", sizeof(BTService_BlueprintBase_eventReceiveSearchStart_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveSearchStart function.\n    @see ReceiveSearchStart for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveSearchStartAI", sizeof(BTService_BlueprintBase_eventReceiveSearchStartAI_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveTick", sizeof(BTService_BlueprintBase_eventReceiveTick_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BTService_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveTick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTService_BlueprintBase, nullptr, "ReceiveTickAI", sizeof(BTService_BlueprintBase_eventReceiveTickAI_Parms), Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTService_BlueprintBase_NoRegister()
	{
		return UBTService_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEventDetails_MetaData[];
#endif
		static void NewProp_bShowEventDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEventDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[];
#endif
		static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTService_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_IsServiceActive, "IsServiceActive" }, // 2554040409
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivation, "ReceiveActivation" }, // 3258416907
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveActivationAI, "ReceiveActivationAI" }, // 3284272346
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivation, "ReceiveDeactivation" }, // 2160304753
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveDeactivationAI, "ReceiveDeactivationAI" }, // 2641687871
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStart, "ReceiveSearchStart" }, // 2695149479
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveSearchStartAI, "ReceiveSearchStartAI" }, // 257891585
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 4023915634
		{ &Z_Construct_UFunction_UBTService_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 2054574770
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!\n\nWhen service receives Deactivation event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Activation, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsServiceActive() when in doubt." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about implemented events" },
	};
#endif
	void Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_SetBit(void* Obj)
	{
		((UBTService_BlueprintBase*)Obj)->bShowEventDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails = { "bShowEventDetails", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTService_BlueprintBase), &Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
	{
		((UBTService_BlueprintBase*)Obj)->bShowPropertyDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails = { "bShowPropertyDetails", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTService_BlueprintBase), &Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner = { "ActorOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowEventDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_bShowPropertyDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_ActorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlueprintBase_Statics::NewProp_AIOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BlueprintBase_Statics::ClassParams = {
		&UBTService_BlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_BlueprintBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_BlueprintBase, 586813140);
	template<> AIMODULE_API UClass* StaticClass<UBTService_BlueprintBase>()
	{
		return UBTService_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_BlueprintBase(Z_Construct_UClass_UBTService_BlueprintBase, &UBTService_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
