// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene2DTransformSection() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieScene2DTransformSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
class UScriptStruct* FMovieScene2DTransformMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene2DTransformMask, Z_Construct_UPackage__Script_UMG(), TEXT("MovieScene2DTransformMask"), sizeof(FMovieScene2DTransformMask), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieScene2DTransformMask>()
{
	return FMovieScene2DTransformMask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieScene2DTransformMask(FMovieScene2DTransformMask::StaticStruct, TEXT("/Script/UMG"), TEXT("MovieScene2DTransformMask"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformMask
{
	FScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieScene2DTransformMask")),new UScriptStruct::TCppStructOps<FMovieScene2DTransformMask>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFMovieScene2DTransformMask;
	struct Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene2DTransformMask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScene2DTransformMask, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::NewProp_Mask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"MovieScene2DTransformMask",
		sizeof(FMovieScene2DTransformMask),
		alignof(FMovieScene2DTransformMask),
		Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene2DTransformMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieScene2DTransformMask"), sizeof(FMovieScene2DTransformMask), Get_Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieScene2DTransformMask_Hash() { return 1573744490U; }
	void UMovieScene2DTransformSection::StaticRegisterNativesUMovieScene2DTransformSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection_NoRegister()
	{
		return UMovieScene2DTransformSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene2DTransformSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shear_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/MovieScene2DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A transform section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Shear curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear = { "Shear", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Shear, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Shear), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Rotation curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene2DTransformSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, UMovieScene2DTransformSection), STRUCT_OFFSET(UMovieScene2DTransformSection, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/MovieScene2DTransformSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene2DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieScene2DTransformMask, METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Shear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene2DTransformSection_Statics::NewProp_TransformMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene2DTransformSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene2DTransformSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams = {
		&UMovieScene2DTransformSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene2DTransformSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene2DTransformSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene2DTransformSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene2DTransformSection, 1102276157);
	template<> UMG_API UClass* StaticClass<UMovieScene2DTransformSection>()
	{
		return UMovieScene2DTransformSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene2DTransformSection(Z_Construct_UClass_UMovieScene2DTransformSection, &UMovieScene2DTransformSection::StaticClass, TEXT("/Script/UMG"), TEXT("UMovieScene2DTransformSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene2DTransformSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene2DTransformSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
