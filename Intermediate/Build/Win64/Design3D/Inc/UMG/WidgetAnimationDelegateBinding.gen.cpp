// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/WidgetAnimationDelegateBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationDelegateBinding() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
// End Cross Module References
class UScriptStruct* FBlueprintWidgetAnimationDelegateBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, Z_Construct_UPackage__Script_UMG(), TEXT("BlueprintWidgetAnimationDelegateBinding"), sizeof(FBlueprintWidgetAnimationDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FBlueprintWidgetAnimationDelegateBinding>()
{
	return FBlueprintWidgetAnimationDelegateBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding(FBlueprintWidgetAnimationDelegateBinding::StaticStruct, TEXT("/Script/UMG"), TEXT("BlueprintWidgetAnimationDelegateBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFBlueprintWidgetAnimationDelegateBinding
{
	FScriptStruct_UMG_StaticRegisterNativesFBlueprintWidgetAnimationDelegateBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintWidgetAnimationDelegateBinding")),new UScriptStruct::TCppStructOps<FBlueprintWidgetAnimationDelegateBinding>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFBlueprintWidgetAnimationDelegateBinding;
	struct Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToBind_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationToBind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWidgetAnimationDelegateBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, UserTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind = { "AnimationToBind", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, Action), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"BlueprintWidgetAnimationDelegateBinding",
		sizeof(FBlueprintWidgetAnimationDelegateBinding),
		alignof(FBlueprintWidgetAnimationDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintWidgetAnimationDelegateBinding"), sizeof(FBlueprintWidgetAnimationDelegateBinding), Get_Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Hash() { return 3155428710U; }
	void UWidgetAnimationDelegateBinding::StaticRegisterNativesUWidgetAnimationDelegateBinding()
	{
	}
	UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister()
	{
		return UWidgetAnimationDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetAnimationDelegateBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetAnimationDelegateBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetAnimationDelegateBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/WidgetAnimationDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetAnimationDelegateBinding, WidgetAnimationDelegateBindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimationDelegateBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams = {
		&UWidgetAnimationDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetAnimationDelegateBinding, 4281998041);
	template<> UMG_API UClass* StaticClass<UWidgetAnimationDelegateBinding>()
	{
		return UWidgetAnimationDelegateBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetAnimationDelegateBinding(Z_Construct_UClass_UWidgetAnimationDelegateBinding, &UWidgetAnimationDelegateBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetAnimationDelegateBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimationDelegateBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
