// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Tasks/AITask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	static UEnum* EAITaskPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAITaskPriority, Z_Construct_UPackage__Script_AIModule(), TEXT("EAITaskPriority"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAITaskPriority>()
	{
		return EAITaskPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAITaskPriority(EAITaskPriority_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAITaskPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAITaskPriority_Hash() { return 3947378644U; }
	UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAITaskPriority"), 0, Get_Z_Construct_UEnum_AIModule_EAITaskPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAITaskPriority::Lowest", (int64)EAITaskPriority::Lowest },
				{ "EAITaskPriority::Low", (int64)EAITaskPriority::Low },
				{ "EAITaskPriority::AutonomousAI", (int64)EAITaskPriority::AutonomousAI },
				{ "EAITaskPriority::High", (int64)EAITaskPriority::High },
				{ "EAITaskPriority::Ultimate", (int64)EAITaskPriority::Ultimate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutonomousAI.ToolTip", "FGameplayTasks::DefaultPriority / 2," },
				{ "High.ToolTip", "FGameplayTasks::DefaultPriority," },
				{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
				{ "Ultimate.ToolTip", "(1.5 * FGameplayTasks::DefaultPriority)," },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EAITaskPriority",
				"EAITaskPriority",
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
	void UAITask::StaticRegisterNativesUAITask()
	{
	}
	UClass* Z_Construct_UClass_UAITask_NoRegister()
	{
		return UAITask::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tasks/AITask.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAITask, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAITask_Statics::ClassParams = {
		&UAITask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAITask_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAITask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask, 3313624324);
	template<> AIMODULE_API UClass* StaticClass<UAITask>()
	{
		return UAITask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask(Z_Construct_UClass_UAITask, &UAITask::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
