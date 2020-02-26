// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VREditorDockableWindow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorDockableWindow() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorDockableWindow();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorFloatingUI();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UDockableWindowDragOperation_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UDockableWindowDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
// End Cross Module References
	void AVREditorDockableWindow::StaticRegisterNativesAVREditorDockableWindow()
	{
	}
	UClass* Z_Construct_UClass_AVREditorDockableWindow_NoRegister()
	{
		return AVREditorDockableWindow::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorDockableWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragOperationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragOperationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButtonTranslucentMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButtonTranslucentMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButtonMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButtonMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionBarTranslucentMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionBarTranslucentMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionBarMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionBarMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DockButtonMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DockButtonMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButtonMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButtonMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionBarMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionBarMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DockButtonMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DockButtonMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorDockableWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVREditorFloatingUI,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorDockableWindow.h" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "An interactive floating UI panel that can be dragged around" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent = { "DragOperationComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, DragOperationComponent), Z_Construct_UClass_UViewportDragOperationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Close button dynamic material (translucent)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID = { "CloseButtonTranslucentMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonTranslucentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Close button dynamic material  (opaque)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID = { "CloseButtonMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Select bar dynamic material (translucent)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID = { "SelectionBarTranslucentMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarTranslucentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Selection bar dynamic material  (opaque)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID = { "SelectionBarMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData[] = {
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Dock Button dynamic material  (opaque)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID = { "DockButtonMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh that represents the close button for this UI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent = { "CloseButtonMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, CloseButtonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh underneath the window for easy selecting and dragging" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent = { "SelectionBarMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, SelectionBarMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Mesh underneath the window for docking it to the world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent = { "DockButtonMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorDockableWindow, DockButtonMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DragOperationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonTranslucentMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarTranslucentMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_CloseButtonMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_SelectionBarMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorDockableWindow_Statics::NewProp_DockButtonMeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVREditorDockableWindow_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewportInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AVREditorDockableWindow, IViewportInteractableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorDockableWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorDockableWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorDockableWindow_Statics::ClassParams = {
		&AVREditorDockableWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorDockableWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorDockableWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorDockableWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorDockableWindow, 42445240);
	template<> VREDITOR_API UClass* StaticClass<AVREditorDockableWindow>()
	{
		return AVREditorDockableWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorDockableWindow(Z_Construct_UClass_AVREditorDockableWindow, &AVREditorDockableWindow::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorDockableWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorDockableWindow);
	void UDockableWindowDragOperation::StaticRegisterNativesUDockableWindowDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UDockableWindowDragOperation_NoRegister()
	{
		return UDockableWindowDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDockableWindowDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDockableWindowDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VREditorDockableWindow.h" },
		{ "ModuleRelativePath", "UI/VREditorDockableWindow.h" },
		{ "ToolTip", "Calculation for dragging a dockable window" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDockableWindowDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDockableWindowDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDockableWindowDragOperation_Statics::ClassParams = {
		&UDockableWindowDragOperation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDockableWindowDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDockableWindowDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDockableWindowDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDockableWindowDragOperation, 4229554344);
	template<> VREDITOR_API UClass* StaticClass<UDockableWindowDragOperation>()
	{
		return UDockableWindowDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDockableWindowDragOperation(Z_Construct_UClass_UDockableWindowDragOperation, &UDockableWindowDragOperation::StaticClass, TEXT("/Script/VREditor"), TEXT("UDockableWindowDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDockableWindowDragOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
