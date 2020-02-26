// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionPreviousFrameSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreviousFrameSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPreviousFrameSwitch::StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister()
	{
		return UMaterialExpressionPreviousFrameSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreviousFrameSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame = { "PreviousFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, PreviousFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame = { "CurrentFrame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, CurrentFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreviousFrameSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams = {
		&UMaterialExpressionPreviousFrameSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionPreviousFrameSwitch, 2450893199);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreviousFrameSwitch>()
	{
		return UMaterialExpressionPreviousFrameSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPreviousFrameSwitch(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch, &UMaterialExpressionPreviousFrameSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPreviousFrameSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreviousFrameSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
