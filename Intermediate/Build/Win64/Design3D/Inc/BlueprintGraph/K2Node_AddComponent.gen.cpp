// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_AddComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AddComponent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddComponent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddComponent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_AddComponent::StaticRegisterNativesUK2Node_AddComponent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_AddComponent_NoRegister()
	{
		return UK2Node_AddComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AddComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TemplateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TemplateBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasExposedVariable_MetaData[];
#endif
		static void NewProp_bHasExposedVariable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasExposedVariable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AddComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AddComponent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType = { "TemplateType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AddComponent, TemplateType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
		{ "ToolTip", "The blueprint name we came from, so we can lookup the template after a paste" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint = { "TemplateBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_AddComponent, TemplateBlueprint), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_SetBit(void* Obj)
	{
		((UK2Node_AddComponent*)Obj)->bHasExposedVariable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable = { "bHasExposedVariable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_AddComponent), &Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AddComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AddComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AddComponent_Statics::ClassParams = {
		&UK2Node_AddComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AddComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_AddComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_AddComponent, 1421025384);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_AddComponent>()
	{
		return UK2Node_AddComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AddComponent(Z_Construct_UClass_UK2Node_AddComponent, &UK2Node_AddComponent::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_AddComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AddComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_AddComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
