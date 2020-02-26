// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ExponentialHeightFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
// End Cross Module References
	void AExponentialHeightFog::StaticRegisterNativesAExponentialHeightFog()
	{
		UClass* Class = AExponentialHeightFog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &AExponentialHeightFog::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExponentialHeightFog, nullptr, "OnRep_bEnabled", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister()
	{
		return AExponentialHeightFog::StaticClass();
	}
	struct Z_Construct_UClass_AExponentialHeightFog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExponentialHeightFog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExponentialHeightFog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExponentialHeightFog_OnRep_bEnabled, "OnRep_bEnabled" }, // 2484535290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "HideCategories", "Input Collision" },
		{ "IncludePath", "Engine/ExponentialHeightFog.h" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements an Actor for exponential height fog." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "replicated copy of ExponentialHeightFogComponent's bEnabled property" },
	};
#endif
	void Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AExponentialHeightFog*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AExponentialHeightFog), &Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ExponentialHeightFog" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ExponentialHeightFog.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExponentialHeightFog, Component), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExponentialHeightFog_Statics::NewProp_Component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExponentialHeightFog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExponentialHeightFog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExponentialHeightFog_Statics::ClassParams = {
		&AExponentialHeightFog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AExponentialHeightFog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExponentialHeightFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExponentialHeightFog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExponentialHeightFog, 4033328576);
	template<> ENGINE_API UClass* StaticClass<AExponentialHeightFog>()
	{
		return AExponentialHeightFog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExponentialHeightFog(Z_Construct_UClass_AExponentialHeightFog, &AExponentialHeightFog::StaticClass, TEXT("/Script/Engine"), TEXT("AExponentialHeightFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExponentialHeightFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
