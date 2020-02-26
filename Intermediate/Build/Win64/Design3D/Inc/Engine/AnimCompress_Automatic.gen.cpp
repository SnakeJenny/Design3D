// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_Automatic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_Automatic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_Automatic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_Automatic();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_Automatic::StaticRegisterNativesUAnimCompress_Automatic()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_Automatic_NoRegister()
	{
		return UAnimCompress_Automatic::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_Automatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryExhaustiveSearch_MetaData[];
#endif
		static void NewProp_bTryExhaustiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryExhaustiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[];
#endif
		static void NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData[];
#endif
		static void NewProp_bAutoReplaceIfExistingErrorTooGreat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReplaceIfExistingErrorTooGreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunCurrentDefaultCompressor_MetaData[];
#endif
		static void NewProp_bRunCurrentDefaultCompressor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunCurrentDefaultCompressor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEndEffectorError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEndEffectorError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_Automatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress_Automatic.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_Automatic" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
		{ "ToolTip", "If true, then an exhaustive search is used otherwise only a short list of the best methods is tried" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch_SetBit(void* Obj)
	{
		((UAnimCompress_Automatic*)Obj)->bTryExhaustiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch = { "bTryExhaustiveSearch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress_Automatic), &Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_Automatic" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Max End Effector Error, then Max End Effector Error will be effectively raised to the existing error level" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj)
	{
		((UAnimCompress_Automatic*)Obj)->bRaiseMaxErrorToExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting = { "bRaiseMaxErrorToExisting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress_Automatic), &Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_Automatic" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Max End Effector Error, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold\nAlso known as \"force below threshold\"" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat_SetBit(void* Obj)
	{
		((UAnimCompress_Automatic*)Obj)->bAutoReplaceIfExistingErrorTooGreat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat = { "bAutoReplaceIfExistingErrorTooGreat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress_Automatic), &Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_Automatic" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
		{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"First Recompress Using Current Or Default\"" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor_SetBit(void* Obj)
	{
		((UAnimCompress_Automatic*)Obj)->bRunCurrentDefaultCompressor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor = { "bRunCurrentDefaultCompressor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress_Automatic), &Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_MaxEndEffectorError_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_Automatic" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_Automatic.h" },
		{ "ToolTip", "Maximum amount of error that a compression technique can introduce in an end effector\nDetermines the current setting for world - space error tolerance in the animation compressor.\nWhen requested, animation being compressed will also consider an alternative compression\nmethod if the end result of that method produces less error than the AlternativeCompressionThreshold.\nAlso known as \"Alternative Compression Threshold\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_MaxEndEffectorError = { "MaxEndEffectorError", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress_Automatic, MaxEndEffectorError), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_MaxEndEffectorError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_MaxEndEffectorError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_Automatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bTryExhaustiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRaiseMaxErrorToExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bAutoReplaceIfExistingErrorTooGreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_bRunCurrentDefaultCompressor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Automatic_Statics::NewProp_MaxEndEffectorError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_Automatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_Automatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_Automatic_Statics::ClassParams = {
		&UAnimCompress_Automatic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_Automatic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Automatic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Automatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_Automatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_Automatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_Automatic, 3337788691);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_Automatic>()
	{
		return UAnimCompress_Automatic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_Automatic(Z_Construct_UClass_UAnimCompress_Automatic, &UAnimCompress_Automatic::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_Automatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_Automatic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
