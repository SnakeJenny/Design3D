// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureLightProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLightProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureLightProfile::StaticRegisterNativesUTextureLightProfile()
	{
	}
	UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister()
	{
		return UTextureLightProfile::StaticClass();
	}
	struct Z_Construct_UClass_UTextureLightProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureLightProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object CompositeTexture Texture2D Object" },
		{ "IncludePath", "Engine/TextureLightProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Multiplier to map texture value to result to integrate over the sphere to 1.0f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier = { "TextureMultiplier", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureLightProfile, TextureMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureLightProfile, Brightness), METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureLightProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLightProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams = {
		&UTextureLightProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureLightProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureLightProfile, 1598940173);
	template<> ENGINE_API UClass* StaticClass<UTextureLightProfile>()
	{
		return UTextureLightProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureLightProfile(Z_Construct_UClass_UTextureLightProfile, &UTextureLightProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureLightProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLightProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
