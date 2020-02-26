// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/ColorBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UColorBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UColorBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UColorBinding_GetLinearValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UColorBinding_GetSlateValue();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	void UColorBinding::StaticRegisterNativesUColorBinding()
	{
		UClass* Class = UColorBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLinearValue", &UColorBinding::execGetLinearValue },
			{ "GetSlateValue", &UColorBinding::execGetSlateValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics
	{
		struct ColorBinding_eventGetLinearValue_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorBinding_eventGetLinearValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetLinearValue", sizeof(ColorBinding_eventGetLinearValue_Parms), Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBinding_GetLinearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorBinding_GetLinearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics
	{
		struct ColorBinding_eventGetSlateValue_Parms
		{
			FSlateColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorBinding_eventGetSlateValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBinding, nullptr, "GetSlateValue", sizeof(ColorBinding_eventGetSlateValue_Parms), Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBinding_GetSlateValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorBinding_GetSlateValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorBinding_NoRegister()
	{
		return UColorBinding::StaticClass();
	}
	struct Z_Construct_UClass_UColorBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorBinding_GetLinearValue, "GetLinearValue" }, // 1091635292
		{ &Z_Construct_UFunction_UColorBinding_GetSlateValue, "GetSlateValue" }, // 3224264698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/ColorBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/ColorBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorBinding_Statics::ClassParams = {
		&UColorBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UColorBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorBinding, 1446655196);
	template<> UMG_API UClass* StaticClass<UColorBinding>()
	{
		return UColorBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorBinding(Z_Construct_UClass_UColorBinding, &UColorBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UColorBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
