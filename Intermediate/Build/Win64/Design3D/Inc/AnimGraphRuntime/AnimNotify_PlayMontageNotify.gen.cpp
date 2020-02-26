// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNotifies/AnimNotify_PlayMontageNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayMontageNotify() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
// End Cross Module References
	void UAnimNotify_PlayMontageNotify::StaticRegisterNativesUAnimNotify_PlayMontageNotify()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister()
	{
		return UAnimNotify_PlayMontageNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Montage Notify" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "UAnimNotify_PlayMontageNotify" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "Name of notify that is passed to the PlayMontage K2Node." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayMontageNotify, NotifyName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayMontageNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::ClassParams = {
		&UAnimNotify_PlayMontageNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayMontageNotify, 43529750);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimNotify_PlayMontageNotify>()
	{
		return UAnimNotify_PlayMontageNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayMontageNotify(Z_Construct_UClass_UAnimNotify_PlayMontageNotify, &UAnimNotify_PlayMontageNotify::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimNotify_PlayMontageNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotify);
	void UAnimNotify_PlayMontageNotifyWindow::StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister()
	{
		return UAnimNotify_PlayMontageNotifyWindow::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Montage Notify Window" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "UAnimNotify_PlayMontageNotifyWindow" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "Name of notify that is passed to ability." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayMontageNotifyWindow, NotifyName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayMontageNotifyWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::ClassParams = {
		&UAnimNotify_PlayMontageNotifyWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayMontageNotifyWindow, 307458758);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimNotify_PlayMontageNotifyWindow>()
	{
		return UAnimNotify_PlayMontageNotifyWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayMontageNotifyWindow(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow, &UAnimNotify_PlayMontageNotifyWindow::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("UAnimNotify_PlayMontageNotifyWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotifyWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
