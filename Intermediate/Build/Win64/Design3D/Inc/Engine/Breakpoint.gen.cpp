// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Breakpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakpoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBreakpoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void UBreakpoint::StaticRegisterNativesUBreakpoint()
	{
	}
	UClass* Z_Construct_UClass_UBreakpoint_NoRegister()
	{
		return UBreakpoint::StaticClass();
	}
	struct Z_Construct_UClass_UBreakpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_RemoveAfterHit_MetaData[];
#endif
		static void NewProp_bStepOnce_RemoveAfterHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_RemoveAfterHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_WasPreviouslyDisabled_MetaData[];
#endif
		static void NewProp_bStepOnce_WasPreviouslyDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce_WasPreviouslyDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStepOnce_MetaData[];
#endif
		static void NewProp_bStepOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStepOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreakpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Breakpoint.h" },
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
	};
#endif
	void Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_SetBit(void* Obj)
	{
		((UBreakpoint*)Obj)->bStepOnce_RemoveAfterHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit = { "bStepOnce_RemoveAfterHit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBreakpoint), &Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
	};
#endif
	void Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_SetBit(void* Obj)
	{
		((UBreakpoint*)Obj)->bStepOnce_WasPreviouslyDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled = { "bStepOnce_WasPreviouslyDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBreakpoint), &Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
		{ "ToolTip", "Is this breakpoint auto-generated, and should be removed when next hit?" },
	};
#endif
	void Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_SetBit(void* Obj)
	{
		((UBreakpoint*)Obj)->bStepOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce = { "bStepOnce", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBreakpoint), &Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
		{ "ToolTip", "Node that the breakpoint is placed on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBreakpoint_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBreakpoint, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Breakpoint.h" },
		{ "ToolTip", "Is the breakpoint currently enabled?" },
	};
#endif
	void Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UBreakpoint*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBreakpoint), &Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBreakpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_RemoveAfterHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce_WasPreviouslyDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakpoint_Statics::NewProp_bStepOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakpoint_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBreakpoint_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreakpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreakpoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBreakpoint_Statics::ClassParams = {
		&UBreakpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBreakpoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBreakpoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBreakpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBreakpoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBreakpoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBreakpoint, 3953282159);
	template<> ENGINE_API UClass* StaticClass<UBreakpoint>()
	{
		return UBreakpoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBreakpoint(Z_Construct_UClass_UBreakpoint, &UBreakpoint::StaticClass, TEXT("/Script/Engine"), TEXT("UBreakpoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreakpoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
