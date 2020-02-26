// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraCutSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraCutSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieSceneCameraCutSection::StaticRegisterNativesUMovieSceneCameraCutSection()
	{
		UClass* Class = UMovieSceneCameraCutSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraBindingID", &UMovieSceneCameraCutSection::execGetCameraBindingID },
			{ "SetCameraBindingID", &UMovieSceneCameraCutSection::execSetCameraBindingID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics
	{
		struct MovieSceneCameraCutSection_eventGetCameraBindingID_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCameraCutSection_eventGetCameraBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Gets the camera binding for this CameraCut section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "GetCameraBindingID", sizeof(MovieSceneCameraCutSection_eventGetCameraBindingID_Parms), Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics
	{
		struct MovieSceneCameraCutSection_eventSetCameraBindingID_Parms
		{
			FMovieSceneObjectBindingID InCameraBindingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCameraBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCameraBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID = { "InCameraBindingID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCameraCutSection_eventSetCameraBindingID_Parms, InCameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::NewProp_InCameraBindingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "Sets the camera binding for this CameraCut section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCameraCutSection, nullptr, "SetCameraBindingID", sizeof(MovieSceneCameraCutSection_eventSetCameraBindingID_Parms), Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister()
	{
		return UMovieSceneCameraCutSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraCutSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraBindingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_GetCameraBindingID, "GetCameraBindingID" }, // 1671182887
		{ &Z_Construct_UFunction_UMovieSceneCameraCutSection_SetCameraBindingID, "SetCameraBindingID" }, // 2960353537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraCutSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie CameraCuts are sections on the CameraCuts track, that show what the viewer \"sees\"" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The reference frame offset for single thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset = { "ThumbnailReferenceOffset", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera binding that this movie CameraCut uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID = { "CameraBindingID", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraCutSection.h" },
		{ "ToolTip", "The camera possessable or spawnable that this movie CameraCut uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid = { "CameraGuid", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraCutSection, CameraGuid_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraBindingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::NewProp_CameraGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraCutSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams = {
		&UMovieSceneCameraCutSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraCutSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCameraCutSection, 4067916484);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraCutSection>()
	{
		return UMovieSceneCameraCutSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCameraCutSection(Z_Construct_UClass_UMovieSceneCameraCutSection, &UMovieSceneCameraCutSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCameraCutSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraCutSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
