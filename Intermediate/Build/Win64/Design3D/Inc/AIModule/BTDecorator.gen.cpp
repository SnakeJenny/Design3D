// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
// End Cross Module References
	void UBTDecorator::StaticRegisterNativesUBTDecorator()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_NoRegister()
	{
		return UBTDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowAbortMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowAbortMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverseCondition_MetaData[];
#endif
		static void NewProp_bInverseCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverseCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTAuxiliaryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTDecorator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "Decorators are supporting nodes placed on parent-child connection, that receive notification about execution flow and can be ticked\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - OnNodeActivation\n - OnNodeDeactivation\n - OnNodeProcessed\n - OnBecomeRelevant (from UBTAuxiliaryNode)\n - OnCeaseRelevant (from UBTAuxiliaryNode)\n - TickNode (from UBTAuxiliaryNode)\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "flow controller settings" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode = { "FlowAbortMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator, FlowAbortMode), Z_Construct_UEnum_AIModule_EBTFlowAbortMode, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTDecorator.h" },
		{ "ToolTip", "if set, condition check result will be inversed" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_SetBit(void* Obj)
	{
		((UBTDecorator*)Obj)->bInverseCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition = { "bInverseCondition", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTDecorator), &Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Statics::NewProp_FlowAbortMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Statics::NewProp_bInverseCondition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Statics::ClassParams = {
		&UBTDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator, 797148480);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator>()
	{
		return UBTDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator(Z_Construct_UClass_UBTDecorator, &UBTDecorator::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
