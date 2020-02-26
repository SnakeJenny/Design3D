// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/AISystemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystemBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void UAISystemBase::StaticRegisterNativesUAISystemBase()
	{
	}
	UClass* Z_Construct_UClass_UAISystemBase_NoRegister()
	{
		return UAISystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UAISystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstantiateAISystemOnClient_MetaData[];
#endif
		static void NewProp_bInstantiateAISystemOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstantiateAISystemOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystemModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AISystemModuleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystemClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AISystemClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AISystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
	};
#endif
	void Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_SetBit(void* Obj)
	{
		((UAISystemBase*)Obj)->bInstantiateAISystemOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient = { "bInstantiateAISystemOnClient", nullptr, (EPropertyFlags)0x0040000002044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISystemBase), &Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName_MetaData[] = {
		{ "DisplayName", "AISystem Module" },
		{ "MetaClass", "AISystem" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName = { "AISystemModuleName", nullptr, (EPropertyFlags)0x0040000002044000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystemBase, AISystemModuleName), METADATA_PARAMS(Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName_MetaData[] = {
		{ "DisplayName", "AISystem Class" },
		{ "MetaClass", "AISystem" },
		{ "ModuleRelativePath", "Classes/AI/AISystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName = { "AISystemClassName", nullptr, (EPropertyFlags)0x0040000002044000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISystemBase, AISystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISystemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_bInstantiateAISystemOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemModuleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystemBase_Statics::NewProp_AISystemClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISystemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISystemBase_Statics::ClassParams = {
		&UAISystemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISystemBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::PropPointers),
		0,
		0x001000A7u,
		METADATA_PARAMS(Z_Construct_UClass_UAISystemBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISystemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISystemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISystemBase, 1995517784);
	template<> ENGINE_API UClass* StaticClass<UAISystemBase>()
	{
		return UAISystemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISystemBase(Z_Construct_UClass_UAISystemBase, &UAISystemBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAISystemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
