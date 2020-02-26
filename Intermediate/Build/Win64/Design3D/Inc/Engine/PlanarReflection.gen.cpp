// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PlanarReflection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarReflection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlanarReflection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlanarReflection();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APlanarReflection_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlanarReflectionComponent_NoRegister();
// End Cross Module References
	void APlanarReflection::StaticRegisterNativesAPlanarReflection()
	{
		UClass* Class = APlanarReflection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", &APlanarReflection::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics
	{
		struct PlanarReflection_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PlanarReflection_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlanarReflection_eventOnInterpToggle_Parms), &Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanarReflection, nullptr, "OnInterpToggle", sizeof(PlanarReflection_eventOnInterpToggle_Parms), Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanarReflection_OnInterpToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanarReflection_OnInterpToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlanarReflection_NoRegister()
	{
		return APlanarReflection::StaticClass();
	}
	struct Z_Construct_UClass_APlanarReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewPlane_MetaData[];
#endif
		static void NewProp_bShowPreviewPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewPlane;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarReflectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanarReflectionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanarReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlanarReflection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanarReflection_OnInterpToggle, "OnInterpToggle" }, // 1224920955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanarReflection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/PlanarReflection.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif
	void Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_SetBit(void* Obj)
	{
		((APlanarReflection*)Obj)->bShowPreviewPlane_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane = { "bShowPreviewPlane", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanarReflection), &Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanarReflection, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SceneCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/PlanarReflection.h" },
		{ "ToolTip", "Planar reflection component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent = { "PlanarReflectionComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanarReflection, PlanarReflectionComponent), Z_Construct_UClass_UPlanarReflectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanarReflection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_bShowPreviewPlane,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanarReflection_Statics::NewProp_PlanarReflectionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanarReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanarReflection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanarReflection_Statics::ClassParams = {
		&APlanarReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlanarReflection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlanarReflection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlanarReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanarReflection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanarReflection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanarReflection, 3144439957);
	template<> ENGINE_API UClass* StaticClass<APlanarReflection>()
	{
		return APlanarReflection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanarReflection(Z_Construct_UClass_APlanarReflection, &APlanarReflection::StaticClass, TEXT("/Script/Engine"), TEXT("APlanarReflection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanarReflection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
