// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Services/BTService_BlackboardBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_BlackboardBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_BlackboardBase::StaticRegisterNativesUBTService_BlackboardBase()
	{
	}
	UClass* Z_Construct_UClass_UBTService_BlackboardBase_NoRegister()
	{
		return UBTService_BlackboardBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_BlackboardBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_BlackboardBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlackboardBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Services/BTService_BlackboardBase.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlackboardBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Services/BTService_BlackboardBase.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_BlackboardBase_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_BlackboardBase, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlackboardBase_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_BlackboardBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_BlackboardBase_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_BlackboardBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_BlackboardBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_BlackboardBase_Statics::ClassParams = {
		&UBTService_BlackboardBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_BlackboardBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTService_BlackboardBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_BlackboardBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTService_BlackboardBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_BlackboardBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_BlackboardBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_BlackboardBase, 3334634311);
	template<> AIMODULE_API UClass* StaticClass<UBTService_BlackboardBase>()
	{
		return UBTService_BlackboardBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_BlackboardBase(Z_Construct_UClass_UBTService_BlackboardBase, &UBTService_BlackboardBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTService_BlackboardBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_BlackboardBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
