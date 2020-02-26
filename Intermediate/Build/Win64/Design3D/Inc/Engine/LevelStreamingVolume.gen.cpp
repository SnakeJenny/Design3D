// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelStreamingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingVolume() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
	static UEnum* EStreamingVolumeUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStreamingVolumeUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EStreamingVolumeUsage"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStreamingVolumeUsage>()
	{
		return EStreamingVolumeUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStreamingVolumeUsage(EStreamingVolumeUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EStreamingVolumeUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Hash() { return 3881221784U; }
	UEnum* Z_Construct_UEnum_Engine_EStreamingVolumeUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStreamingVolumeUsage"), 0, Get_Z_Construct_UEnum_Engine_EStreamingVolumeUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SVB_Loading", (int64)SVB_Loading },
				{ "SVB_LoadingAndVisibility", (int64)SVB_LoadingAndVisibility },
				{ "SVB_VisibilityBlockingOnLoad", (int64)SVB_VisibilityBlockingOnLoad },
				{ "SVB_BlockingOnLoad", (int64)SVB_BlockingOnLoad },
				{ "SVB_LoadingNotVisible", (int64)SVB_LoadingNotVisible },
				{ "SVB_MAX", (int64)SVB_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
				{ "ToolTip", "Enum for different usage cases of level streaming volumes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EStreamingVolumeUsage",
				"EStreamingVolumeUsage",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ALevelStreamingVolume::StaticRegisterNativesALevelStreamingVolume()
	{
	}
	UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister()
	{
		return ALevelStreamingVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALevelStreamingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StreamingUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorPreVisOnly_MetaData[];
#endif
		static void NewProp_bEditorPreVisOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorPreVisOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingLevelNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamingLevelNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelStreamingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/LevelStreamingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "Determines what this volume is used for, e.g. whether to control loading, loading and visibility or just visibilty (blocking on load)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage = { "StreamingUsage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelStreamingVolume, StreamingUsage), Z_Construct_UEnum_Engine_EStreamingVolumeUsage, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "If true, this streaming volume is ignored by the streaming volume code.  Used to either\ndisable a level streaming volume without disassociating it from the level, or to toggle\nthe control of a level's streaming between Kismet and volume streaming." },
	};
#endif
	void Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((ALevelStreamingVolume*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelStreamingVolume), &Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "If true, this streaming volume should only be used for editor streaming level previs." },
	};
#endif
	void Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_SetBit(void* Obj)
	{
		((ALevelStreamingVolume*)Obj)->bEditorPreVisOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly = { "bEditorPreVisOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelStreamingVolume), &Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_MetaData[] = {
		{ "Category", "LevelStreamingVolume" },
		{ "DisplayName", "Streaming Levels" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingVolume.h" },
		{ "ToolTip", "Levels names affected by this level streaming volume." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames = { "StreamingLevelNames", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelStreamingVolume, StreamingLevelNames), METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_Inner = { "StreamingLevelNames", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_bEditorPreVisOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelStreamingVolume_Statics::NewProp_StreamingLevelNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelStreamingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelStreamingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelStreamingVolume_Statics::ClassParams = {
		&ALevelStreamingVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelStreamingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALevelStreamingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelStreamingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelStreamingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelStreamingVolume, 3649235964);
	template<> ENGINE_API UClass* StaticClass<ALevelStreamingVolume>()
	{
		return ALevelStreamingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelStreamingVolume(Z_Construct_UClass_ALevelStreamingVolume, &ALevelStreamingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelStreamingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelStreamingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
