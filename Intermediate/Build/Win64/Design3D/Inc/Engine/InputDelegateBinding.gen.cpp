// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputDelegateBinding"), sizeof(FBlueprintInputDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputDelegateBinding>()
{
	return FBlueprintInputDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputDelegateBinding(FBlueprintInputDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[];
#endif
		static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bOverrideParentBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bExecuteWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((FBlueprintInputDelegateBinding*)Obj)->bConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBlueprintInputDelegateBinding), &Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bOverrideParentBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bExecuteWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::NewProp_bConsumeInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintInputDelegateBinding",
		sizeof(FBlueprintInputDelegateBinding),
		alignof(FBlueprintInputDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputDelegateBinding"), sizeof(FBlueprintInputDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding_Hash() { return 2222915373U; }
	void UInputDelegateBinding::StaticRegisterNativesUInputDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputDelegateBinding_NoRegister()
	{
		return UInputDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputDelegateBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams = {
		&UInputDelegateBinding::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputDelegateBinding, 3702766217);
	template<> ENGINE_API UClass* StaticClass<UInputDelegateBinding>()
	{
		return UInputDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputDelegateBinding(Z_Construct_UClass_UInputDelegateBinding, &UInputDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
