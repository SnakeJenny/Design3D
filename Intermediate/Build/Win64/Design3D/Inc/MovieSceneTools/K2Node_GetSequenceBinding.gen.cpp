// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Public/K2Node_GetSequenceBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetSequenceBinding() {}
// Cross Module References
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UK2Node_GetSequenceBinding::StaticRegisterNativesUK2Node_GetSequenceBinding()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding_NoRegister()
	{
		return UK2Node_GetSequenceBinding::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetSequenceBinding.h" },
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
		{ "ToolTip", "The user-selected literal binding identifier from the sequence to use" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetSequenceBinding, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData[] = {
		{ "AllowedClasses", "MovieSceneSequence" },
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/K2Node_GetSequenceBinding.h" },
		{ "ToolTip", "The sequence from which to choose a binding identifier" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence = { "SourceSequence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetSequenceBinding, SourceSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::NewProp_SourceSequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetSequenceBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::ClassParams = {
		&UK2Node_GetSequenceBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetSequenceBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetSequenceBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetSequenceBinding, 2001812473);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UK2Node_GetSequenceBinding>()
	{
		return UK2Node_GetSequenceBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetSequenceBinding(Z_Construct_UClass_UK2Node_GetSequenceBinding, &UK2Node_GetSequenceBinding::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UK2Node_GetSequenceBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetSequenceBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
