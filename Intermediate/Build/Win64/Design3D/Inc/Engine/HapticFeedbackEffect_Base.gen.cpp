// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Base() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FActiveHapticFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveHapticFeedbackEffect"), sizeof(FActiveHapticFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveHapticFeedbackEffect>()
{
	return FActiveHapticFeedbackEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveHapticFeedbackEffect(FActiveHapticFeedbackEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("ActiveHapticFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveHapticFeedbackEffect")),new UScriptStruct::TCppStructOps<FActiveHapticFeedbackEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActiveHapticFeedbackEffect;
	struct Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HapticEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveHapticFeedbackEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveHapticFeedbackEffect, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::NewProp_HapticEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveHapticFeedbackEffect",
		sizeof(FActiveHapticFeedbackEffect),
		alignof(FActiveHapticFeedbackEffect),
		Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveHapticFeedbackEffect"), sizeof(FActiveHapticFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveHapticFeedbackEffect_Hash() { return 1894256305U; }
	void UHapticFeedbackEffect_Base::StaticRegisterNativesUHapticFeedbackEffect_Base()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister()
	{
		return UHapticFeedbackEffect_Base::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Base.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::ClassParams = {
		&UHapticFeedbackEffect_Base::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticFeedbackEffect_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Base, 209138237);
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Base>()
	{
		return UHapticFeedbackEffect_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Base(Z_Construct_UClass_UHapticFeedbackEffect_Base, &UHapticFeedbackEffect_Base::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
