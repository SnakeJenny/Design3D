// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UCameraAnim::StaticRegisterNativesUCameraAnim()
	{
	}
	UClass* Z_Construct_UClass_UCameraAnim_NoRegister()
	{
		return UCameraAnim::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePostProcessBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BasePostProcessBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialFOV_MetaData[];
#endif
		static void NewProp_bRelativeToInitialFOV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRelativeToInitialTransform_MetaData[];
#endif
		static void NewProp_bRelativeToInitialTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelativeToInitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLength;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInterpGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInterpGroup;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraInterpGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraInterpGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/CameraAnim.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "A predefined animation to be played on a camera" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessBlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "Default PP blend weight to put on the animated camera. For modifying PP without keyframes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessBlendWeight = { "BasePostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, BasePostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "Default PP settings to put on the animated camera. For modifying PP without keyframes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessSettings = { "BasePostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, BasePostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_BaseFOV_MetaData[] = {
		{ "Category", "CameraAnim" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "The base FOV that all FOV keys are relative to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, BaseFOV), METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BaseFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV_MetaData[] = {
		{ "Category", "CameraAnim" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "If true, assume all FOV keys are intended be offsets from the start of the animation.\nIf false, assume all FOV keys are authored relative to the current FOV of the camera at the start of the animation." },
	};
#endif
	void Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV_SetBit(void* Obj)
	{
		((UCameraAnim*)Obj)->bRelativeToInitialFOV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV = { "bRelativeToInitialFOV", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraAnim), &Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform_MetaData[] = {
		{ "Category", "CameraAnim" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "If true, assume all transform keys are intended be offsets from the start of the animation. This allows the animation to be authored at any world location and be applied as a delta to the camera.\nIf false, assume all transform keys are authored relative to the world origin. Positions will be directly applied as deltas to the camera." },
	};
#endif
	void Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform_SetBit(void* Obj)
	{
		((UCameraAnim*)Obj)->bRelativeToInitialTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform = { "bRelativeToInitialTransform", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCameraAnim), &Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "AABB in local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_BoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_AnimLength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "Length, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_AnimLength = { "AnimLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, AnimLength), METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_AnimLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_AnimLength_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_PreviewInterpGroup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "This is to preview and they only exists in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_PreviewInterpGroup = { "PreviewInterpGroup", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, PreviewInterpGroup), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_PreviewInterpGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_PreviewInterpGroup_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnim_Statics::NewProp_CameraInterpGroup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnim.h" },
		{ "ToolTip", "The UInterpGroup that holds our actual interpolation data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraAnim_Statics::NewProp_CameraInterpGroup = { "CameraInterpGroup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnim, CameraInterpGroup), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::NewProp_CameraInterpGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::NewProp_CameraInterpGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_BasePostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_BaseFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_bRelativeToInitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_BoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_AnimLength,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_PreviewInterpGroup,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnim_Statics::NewProp_CameraInterpGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnim_Statics::ClassParams = {
		&UCameraAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnim_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::PropPointers),
		0,
		0x000802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnim_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraAnim, 1370058795);
	template<> ENGINE_API UClass* StaticClass<UCameraAnim>()
	{
		return UCameraAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraAnim(Z_Construct_UClass_UCameraAnim, &UCameraAnim::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
