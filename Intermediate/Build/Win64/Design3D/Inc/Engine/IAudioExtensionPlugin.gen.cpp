// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/IAudioExtensionPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
// End Cross Module References
	void USpatializationPluginSourceSettingsBase::StaticRegisterNativesUSpatializationPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatializationPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams = {
		&USpatializationPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatializationPluginSourceSettingsBase, 634976581);
	template<> ENGINE_API UClass* StaticClass<USpatializationPluginSourceSettingsBase>()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatializationPluginSourceSettingsBase(Z_Construct_UClass_USpatializationPluginSourceSettingsBase, &USpatializationPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("USpatializationPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatializationPluginSourceSettingsBase);
	void UOcclusionPluginSourceSettingsBase::StaticRegisterNativesUOcclusionPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOcclusionPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams = {
		&UOcclusionPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOcclusionPluginSourceSettingsBase, 1899974002);
	template<> ENGINE_API UClass* StaticClass<UOcclusionPluginSourceSettingsBase>()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOcclusionPluginSourceSettingsBase(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase, &UOcclusionPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UOcclusionPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionPluginSourceSettingsBase);
	void UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams = {
		&UReverbPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverbPluginSourceSettingsBase, 964291257);
	template<> ENGINE_API UClass* StaticClass<UReverbPluginSourceSettingsBase>()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverbPluginSourceSettingsBase(Z_Construct_UClass_UReverbPluginSourceSettingsBase, &UReverbPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UReverbPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbPluginSourceSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
