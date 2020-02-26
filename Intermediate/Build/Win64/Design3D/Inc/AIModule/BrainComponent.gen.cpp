// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BrainComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBrainComponent_IsPaused();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBrainComponent_IsRunning();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBrainComponent_RestartLogic();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBrainComponent_StopLogic();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
// End Cross Module References
	void UBrainComponent::StaticRegisterNativesUBrainComponent()
	{
		UClass* Class = UBrainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPaused", &UBrainComponent::execIsPaused },
			{ "IsRunning", &UBrainComponent::execIsRunning },
			{ "RestartLogic", &UBrainComponent::execRestartLogic },
			{ "StopLogic", &UBrainComponent::execStopLogic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrainComponent_IsPaused_Statics
	{
		struct BrainComponent_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BrainComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsPaused", sizeof(BrainComponent_eventIsPaused_Parms), Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_IsRunning_Statics
	{
		struct BrainComponent_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BrainComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsRunning", sizeof(BrainComponent_eventIsRunning_Parms), Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "RestartLogic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_RestartLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_StopLogic_Statics
	{
		struct BrainComponent_eventStopLogic_Parms
		{
			FString Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BrainComponent_eventStopLogic_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StopLogic", sizeof(BrainComponent_eventStopLogic_Parms), Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_StopLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBrainComponent_NoRegister()
	{
		return UBrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainComponent_IsPaused, "IsPaused" }, // 966420841
		{ &Z_Construct_UFunction_UBrainComponent_IsRunning, "IsRunning" }, // 661407186
		{ &Z_Construct_UFunction_UBrainComponent_RestartLogic, "RestartLogic" }, // 4074359633
		{ &Z_Construct_UFunction_UBrainComponent_StopLogic, "StopLogic" }, // 100807488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BrainComponent.h" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "blackboard component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrainComponent, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBrainComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UBrainComponent, IAIResourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrainComponent_Statics::ClassParams = {
		&UBrainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBrainComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrainComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrainComponent, 4017063070);
	template<> AIMODULE_API UClass* StaticClass<UBrainComponent>()
	{
		return UBrainComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrainComponent(Z_Construct_UClass_UBrainComponent, &UBrainComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBrainComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
