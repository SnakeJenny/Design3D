// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConditionalLoop() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ConditionalLoop::StaticRegisterNativesUBTDecorator_ConditionalLoop()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister()
	{
		return UBTDecorator_ConditionalLoop::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "FlowControl Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
		{ "ToolTip", "Conditional loop decorator node.\nA decorator node that loops execution as long as condition is satisfied." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ConditionalLoop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::ClassParams = {
		&UBTDecorator_ConditionalLoop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ConditionalLoop, 371048841);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ConditionalLoop>()
	{
		return UBTDecorator_ConditionalLoop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ConditionalLoop(Z_Construct_UClass_UBTDecorator_ConditionalLoop, &UBTDecorator_ConditionalLoop::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_ConditionalLoop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConditionalLoop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
