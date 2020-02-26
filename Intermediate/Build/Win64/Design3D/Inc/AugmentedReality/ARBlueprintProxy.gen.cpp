// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARBlueprintProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARBlueprintProxy() {}
// Cross Module References
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventARGetCandidateObjectPin_Parms
		{
			UARCandidateObject* SavedObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::NewProp_SavedObject = { "SavedObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms, SavedObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::NewProp_SavedObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "ARGetCandidateObjectPin__DelegateSignature", sizeof(_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventARSaveWorldPin_Parms
		{
			TArray<uint8> SavedWorld;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedWorld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SavedWorld_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld = { "SavedWorld", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AugmentedReality_eventARSaveWorldPin_Parms, SavedWorld), METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_Inner = { "SavedWorld", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::NewProp_SavedWorld_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "ARSaveWorldPin__DelegateSignature", sizeof(_Script_AugmentedReality_eventARSaveWorldPin_Parms), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UARBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy()
	{
	}
	UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBaseAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARBaseAsyncTaskBlueprintProxy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARBaseAsyncTaskBlueprintProxy, 405825743);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBaseAsyncTaskBlueprintProxy>()
	{
		return UARBaseAsyncTaskBlueprintProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBaseAsyncTaskBlueprintProxy(Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy, &UARBaseAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBaseAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBaseAsyncTaskBlueprintProxy);
	void UARSaveWorldAsyncTaskBlueprintProxy::StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy()
	{
		UClass* Class = UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ARSaveWorld", &UARSaveWorldAsyncTaskBlueprintProxy::execARSaveWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics
	{
		struct ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms
		{
			UObject* WorldContextObject;
			UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms, ReturnValue), Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Augmented Reality" },
		{ "DisplayName", "Save AR World" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
		{ "ToolTip", "Saves an AR world to a byte array for network replication or saving to disk\n\n@param bCompressData whether to compress the data or not" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy, nullptr, "ARSaveWorld", sizeof(ARSaveWorldAsyncTaskBlueprintProxy_eventARSaveWorld_Parms), Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld, "ARSaveWorld" }, // 1181955168
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSaveWorldAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSaveWorldAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSaveWorldAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARSaveWorldAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARSaveWorldAsyncTaskBlueprintProxy, 2091058967);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARSaveWorldAsyncTaskBlueprintProxy>()
	{
		return UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARSaveWorldAsyncTaskBlueprintProxy(Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy, &UARSaveWorldAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARSaveWorldAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSaveWorldAsyncTaskBlueprintProxy);
	void UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy()
	{
		UClass* Class = UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ARGetCandidateObject", &UARGetCandidateObjectAsyncTaskBlueprintProxy::execARGetCandidateObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics
	{
		struct ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FVector Extent;
			UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, ReturnValue), Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Augmented Reality" },
		{ "DisplayName", "Get AR Candidate Object" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
		{ "ToolTip", "Saves the point cloud centered at the specified location capturing all of the features within the specified extent as an object that can be detected later\n\n@param Location the center of the extent to grab features at\n@param Extent the size of the region to grab feature points" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy, nullptr, "ARGetCandidateObject", sizeof(ARGetCandidateObjectAsyncTaskBlueprintProxy_eventARGetCandidateObject_Parms), Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister()
	{
		return UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject, "ARGetCandidateObject" }, // 669056325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnFailed), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARBlueprintProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARGetCandidateObjectAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGetCandidateObjectAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARGetCandidateObjectAsyncTaskBlueprintProxy, 15015520);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGetCandidateObjectAsyncTaskBlueprintProxy>()
	{
		return UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy(Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy, &UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARGetCandidateObjectAsyncTaskBlueprintProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGetCandidateObjectAsyncTaskBlueprintProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
