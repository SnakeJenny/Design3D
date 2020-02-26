// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationModifiers/Private/AnimationModifiersAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationModifiersAssetUserData() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();
// End Cross Module References
	void UAnimationModifiersAssetUserData::StaticRegisterNativesUAnimationModifiersAssetUserData()
	{
	}
	UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData_NoRegister()
	{
		return UAnimationModifiersAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationModifierInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationModifierInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationModifierInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifiers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationModifiersAssetUserData.h" },
		{ "ModuleRelativePath", "Private/AnimationModifiersAssetUserData.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Asset user data which can be added to a USkeleton or UAnimSequence to keep track of Animation Modifiers" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimationModifiersAssetUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances = { "AnimationModifierInstances", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationModifiersAssetUserData, AnimationModifierInstances), METADATA_PARAMS(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_Inner = { "AnimationModifierInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::NewProp_AnimationModifierInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationModifiersAssetUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::ClassParams = {
		&UAnimationModifiersAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationModifiersAssetUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationModifiersAssetUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationModifiersAssetUserData, 2367034152);
	template<> ANIMATIONMODIFIERS_API UClass* StaticClass<UAnimationModifiersAssetUserData>()
	{
		return UAnimationModifiersAssetUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationModifiersAssetUserData(Z_Construct_UClass_UAnimationModifiersAssetUserData, &UAnimationModifiersAssetUserData::StaticClass, TEXT("/Script/AnimationModifiers"), TEXT("UAnimationModifiersAssetUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationModifiersAssetUserData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationModifiersAssetUserData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
