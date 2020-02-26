// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SafeZoneSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
// End Cross Module References
	void USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot()
	{
	}
	UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister()
	{
		return USafeZoneSlot::StaticClass();
	}
	struct Z_Construct_UClass_USafeZoneSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HAlign;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeAreaScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafeAreaScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTitleSafe_MetaData[];
#endif
		static void NewProp_bIsTitleSafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTitleSafe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZoneSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SafeZoneSlot.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeZoneSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeZoneSlot, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeZoneSlot, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale = { "SafeAreaScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeZoneSlot, SafeAreaScale), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	void Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit(void* Obj)
	{
		((USafeZoneSlot*)Obj)->bIsTitleSafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe = { "bIsTitleSafe", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeZoneSlot), &Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZoneSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZoneSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams = {
		&USafeZoneSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZoneSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USafeZoneSlot, 716067245);
	template<> UMG_API UClass* StaticClass<USafeZoneSlot>()
	{
		return USafeZoneSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeZoneSlot(Z_Construct_UClass_USafeZoneSlot, &USafeZoneSlot::StaticClass, TEXT("/Script/UMG"), TEXT("USafeZoneSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
