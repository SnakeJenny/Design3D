// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Matinee/Classes/MatineeOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeOptions() {}
// Cross Module References
	MATINEE_API UClass* Z_Construct_UClass_UMatineeOptions_NoRegister();
	MATINEE_API UClass* Z_Construct_UClass_UMatineeOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Matinee();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey();
// End Cross Module References
	void UMatineeOptions::StaticRegisterNativesUMatineeOptions()
	{
	}
	UClass* Z_Construct_UClass_UMatineeOptions_NoRegister()
	{
		return UMatineeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustingGroupKeyframes_MetaData[];
#endif
		static void NewProp_bAdjustingGroupKeyframes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustingGroupKeyframes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustingKeyframe_MetaData[];
#endif
		static void NewProp_bAdjustingKeyframe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustingKeyframe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Matinee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MatineeOptions.h" },
		{ "ModuleRelativePath", "Classes/MatineeOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MatineeOptions.h" },
		{ "ToolTip", "Are we currently editing the values of a groups keyframe. This should only be true if the keyframes that are selected belong to the same group." },
	};
#endif
	void Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes_SetBit(void* Obj)
	{
		((UMatineeOptions*)Obj)->bAdjustingGroupKeyframes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes = { "bAdjustingGroupKeyframes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMatineeOptions), &Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MatineeOptions.h" },
		{ "ToolTip", "Are we currently editing the value of a keyframe. This should only be true if there is one keyframe selected and the time is currently set to it." },
	};
#endif
	void Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe_SetBit(void* Obj)
	{
		((UMatineeOptions*)Obj)->bAdjustingKeyframe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe = { "bAdjustingKeyframe", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMatineeOptions), &Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MatineeOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys = { "SelectedKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatineeOptions, SelectedKeys), METADATA_PARAMS(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys_Inner = { "SelectedKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInterpEdSelKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatineeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingGroupKeyframes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeOptions_Statics::NewProp_bAdjustingKeyframe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatineeOptions_Statics::NewProp_SelectedKeys_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatineeOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatineeOptions_Statics::ClassParams = {
		&UMatineeOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatineeOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMatineeOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatineeOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMatineeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatineeOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeOptions, 3911333274);
	template<> MATINEE_API UClass* StaticClass<UMatineeOptions>()
	{
		return UMatineeOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeOptions(Z_Construct_UClass_UMatineeOptions, &UMatineeOptions::StaticClass, TEXT("/Script/Matinee"), TEXT("UMatineeOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
