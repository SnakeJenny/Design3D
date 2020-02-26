// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Gizmo/VIStretchGizmoHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIStretchGizmoHandle() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
// End Cross Module References
	void UStretchGizmoHandleGroup::StaticRegisterNativesUStretchGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister()
	{
		return UStretchGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UStretchGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ToolTip", "Gizmo handle for stretching/scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStretchGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::ClassParams = {
		&UStretchGizmoHandleGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStretchGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStretchGizmoHandleGroup, 1370767492);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UStretchGizmoHandleGroup>()
	{
		return UStretchGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStretchGizmoHandleGroup(Z_Construct_UClass_UStretchGizmoHandleGroup, &UStretchGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UStretchGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStretchGizmoHandleGroup);
	void UStretchGizmoHandleDragOperation::StaticRegisterNativesUStretchGizmoHandleDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister()
	{
		return UStretchGizmoHandleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIStretchGizmoHandle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStretchGizmoHandleDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::ClassParams = {
		&UStretchGizmoHandleDragOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStretchGizmoHandleDragOperation, 3156581214);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UStretchGizmoHandleDragOperation>()
	{
		return UStretchGizmoHandleDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStretchGizmoHandleDragOperation(Z_Construct_UClass_UStretchGizmoHandleDragOperation, &UStretchGizmoHandleDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UStretchGizmoHandleDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStretchGizmoHandleDragOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
