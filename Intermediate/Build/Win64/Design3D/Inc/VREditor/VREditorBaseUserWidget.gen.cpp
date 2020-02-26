// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorBaseUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorBaseUserWidget() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI_NoRegister();
// End Cross Module References
	void UVREditorBaseUserWidget::StaticRegisterNativesUVREditorBaseUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UVREditorBaseUserWidget_NoRegister()
	{
		return UVREditorBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorBaseUserWidget.h" },
		{ "ModuleRelativePath", "UI/VREditorBaseUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all of the VR widgets" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorBaseUserWidget.h" },
		{ "ToolTip", "The UI system that owns this widget" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorBaseUserWidget, Owner), Z_Construct_UClass_AVREditorFloatingUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorBaseUserWidget_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorBaseUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorBaseUserWidget_Statics::ClassParams = {
		&UVREditorBaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorBaseUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorBaseUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorBaseUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorBaseUserWidget, 1972099012);
	template<> VREDITOR_API UClass* StaticClass<UVREditorBaseUserWidget>()
	{
		return UVREditorBaseUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorBaseUserWidget(Z_Construct_UClass_UVREditorBaseUserWidget, &UVREditorBaseUserWidget::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorBaseUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorBaseUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
