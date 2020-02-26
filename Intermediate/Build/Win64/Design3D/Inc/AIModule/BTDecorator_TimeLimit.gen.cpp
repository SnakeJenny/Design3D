// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TimeLimit() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_TimeLimit::StaticRegisterNativesUBTDecorator_TimeLimit()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_TimeLimit_NoRegister()
	{
		return UBTDecorator_TimeLimit::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_TimeLimit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ToolTip", "Time Limit decorator node.\nA decorator node that bases its condition on whether a timer has exceeded a specified value. The timer is reset each time the node becomes relevant." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TimeLimit.h" },
		{ "ToolTip", "max allowed time for execution of underlying node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_TimeLimit, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::NewProp_TimeLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_TimeLimit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::ClassParams = {
		&UBTDecorator_TimeLimit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_TimeLimit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_TimeLimit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_TimeLimit, 1911524580);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_TimeLimit>()
	{
		return UBTDecorator_TimeLimit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_TimeLimit(Z_Construct_UClass_UBTDecorator_TimeLimit, &UBTDecorator_TimeLimit::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_TimeLimit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TimeLimit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
