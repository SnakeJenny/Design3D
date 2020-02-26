// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/WindDirectionalSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindDirectionalSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWindDirectionalSource();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister();
// End Cross Module References
	void AWindDirectionalSource::StaticRegisterNativesAWindDirectionalSource()
	{
	}
	UClass* Z_Construct_UClass_AWindDirectionalSource_NoRegister()
	{
		return AWindDirectionalSource::StaticClass();
	}
	struct Z_Construct_UClass_AWindDirectionalSource_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindDirectionalSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Wind" },
		{ "HideCategories", "Input Movement Collision" },
		{ "IncludePath", "Engine/WindDirectionalSource.h" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor that provides a directional wind source. Only affects SpeedTree assets." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindDirectionalSource, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WindDirectionalSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/WindDirectionalSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWindDirectionalSource, Component), Z_Construct_UClass_UWindDirectionalSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWindDirectionalSource_Statics::NewProp_Component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindDirectionalSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindDirectionalSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams = {
		&AWindDirectionalSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWindDirectionalSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindDirectionalSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindDirectionalSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWindDirectionalSource, 649021159);
	template<> ENGINE_API UClass* StaticClass<AWindDirectionalSource>()
	{
		return AWindDirectionalSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindDirectionalSource(Z_Construct_UClass_AWindDirectionalSource, &AWindDirectionalSource::StaticClass, TEXT("/Script/Engine"), TEXT("AWindDirectionalSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindDirectionalSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
