// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BlendSpace1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpace1D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace1D();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlendSpace1D::StaticRegisterNativesUBlendSpace1D()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpace1D_NoRegister()
	{
		return UBlendSpace1D::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpace1D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleAnimation_MetaData[];
#endif
		static void NewProp_bScaleAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleAnimation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayEditorVertically_MetaData[];
#endif
		static void NewProp_bDisplayEditorVertically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayEditorVertically;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpace1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/BlendSpace1D.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
		{ "ToolTip", "Drive animation speed by blend input position *" },
	};
#endif
	void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit(void* Obj)
	{
		((UBlendSpace1D*)Obj)->bScaleAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation = { "bScaleAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpace1D.h" },
	};
#endif
	void Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit(void* Obj)
	{
		((UBlendSpace1D*)Obj)->bDisplayEditorVertically_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically = { "bDisplayEditorVertically", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlendSpace1D), &Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bScaleAnimation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpace1D_Statics::NewProp_bDisplayEditorVertically,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpace1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpace1D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams = {
		&UBlendSpace1D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlendSpace1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpace1D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendSpace1D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendSpace1D, 2027562734);
	template<> ENGINE_API UClass* StaticClass<UBlendSpace1D>()
	{
		return UBlendSpace1D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpace1D(Z_Construct_UClass_UBlendSpace1D, &UBlendSpace1D::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpace1D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpace1D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
