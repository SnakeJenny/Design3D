// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SceneCapture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void ASceneCapture2D::StaticRegisterNativesASceneCapture2D()
	{
		UClass* Class = ASceneCapture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", &ASceneCapture2D::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics
	{
		struct SceneCapture2D_eventOnInterpToggle_Parms
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
	void Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SceneCapture2D_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SceneCapture2D_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCapture2D, nullptr, "OnInterpToggle", sizeof(SceneCapture2D_eventOnInterpToggle_Parms), Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister()
	{
		return ASceneCapture2D::StaticClass();
	}
	struct Z_Construct_UClass_ASceneCapture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneCapture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASceneCapture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle, "OnInterpToggle" }, // 2517897336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCapture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D = { "CaptureComponent2D", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASceneCapture2D, CaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneCapture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCapture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams = {
		&ASceneCapture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneCapture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASceneCapture2D, 129088147);
	template<> ENGINE_API UClass* StaticClass<ASceneCapture2D>()
	{
		return ASceneCapture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneCapture2D(Z_Construct_UClass_ASceneCapture2D, &ASceneCapture2D::StaticClass, TEXT("/Script/Engine"), TEXT("ASceneCapture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
