// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Kill/ParticleModuleKillBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleKillBox::StaticRegisterNativesUParticleModuleKillBox()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister()
	{
		return UParticleModuleKillBox::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleKillBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAxisAlignedAndFixedSize_MetaData[];
#endif
		static void NewProp_bAxisAlignedAndFixedSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAxisAlignedAndFixedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillInside_MetaData[];
#endif
		static void NewProp_bKillInside_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[];
#endif
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperRightCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperRightCorner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerLeftCorner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerLeftCorner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleKillBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Kill Box" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillBox.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, the box will always be axis aligned and non-scalable." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bAxisAlignedAndFixedSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize = { "bAxisAlignedAndFixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, particles INSIDE the box will be killed.\nIf false (the default), particles OUTSIDE the box will be killed." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bKillInside = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside = { "bKillInside", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, the box coordinates are in world space./" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "The upper right corner of the box." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner = { "UpperRightCorner", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleKillBox, UpperRightCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "The lower left corner of the box." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner = { "LowerLeftCorner", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleKillBox, LowerLeftCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleKillBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillBox_Statics::ClassParams = {
		&UParticleModuleKillBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleKillBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleKillBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleKillBox, 2560255908);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleKillBox>()
	{
		return UParticleModuleKillBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleKillBox(Z_Construct_UClass_UParticleModuleKillBox, &UParticleModuleKillBox::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleKillBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
