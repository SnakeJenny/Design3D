// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIAsyncTaskBlueprintProxy() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventOAISimpleDelegate_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> MovementResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AIModule_eventOAISimpleDelegate_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::NewProp_MovementResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "OAISimpleDelegate__DelegateSignature", sizeof(_Script_AIModule_eventOAISimpleDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAIAsyncTaskBlueprintProxy::StaticRegisterNativesUAIAsyncTaskBlueprintProxy()
	{
		UClass* Class = UAIAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMoveCompleted", &UAIAsyncTaskBlueprintProxy::execOnMoveCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics
	{
		struct AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EPathFollowingResult::Type> MovementResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_MovementResult = { "MovementResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, MovementResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_MovementResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::NewProp_RequestID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, nullptr, "OnMoveCompleted", sizeof(AIAsyncTaskBlueprintProxy_eventOnMoveCompleted_Parms), Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister()
	{
		return UAIAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIAsyncTaskBlueprintProxy_OnMoveCompleted, "OnMoveCompleted" }, // 2984830061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AIAsyncTaskBlueprintProxy.h" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnFail), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Blueprint/AIAsyncTaskBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AIModule_OAISimpleDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UAIAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIAsyncTaskBlueprintProxy, 3908407447);
	template<> AIMODULE_API UClass* StaticClass<UAIAsyncTaskBlueprintProxy>()
	{
		return UAIAsyncTaskBlueprintProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIAsyncTaskBlueprintProxy(Z_Construct_UClass_UAIAsyncTaskBlueprintProxy, &UAIAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAsyncTaskBlueprintProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
