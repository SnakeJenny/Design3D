// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorFloatingCameraUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingCameraUI() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingCameraUI();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AVREditorFloatingCameraUI::StaticRegisterNativesAVREditorFloatingCameraUI()
	{
	}
	UClass* Z_Construct_UClass_AVREditorFloatingCameraUI_NoRegister()
	{
		return AVREditorFloatingCameraUI::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorFloatingCameraUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LinkedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorFloatingUI,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorFloatingCameraUI.h" },
		{ "ModuleRelativePath", "UI/VREditorFloatingCameraUI.h" },
		{ "ToolTip", "Represents an interactive floating UI camera preview panel in the VR Editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorFloatingCameraUI.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor = { "LinkedActor", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorFloatingCameraUI, LinkedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::NewProp_LinkedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorFloatingCameraUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::ClassParams = {
		&AVREditorFloatingCameraUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorFloatingCameraUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorFloatingCameraUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorFloatingCameraUI, 24215105);
	template<> VREDITOR_API UClass* StaticClass<AVREditorFloatingCameraUI>()
	{
		return AVREditorFloatingCameraUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorFloatingCameraUI(Z_Construct_UClass_AVREditorFloatingCameraUI, &AVREditorFloatingCameraUI::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorFloatingCameraUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorFloatingCameraUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
