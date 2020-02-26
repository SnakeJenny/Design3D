// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/VisibilityBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisibilityBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UVisibilityBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVisibilityBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UVisibilityBinding_GetValue();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	void UVisibilityBinding::StaticRegisterNativesUVisibilityBinding()
	{
		UClass* Class = UVisibilityBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UVisibilityBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics
	{
		struct VisibilityBinding_eventGetValue_Parms
		{
			ESlateVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VisibilityBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/VisibilityBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisibilityBinding, nullptr, "GetValue", sizeof(VisibilityBinding_eventGetValue_Parms), Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVisibilityBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVisibilityBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVisibilityBinding_NoRegister()
	{
		return UVisibilityBinding::StaticClass();
	}
	struct Z_Construct_UClass_UVisibilityBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisibilityBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVisibilityBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisibilityBinding_GetValue, "GetValue" }, // 287580385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/VisibilityBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/VisibilityBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisibilityBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisibilityBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisibilityBinding_Statics::ClassParams = {
		&UVisibilityBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisibilityBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisibilityBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisibilityBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisibilityBinding, 4208947135);
	template<> UMG_API UClass* StaticClass<UVisibilityBinding>()
	{
		return UVisibilityBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisibilityBinding(Z_Construct_UClass_UVisibilityBinding, &UVisibilityBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UVisibilityBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisibilityBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
