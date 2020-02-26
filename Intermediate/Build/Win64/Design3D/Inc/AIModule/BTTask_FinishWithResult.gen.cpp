// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FinishWithResult() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_FinishWithResult_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_FinishWithResult();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
// End Cross Module References
	void UBTTask_FinishWithResult::StaticRegisterNativesUBTTask_FinishWithResult()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_FinishWithResult_NoRegister()
	{
		return UBTTask_FinishWithResult::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_FinishWithResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_FinishWithResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FinishWithResult_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Instantly finishes with given result" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_FinishWithResult.h" },
		{ "ToolTip", "allows adding random time to wait time" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_FinishWithResult, Result), Z_Construct_UEnum_AIModule_EBTNodeResult, METADATA_PARAMS(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FinishWithResult_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_FinishWithResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FinishWithResult>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FinishWithResult_Statics::ClassParams = {
		&UBTTask_FinishWithResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_FinishWithResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_FinishWithResult()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_FinishWithResult_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_FinishWithResult, 3197883416);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_FinishWithResult>()
	{
		return UBTTask_FinishWithResult::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_FinishWithResult(Z_Construct_UClass_UBTTask_FinishWithResult, &UBTTask_FinishWithResult::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_FinishWithResult"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FinishWithResult);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
