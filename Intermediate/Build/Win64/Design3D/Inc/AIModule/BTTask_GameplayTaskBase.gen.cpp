// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GameplayTaskBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_GameplayTaskBase::StaticRegisterNativesUBTTask_GameplayTaskBase()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase_NoRegister()
	{
		return UBTTask_GameplayTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForGameplayTask_MetaData[];
#endif
		static void NewProp_bWaitForGameplayTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForGameplayTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ToolTip", "Base class for managing gameplay tasks\nSince AITask doesn't have any kind of success/failed results, default implemenation will only return EBTNode::Succeeded\n\nIn your ExecuteTask:\n- use NewBTAITask() helper to create task\n- initialize task with values if needed\n- use StartGameplayTask() helper to execute and get node result" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_GameplayTaskBase.h" },
		{ "ToolTip", "if set, behavior tree task will wait until gameplay tasks finishes" },
	};
#endif
	void Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_SetBit(void* Obj)
	{
		((UBTTask_GameplayTaskBase*)Obj)->bWaitForGameplayTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask = { "bWaitForGameplayTask", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_GameplayTaskBase), &Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::NewProp_bWaitForGameplayTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GameplayTaskBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::ClassParams = {
		&UBTTask_GameplayTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_GameplayTaskBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_GameplayTaskBase, 3073488126);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_GameplayTaskBase>()
	{
		return UBTTask_GameplayTaskBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_GameplayTaskBase(Z_Construct_UClass_UBTTask_GameplayTaskBase, &UBTTask_GameplayTaskBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_GameplayTaskBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GameplayTaskBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
