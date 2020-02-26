// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsBBEntryOfClass() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBTDecorator_IsBBEntryOfClass::StaticRegisterNativesUBTDecorator_IsBBEntryOfClass()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_NoRegister()
	{
		return UBTDecorator_IsBBEntryOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TestClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_IsBBEntryOfClass.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass = { "TestClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsBBEntryOfClass, TestClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::NewProp_TestClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsBBEntryOfClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams = {
		&UBTDecorator_IsBBEntryOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsBBEntryOfClass, 3445478670);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_IsBBEntryOfClass>()
	{
		return UBTDecorator_IsBBEntryOfClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsBBEntryOfClass(Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass, &UBTDecorator_IsBBEntryOfClass::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_IsBBEntryOfClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsBBEntryOfClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
