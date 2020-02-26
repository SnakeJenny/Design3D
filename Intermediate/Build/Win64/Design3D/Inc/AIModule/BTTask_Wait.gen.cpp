// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_Wait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Wait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_Wait::StaticRegisterNativesUBTTask_Wait()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister()
	{
		return UBTTask_Wait::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Wait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Wait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "Wait task node.\nWait for the specified time when executed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Wait" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "allows adding random time to wait time" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Wait, RandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "Wait" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "wait time in seconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_Wait, WaitTime), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Wait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Wait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Wait_Statics::ClassParams = {
		&UBTTask_Wait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Wait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Wait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Wait, 55094543);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_Wait>()
	{
		return UBTTask_Wait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Wait(Z_Construct_UClass_UBTTask_Wait, &UBTTask_Wait::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_Wait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Wait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
