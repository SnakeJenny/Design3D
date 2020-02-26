// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Kill/ParticleModuleKillHeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillHeight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillHeight();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleKillHeight::StaticRegisterNativesUParticleModuleKillHeight()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleKillHeight_NoRegister()
	{
		return UParticleModuleKillHeight::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleKillHeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyPSysScale_MetaData[];
#endif
		static void NewProp_bApplyPSysScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyPSysScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloor_MetaData[];
#endif
		static void NewProp_bFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[];
#endif
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleKillHeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillHeight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Kill Height" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, take the particle systems scale into account" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_SetBit(void* Obj)
	{
		((UParticleModuleKillHeight*)Obj)->bApplyPSysScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale = { "bApplyPSysScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, the plane should be considered a floor - ie kill anything BELOW it.\nIf false, if is a ceiling - ie kill anything ABOVE it." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_SetBit(void* Obj)
	{
		((UParticleModuleKillHeight*)Obj)->bFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor = { "bFloor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "If true, the height should be treated as a world-space position." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleKillHeight*)Obj)->bAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleKillHeight), &Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Kill" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillHeight.h" },
		{ "ToolTip", "The height at which to kill the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleKillHeight, Height), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bApplyPSysScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_bAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillHeight_Statics::NewProp_Height,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleKillHeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillHeight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillHeight_Statics::ClassParams = {
		&UParticleModuleKillHeight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillHeight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillHeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleKillHeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleKillHeight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleKillHeight, 1037923873);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleKillHeight>()
	{
		return UParticleModuleKillHeight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleKillHeight(Z_Construct_UClass_UParticleModuleKillHeight, &UParticleModuleKillHeight::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleKillHeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillHeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
