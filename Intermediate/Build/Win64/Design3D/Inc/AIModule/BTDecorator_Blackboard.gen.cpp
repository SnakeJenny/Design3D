// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Blackboard() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
// End Cross Module References
	static UEnum* EBTBlackboardRestart_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTBlackboardRestart, Z_Construct_UPackage__Script_AIModule(), TEXT("EBTBlackboardRestart"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTBlackboardRestart::Type>()
	{
		return EBTBlackboardRestart_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBTBlackboardRestart(EBTBlackboardRestart_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBTBlackboardRestart"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Hash() { return 1075172429U; }
	UEnum* Z_Construct_UEnum_AIModule_EBTBlackboardRestart()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBTBlackboardRestart"), 0, Get_Z_Construct_UEnum_AIModule_EBTBlackboardRestart_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBTBlackboardRestart::ValueChange", (int64)EBTBlackboardRestart::ValueChange },
				{ "EBTBlackboardRestart::ResultChange", (int64)EBTBlackboardRestart::ResultChange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
				{ "ResultChange.DisplayName", "On Result Change" },
				{ "ResultChange.ToolTip", "Restart only when result of evaluated condition is changed" },
				{ "ToolTip", "Decorator for accessing blackboard values" },
				{ "ValueChange.DisplayName", "On Value Change" },
				{ "ValueChange.ToolTip", "Restart on every change of observed blackboard value" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EBTBlackboardRestart",
				"EBTBlackboardRestart::Type",
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
	void UBTDecorator_Blackboard::StaticRegisterNativesUBTDecorator_Blackboard()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard_NoRegister()
	{
		return UBTDecorator_Blackboard::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArithmeticOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArithmeticOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasicOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BasicOperation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyObserver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "Blackboard decorator node.\nA decorator node that bases its condition on a Blackboard key." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation = { "TextOperation", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, TextOperation), Z_Construct_UEnum_AIModule_ETextKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation = { "ArithmeticOperation", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, ArithmeticOperation), Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Query" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation = { "BasicOperation", nullptr, (EPropertyFlags)0x0020080800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, BasicOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData[] = {
		{ "Category", "FlowControl" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "when observer can try to request abort?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver = { "NotifyObserver", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, NotifyObserver), Z_Construct_UEnum_AIModule_EBTBlackboardRestart, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "operation type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, OperationType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "cached description" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, CachedDescription), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for string operations" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, StringValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "DisplayName", "Key Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_Blackboard.h" },
		{ "ToolTip", "value for arithmetic operations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_Blackboard, IntValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_TextOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_ArithmeticOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_BasicOperation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_NotifyObserver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_CachedDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Blackboard_Statics::NewProp_IntValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_Blackboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Blackboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams = {
		&UBTDecorator_Blackboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Blackboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_Blackboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_Blackboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_Blackboard, 347153906);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_Blackboard>()
	{
		return UBTDecorator_Blackboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Blackboard(Z_Construct_UClass_UBTDecorator_Blackboard, &UBTDecorator_Blackboard::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_Blackboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Blackboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
