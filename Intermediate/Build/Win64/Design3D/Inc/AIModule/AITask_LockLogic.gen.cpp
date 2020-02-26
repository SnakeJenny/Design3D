// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Tasks/AITask_LockLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_LockLogic() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_LockLogic();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAITask_LockLogic::StaticRegisterNativesUAITask_LockLogic()
	{
	}
	UClass* Z_Construct_UClass_UAITask_LockLogic_NoRegister()
	{
		return UAITask_LockLogic::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_LockLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_LockLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/AITask_LockLogic.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_LockLogic.h" },
		{ "ToolTip", "Locks AI logic until removed by external trigger" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_LockLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_LockLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams = {
		&UAITask_LockLogic::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAITask_LockLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_LockLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAITask_LockLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask_LockLogic, 3170252590);
	template<> AIMODULE_API UClass* StaticClass<UAITask_LockLogic>()
	{
		return UAITask_LockLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask_LockLogic(Z_Construct_UClass_UAITask_LockLogic, &UAITask_LockLogic::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask_LockLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_LockLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
