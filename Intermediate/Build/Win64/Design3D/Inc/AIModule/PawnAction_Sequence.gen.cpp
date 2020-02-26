// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Sequence() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
// End Cross Module References
	void UPawnAction_Sequence::StaticRegisterNativesUPawnAction_Sequence()
	{
	}
	UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister()
	{
		return UPawnAction_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RecentActionCopy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionSequence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSequence_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Sequence.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy = { "RecentActionCopy", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, RecentActionCopy), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode = { "ChildFailureHandlingMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence = { "ActionSequence", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, ActionSequence), METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_Inner = { "ActionSequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Sequence_Statics::ClassParams = {
		&UPawnAction_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnAction_Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnAction_Sequence, 4147139065);
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_Sequence>()
	{
		return UPawnAction_Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnAction_Sequence(Z_Construct_UClass_UPawnAction_Sequence, &UPawnAction_Sequence::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnAction_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
