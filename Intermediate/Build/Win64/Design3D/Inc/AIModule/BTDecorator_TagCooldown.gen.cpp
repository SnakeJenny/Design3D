// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_TagCooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TagCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UBTDecorator_TagCooldown::StaticRegisterNativesUBTDecorator_TagCooldown()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_TagCooldown_NoRegister()
	{
		return UBTDecorator_TagCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_TagCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivatesCooldown_MetaData[];
#endif
		static void NewProp_bActivatesCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivatesCooldown;
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
	UObject* (*const Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a cooldown timer based on a gameplay tag has expired." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_MetaData[] = {
		{ "Category", "Decorator" },
		{ "DisplayName", "Adds/Sets Cooldown on Deactivation" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Whether or not we are adding/setting to the cooldown tag's value when the decorator deactivates." },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_SetBit(void* Obj)
	{
		((UBTDecorator_TagCooldown*)Obj)->bActivatesCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown = { "bActivatesCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_TagCooldown), &Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "EditCondition", "bActivatesCooldown" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
	{
		((UBTDecorator_TagCooldown*)Obj)->bAddToExistingDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_TagCooldown), &Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "EditCondition", "bActivatesCooldown" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Value we will add or set to the Cooldown tag when this node is deactivated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_TagCooldown.h" },
		{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_TagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bActivatesCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_bAddToExistingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::NewProp_CooldownTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_TagCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::ClassParams = {
		&UBTDecorator_TagCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_TagCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_TagCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_TagCooldown, 3864607568);
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_TagCooldown>()
	{
		return UBTDecorator_TagCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_TagCooldown(Z_Construct_UClass_UBTDecorator_TagCooldown, &UBTDecorator_TagCooldown::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_TagCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_TagCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
