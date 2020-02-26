// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/SubUV/ParticleModuleSubUVMovie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVMovie() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleSubUVMovie::StaticRegisterNativesUParticleModuleSubUVMovie()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister()
	{
		return UParticleModuleSubUVMovie::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSubUVMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartingFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUV,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SubUV Movie" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The starting image index for the SubUV (1 = the first frame).\nAssumes order of Left->Right, Top->Bottom\nIf greater than the last frame, it will clamp to the last one.\nIf 0, then randomly selects a starting frame." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame = { "StartingFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSubUVMovie, StartingFrame), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The frame rate the SubUV images should be 'flipped' thru at." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSubUVMovie, FrameRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "If true, use the emitter time to look up the frame rate.\nIf false (default), use the particle relative time." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleSubUVMovie*)Obj)->bUseEmitterTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSubUVMovie), &Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUVMovie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams = {
		&UParticleModuleSubUVMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSubUVMovie, 2916812864);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUVMovie>()
	{
		return UParticleModuleSubUVMovie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSubUVMovie(Z_Construct_UClass_UParticleModuleSubUVMovie, &UParticleModuleSubUVMovie::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSubUVMovie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVMovie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
