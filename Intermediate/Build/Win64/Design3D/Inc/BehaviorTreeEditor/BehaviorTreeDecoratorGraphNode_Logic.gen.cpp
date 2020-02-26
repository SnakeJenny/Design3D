// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BehaviorTreeDecoratorGraphNode_Logic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeDecoratorGraphNode_Logic() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UEnum* Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode();
// End Cross Module References
	static UEnum* EDecoratorLogicMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode, Z_Construct_UPackage__Script_BehaviorTreeEditor(), TEXT("EDecoratorLogicMode"));
		}
		return Singleton;
	}
	template<> BEHAVIORTREEEDITOR_API UEnum* StaticEnum<EDecoratorLogicMode::Type>()
	{
		return EDecoratorLogicMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecoratorLogicMode(EDecoratorLogicMode_StaticEnum, TEXT("/Script/BehaviorTreeEditor"), TEXT("EDecoratorLogicMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Hash() { return 1739898059U; }
	UEnum* Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BehaviorTreeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecoratorLogicMode"), 0, Get_Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDecoratorLogicMode::Sink", (int64)EDecoratorLogicMode::Sink },
				{ "EDecoratorLogicMode::And", (int64)EDecoratorLogicMode::And },
				{ "EDecoratorLogicMode::Or", (int64)EDecoratorLogicMode::Or },
				{ "EDecoratorLogicMode::Not", (int64)EDecoratorLogicMode::Not },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
				nullptr,
				"EDecoratorLogicMode",
				"EDecoratorLogicMode::Type",
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
	void UBehaviorTreeDecoratorGraphNode_Logic::StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Logic()
	{
	}
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_NoRegister()
	{
		return UBehaviorTreeDecoratorGraphNode_Logic::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogicMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogicMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeDecoratorGraphNode_Logic.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Logic.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode = { "LogicMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBehaviorTreeDecoratorGraphNode_Logic, LogicMode), Z_Construct_UEnum_BehaviorTreeEditor_EDecoratorLogicMode, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::NewProp_LogicMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeDecoratorGraphNode_Logic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::ClassParams = {
		&UBehaviorTreeDecoratorGraphNode_Logic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBehaviorTreeDecoratorGraphNode_Logic, 2218725975);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeDecoratorGraphNode_Logic>()
	{
		return UBehaviorTreeDecoratorGraphNode_Logic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBehaviorTreeDecoratorGraphNode_Logic(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Logic, &UBehaviorTreeDecoratorGraphNode_Logic::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBehaviorTreeDecoratorGraphNode_Logic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeDecoratorGraphNode_Logic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
