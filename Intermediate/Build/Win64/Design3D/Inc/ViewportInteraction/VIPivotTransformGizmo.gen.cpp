// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Gizmo/VIPivotTransformGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIPivotTransformGizmo() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_APivotTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_APivotTransformGizmo();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister();
// End Cross Module References
	void APivotTransformGizmo::StaticRegisterNativesAPivotTransformGizmo()
	{
	}
	UClass* Z_Construct_UClass_APivotTransformGizmo_NoRegister()
	{
		return APivotTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_APivotTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDraggingHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastDraggingHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StretchGizmoHandleGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationGizmoHandleGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneTranslationGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneTranslationGizmoHandleGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleGizmoHandleGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslationGizmoHandleGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformScaleGizmoHandleGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UniformScaleGizmoHandleGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTransformGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "A transform gizmo on the pivot that allows you to interact with selected objects by moving, scaling and rotating." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Handle from previous tick that was dragged" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle = { "LastDraggingHandle", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, LastDraggingHandle), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Stretch handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup = { "StretchGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, StretchGizmoHandleGroup), Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Rotation handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup = { "RotationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, RotationGizmoHandleGroup), Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Plane translation handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup = { "PlaneTranslationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, PlaneTranslationGizmoHandleGroup), Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Scale handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup = { "ScaleGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, ScaleGizmoHandleGroup), Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Translation handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup = { "TranslationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, TranslationGizmoHandleGroup), Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Uniform scale handle group component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup = { "UniformScaleGizmoHandleGroup", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APivotTransformGizmo, UniformScaleGizmoHandleGroup), Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotTransformGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APivotTransformGizmo_Statics::ClassParams = {
		&APivotTransformGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotTransformGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APivotTransformGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APivotTransformGizmo, 1165100995);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<APivotTransformGizmo>()
	{
		return APivotTransformGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APivotTransformGizmo(Z_Construct_UClass_APivotTransformGizmo, &APivotTransformGizmo::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("APivotTransformGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotTransformGizmo);
	void UPivotTranslationGizmoHandleGroup::StaticRegisterNativesUPivotTranslationGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister()
	{
		return UPivotTranslationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for translating" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotTranslationGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotTranslationGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPivotTranslationGizmoHandleGroup, 2156076457);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotTranslationGizmoHandleGroup>()
	{
		return UPivotTranslationGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPivotTranslationGizmoHandleGroup(Z_Construct_UClass_UPivotTranslationGizmoHandleGroup, &UPivotTranslationGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UPivotTranslationGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotTranslationGizmoHandleGroup);
	void UPivotScaleGizmoHandleGroup::StaticRegisterNativesUPivotScaleGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister()
	{
		return UPivotScaleGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotScaleGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::ClassParams = {
		&UPivotScaleGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPivotScaleGizmoHandleGroup, 1417881170);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotScaleGizmoHandleGroup>()
	{
		return UPivotScaleGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPivotScaleGizmoHandleGroup(Z_Construct_UClass_UPivotScaleGizmoHandleGroup, &UPivotScaleGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UPivotScaleGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotScaleGizmoHandleGroup);
	void UPivotPlaneTranslationGizmoHandleGroup::StaticRegisterNativesUPivotPlaneTranslationGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister()
	{
		return UPivotPlaneTranslationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for plane translation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotPlaneTranslationGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotPlaneTranslationGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPivotPlaneTranslationGizmoHandleGroup, 1082379646);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotPlaneTranslationGizmoHandleGroup>()
	{
		return UPivotPlaneTranslationGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPivotPlaneTranslationGizmoHandleGroup(Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup, &UPivotPlaneTranslationGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UPivotPlaneTranslationGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotPlaneTranslationGizmoHandleGroup);
	void UPivotRotationGizmoHandleGroup::StaticRegisterNativesUPivotRotationGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister()
	{
		return UPivotRotationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootDeltaRotationIndicatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootDeltaRotationIndicatorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationIndicatorMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeltaRotationIndicatorMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootStartRotationIdicatorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootStartRotationIdicatorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationIndicatorMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartRotationIndicatorMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullRotationHandleMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullRotationHandleMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootFullRotationHandleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootFullRotationHandleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for rotation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The root component of the delta rotation indicator" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent = { "RootDeltaRotationIndicatorComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootDeltaRotationIndicatorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The mesh that indicated the delta rotation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent = { "DeltaRotationIndicatorMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, DeltaRotationIndicatorMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The root component of the start rotation indicator" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent = { "RootStartRotationIdicatorComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootStartRotationIdicatorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The mesh that indicated the start rotation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent = { "StartRotationIndicatorMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, StartRotationIndicatorMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "When dragging a rotation handle the full rotation circle appears" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent = { "FullRotationHandleMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, FullRotationHandleMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Root component of all the mesh components that are used to visualize the rotation when dragging" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent = { "RootFullRotationHandleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootFullRotationHandleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotRotationGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotRotationGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPivotRotationGizmoHandleGroup, 3388442778);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotRotationGizmoHandleGroup>()
	{
		return UPivotRotationGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPivotRotationGizmoHandleGroup(Z_Construct_UClass_UPivotRotationGizmoHandleGroup, &UPivotRotationGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UPivotRotationGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotRotationGizmoHandleGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
