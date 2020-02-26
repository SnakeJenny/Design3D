// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Atmosphere/AtmosphericFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
// End Cross Module References
	void AAtmosphericFog::StaticRegisterNativesAAtmosphericFog()
	{
	}
	UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister()
	{
		return AAtmosphericFog::StaticClass();
	}
	struct Z_Construct_UClass_AAtmosphericFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtmosphericFogComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtmosphericFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "HideCategories", "Info Object Input Input Collision" },
		{ "IncludePath", "Atmosphere/AtmosphericFog.h" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable fog actor that simulates atmospheric light scattering\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphericFog, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
		{ "ToolTip", "Main fog component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent = { "AtmosphericFogComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtmosphericFog, AtmosphericFogComponent), Z_Construct_UClass_UAtmosphericFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtmosphericFog_Statics::NewProp_AtmosphericFogComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtmosphericFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtmosphericFog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams = {
		&AAtmosphericFog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAtmosphericFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtmosphericFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtmosphericFog, 3833073807);
	template<> ENGINE_API UClass* StaticClass<AAtmosphericFog>()
	{
		return AAtmosphericFog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtmosphericFog(Z_Construct_UClass_AAtmosphericFog, &AAtmosphericFog::StaticClass, TEXT("/Script/Engine"), TEXT("AAtmosphericFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtmosphericFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
