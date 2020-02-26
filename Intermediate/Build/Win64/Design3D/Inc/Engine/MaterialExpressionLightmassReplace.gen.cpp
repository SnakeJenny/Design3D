// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionLightmassReplace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLightmassReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLightmassReplace::StaticRegisterNativesUMaterialExpressionLightmassReplace()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace_NoRegister()
	{
		return UMaterialExpressionLightmassReplace::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lightmass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lightmass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Realtime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Realtime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionLightmassReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass = { "Lightmass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Lightmass), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLightmassReplace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime = { "Realtime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLightmassReplace, Realtime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Lightmass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::NewProp_Realtime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLightmassReplace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::ClassParams = {
		&UMaterialExpressionLightmassReplace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLightmassReplace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionLightmassReplace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionLightmassReplace, 2195548582);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionLightmassReplace>()
	{
		return UMaterialExpressionLightmassReplace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLightmassReplace(Z_Construct_UClass_UMaterialExpressionLightmassReplace, &UMaterialExpressionLightmassReplace::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionLightmassReplace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLightmassReplace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
