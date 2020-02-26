// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/BoolBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UBoolBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBoolBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UBoolBinding_GetValue();
// End Cross Module References
	void UBoolBinding::StaticRegisterNativesUBoolBinding()
	{
		UClass* Class = UBoolBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UBoolBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoolBinding_GetValue_Statics
	{
		struct BoolBinding_eventGetValue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoolBinding_eventGetValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoolBinding_eventGetValue_Parms), &Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/BoolBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolBinding, nullptr, "GetValue", sizeof(BoolBinding_eventGetValue_Parms), Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoolBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoolBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoolBinding_NoRegister()
	{
		return UBoolBinding::StaticClass();
	}
	struct Z_Construct_UClass_UBoolBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoolBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoolBinding_GetValue, "GetValue" }, // 3737744459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/BoolBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/BoolBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoolBinding_Statics::ClassParams = {
		&UBoolBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoolBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoolBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoolBinding, 1767868298);
	template<> UMG_API UClass* StaticClass<UBoolBinding>()
	{
		return UBoolBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoolBinding(Z_Construct_UClass_UBoolBinding, &UBoolBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UBoolBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
