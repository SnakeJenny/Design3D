// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavGraph/NavigationGraphNodeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNodeComponent() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationGraphNodeComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
// End Cross Module References
	void UNavigationGraphNodeComponent::StaticRegisterNativesUNavigationGraphNodeComponent()
	{
	}
	UClass* Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister()
	{
		return UNavigationGraphNodeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevNodeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevNodeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextNodeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "NavGraph/NavigationGraphNodeComponent.h" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent = { "PrevNodeComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, PrevNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent = { "NextNodeComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, NextNodeComponent), Z_Construct_UClass_UNavigationGraphNodeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNodeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationGraphNodeComponent, Node), Z_Construct_UScriptStruct_FNavGraphNode, METADATA_PARAMS(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_PrevNodeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_NextNodeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationGraphNodeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::ClassParams = {
		&UNavigationGraphNodeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationGraphNodeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationGraphNodeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationGraphNodeComponent, 2969588166);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationGraphNodeComponent>()
	{
		return UNavigationGraphNodeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationGraphNodeComponent(Z_Construct_UClass_UNavigationGraphNodeComponent, &UNavigationGraphNodeComponent::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationGraphNodeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationGraphNodeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
