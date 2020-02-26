// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection()
	{
		UClass* Class = UMovieScene3DConstraintSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstraintBindingID", &UMovieScene3DConstraintSection::execGetConstraintBindingID },
			{ "SetConstraintBindingID", &UMovieScene3DConstraintSection::execSetConstraintBindingID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics
	{
		struct MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms
		{
			FMovieSceneObjectBindingID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Gets the constraint binding for this Constraint section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "GetConstraintBindingID", sizeof(MovieScene3DConstraintSection_eventGetConstraintBindingID_Parms), Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics
	{
		struct MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms
		{
			FMovieSceneObjectBindingID InConstraintBindingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConstraintBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConstraintBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID = { "InConstraintBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms, InConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::NewProp_InConstraintBindingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Sets the constraint binding for this Constraint section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScene3DConstraintSection, nullptr, "SetConstraintBindingID", sizeof(MovieScene3DConstraintSection_eventSetConstraintBindingID_Parms), Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_GetConstraintBindingID, "GetConstraintBindingID" }, // 3359418223
		{ &Z_Construct_UFunction_UMovieScene3DConstraintSection_SetConstraintBindingID, "SetConstraintBindingID" }, // 2938124381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DConstraintSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Base class for 3D constraint section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The constraint binding that this movie Constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID = { "ConstraintBindingID", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The possessable guid that this constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DConstraintSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams = {
		&UMovieScene3DConstraintSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DConstraintSection, 3447075583);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DConstraintSection>()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DConstraintSection(Z_Construct_UClass_UMovieScene3DConstraintSection, &UMovieScene3DConstraintSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DConstraintSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
