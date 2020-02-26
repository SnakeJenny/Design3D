// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveDirectlyToward() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_MoveDirectlyToward::StaticRegisterNativesUBTTask_MoveDirectlyToward()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward_NoRegister()
	{
		return UBTTask_MoveDirectlyToward::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatedDeprecatedProperties_MetaData[];
#endif
		static void NewProp_bUpdatedDeprecatedProperties_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatedDeprecatedProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProjectVectorGoalToNavigation_MetaData[];
#endif
		static void NewProp_bProjectVectorGoalToNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectVectorGoalToNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData[];
#endif
		static void NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablePathUpdateOnGoalLocationChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
		{ "ToolTip", "Move Directly Toward task node.\nMoves the AI pawn toward the specified Actor or Location (Vector) blackboard entry in a straight line, without regard to any navigation system. If you need the AI to navigate, use the \"Move To\" node instead." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_SetBit(void* Obj)
	{
		((UBTTask_MoveDirectlyToward*)Obj)->bUpdatedDeprecatedProperties = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties = { "bUpdatedDeprecatedProperties", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_SetBit(void* Obj)
	{
		((UBTTask_MoveDirectlyToward*)Obj)->bProjectVectorGoalToNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation = { "bProjectVectorGoalToNavigation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit(void* Obj)
	{
		((UBTTask_MoveDirectlyToward*)Obj)->bDisablePathUpdateOnGoalLocationChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange = { "bDisablePathUpdateOnGoalLocationChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_MoveDirectlyToward), &Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bUpdatedDeprecatedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bProjectVectorGoalToNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::NewProp_bDisablePathUpdateOnGoalLocationChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveDirectlyToward>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::ClassParams = {
		&UBTTask_MoveDirectlyToward::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveDirectlyToward()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MoveDirectlyToward_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveDirectlyToward, 3821045908);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_MoveDirectlyToward>()
	{
		return UBTTask_MoveDirectlyToward::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveDirectlyToward(Z_Construct_UClass_UBTTask_MoveDirectlyToward, &UBTTask_MoveDirectlyToward::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_MoveDirectlyToward"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveDirectlyToward);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
