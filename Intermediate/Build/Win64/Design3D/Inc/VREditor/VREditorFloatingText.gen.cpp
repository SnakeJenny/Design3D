// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/VREditorFloatingText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingText() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AFloatingText_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AFloatingText();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AFloatingText::StaticRegisterNativesAFloatingText()
	{
	}
	UClass* Z_Construct_UClass_AFloatingText_NoRegister()
	{
		return AFloatingText::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineMaterialMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineMaterialMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentTextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentTextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedTextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedTextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondLineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondLineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JointSphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstLineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstLineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VREditorFloatingText.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Draws 3D text in the world along with targeting line cues" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData[] = {
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Dynamic material instance for fading lines in and out" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID = { "LineMaterialMID", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, LineMaterialMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Material to use for the line meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData[] = {
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Translucent text material.  Used during fading" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial = { "TranslucentTextMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, TranslucentTextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData[] = {
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Masked text material.  Used after faded in" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial = { "MaskedTextMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, MaskedTextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "The 3D text we're drawing.  Positioned at the end of the second line." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Second line segment component.  Starts at the connection point and goes toward the 3D text." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent = { "SecondLineComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, SecondLineComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Sphere that connects the two line segments and makes the joint look smooth and round" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent = { "JointSphereComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, JointSphereComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "First line segment component.  Starts at the designation location, goes toward the line connection point." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent = { "FirstLineComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, FirstLineComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Scene component root of this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingText, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloatingText_Statics::ClassParams = {
		&AFloatingText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloatingText_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloatingText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingText, 2697913633);
	template<> VREDITOR_API UClass* StaticClass<AFloatingText>()
	{
		return AFloatingText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingText(Z_Construct_UClass_AFloatingText, &AFloatingText::StaticClass, TEXT("/Script/VREditor"), TEXT("AFloatingText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
