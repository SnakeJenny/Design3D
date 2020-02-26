// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/BrushComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void UBrushComponent::StaticRegisterNativesUBrushComponent()
	{
	}
	UClass* Z_Construct_UClass_UBrushComponent_NoRegister()
	{
		return UBrushComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBrushComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrePivot;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushBodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Physics Lighting LOD Rendering TextureStreaming Transform Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/BrushComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ShowCategories", "Rendering|Material" },
		{ "ToolTip", "A brush component defines a shape that can be modified within the editor. They are used both as part of BSP building, and for volumes.\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Brushes" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ToolTip", "Local space translation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot = { "PrePivot", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushComponent, PrePivot_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup = { "BrushBodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushComponent, BrushBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BrushComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBrushComponent, Brush), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_PrePivot,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_BrushBodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushComponent_Statics::NewProp_Brush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBrushComponent_Statics::ClassParams = {
		&UBrushComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::PropPointers),
		0,
		0x00A810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBrushComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBrushComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBrushComponent, 656096777);
	template<> ENGINE_API UClass* StaticClass<UBrushComponent>()
	{
		return UBrushComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBrushComponent(Z_Construct_UClass_UBrushComponent, &UBrushComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBrushComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
