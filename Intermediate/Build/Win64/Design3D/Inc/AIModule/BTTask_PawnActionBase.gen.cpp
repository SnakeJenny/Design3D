// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PawnActionBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_PawnActionBase::StaticRegisterNativesUBTTask_PawnActionBase()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PawnActionBase_NoRegister()
	{
		return UBTTask_PawnActionBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PawnActionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PawnActionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PawnActionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PawnActionBase.h" },
		{ "ToolTip", "Base class for managing pawn actions\n\nTask will set itself as action observer before pushing it to AI Controller,\noverride OnActionEvent if you need any special event handling.\n\nPlease use result returned by PushAction for ExecuteTask function." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PawnActionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PawnActionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PawnActionBase_Statics::ClassParams = {
		&UBTTask_PawnActionBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PawnActionBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PawnActionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PawnActionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PawnActionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PawnActionBase, 494287582);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PawnActionBase>()
	{
		return UBTTask_PawnActionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PawnActionBase(Z_Construct_UClass_UBTTask_PawnActionBase, &UBTTask_PawnActionBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PawnActionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PawnActionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
