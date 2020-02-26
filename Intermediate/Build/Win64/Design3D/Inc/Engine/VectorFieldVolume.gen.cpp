// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VectorField/VectorFieldVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVectorFieldVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
// End Cross Module References
	void AVectorFieldVolume::StaticRegisterNativesAVectorFieldVolume()
	{
	}
	UClass* Z_Construct_UClass_AVectorFieldVolume_NoRegister()
	{
		return AVectorFieldVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVectorFieldVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVectorFieldVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Advanced Collision" },
		{ "IncludePath", "VectorField/VectorFieldVolume.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVectorFieldVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VectorFieldVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent = { "VectorFieldComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVectorFieldVolume, VectorFieldComponent), Z_Construct_UClass_UVectorFieldComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVectorFieldVolume_Statics::NewProp_VectorFieldComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVectorFieldVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVectorFieldVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams = {
		&AVectorFieldVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVectorFieldVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVectorFieldVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVectorFieldVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVectorFieldVolume, 1484828561);
	template<> ENGINE_API UClass* StaticClass<AVectorFieldVolume>()
	{
		return AVectorFieldVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVectorFieldVolume(Z_Construct_UClass_AVectorFieldVolume, &AVectorFieldVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVectorFieldVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVectorFieldVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
