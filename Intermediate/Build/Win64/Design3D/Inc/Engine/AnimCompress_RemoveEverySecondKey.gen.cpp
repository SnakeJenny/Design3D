// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress_RemoveEverySecondKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveEverySecondKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveEverySecondKey::StaticRegisterNativesUAnimCompress_RemoveEverySecondKey()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_NoRegister()
	{
		return UAnimCompress_RemoveEverySecondKey::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAtSecondKey_MetaData[];
#endif
		static void NewProp_bStartAtSecondKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAtSecondKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "If bStartAtSecondKey is true, remove keys 1,3,5,etc.\nIf bStartAtSecondKey is false, remove keys 0,2,4,etc." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit(void* Obj)
	{
		((UAnimCompress_RemoveEverySecondKey*)Obj)->bStartAtSecondKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey = { "bStartAtSecondKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress_RemoveEverySecondKey), &Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveEverySecondKey" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveEverySecondKey.h" },
		{ "ToolTip", "Animations with fewer than MinKeys will not lose any keys." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys = { "MinKeys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress_RemoveEverySecondKey, MinKeys), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_bStartAtSecondKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::NewProp_MinKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveEverySecondKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams = {
		&UAnimCompress_RemoveEverySecondKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress_RemoveEverySecondKey, 389396893);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveEverySecondKey>()
	{
		return UAnimCompress_RemoveEverySecondKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress_RemoveEverySecondKey(Z_Construct_UClass_UAnimCompress_RemoveEverySecondKey, &UAnimCompress_RemoveEverySecondKey::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress_RemoveEverySecondKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveEverySecondKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
