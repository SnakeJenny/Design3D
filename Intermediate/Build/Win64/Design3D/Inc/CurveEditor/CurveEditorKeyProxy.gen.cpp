// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveEditor/Public/CurveEditorKeyProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorKeyProxy() {}
// Cross Module References
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorKeyProxy::StaticRegisterNativesUCurveEditorKeyProxy()
	{
	}
	UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister()
	{
		return UCurveEditorKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorKeyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurveEditorKeyProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICurveEditorKeyProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorKeyProxy_Statics::ClassParams = {
		&UCurveEditorKeyProxy::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveEditorKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorKeyProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveEditorKeyProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveEditorKeyProxy, 3010940855);
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorKeyProxy>()
	{
		return UCurveEditorKeyProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveEditorKeyProxy(Z_Construct_UClass_UCurveEditorKeyProxy, &UCurveEditorKeyProxy::StaticClass, TEXT("/Script/CurveEditor"), TEXT("UCurveEditorKeyProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorKeyProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
