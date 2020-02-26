// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmassPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
// End Cross Module References
	void ALightmassPortal::StaticRegisterNativesALightmassPortal()
	{
	}
	UClass* Z_Construct_UClass_ALightmassPortal_NoRegister()
	{
		return ALightmassPortal::StaticClass();
	}
	struct Z_Construct_UClass_ALightmassPortal_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightmassPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "Lightmass/LightmassPortal.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightmassPortal, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightmassPortal, PortalComponent), Z_Construct_UClass_ULightmassPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightmassPortal_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightmassPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassPortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightmassPortal_Statics::ClassParams = {
		&ALightmassPortal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALightmassPortal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightmassPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightmassPortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightmassPortal, 4214418864);
	template<> ENGINE_API UClass* StaticClass<ALightmassPortal>()
	{
		return ALightmassPortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightmassPortal(Z_Construct_UClass_ALightmassPortal, &ALightmassPortal::StaticClass, TEXT("/Script/Engine"), TEXT("ALightmassPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
