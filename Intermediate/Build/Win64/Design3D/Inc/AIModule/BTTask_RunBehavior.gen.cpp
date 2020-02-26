// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RunBehavior() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunBehavior();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void UBTTask_RunBehavior::StaticRegisterNativesUBTTask_RunBehavior()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_RunBehavior_NoRegister()
	{
		return UBTTask_RunBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RunBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RunBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "RunBehavior task allows pushing subtrees on execution stack.\nSubtree asset can't be changed in runtime!\n\nThis limitation is caused by support for subtree's root level decorators,\nwhich are injected into parent tree, and structure of running tree\ncannot be modified in runtime (see: BTNode: ExecutionIndex, MemoryOffset)\n\nUse RunBehaviorDynamic task for subtrees that need to be changed in runtime." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h" },
		{ "ToolTip", "behavior to run" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_RunBehavior, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_RunBehavior_Statics::NewProp_BehaviorAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RunBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RunBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams = {
		&UBTTask_RunBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_RunBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RunBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_RunBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_RunBehavior, 3625164747);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_RunBehavior>()
	{
		return UBTTask_RunBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_RunBehavior(Z_Construct_UClass_UBTTask_RunBehavior, &UBTTask_RunBehavior::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_RunBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RunBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
