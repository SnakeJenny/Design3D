// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderSections/Public/MovieSceneParticleTrackSectionRecorder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleTrackSectionRecorder() {}
// Cross Module References
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_NoRegister();
	SEQUENCERECORDERSECTIONS_API UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorderSections();
	SEQUENCERECORDERSECTIONS_API UFunction* Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void UMovieSceneParticleTrackSectionRecorder::StaticRegisterNativesUMovieSceneParticleTrackSectionRecorder()
	{
		UClass* Class = UMovieSceneParticleTrackSectionRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggered", &UMovieSceneParticleTrackSectionRecorder::execOnTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics
	{
		struct MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms
		{
			UParticleSystemComponent* Component;
			bool bActivating;
		};
		static void NewProp_bActivating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit(void* Obj)
	{
		((MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms*)Obj)->bActivating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating = { "bActivating", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms), &Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms, Component), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_bActivating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneParticleTrackSectionRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder, nullptr, "OnTriggered", sizeof(MovieSceneParticleTrackSectionRecorder_eventOnTriggered_Parms), Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_NoRegister()
	{
		return UMovieSceneParticleTrackSectionRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorderSections,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneParticleTrackSectionRecorder_OnTriggered, "OnTriggered" }, // 3784446855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneParticleTrackSectionRecorder.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/MovieSceneParticleTrackSectionRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleTrackSectionRecorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::ClassParams = {
		&UMovieSceneParticleTrackSectionRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneParticleTrackSectionRecorder, 1398137773);
	template<> SEQUENCERECORDERSECTIONS_API UClass* StaticClass<UMovieSceneParticleTrackSectionRecorder>()
	{
		return UMovieSceneParticleTrackSectionRecorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParticleTrackSectionRecorder(Z_Construct_UClass_UMovieSceneParticleTrackSectionRecorder, &UMovieSceneParticleTrackSectionRecorder::StaticClass, TEXT("/Script/SequenceRecorderSections"), TEXT("UMovieSceneParticleTrackSectionRecorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleTrackSectionRecorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
