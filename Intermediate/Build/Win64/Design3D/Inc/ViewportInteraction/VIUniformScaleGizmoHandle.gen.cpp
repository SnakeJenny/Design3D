// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Gizmo/VIUniformScaleGizmoHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIUniformScaleGizmoHandle() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UUniformScaleGizmoHandleGroup::StaticRegisterNativesUUniformScaleGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister()
	{
		return UUniformScaleGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIUniformScaleGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIUniformScaleGizmoHandle.h" },
		{ "ToolTip", "Gizmo handle for uniform scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformScaleGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::ClassParams = {
		&UUniformScaleGizmoHandleGroup::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniformScaleGizmoHandleGroup, 2118631154);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UUniformScaleGizmoHandleGroup>()
	{
		return UUniformScaleGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniformScaleGizmoHandleGroup(Z_Construct_UClass_UUniformScaleGizmoHandleGroup, &UUniformScaleGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UUniformScaleGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformScaleGizmoHandleGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
