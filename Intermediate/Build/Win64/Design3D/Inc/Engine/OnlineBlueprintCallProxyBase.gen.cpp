// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBlueprintCallProxyBase() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "EmptyOnlineDelegate__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOnlineBlueprintCallProxyBase::StaticRegisterNativesUOnlineBlueprintCallProxyBase()
	{
		UClass* Class = UOnlineBlueprintCallProxyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UOnlineBlueprintCallProxyBase::execActivate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online" },
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
		{ "ToolTip", "Called to trigger the actual online action once the delegates have been bound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase, nullptr, "Activate", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineBlueprintCallProxyBase_Activate, "Activate" }, // 1026426542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/OnlineBlueprintCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBlueprintCallProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams = {
		&UOnlineBlueprintCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBlueprintCallProxyBase, 2746429245);
	template<> ENGINE_API UClass* StaticClass<UOnlineBlueprintCallProxyBase>()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBlueprintCallProxyBase(Z_Construct_UClass_UOnlineBlueprintCallProxyBase, &UOnlineBlueprintCallProxyBase::StaticClass, TEXT("/Script/Engine"), TEXT("UOnlineBlueprintCallProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBlueprintCallProxyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
