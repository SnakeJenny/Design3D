// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentVisualizers/Public/Manipulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManipulator() {}
// Cross Module References
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_AManipulator_NoRegister();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_AManipulator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ComponentVisualizers();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
// End Cross Module References
	void AManipulator::StaticRegisterNativesAManipulator()
	{
	}
	UClass* Z_Construct_UClass_AManipulator_NoRegister()
	{
		return AManipulator::StaticClass();
	}
	struct Z_Construct_UClass_AManipulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManipulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Manipulator.h" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
		{ "ToolTip", "Visual representation of this manipulator." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManipulator, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
		{ "ToolTip", "The component to transform when this manipulator was moved." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent = { "AssociatedComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManipulator, AssociatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManipulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AManipulator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewportInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AManipulator, IViewportInteractableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManipulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManipulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManipulator_Statics::ClassParams = {
		&AManipulator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AManipulator_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManipulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManipulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManipulator, 3223992563);
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<AManipulator>()
	{
		return AManipulator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManipulator(Z_Construct_UClass_AManipulator, &AManipulator::StaticClass, TEXT("/Script/ComponentVisualizers"), TEXT("AManipulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManipulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
