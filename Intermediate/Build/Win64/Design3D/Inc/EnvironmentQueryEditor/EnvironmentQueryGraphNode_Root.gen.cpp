// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryEditor/Classes/EnvironmentQueryGraphNode_Root.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode_Root() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode_Root::StaticRegisterNativesUEnvironmentQueryGraphNode_Root()
	{
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDebugError_MetaData[];
#endif
		static void NewProp_bHasDebugError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDebugError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMessages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugMessages;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugMessages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvironmentQueryGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode_Root.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Root*)Obj)->bHasDebugError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError = { "bHasDebugError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvironmentQueryGraphNode_Root), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages = { "DebugMessages", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvironmentQueryGraphNode_Root, DebugMessages), METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_Inner = { "DebugMessages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode_Root>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Root, 2899773521);
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode_Root>()
	{
		return UEnvironmentQueryGraphNode_Root::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Root(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root, &UEnvironmentQueryGraphNode_Root::StaticClass, TEXT("/Script/EnvironmentQueryEditor"), TEXT("UEnvironmentQueryGraphNode_Root"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Root);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
