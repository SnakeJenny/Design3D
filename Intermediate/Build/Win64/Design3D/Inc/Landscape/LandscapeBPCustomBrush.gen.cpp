// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeBPCustomBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeBPCustomBrush() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush();
// End Cross Module References
	static FName NAME_ALandscapeBlueprintCustomBrush_Initialize = FName(TEXT("Initialize"));
	void ALandscapeBlueprintCustomBrush::Initialize(FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize)
	{
		LandscapeBlueprintCustomBrush_eventInitialize_Parms Parms;
		Parms.InLandscapeSize=InLandscapeSize;
		Parms.InLandscapeRenderTargetSize=InLandscapeRenderTargetSize;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintCustomBrush_Initialize),&Parms);
	}
	static FName NAME_ALandscapeBlueprintCustomBrush_Render = FName(TEXT("Render"));
	UTextureRenderTarget2D* ALandscapeBlueprintCustomBrush::Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult)
	{
		LandscapeBlueprintCustomBrush_eventRender_Parms Parms;
		Parms.InIsHeightmap=InIsHeightmap ? true : false;
		Parms.InCombinedResult=InCombinedResult;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintCustomBrush_Render),&Parms);
		return Parms.ReturnValue;
	}
	void ALandscapeBlueprintCustomBrush::StaticRegisterNativesALandscapeBlueprintCustomBrush()
	{
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLandscapeRenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLandscapeRenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLandscapeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLandscapeSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeRenderTargetSize = { "InLandscapeRenderTargetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintCustomBrush_eventInitialize_Parms, InLandscapeRenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeSize = { "InLandscapeSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintCustomBrush_eventInitialize_Parms, InLandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeRenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::NewProp_InLandscapeSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintCustomBrush, nullptr, "Initialize", sizeof(LandscapeBlueprintCustomBrush_eventInitialize_Parms), Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCombinedResult;
		static void NewProp_InIsHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsHeightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintCustomBrush_eventRender_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InCombinedResult = { "InCombinedResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintCustomBrush_eventRender_Parms, InCombinedResult), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InIsHeightmap_SetBit(void* Obj)
	{
		((LandscapeBlueprintCustomBrush_eventRender_Parms*)Obj)->InIsHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InIsHeightmap = { "InIsHeightmap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeBlueprintCustomBrush_eventRender_Parms), &Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InIsHeightmap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InCombinedResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::NewProp_InIsHeightmap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintCustomBrush, nullptr, "Render", sizeof(LandscapeBlueprintCustomBrush_eventRender_Parms), Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister()
	{
		return ALandscapeBlueprintCustomBrush::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousAffectWeightmap_MetaData[];
#endif
		static void NewProp_PreviousAffectWeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviousAffectWeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousAffectHeightmap_MetaData[];
#endif
		static void NewProp_PreviousAffectHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreviousAffectHeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCommited_MetaData[];
#endif
		static void NewProp_bIsCommited_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCommited;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningLandscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningLandscape;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectWeightmap_MetaData[];
#endif
		static void NewProp_AffectWeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectWeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectHeightmap_MetaData[];
#endif
		static void NewProp_AffectHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectHeightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Initialize, "Initialize" }, // 3533777967
		{ &Z_Construct_UFunction_ALandscapeBlueprintCustomBrush_Render, "Render" }, // 2836573271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Replication Input LOD Actor Cooking Rendering" },
		{ "IncludePath", "LandscapeBPCustomBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->PreviousAffectWeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap = { "PreviousAffectWeightmap", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->PreviousAffectHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap = { "PreviousAffectHeightmap", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->bIsCommited = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited = { "bIsCommited", nullptr, (EPropertyFlags)0x0040000c00200000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_OwningLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_OwningLandscape = { "OwningLandscape", nullptr, (EPropertyFlags)0x0040000c00200000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeBlueprintCustomBrush, OwningLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_OwningLandscape_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_OwningLandscape_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->AffectWeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap = { "AffectWeightmap", nullptr, (EPropertyFlags)0x0040000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintCustomBrush*)Obj)->AffectHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap = { "AffectHeightmap", nullptr, (EPropertyFlags)0x0040000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintCustomBrush), &Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectWeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_PreviousAffectHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_bIsCommited,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_OwningLandscape,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectWeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::NewProp_AffectHeightmap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintCustomBrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::ClassParams = {
		&ALandscapeBlueprintCustomBrush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeBlueprintCustomBrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeBlueprintCustomBrush, 2551200601);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeBlueprintCustomBrush>()
	{
		return ALandscapeBlueprintCustomBrush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeBlueprintCustomBrush(Z_Construct_UClass_ALandscapeBlueprintCustomBrush, &ALandscapeBlueprintCustomBrush::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeBlueprintCustomBrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintCustomBrush);
	void ALandscapeBlueprintCustomSimulationBrush::StaticRegisterNativesALandscapeBlueprintCustomSimulationBrush()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_NoRegister()
	{
		return ALandscapeBlueprintCustomSimulationBrush::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeBlueprintCustomBrush,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Replication Input LOD Actor Cooking Rendering Replication Input LOD Actor Cooking Rendering" },
		{ "IncludePath", "LandscapeBPCustomBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeBPCustomBrush.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintCustomSimulationBrush>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::ClassParams = {
		&ALandscapeBlueprintCustomSimulationBrush::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeBlueprintCustomSimulationBrush, 719139729);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeBlueprintCustomSimulationBrush>()
	{
		return ALandscapeBlueprintCustomSimulationBrush::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeBlueprintCustomSimulationBrush(Z_Construct_UClass_ALandscapeBlueprintCustomSimulationBrush, &ALandscapeBlueprintCustomSimulationBrush::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeBlueprintCustomSimulationBrush"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintCustomSimulationBrush);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
