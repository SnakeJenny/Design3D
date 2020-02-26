// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Loop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Loop() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Loop();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_Loop::StaticRegisterNativesUBTDecorator_Loop()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Loop_NoRegister()
	{
		return UBTDecorator_Loop::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_Loop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfiniteLoopTimeoutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InfiniteLoopTimeoutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfiniteLoop_MetaData[];
#endif
		static void NewProp_bInfiniteLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfiniteLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoops;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_Loop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Loop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "Loop decorator node.\nA decorator node that bases its condition on whether its loop counter has been exceeded." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime_MetaData[] = {
		{ "Category", "Decorator" },
		{ "EditCondition", "bInfiniteLoop" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "timeout (when looping infinitely, when we finish a loop we will check whether we have spent this time looping, if we have we will stop looping). A negative value means loop forever." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime = { "InfiniteLoopTimeoutTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Loop, InfiniteLoopTimeoutTime), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "infinite loop" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_SetBit(void* Obj)
	{
		((UBTDecorator_Loop*)Obj)->bInfiniteLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop = { "bInfiniteLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_Loop), &Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops_MetaData[] = {
		{ "Category", "Decorator" },
		{ "EditCondition", "!bInfiniteLoop" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Loop.h" },
		{ "ToolTip", "number of executions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Loop, NumLoops), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_InfiniteLoopTimeoutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_bInfiniteLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Loop_Statics::NewProp_NumLoops,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_Loop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Loop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Loop_Statics::ClassParams = {
		&UBTDecorator_Loop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Loop_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Loop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_Loop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_Loop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_Loop, 1378285210);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Loop>()
	{
		return UBTDecorator_Loop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Loop(Z_Construct_UClass_UBTDecorator_Loop, &UBTDecorator_Loop::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_Loop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Loop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
