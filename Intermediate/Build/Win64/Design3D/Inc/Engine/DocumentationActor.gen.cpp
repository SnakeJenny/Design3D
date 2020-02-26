// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DocumentationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentationActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
// End Cross Module References
	void ADocumentationActor::StaticRegisterNativesADocumentationActor()
	{
	}
	UClass* Z_Construct_UClass_ADocumentationActor_NoRegister()
	{
		return ADocumentationActor::StaticClass();
	}
	struct Z_Construct_UClass_ADocumentationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentLink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADocumentationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sprite MaterialSprite Actor Transform Tags Materials Rendering Components Blueprint bject Collision Display Physics Input Lighting Layers" },
		{ "IncludePath", "Engine/DocumentationActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00400008000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADocumentationActor, Billboard), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData[] = {
		{ "Category", "HelpDocumentation" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
		{ "ToolTip", "Link to a help document." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink = { "DocumentLink", nullptr, (EPropertyFlags)0x0010040800000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADocumentationActor, DocumentLink), METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADocumentationActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADocumentationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADocumentationActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADocumentationActor_Statics::ClassParams = {
		&ADocumentationActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADocumentationActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADocumentationActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADocumentationActor, 339041989);
	template<> ENGINE_API UClass* StaticClass<ADocumentationActor>()
	{
		return ADocumentationActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADocumentationActor(Z_Construct_UClass_ADocumentationActor, &ADocumentationActor::StaticClass, TEXT("/Script/Engine"), TEXT("ADocumentationActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADocumentationActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
