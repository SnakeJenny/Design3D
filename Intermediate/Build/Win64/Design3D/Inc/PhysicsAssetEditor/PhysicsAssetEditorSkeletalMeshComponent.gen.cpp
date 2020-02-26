// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsAssetEditor/Private/PhysicsAssetEditorSkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorSkeletalMeshComponent() {}
// Cross Module References
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UPhysicsAssetEditorSkeletalMeshComponent::StaticRegisterNativesUPhysicsAssetEditorSkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister()
	{
		return UPhysicsAssetEditorSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNoCollisionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneNoCollisionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMaterialHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneMaterialHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneUnselectedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneUnselectedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneSelectedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElemSelectedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElemSelectedMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugSkelMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "PhysicsAssetEditorSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial = { "BoneNoCollisionMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneNoCollisionMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit = { "BoneMaterialHit", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneMaterialHit), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial = { "BoneUnselectedMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneUnselectedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneSelectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneSelectedMaterial = { "BoneSelectedMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneSelectedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneSelectedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneSelectedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial = { "ElemSelectedMaterial", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, ElemSelectedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneSelectedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorSkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::ClassParams = {
		&UPhysicsAssetEditorSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00A010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsAssetEditorSkeletalMeshComponent, 1951438925);
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetEditorSkeletalMeshComponent>()
	{
		return UPhysicsAssetEditorSkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAssetEditorSkeletalMeshComponent(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent, &UPhysicsAssetEditorSkeletalMeshComponent::StaticClass, TEXT("/Script/PhysicsAssetEditor"), TEXT("UPhysicsAssetEditorSkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorSkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
