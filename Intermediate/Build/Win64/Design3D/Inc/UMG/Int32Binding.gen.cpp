// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/Int32Binding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInt32Binding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UInt32Binding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UInt32Binding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UInt32Binding_GetValue();
// End Cross Module References
	void UInt32Binding::StaticRegisterNativesUInt32Binding()
	{
		UClass* Class = UInt32Binding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UInt32Binding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInt32Binding_GetValue_Statics
	{
		struct Int32Binding_eventGetValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Int32Binding_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInt32Binding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInt32Binding, nullptr, "GetValue", sizeof(Int32Binding_eventGetValue_Parms), Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInt32Binding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInt32Binding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInt32Binding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInt32Binding_NoRegister()
	{
		return UInt32Binding::StaticClass();
	}
	struct Z_Construct_UClass_UInt32Binding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInt32Binding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInt32Binding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInt32Binding_GetValue, "GetValue" }, // 4189297915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/Int32Binding.h" },
		{ "ModuleRelativePath", "Public/Binding/Int32Binding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInt32Binding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInt32Binding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInt32Binding_Statics::ClassParams = {
		&UInt32Binding::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInt32Binding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInt32Binding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInt32Binding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInt32Binding, 2910609232);
	template<> UMG_API UClass* StaticClass<UInt32Binding>()
	{
		return UInt32Binding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInt32Binding(Z_Construct_UClass_UInt32Binding, &UInt32Binding::StaticClass, TEXT("/Script/UMG"), TEXT("UInt32Binding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInt32Binding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
