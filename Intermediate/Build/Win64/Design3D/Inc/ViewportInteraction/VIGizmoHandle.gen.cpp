// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/VIGizmoHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIGizmoHandle() {}
// Cross Module References
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoHandle();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup();
// End Cross Module References
class UScriptStruct* FGizmoHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIEWPORTINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FGizmoHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoHandle, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("GizmoHandle"), sizeof(FGizmoHandle), Get_Z_Construct_UScriptStruct_FGizmoHandle_Hash());
	}
	return Singleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FGizmoHandle>()
{
	return FGizmoHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoHandle(FGizmoHandle::StaticStruct, TEXT("/Script/ViewportInteraction"), TEXT("GizmoHandle"), false, nullptr, nullptr);
static struct FScriptStruct_ViewportInteraction_StaticRegisterNativesFGizmoHandle
{
	FScriptStruct_ViewportInteraction_StaticRegisterNativesFGizmoHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoHandle")),new UScriptStruct::TCppStructOps<FGizmoHandle>);
	}
} ScriptStruct_ViewportInteraction_StaticRegisterNativesFGizmoHandle;
	struct Z_Construct_UScriptStruct_FGizmoHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"GizmoHandle",
		sizeof(FGizmoHandle),
		alignof(FGizmoHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoHandle"), sizeof(FGizmoHandle), Get_Z_Construct_UScriptStruct_FGizmoHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGizmoHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoHandle_Hash() { return 887536819U; }
	void UGizmoHandleGroup::StaticRegisterNativesUGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister()
	{
		return UGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoHandleGroup_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningTransformGizmoActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningTransformGizmoActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentGizmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentGizmoMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VIGizmoHandle.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Base class for gizmo handles" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent = { "DragOperationComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoHandleGroup, DragOperationComponent), Z_Construct_UClass_UViewportDragOperationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "The actor transform gizmo owning this handlegroup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor = { "OwningTransformGizmoActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoHandleGroup, OwningTransformGizmoActor), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "All the StaticMeshes for this handle type" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoHandleGroup, Handles), METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGizmoHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Gizmo material (translucent)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial = { "TranslucentGizmoMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoHandleGroup, TranslucentGizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Gizmo material (opaque)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGizmoHandleGroup, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGizmoHandleGroup_Statics::ClassParams = {
		&UGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGizmoHandleGroup, 613302257);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UGizmoHandleGroup>()
	{
		return UGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGizmoHandleGroup(Z_Construct_UClass_UGizmoHandleGroup, &UGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoHandleGroup);
	void UAxisGizmoHandleGroup::StaticRegisterNativesUAxisGizmoHandleGroup()
	{
	}
	UClass* Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister()
	{
		return UAxisGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VIGizmoHandle.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Base class for gizmo handles on axis" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisGizmoHandleGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::ClassParams = {
		&UAxisGizmoHandleGroup::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisGizmoHandleGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisGizmoHandleGroup, 644178333);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UAxisGizmoHandleGroup>()
	{
		return UAxisGizmoHandleGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisGizmoHandleGroup(Z_Construct_UClass_UAxisGizmoHandleGroup, &UAxisGizmoHandleGroup::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UAxisGizmoHandleGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisGizmoHandleGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
