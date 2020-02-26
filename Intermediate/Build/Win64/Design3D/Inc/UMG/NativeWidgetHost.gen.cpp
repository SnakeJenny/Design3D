// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/NativeWidgetHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeWidgetHost() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNativeWidgetHost::StaticRegisterNativesUNativeWidgetHost()
	{
	}
	UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister()
	{
		return UNativeWidgetHost::StaticClass();
	}
	struct Z_Construct_UClass_UNativeWidgetHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNativeWidgetHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/NativeWidgetHost.h" },
		{ "ModuleRelativePath", "Public/Components/NativeWidgetHost.h" },
		{ "ToolTip", "A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\nbe used when all you need is to nest a native widget inside a UMG widget." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNativeWidgetHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeWidgetHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams = {
		&UNativeWidgetHost::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNativeWidgetHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNativeWidgetHost, 1544492058);
	template<> UMG_API UClass* StaticClass<UNativeWidgetHost>()
	{
		return UNativeWidgetHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNativeWidgetHost(Z_Construct_UClass_UNativeWidgetHost, &UNativeWidgetHost::StaticClass, TEXT("/Script/UMG"), TEXT("UNativeWidgetHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeWidgetHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
