// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/IMovieSceneTransformOrigin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTransformOrigin() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOrigin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BP_GetTransformOrigin instead.");
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMovieSceneTransformOrigin::StaticRegisterNativesUMovieSceneTransformOrigin()
	{
	}
	struct Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "GetTransformOrigin" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
		{ "ToolTip", "Get the transform from which all absolute component transform sections should be relative. Scale is ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTransformOrigin, nullptr, "BP_GetTransformOrigin", sizeof(MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms), Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin_NoRegister()
	{
		return UMovieSceneTransformOrigin::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneTransformOrigin_BP_GetTransformOrigin, "BP_GetTransformOrigin" }, // 2715476895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "Transform Origin" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tracks/IMovieSceneTransformOrigin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTransformOrigin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams = {
		&UMovieSceneTransformOrigin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTransformOrigin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneTransformOrigin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneTransformOrigin, 3465063514);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOrigin>()
	{
		return UMovieSceneTransformOrigin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneTransformOrigin(Z_Construct_UClass_UMovieSceneTransformOrigin, &UMovieSceneTransformOrigin::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneTransformOrigin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOrigin);
	static FName NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin = FName(TEXT("BP_GetTransformOrigin"));
	FTransform IMovieSceneTransformOrigin::Execute_BP_GetTransformOrigin(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMovieSceneTransformOrigin::StaticClass()));
		MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMovieSceneTransformOrigin_BP_GetTransformOrigin);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
