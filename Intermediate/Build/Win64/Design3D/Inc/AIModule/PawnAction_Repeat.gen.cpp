// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Repeat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Repeat() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Repeat_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Repeat();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
// End Cross Module References
	void UPawnAction_Repeat::StaticRegisterNativesUPawnAction_Repeat()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Repeat_NoRegister()
	{
		return UPawnAction_Repeat::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Repeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecentActionCopy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionToRepeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionToRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Repeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Repeat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Repeat.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode = { "ChildFailureHandlingMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Repeat, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_RecentActionCopy = { "RecentActionCopy", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Repeat, RecentActionCopy), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
		{ "ToolTip", "Action to repeat. This instance won't really be run, it's a source for copying actions to be actually performed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ActionToRepeat = { "ActionToRepeat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Repeat, ActionToRepeat), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Repeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_RecentActionCopy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Repeat_Statics::NewProp_ActionToRepeat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Repeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Repeat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Repeat_Statics::ClassParams = {
		&UPawnAction_Repeat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPawnAction_Repeat_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Repeat_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Repeat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Repeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Repeat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_Repeat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction_Repeat, 1770674943);
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_Repeat>()
	{
		return UPawnAction_Repeat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Repeat(Z_Construct_UClass_UPawnAction_Repeat, &UPawnAction_Repeat::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Repeat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Repeat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
