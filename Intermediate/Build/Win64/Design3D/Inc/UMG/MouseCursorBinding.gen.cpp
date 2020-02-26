// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/MouseCursorBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseCursorBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UMouseCursorBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMouseCursorBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UMouseCursorBinding_GetValue();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
// End Cross Module References
	void UMouseCursorBinding::StaticRegisterNativesUMouseCursorBinding()
	{
		UClass* Class = UMouseCursorBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValue", &UMouseCursorBinding::execGetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics
	{
		struct MouseCursorBinding_eventGetValue_Parms
		{
			TEnumAsByte<EMouseCursor::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MouseCursorBinding_eventGetValue_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/MouseCursorBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMouseCursorBinding, nullptr, "GetValue", sizeof(MouseCursorBinding_eventGetValue_Parms), Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMouseCursorBinding_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMouseCursorBinding_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMouseCursorBinding_NoRegister()
	{
		return UMouseCursorBinding::StaticClass();
	}
	struct Z_Construct_UClass_UMouseCursorBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMouseCursorBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMouseCursorBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMouseCursorBinding_GetValue, "GetValue" }, // 3711656850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/MouseCursorBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/MouseCursorBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMouseCursorBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMouseCursorBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMouseCursorBinding_Statics::ClassParams = {
		&UMouseCursorBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMouseCursorBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMouseCursorBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMouseCursorBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMouseCursorBinding, 2226425335);
	template<> UMG_API UClass* StaticClass<UMouseCursorBinding>()
	{
		return UMouseCursorBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMouseCursorBinding(Z_Construct_UClass_UMouseCursorBinding, &UMouseCursorBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UMouseCursorBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMouseCursorBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
