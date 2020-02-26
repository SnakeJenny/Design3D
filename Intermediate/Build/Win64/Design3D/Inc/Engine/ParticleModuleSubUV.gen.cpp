// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/SubUV/ParticleModuleSubUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
// End Cross Module References
	void UParticleModuleSubUV::StaticRegisterNativesUParticleModuleSubUV()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister()
	{
		return UParticleModuleSubUV::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSubUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRealTime_MetaData[];
#endif
		static void NewProp_bUseRealTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRealTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubImageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSubUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUVBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SubImage Index" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "If true, use *real* time when updating the image index.\nThe movie will update regardless of the slomo settings of the game." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit(void* Obj)
	{
		((UParticleModuleSubUV*)Obj)->bUseRealTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime = { "bUseRealTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSubUV), &Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "The index of the sub-image that should be used for the particle.\nThe value is retrieved using the RelativeTime of the particles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex = { "SubImageIndex", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSubUV, SubImageIndex), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "SubUV animation asset to use.\nWhen specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\nThis reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\nThe bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\nWhen specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSubUV, Animation), Z_Construct_UClass_USubUVAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSubUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams = {
		&UParticleModuleSubUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSubUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSubUV, 3607054696);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUV>()
	{
		return UParticleModuleSubUV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSubUV(Z_Construct_UClass_UParticleModuleSubUV, &UParticleModuleSubUV::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSubUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
