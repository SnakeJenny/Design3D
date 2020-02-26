// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InputKeyDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputKeyDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputKeyDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UInputDelegateBinding();
// End Cross Module References
class UScriptStruct* FBlueprintInputKeyDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintInputKeyDelegateBinding"), sizeof(FBlueprintInputKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintInputKeyDelegateBinding>()
{
	return FBlueprintInputKeyDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintInputKeyDelegateBinding(FBlueprintInputKeyDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintInputKeyDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintInputKeyDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintInputKeyDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintInputKeyDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintInputKeyDelegateBinding, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputKeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::NewProp_InputChord,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBlueprintInputDelegateBinding,
		&NewStructOps,
		"BlueprintInputKeyDelegateBinding",
		sizeof(FBlueprintInputKeyDelegateBinding),
		alignof(FBlueprintInputKeyDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintInputKeyDelegateBinding"), sizeof(FBlueprintInputKeyDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding_Hash() { return 4052952893U; }
	void UInputKeyDelegateBinding::StaticRegisterNativesUInputKeyDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding_NoRegister()
	{
		return UInputKeyDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UInputKeyDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyDelegateBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputKeyDelegateBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKeyDelegateBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputDelegateBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InputKeyDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InputKeyDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputKeyDelegateBinding, InputKeyDelegateBindings), METADATA_PARAMS(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner = { "InputKeyDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintInputKeyDelegateBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputKeyDelegateBinding_Statics::NewProp_InputKeyDelegateBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputKeyDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputKeyDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams = {
		&UInputKeyDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputKeyDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputKeyDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputKeyDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputKeyDelegateBinding, 2875429919);
	template<> ENGINE_API UClass* StaticClass<UInputKeyDelegateBinding>()
	{
		return UInputKeyDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputKeyDelegateBinding(Z_Construct_UClass_UInputKeyDelegateBinding, &UInputKeyDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UInputKeyDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputKeyDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
