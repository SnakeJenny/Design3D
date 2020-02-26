// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Public/SequencerKeyStructGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerKeyStructGenerator() {}
// Cross Module References
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneKeyStructType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UArrayProperty();
// End Cross Module References
	void UMovieSceneKeyStructType::StaticRegisterNativesUMovieSceneKeyStructType()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneKeyStructType_NoRegister()
	{
		return UMovieSceneKeyStructType::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneKeyStructType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestValueProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestValueProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestTimeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestTimeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceValuesProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceValuesProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTimesProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTimesProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneKeyStructType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerKeyStructGenerator.h" },
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Struct type that is generated from an FMovieSceneChannel type to create a single edit interface for a key/value pair" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The value property for this reflected struct, of the same type as SourceValuesProperty->Inner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty = { "DestValueProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneKeyStructType, DestValueProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The time property for this reflected struct, of type FFrameNumber" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty = { "DestTimeProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneKeyStructType, DestTimeProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The (external) source TArray<T> property that stores the key values in the channel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty = { "SourceValuesProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneKeyStructType, SourceValuesProperty), Z_Construct_UClass_UArrayProperty, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerKeyStructGenerator.h" },
		{ "ToolTip", "The (external) source TArray<FFrameNumber> property that stores the key times in the channel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty = { "SourceTimesProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneKeyStructType, SourceTimesProperty), Z_Construct_UClass_UArrayProperty, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestValueProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_DestTimeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceValuesProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneKeyStructType_Statics::NewProp_SourceTimesProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneKeyStructType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneKeyStructType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneKeyStructType_Statics::ClassParams = {
		&UMovieSceneKeyStructType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneKeyStructType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneKeyStructType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneKeyStructType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneKeyStructType, 1614318156);
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneKeyStructType>()
	{
		return UMovieSceneKeyStructType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneKeyStructType(Z_Construct_UClass_UMovieSceneKeyStructType, &UMovieSceneKeyStructType::StaticClass, TEXT("/Script/Sequencer"), TEXT("UMovieSceneKeyStructType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneKeyStructType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
