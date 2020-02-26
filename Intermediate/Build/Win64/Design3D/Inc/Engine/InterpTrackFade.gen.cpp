// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UInterpTrackFade::StaticRegisterNativesUInterpTrackFade()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister()
	{
		return UInterpTrackFade::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[];
#endif
		static void NewProp_bFadeAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistFade_MetaData[];
#endif
		static void NewProp_bPersistFade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistFade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Fade Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFade.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "Color to fade to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFade, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "True to set master audio volume along with the visual fade." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
	{
		((UInterpTrackFade*)Obj)->bFadeAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackFade), &Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "InterpTrackFade\n\nSpecial float property track that controls camera fading over time.\nShould live in a Director group." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_SetBit(void* Obj)
	{
		((UInterpTrackFade*)Obj)->bPersistFade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade = { "bPersistFade", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackFade), &Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFade_Statics::ClassParams = {
		&UInterpTrackFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackFade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackFade, 3982556744);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFade>()
	{
		return UInterpTrackFade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFade(Z_Construct_UClass_UInterpTrackFade, &UInterpTrackFade::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
