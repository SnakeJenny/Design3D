// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PostProcessComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
// End Cross Module References
	void UPostProcessComponent::StaticRegisterNativesUPostProcessComponent()
	{
		UClass* Class = UPostProcessComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &UPostProcessComponent::execAddOrUpdateBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics
	{
		struct PostProcessComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostProcessComponent, nullptr, "AddOrUpdateBlendable", sizeof(PostProcessComponent_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister()
	{
		return UPostProcessComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPostProcessComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[];
#endif
		static void NewProp_bUnbound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostProcessComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostProcessComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 2219603995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PostProcessComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "PostProcessComponent. Enables Post process controls for blueprints.\n   Will use a parent UShapeComponent to provide volume data if available." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "set this to false to use the parent shape component as volume bounds. True affects the whole world regardless." },
	};
#endif
	void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit(void* Obj)
	{
		((UPostProcessComponent*)Obj)->bUnbound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Whether this volume is enabled or not." },
	};
#endif
	void Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UPostProcessComponent*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPostProcessComponent), &Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "0:no effect, 1:full effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessComponent, BlendWeight), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
		{ "UIMax", "6000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius = { "BlendRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessComponent, BlendRadius), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this volume." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessComponent, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bUnbound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_BlendRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessComponent_Statics::NewProp_Settings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPostProcessComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(UPostProcessComponent, IInterface_PostProcessVolume), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostProcessComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams = {
		&UPostProcessComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPostProcessComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostProcessComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostProcessComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostProcessComponent, 3018992717);
	template<> ENGINE_API UClass* StaticClass<UPostProcessComponent>()
	{
		return UPostProcessComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostProcessComponent(Z_Construct_UClass_UPostProcessComponent, &UPostProcessComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPostProcessComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPostProcessComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
