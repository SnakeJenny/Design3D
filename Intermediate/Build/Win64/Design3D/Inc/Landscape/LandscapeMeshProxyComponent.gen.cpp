// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeMeshProxyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshProxyComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULandscapeMeshProxyComponent::StaticRegisterNativesULandscapeMeshProxyComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent_NoRegister()
	{
		return ULandscapeMeshProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ProxyLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyComponentBases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProxyComponentBases;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxyComponentBases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "LandscapeMeshProxyComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "LOD level proxy was generated for" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD = { "ProxyLOD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyLOD), METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The components this proxy was generated for" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, ProxyComponentBases), METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner = { "ProxyComponentBases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshProxyComponent.h" },
		{ "ToolTip", "The landscape this proxy was generated for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeMeshProxyComponent, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_ProxyComponentBases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::NewProp_LandscapeGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshProxyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams = {
		&ULandscapeMeshProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::PropPointers),
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMeshProxyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeMeshProxyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeMeshProxyComponent, 220881529);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMeshProxyComponent>()
	{
		return ULandscapeMeshProxyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMeshProxyComponent(Z_Construct_UClass_ULandscapeMeshProxyComponent, &ULandscapeMeshProxyComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMeshProxyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshProxyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
