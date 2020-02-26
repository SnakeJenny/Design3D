// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/DrawFrustumComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawFrustumComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UDrawFrustumComponent::StaticRegisterNativesUDrawFrustumComponent()
	{
	}
	UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister()
	{
		return UDrawFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawFrustumComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumEndDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumEndDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumStartDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumStartDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/DrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "optional texture to show on the near plane" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to stop drawing the frustum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist = { "FrustumEndDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumEndDist), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to start drawing the frustum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist = { "FrustumStartDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumStartDist), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Ratio of horizontal size over vertical size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio = { "FrustumAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Angle of longest dimension of view shape.\nIf the angle is 0 then an orthographic projection is used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle = { "FrustumAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAngle), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Color to draw the wireframe frustum." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDrawFrustumComponent, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawFrustumComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams = {
		&UDrawFrustumComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawFrustumComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDrawFrustumComponent, 1747498622);
	template<> ENGINE_API UClass* StaticClass<UDrawFrustumComponent>()
	{
		return UDrawFrustumComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDrawFrustumComponent(Z_Construct_UClass_UDrawFrustumComponent, &UDrawFrustumComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDrawFrustumComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawFrustumComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
