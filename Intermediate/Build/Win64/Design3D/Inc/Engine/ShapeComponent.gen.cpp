// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ShapeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
	void UShapeComponent::StaticRegisterNativesUShapeComponent()
	{
	}
	UClass* Z_Construct_UClass_UShapeComponent_NoRegister()
	{
		return UShapeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShapeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDynamicObstacle_MetaData[];
#endif
		static void NewProp_bDynamicObstacle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDynamicObstacle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldCollideWhenPlacing_MetaData[];
#endif
		static void NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCollideWhenPlacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOnlyIfSelected_MetaData[];
#endif
		static void NewProp_bDrawOnlyIfSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOnlyIfSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShapeBodySetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/ShapeComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "ShapeComponent is a PrimitiveComponent that is represented by a simple geometrical shape (sphere, capsule, box, etc)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Navigation area type (empty = default obstacle)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShapeComponent, AreaClass), Z_Construct_UClass_UNavAreaBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If set, shape will be exported for navigation as dynamic modifier instead of using regular collision data" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bDynamicObstacle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle = { "bDynamicObstacle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "If true it allows Collision when placing even if collision is not enabled" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bShouldCollideWhenPlacing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing = { "bShouldCollideWhenPlacing", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Only show this component if the actor is selected" },
	};
#endif
	void Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit(void* Obj)
	{
		((UShapeComponent*)Obj)->bDrawOnlyIfSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected = { "bDrawOnlyIfSelected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UShapeComponent), &Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Color used to draw the shape." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor = { "ShapeColor", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShapeComponent, ShapeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ShapeComponent.h" },
		{ "ToolTip", "Description of collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup = { "ShapeBodySetup", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShapeComponent, ShapeBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDynamicObstacle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bShouldCollideWhenPlacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_bDrawOnlyIfSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeComponent_Statics::NewProp_ShapeBodySetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShapeComponent_Statics::ClassParams = {
		&UShapeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShapeComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShapeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShapeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShapeComponent, 2053396355);
	template<> ENGINE_API UClass* StaticClass<UShapeComponent>()
	{
		return UShapeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShapeComponent(Z_Construct_UClass_UShapeComponent, &UShapeComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UShapeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
