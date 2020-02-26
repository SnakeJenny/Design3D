// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ComponentDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentDelegateBinding() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UComponentDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
// End Cross Module References
class UScriptStruct* FBlueprintComponentDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentDelegateBinding"), sizeof(FBlueprintComponentDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBlueprintComponentDelegateBinding>()
{
	return FBlueprintComponentDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintComponentDelegateBinding(FBlueprintComponentDelegateBinding::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintComponentDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintComponentDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentPropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Entry for a delegate to assign after a blueprint has been instanced" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of function that we want to bind to the delegate." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of property on the component that we want to assign to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
		{ "ToolTip", "Name of component property that contains delegate we want to assign to." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName = { "ComponentPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintComponentDelegateBinding, ComponentPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_DelegatePropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::NewProp_ComponentPropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintComponentDelegateBinding",
		sizeof(FBlueprintComponentDelegateBinding),
		alignof(FBlueprintComponentDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintComponentDelegateBinding"), sizeof(FBlueprintComponentDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding_Hash() { return 3265568854U; }
	void UComponentDelegateBinding::StaticRegisterNativesUComponentDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UComponentDelegateBinding_NoRegister()
	{
		return UComponentDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UComponentDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentDelegateBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentDelegateBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentDelegateBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ComponentDelegateBinding.h" },
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ComponentDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponentDelegateBinding, ComponentDelegateBindings), METADATA_PARAMS(Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner = { "ComponentDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintComponentDelegateBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentDelegateBinding_Statics::NewProp_ComponentDelegateBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams = {
		&UComponentDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UComponentDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponentDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponentDelegateBinding, 2043770670);
	template<> ENGINE_API UClass* StaticClass<UComponentDelegateBinding>()
	{
		return UComponentDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponentDelegateBinding(Z_Construct_UClass_UComponentDelegateBinding, &UComponentDelegateBinding::StaticClass, TEXT("/Script/Engine"), TEXT("UComponentDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
