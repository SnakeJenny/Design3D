// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasksEditor/Classes/K2Node_LatentGameplayTaskCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LatentGameplayTaskCall() {}
// Cross Module References
	GAMEPLAYTASKSEDITOR_API UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_NoRegister();
	GAMEPLAYTASKSEDITOR_API UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasksEditor();
// End Cross Module References
	void UK2Node_LatentGameplayTaskCall::StaticRegisterNativesUK2Node_LatentGameplayTaskCall()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_NoRegister()
	{
		return UK2Node_LatentGameplayTaskCall::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnParamPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnParamPins;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnParamPins_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasksEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_LatentGameplayTaskCall.h" },
		{ "ModuleRelativePath", "Classes/K2Node_LatentGameplayTaskCall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_LatentGameplayTaskCall.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins = { "SpawnParamPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_LatentGameplayTaskCall, SpawnParamPins), METADATA_PARAMS(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins_Inner = { "SpawnParamPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::NewProp_SpawnParamPins_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LatentGameplayTaskCall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::ClassParams = {
		&UK2Node_LatentGameplayTaskCall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LatentGameplayTaskCall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LatentGameplayTaskCall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LatentGameplayTaskCall, 1754817481);
	template<> GAMEPLAYTASKSEDITOR_API UClass* StaticClass<UK2Node_LatentGameplayTaskCall>()
	{
		return UK2Node_LatentGameplayTaskCall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LatentGameplayTaskCall(Z_Construct_UClass_UK2Node_LatentGameplayTaskCall, &UK2Node_LatentGameplayTaskCall::StaticClass, TEXT("/Script/GameplayTasksEditor"), TEXT("UK2Node_LatentGameplayTaskCall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LatentGameplayTaskCall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
