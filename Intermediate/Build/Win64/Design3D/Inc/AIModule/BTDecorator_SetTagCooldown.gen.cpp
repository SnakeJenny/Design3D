// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_SetTagCooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTDecorator_SetTagCooldown::StaticRegisterNativesUBTDecorator_SetTagCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister()
	{
		return UBTDecorator_SetTagCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[];
#endif
		static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Set tag cooldown decorator node.\nA decorator node that sets a gameplay tag cooldown." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
	{
		((UBTDecorator_SetTagCooldown*)Obj)->bAddToExistingDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_SetTagCooldown), &Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Value we will add or set to the Cooldown tag when this task runs." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_SetTagCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams = {
		&UBTDecorator_SetTagCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_SetTagCooldown, 4135179104);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_SetTagCooldown>()
	{
		return UBTDecorator_SetTagCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_SetTagCooldown(Z_Construct_UClass_UBTDecorator_SetTagCooldown, &UBTDecorator_SetTagCooldown::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_SetTagCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_SetTagCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
