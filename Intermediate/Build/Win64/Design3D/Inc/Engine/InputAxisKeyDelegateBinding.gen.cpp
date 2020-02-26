// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAxisKeyDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputAxisKeyDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputAxisKeyDelegateBinding"), sizeof(FBlueprintInputAxisKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputAxisKeyDelegateBinding>()
{
	return FBlueprintInputAxisKeyDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding(FBlueprintInputAxisKeyDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputAxisKeyDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisKeyDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisKeyDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputAxisKeyDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputAxisKeyDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputAxisKeyDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputAxisKeyDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputAxisKeyDelegateBinding, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::NewProp_AxisKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputAxisKeyDelegateBinding",
		sizeof(FBlueprintInputAxisKeyDelegateBinding),
		alignof(FBlueprintInputAxisKeyDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputAxisKeyDelegateBinding"), sizeof(FBlueprintInputAxisKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding_Hash() { return 2843691899U; }
	void UInputAxisKeyDelegateBinding::StaticRegisterNativesUInputAxisKeyDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding_NoRegister()
	{
		return UInputAxisKeyDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisKeyDelegateBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputAxisKeyDelegateBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAxisKeyDelegateBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputAxisKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputAxisKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputAxisKeyDelegateBinding, InputAxisKeyDelegateBindings), METADATA_PARAMS(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner = { "InputAxisKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputAxisKeyDelegateBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::NewProp_InputAxisKeyDelegateBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAxisKeyDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams = {
		&UInputAxisKeyDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputAxisKeyDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputAxisKeyDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputAxisKeyDelegateBinding, 1847844169);
	template<> ENGINE_API UClass* StaticClass<UInputAxisKeyDelegateBinding>()
	{
		return UInputAxisKeyDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputAxisKeyDelegateBinding(Z_Construct_UClass_UInputAxisKeyDelegateBinding, &UInputAxisKeyDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputAxisKeyDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAxisKeyDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
