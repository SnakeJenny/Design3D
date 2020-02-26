// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EBTFlowAbortMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTFlowAbortMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTFlowAbortMode"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTFlowAbortMode::Type>()
	{
		return EBTFlowAbortMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTFlowAbortMode(EBTFlowAbortMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTFlowAbortMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Hash() { return 1068598240U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTFlowAbortMode"), 0, Get_Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTFlowAbortMode::None", (int64)EBTFlowAbortMode::None },
				{ "EBTFlowAbortMode::LowerPriority", (int64)EBTFlowAbortMode::LowerPriority },
				{ "EBTFlowAbortMode::Self", (int64)EBTFlowAbortMode::Self },
				{ "EBTFlowAbortMode::Both", (int64)EBTFlowAbortMode::Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.DisplayName", "Both" },
				{ "LowerPriority.DisplayName", "Lower Priority" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "None.DisplayName", "Nothing" },
				{ "Self.DisplayName", "Self" },
				{ "ToolTip", "keep in sync with DescribeFlowAbortMode()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTFlowAbortMode",
				"EBTFlowAbortMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBTNodeResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTNodeResult"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTNodeResult::Type>()
	{
		return EBTNodeResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTNodeResult(EBTNodeResult_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTNodeResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTNodeResult_Hash() { return 1618731326U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTNodeResult"), 0, Get_Z_Construct_UEnum_AIModule_EBTNodeResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTNodeResult::Succeeded", (int64)EBTNodeResult::Succeeded },
				{ "EBTNodeResult::Failed", (int64)EBTNodeResult::Failed },
				{ "EBTNodeResult::Aborted", (int64)EBTNodeResult::Aborted },
				{ "EBTNodeResult::InProgress", (int64)EBTNodeResult::InProgress },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.ToolTip", "finished as failure" },
				{ "BlueprintType", "true" },
				{ "Failed.ToolTip", "finished as success" },
				{ "InProgress.ToolTip", "finished aborting = failure" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
				{ "ToolTip", "keep in sync with DescribeNodeResult()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTNodeResult",
				"EBTNodeResult::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBlackboardKeySelector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardKeySelector, Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardKeySelector"), sizeof(FBlackboardKeySelector), Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardKeySelector>()
{
	return FBlackboardKeySelector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlackboardKeySelector(FBlackboardKeySelector::StaticStruct, TEXT("/Script/AIModule"), TEXT("BlackboardKeySelector"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector
{
	FScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlackboardKeySelector")),new UScriptStruct::TCppStructOps<FBlackboardKeySelector>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFBlackboardKeySelector;
	struct Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoneIsAllowedValue_MetaData[];
#endif
		static void NewProp_bNoneIsAllowedValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoneIsAllowedValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectedKeyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SelectedKeyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SelectedKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllowedTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "helper struct for defining types of allowed blackboard entries\n(e.g. only entries holding points and objects derived form actor class)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardKeySelector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit(void* Obj)
	{
		((FBlackboardKeySelector*)Obj)->bNoneIsAllowedValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue = { "bNoneIsAllowedValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlackboardKeySelector), &Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "ID of selected key" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID = { "SelectedKeyID", nullptr, (EPropertyFlags)0x0020080000002805, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyID), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "class of selected key" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType = { "SelectedKeyType", nullptr, (EPropertyFlags)0x0014000000002805, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyType), Z_Construct_UClass_UBlackboardKeyType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "name of selected key" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName = { "SelectedKeyName", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "array of allowed types with additional properties (e.g. uobject's base class)\nEditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData()" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlackboardKeySelector, AllowedTypes), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner = { "AllowedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BlackboardKeySelector",
		sizeof(FBlackboardKeySelector),
		alignof(FBlackboardKeySelector),
		Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlackboardKeySelector"), sizeof(FBlackboardKeySelector), Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlackboardKeySelector_Hash() { return 320539459U; }
	void UBehaviorTreeTypes::StaticRegisterNativesUBehaviorTreeTypes()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister()
	{
		return UBehaviorTreeTypes::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeTypes.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams = {
		&UBehaviorTreeTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeTypes, 460119792);
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeTypes>()
	{
		return UBehaviorTreeTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeTypes(Z_Construct_UClass_UBehaviorTreeTypes, &UBehaviorTreeTypes::StaticClass, TEXT("/Script/AIModule"), TEXT("UBehaviorTreeTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
