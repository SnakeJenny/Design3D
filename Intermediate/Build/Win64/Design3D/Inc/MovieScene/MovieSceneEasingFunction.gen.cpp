// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEasingFunction() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate();
// End Cross Module References
	float IMovieSceneEasingFunction::OnEvaluate(float Interp) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEvaluate instead.");
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneEasingFunction::StaticRegisterNativesUMovieSceneEasingFunction()
	{
	}
	struct Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp = { "Interp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneEasingFunction_eventOnEvaluate_Parms, Interp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::NewProp_Interp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
		{ "ToolTip", "Evaluate the easing with an interpolation value between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneEasingFunction, nullptr, "OnEvaluate", sizeof(MovieSceneEasingFunction_eventOnEvaluate_Parms), Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister()
	{
		return UMovieSceneEasingFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEasingFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEasingFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneEasingFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneEasingFunction_OnEvaluate, "OnEvaluate" }, // 865689059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Easing Function" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Generators/MovieSceneEasingFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEasingFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEasingFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams = {
		&UMovieSceneEasingFunction::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEasingFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEasingFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEasingFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEasingFunction, 1569983128);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEasingFunction>()
	{
		return UMovieSceneEasingFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEasingFunction(Z_Construct_UClass_UMovieSceneEasingFunction, &UMovieSceneEasingFunction::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneEasingFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEasingFunction);
	static FName NAME_UMovieSceneEasingFunction_OnEvaluate = FName(TEXT("OnEvaluate"));
	float IMovieSceneEasingFunction::Execute_OnEvaluate(const UObject* O, float Interp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneEasingFunction::StaticClass()));
		MovieSceneEasingFunction_eventOnEvaluate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneEasingFunction_OnEvaluate);
		if (Func)
		{
			Parms.Interp=Interp;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
