// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ModelComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
// End Cross Module References
	void UModelComponent::StaticRegisterNativesUModelComponent()
	{
	}
	UClass* Z_Construct_UClass_UModelComponent_NoRegister()
	{
		return UModelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UModelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModelBodySetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/ModelComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "ModelComponents are PrimitiveComponents that represent elements of BSP geometry in a ULevel object.\nThey are used exclusively by ULevel and are not intended as general-purpose components.\n\n@see ULevel" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ModelComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup = { "ModelBodySetup", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModelComponent, ModelBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelComponent_Statics::NewProp_ModelBodySetup,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModelComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UModelComponent, IInterface_CollisionDataProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModelComponent_Statics::ClassParams = {
		&UModelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModelComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UModelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModelComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModelComponent, 97117345);
	template<> ENGINE_API UClass* StaticClass<UModelComponent>()
	{
		return UModelComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModelComponent(Z_Construct_UClass_UModelComponent, &UModelComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UModelComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UModelComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
