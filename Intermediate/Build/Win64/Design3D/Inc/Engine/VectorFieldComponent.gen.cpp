// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/VectorFieldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UVectorFieldComponent_SetIntensity();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
// End Cross Module References
	void UVectorFieldComponent::StaticRegisterNativesUVectorFieldComponent()
	{
		UClass* Class = UVectorFieldComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIntensity", &UVectorFieldComponent::execSetIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics
	{
		struct VectorFieldComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VectorFieldComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|VectorField" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "Set the intensity of the vector field.\n@param NewIntensity - The new intensity of the vector field." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorFieldComponent, nullptr, "SetIntensity", sizeof(VectorFieldComponent_eventSetIntensity_Parms), Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVectorFieldComponent_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVectorFieldComponent_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister()
	{
		return UVectorFieldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewVectorField_MetaData[];
#endif
		static void NewProp_bPreviewVectorField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewVectorField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVectorFieldComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVectorFieldComponent_SetIntensity, "SetIntensity" }, // 4029747962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/VectorFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "A Component referencing a vector field." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "If true, the vector field is only used for preview visualizations." },
	};
#endif
	void Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_SetBit(void* Obj)
	{
		((UVectorFieldComponent*)Obj)->bPreviewVectorField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField = { "bPreviewVectorField", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVectorFieldComponent), &Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "How tightly particles follow the vector field." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldComponent, Tightness), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "The intensity at which the vector field is applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldComponent, Intensity), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField_MetaData[] = {
		{ "Category", "VectorFieldComponent" },
		{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
		{ "ToolTip", "The vector field asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField = { "VectorField", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldComponent, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_bPreviewVectorField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Tightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldComponent_Statics::NewProp_VectorField,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldComponent_Statics::ClassParams = {
		&UVectorFieldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVectorFieldComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVectorFieldComponent, 2456537237);
	template<> ENGINE_API UClass* StaticClass<UVectorFieldComponent>()
	{
		return UVectorFieldComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorFieldComponent(Z_Construct_UClass_UVectorFieldComponent, &UVectorFieldComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorFieldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
