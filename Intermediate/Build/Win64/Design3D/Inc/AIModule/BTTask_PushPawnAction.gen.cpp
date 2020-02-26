// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PushPawnAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
// End Cross Module References
	void UBTTask_PushPawnAction::StaticRegisterNativesUBTTask_PushPawnAction()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister()
	{
		return UBTTask_PushPawnAction::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PushPawnAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_PawnActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ToolTip", "Action task node.\nPush pawn action to controller." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Action" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PushPawnAction, Action), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PushPawnAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PushPawnAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams = {
		&UBTTask_PushPawnAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PushPawnAction, 1413275716);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PushPawnAction>()
	{
		return UBTTask_PushPawnAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PushPawnAction(Z_Construct_UClass_UBTTask_PushPawnAction, &UBTTask_PushPawnAction::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PushPawnAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PushPawnAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
