// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/GameplayTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_EndTask();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTask_ReadyForActivation();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "GenericGameplayTaskDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETaskResourceOverlapPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("ETaskResourceOverlapPolicy"));
		}
		return Singleton;
	}
	template<> GAMEPLAYTASKS_API UEnum* StaticEnum<ETaskResourceOverlapPolicy>()
	{
		return ETaskResourceOverlapPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskResourceOverlapPolicy(ETaskResourceOverlapPolicy_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("ETaskResourceOverlapPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Hash() { return 895422260U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskResourceOverlapPolicy"), 0, Get_Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskResourceOverlapPolicy::StartOnTop", (int64)ETaskResourceOverlapPolicy::StartOnTop },
				{ "ETaskResourceOverlapPolicy::StartAtEnd", (int64)ETaskResourceOverlapPolicy::StartAtEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
				{ "StartAtEnd.ToolTip", "Wait for other same-priority tasks to finish." },
				{ "StartOnTop.ToolTip", "Pause overlapping same-priority tasks." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				nullptr,
				"ETaskResourceOverlapPolicy",
				"ETaskResourceOverlapPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskState"));
		}
		return Singleton;
	}
	template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskState>()
	{
		return EGameplayTaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTaskState(EGameplayTaskState_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("EGameplayTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Hash() { return 3197863960U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTaskState"), 0, Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTaskState::Uninitialized", (int64)EGameplayTaskState::Uninitialized },
				{ "EGameplayTaskState::AwaitingActivation", (int64)EGameplayTaskState::AwaitingActivation },
				{ "EGameplayTaskState::Paused", (int64)EGameplayTaskState::Paused },
				{ "EGameplayTaskState::Active", (int64)EGameplayTaskState::Active },
				{ "EGameplayTaskState::Finished", (int64)EGameplayTaskState::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTask.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				nullptr,
				"EGameplayTaskState",
				"EGameplayTaskState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayResourceSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTASKS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayResourceSet, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("GameplayResourceSet"), sizeof(FGameplayResourceSet), Get_Z_Construct_UScriptStruct_FGameplayResourceSet_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTASKS_API UScriptStruct* StaticStruct<FGameplayResourceSet>()
{
	return FGameplayResourceSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayResourceSet(FGameplayResourceSet::StaticStruct, TEXT("/Script/GameplayTasks"), TEXT("GameplayResourceSet"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet
{
	FScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayResourceSet")),new UScriptStruct::TCppStructOps<FGameplayResourceSet>);
	}
} ScriptStruct_GameplayTasks_StaticRegisterNativesFGameplayResourceSet;
	struct Z_Construct_UScriptStruct_FGameplayResourceSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayResourceSet>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
		nullptr,
		&NewStructOps,
		"GameplayResourceSet",
		sizeof(FGameplayResourceSet),
		alignof(FGameplayResourceSet),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayResourceSet"), sizeof(FGameplayResourceSet), Get_Z_Construct_UScriptStruct_FGameplayResourceSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayResourceSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayResourceSet_Hash() { return 338560825U; }
	void UGameplayTask::StaticRegisterNativesUGameplayTask()
	{
		UClass* Class = UGameplayTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &UGameplayTask::execEndTask },
			{ "ReadyForActivation", &UGameplayTask::execReadyForActivation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_EndTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTasks" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "Called explicitly to end the task (usually by the task itself). Calls OnDestroy.\n    @NOTE: you need to call EndTask before sending out any \"on completed\" delegates.\n    If you don't the task will still be in an \"active\" state while the event receivers may\n    assume it's already \"finished\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "EndTask", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTask_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Gameplay Tasks" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "Called to trigger the actual task once the delegates have been set up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask, nullptr, "ReadyForActivation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ReadyForActivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTask_ReadyForActivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTask_NoRegister()
	{
		return UGameplayTask::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceOverlapPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResourceOverlapPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResourceOverlapPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_EndTask, "EndTask" }, // 2135434681
		{ &Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, "GenericGameplayTaskDelegate__DelegateSignature" }, // 3112797129
		{ &Z_Construct_UFunction_UGameplayTask_ReadyForActivation, "ReadyForActivation" }, // 1031814865
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ExposedAsyncProxy", "" },
		{ "IncludePath", "GameplayTask.h" },
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "child task instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTask, ChildTask), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy = { "ResourceOverlapPolicy", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTask, ResourceOverlapPolicy), Z_Construct_UEnum_GameplayTasks_ETaskResourceOverlapPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTask.h" },
		{ "ToolTip", "This name allows us to find the task later so that we can end it." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayTask, InstanceName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ChildTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_ResourceOverlapPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_Statics::NewProp_InstanceName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTask_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask, IGameplayTaskOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_Statics::ClassParams = {
		&UGameplayTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask, 2212144677);
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask>()
	{
		return UGameplayTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask(Z_Construct_UClass_UGameplayTask, &UGameplayTask::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
