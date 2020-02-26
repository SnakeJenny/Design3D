// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/UI/VRRadialMenuHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRadialMenuHandler() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVRRadialMenuHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VREditor();
// End Cross Module References
	void UVRRadialMenuHandler::StaticRegisterNativesUVRRadialMenuHandler()
	{
	}
	UClass* Z_Construct_UClass_UVRRadialMenuHandler_NoRegister()
	{
		return UVRRadialMenuHandler::StaticClass();
	}
	struct Z_Construct_UClass_UVRRadialMenuHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRRadialMenuHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/VRRadialMenuHandler.h" },
		{ "ModuleRelativePath", "UI/VRRadialMenuHandler.h" },
		{ "ToolTip", "VR Editor user interface manager" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRRadialMenuHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRRadialMenuHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRRadialMenuHandler_Statics::ClassParams = {
		&UVRRadialMenuHandler::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVRRadialMenuHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRRadialMenuHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRRadialMenuHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRRadialMenuHandler, 2162038394);
	template<> VREDITOR_API UClass* StaticClass<UVRRadialMenuHandler>()
	{
		return UVRRadialMenuHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRRadialMenuHandler(Z_Construct_UClass_UVRRadialMenuHandler, &UVRRadialMenuHandler::StaticClass, TEXT("/Script/VREditor"), TEXT("UVRRadialMenuHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRadialMenuHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
