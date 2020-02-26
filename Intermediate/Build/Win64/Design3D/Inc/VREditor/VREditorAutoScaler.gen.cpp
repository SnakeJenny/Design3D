// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/Teleporter/VREditorAutoScaler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorAutoScaler() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAutoScaler_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAutoScaler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	void UVREditorAutoScaler::StaticRegisterNativesUVREditorAutoScaler()
	{
	}
	UClass* Z_Construct_UClass_UVREditorAutoScaler_NoRegister()
	{
		return UVREditorAutoScaler::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorAutoScaler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorAutoScaler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorAutoScaler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Teleporter/VREditorAutoScaler.h" },
		{ "ModuleRelativePath", "Teleporter/VREditorAutoScaler.h" },
		{ "ToolTip", "Automatically scales the user when dragging the world and pressing the touchpad" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorAutoScaler_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "Teleporter/VREditorAutoScaler.h" },
		{ "ToolTip", "Owning mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVREditorAutoScaler_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVREditorAutoScaler, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorAutoScaler_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVREditorAutoScaler_Statics::NewProp_VRMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorAutoScaler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorAutoScaler_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorAutoScaler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorAutoScaler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVREditorAutoScaler_Statics::ClassParams = {
		&UVREditorAutoScaler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorAutoScaler_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVREditorAutoScaler_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorAutoScaler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVREditorAutoScaler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorAutoScaler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVREditorAutoScaler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVREditorAutoScaler, 1904240388);
	template<> VREDITOR_API UClass* StaticClass<UVREditorAutoScaler>()
	{
		return UVREditorAutoScaler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVREditorAutoScaler(Z_Construct_UClass_UVREditorAutoScaler, &UVREditorAutoScaler::StaticClass, TEXT("/Script/VREditor"), TEXT("UVREditorAutoScaler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorAutoScaler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
