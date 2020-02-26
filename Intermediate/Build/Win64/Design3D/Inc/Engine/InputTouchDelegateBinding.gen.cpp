// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputTouchDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTouchDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputTouchDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputTouchDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputTouchDelegateBinding"), sizeof(FBlueprintInputTouchDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputTouchDelegateBinding>()
{
	return FBlueprintInputTouchDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputTouchDelegateBinding(FBlueprintInputTouchDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputTouchDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputTouchDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputTouchDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputTouchDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputTouchDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::NewProp_InputKeyEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputTouchDelegateBinding",
		sizeof(FBlueprintInputTouchDelegateBinding),
		alignof(FBlueprintInputTouchDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputTouchDelegateBinding"), sizeof(FBlueprintInputTouchDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding_Hash() { return 4167576510U; }
	void UInputTouchDelegateBinding::StaticRegisterNativesUInputTouchDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding_NoRegister()
	{
		return UInputTouchDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputTouchDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTouchDelegateBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputTouchDelegateBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputTouchDelegateBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputTouchDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputTouchDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputTouchDelegateBinding, InputTouchDelegateBindings), METADATA_PARAMS(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner = { "InputTouchDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputTouchDelegateBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTouchDelegateBinding_Statics::NewProp_InputTouchDelegateBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTouchDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTouchDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams = {
		&UInputTouchDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputTouchDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTouchDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputTouchDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputTouchDelegateBinding, 3593331457);
	template<> ENGINE_API UClass* StaticClass<UInputTouchDelegateBinding>()
	{
		return UInputTouchDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputTouchDelegateBinding(Z_Construct_UClass_UInputTouchDelegateBinding, &UInputTouchDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputTouchDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTouchDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
