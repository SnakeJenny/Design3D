// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/TimeSynchronizationSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeSynchronizationSource() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UTimeSynchronizationSource::StaticRegisterNativesUTimeSynchronizationSource()
	{
	}
	UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister()
	{
		return UTimeSynchronizationSource::StaticClass();
	}
	struct Z_Construct_UClass_UTimeSynchronizationSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForSynchronization_MetaData[];
#endif
		static void NewProp_bUseForSynchronization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForSynchronization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeSynchronizationSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeSynchronizationSource.h" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "Base class for sources to be used for time synchronization.\n\nSubclasses don't need to directly contain data, nor provide access to the\ndata in any way (although they may).\n\nCurrently, Synchronization does not work on the subframe level." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "An additional offset in frames (relative to this source's frame rate) that should used.\nThis is mainly useful to help correct discrepancies between the reported Sample Times\nand how the samples actually line up relative to other sources." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeSynchronizationSource, FrameOffset), METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ModuleRelativePath", "Public/TimeSynchronizationSource.h" },
		{ "ToolTip", "Whether or not this source should be considered when establishing synchronization." },
	};
#endif
	void Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_SetBit(void* Obj)
	{
		((UTimeSynchronizationSource*)Obj)->bUseForSynchronization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization = { "bUseForSynchronization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTimeSynchronizationSource), &Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_FrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizationSource_Statics::NewProp_bUseForSynchronization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeSynchronizationSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeSynchronizationSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeSynchronizationSource_Statics::ClassParams = {
		&UTimeSynchronizationSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizationSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeSynchronizationSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeSynchronizationSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeSynchronizationSource, 1003655053);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UTimeSynchronizationSource>()
	{
		return UTimeSynchronizationSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeSynchronizationSource(Z_Construct_UClass_UTimeSynchronizationSource, &UTimeSynchronizationSource::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UTimeSynchronizationSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeSynchronizationSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
