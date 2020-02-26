// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportDragOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportDragOperation() {}
// Cross Module References
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FDraggingTransformableData();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FDraggingTransformableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIEWPORTINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FDraggingTransformableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDraggingTransformableData, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("DraggingTransformableData"), sizeof(FDraggingTransformableData), Get_Z_Construct_UScriptStruct_FDraggingTransformableData_Hash());
	}
	return Singleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FDraggingTransformableData>()
{
	return FDraggingTransformableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDraggingTransformableData(FDraggingTransformableData::StaticStruct, TEXT("/Script/ViewportInteraction"), TEXT("DraggingTransformableData"), false, nullptr, nullptr);
static struct FScriptStruct_ViewportInteraction_StaticRegisterNativesFDraggingTransformableData
{
	FScriptStruct_ViewportInteraction_StaticRegisterNativesFDraggingTransformableData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DraggingTransformableData")),new UScriptStruct::TCppStructOps<FDraggingTransformableData>);
	}
} ScriptStruct_ViewportInteraction_StaticRegisterNativesFDraggingTransformableData;
	struct Z_Construct_UScriptStruct_FDraggingTransformableData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Data structure that holds all arguments that can be used while dragging a transformable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDraggingTransformableData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"DraggingTransformableData",
		sizeof(FDraggingTransformableData),
		alignof(FDraggingTransformableData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDraggingTransformableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDraggingTransformableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DraggingTransformableData"), sizeof(FDraggingTransformableData), Get_Z_Construct_UScriptStruct_FDraggingTransformableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDraggingTransformableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDraggingTransformableData_Hash() { return 1720410175U; }
	void UViewportDragOperation::StaticRegisterNativesUViewportDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UViewportDragOperation_NoRegister()
	{
		return UViewportDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UViewportDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportDragOperation.h" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Base class for interactable drag calculations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportDragOperation_Statics::ClassParams = {
		&UViewportDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportDragOperation, 2574848627);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportDragOperation>()
	{
		return UViewportDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportDragOperation(Z_Construct_UClass_UViewportDragOperation, &UViewportDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportDragOperation);
	void UViewportDragOperationComponent::StaticRegisterNativesUViewportDragOperationComponent()
	{
	}
	UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister()
	{
		return UViewportDragOperationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UViewportDragOperationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragOperationSubclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DragOperationSubclass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragOperation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportDragOperationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportDragOperation.h" },
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "Container component for UViewportDragOperation that can be used by objects in the world that are draggable and implement the ViewportInteractableInterface" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "The next class that will be used as drag operation" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass = { "DragOperationSubclass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportDragOperationComponent, DragOperationSubclass), Z_Construct_UClass_UViewportDragOperation_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportDragOperation.h" },
		{ "ToolTip", "The actual dragging implementation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation = { "DragOperation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportDragOperationComponent, DragOperation), Z_Construct_UClass_UViewportDragOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperationSubclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportDragOperationComponent_Statics::NewProp_DragOperation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportDragOperationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportDragOperationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportDragOperationComponent_Statics::ClassParams = {
		&UViewportDragOperationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportDragOperationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportDragOperationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportDragOperationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportDragOperationComponent, 3186049220);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportDragOperationComponent>()
	{
		return UViewportDragOperationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportDragOperationComponent(Z_Construct_UClass_UViewportDragOperationComponent, &UViewportDragOperationComponent::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportDragOperationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportDragOperationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
