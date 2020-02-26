// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextRenderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ATextRenderActor::StaticRegisterNativesATextRenderActor()
	{
	}
	UClass* Z_Construct_UClass_ATextRenderActor_NoRegister()
	{
		return ATextRenderActor::StaticClass();
	}
	struct Z_Construct_UClass_ATextRenderActor_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATextRenderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/TextRenderActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Reference to the billboard component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextRenderActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TextRenderActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Component to render a text in 3d with a font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATextRenderActor, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextRenderActor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATextRenderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextRenderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATextRenderActor_Statics::ClassParams = {
		&ATextRenderActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATextRenderActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATextRenderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATextRenderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATextRenderActor, 2056171031);
	template<> ENGINE_API UClass* StaticClass<ATextRenderActor>()
	{
		return ATextRenderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATextRenderActor(Z_Construct_UClass_ATextRenderActor, &ATextRenderActor::StaticClass, TEXT("/Script/Engine"), TEXT("ATextRenderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATextRenderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
