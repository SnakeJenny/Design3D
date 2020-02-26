// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionReflectionVectorWS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionVectorWS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionReflectionVectorWS::StaticRegisterNativesUMaterialExpressionReflectionVectorWS()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister()
	{
		return UMaterialExpressionReflectionVectorWS::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeCustomWorldNormal_MetaData[];
#endif
		static void NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeCustomWorldNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWorldNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomWorldNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData[] = {
		{ "Category", "UMaterialExpressionReflectionVectorWS" },
		{ "DisplayName", "Normalize custom world normal" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ToolTip", "(true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj)
	{
		((UMaterialExpressionReflectionVectorWS*)Obj)->bNormalizeCustomWorldNormal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal = { "bNormalizeCustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionReflectionVectorWS), &Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Reflection Vector if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal = { "CustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionReflectionVectorWS, CustomWorldNormal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionReflectionVectorWS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams = {
		&UMaterialExpressionReflectionVectorWS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionReflectionVectorWS, 590654355);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionReflectionVectorWS>()
	{
		return UMaterialExpressionReflectionVectorWS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionReflectionVectorWS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS, &UMaterialExpressionReflectionVectorWS::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionReflectionVectorWS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionVectorWS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
