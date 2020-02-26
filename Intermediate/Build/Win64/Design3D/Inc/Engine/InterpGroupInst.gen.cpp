// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpGroupInst::StaticRegisterNativesUInterpGroupInst()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister()
	{
		return UInterpGroupInst::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackInst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackInst_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpGroupInst.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "Array if InterpTrack instances. TrackInst.Num() == UInterpGroup.InterpTrack.Num() must be true." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst = { "TrackInst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, TrackInst), METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_Inner = { "TrackInst", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpTrackInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "Actor that this Group instance is acting upon.\nNB: that this may be set to NULL at any time as a result of the  AActor  being destroyed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor = { "GroupActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, GroupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "UInterpGroup within the InterpData that this is an instance of." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupInst>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupInst_Statics::ClassParams = {
		&UInterpGroupInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupInst()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpGroupInst_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpGroupInst, 2128776454);
	template<> ENGINE_API UClass* StaticClass<UInterpGroupInst>()
	{
		return UInterpGroupInst::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupInst(Z_Construct_UClass_UInterpGroupInst, &UInterpGroupInst::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
