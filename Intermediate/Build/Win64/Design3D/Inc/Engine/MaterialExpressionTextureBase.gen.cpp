// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSamplerType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	void UMaterialExpressionTextureBase::StaticRegisterNativesUMaterialExpressionTextureBase()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureBase_NoRegister()
	{
		return UMaterialExpressionTextureBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefaultMeshpaintTexture_MetaData[];
#endif
		static void NewProp_IsDefaultMeshpaintTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefaultMeshpaintTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
		{ "ToolTip", "Is default selected texture when using mesh paint mode texture painting" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureBase*)Obj)->IsDefaultMeshpaintTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture = { "IsDefaultMeshpaintTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureBase), &Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureBase, SamplerType), Z_Construct_UEnum_Engine_EMaterialSamplerType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "MaterialExpressionTextureBase" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTextureBase, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_IsDefaultMeshpaintTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_SamplerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::ClassParams = {
		&UMaterialExpressionTextureBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureBase, 2195409797);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureBase>()
	{
		return UMaterialExpressionTextureBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureBase(Z_Construct_UClass_UMaterialExpressionTextureBase, &UMaterialExpressionTextureBase::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
