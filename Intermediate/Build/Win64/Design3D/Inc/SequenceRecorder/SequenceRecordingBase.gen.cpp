// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorder/Public/SequenceRecordingBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecordingBase() {}
// Cross Module References
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecordingBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	void USequenceRecordingBase::StaticRegisterNativesUSequenceRecordingBase()
	{
	}
	UClass* Z_Construct_UClass_USequenceRecordingBase_NoRegister()
	{
		return USequenceRecordingBase::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecordingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecordingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecordingBase.h" },
		{ "ModuleRelativePath", "Public/SequenceRecordingBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecordingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecordingBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecordingBase_Statics::ClassParams = {
		&USequenceRecordingBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USequenceRecordingBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecordingBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequenceRecordingBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequenceRecordingBase, 2727146774);
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecordingBase>()
	{
		return USequenceRecordingBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequenceRecordingBase(Z_Construct_UClass_USequenceRecordingBase, &USequenceRecordingBase::StaticClass, TEXT("/Script/SequenceRecorder"), TEXT("USequenceRecordingBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecordingBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
