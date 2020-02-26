// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeGroupControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeGroupControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeGroupControl();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeGroupControl::StaticRegisterNativesUSoundNodeGroupControl()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeGroupControl_NoRegister()
	{
		return USoundNodeGroupControl::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeGroupControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupSizes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupSizes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeGroupControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Group Control" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeGroupControl.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "Plays different sounds depending on the number of active sounds\nAny time a new sound is played, the first group that has an available slot will be chosen" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData[] = {
		{ "Category", "GroupControl" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeGroupControl.h" },
		{ "ToolTip", "How many active sounds are allowed for each group" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes = { "GroupSizes", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeGroupControl, GroupSizes), METADATA_PARAMS(Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner = { "GroupSizes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeGroupControl_Statics::NewProp_GroupSizes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeGroupControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeGroupControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams = {
		&USoundNodeGroupControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeGroupControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeGroupControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeGroupControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeGroupControl, 1443610959);
	template<> ENGINE_API UClass* StaticClass<USoundNodeGroupControl>()
	{
		return USoundNodeGroupControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeGroupControl(Z_Construct_UClass_USoundNodeGroupControl, &USoundNodeGroupControl::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeGroupControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeGroupControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
