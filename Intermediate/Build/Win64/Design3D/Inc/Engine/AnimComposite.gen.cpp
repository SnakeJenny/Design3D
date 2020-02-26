// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimComposite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimComposite() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
// End Cross Module References
	void UAnimComposite::StaticRegisterNativesUAnimComposite()
	{
	}
	UClass* Z_Construct_UClass_UAnimComposite_NoRegister()
	{
		return UAnimComposite::StaticClass();
	}
	struct Z_Construct_UClass_UAnimComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/AnimComposite.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose = { "PreviewBasePose", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimComposite, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
		{ "ToolTip", "Serializable data that stores section/anim pairing *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack = { "AnimationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimComposite, AnimationTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimComposite_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimComposite_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimComposite_Statics::NewProp_AnimationTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimComposite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimComposite_Statics::ClassParams = {
		&UAnimComposite::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimComposite_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimComposite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimComposite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimComposite, 142677236);
	template<> ENGINE_API UClass* StaticClass<UAnimComposite>()
	{
		return UAnimComposite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimComposite(Z_Construct_UClass_UAnimComposite, &UAnimComposite::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimComposite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimComposite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
