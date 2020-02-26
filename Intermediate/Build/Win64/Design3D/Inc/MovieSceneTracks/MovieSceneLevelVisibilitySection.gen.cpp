// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneLevelVisibilitySection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility();
// End Cross Module References
	static UEnum* ELevelVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ELevelVisibility"));
		}
		return Singleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<ELevelVisibility>()
	{
		return ELevelVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelVisibility(ELevelVisibility_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("ELevelVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Hash() { return 667768816U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelVisibility"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelVisibility::Visible", (int64)ELevelVisibility::Visible },
				{ "ELevelVisibility::Hidden", (int64)ELevelVisibility::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.ToolTip", "The streamed levels should be hidden." },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
				{ "ToolTip", "Visibility options for the level visibility section." },
				{ "Visible.ToolTip", "The streamed levels should be visible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				"ELevelVisibility",
				"ELevelVisibility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneLevelVisibilitySection::StaticRegisterNativesUMovieSceneLevelVisibilitySection()
	{
		UClass* Class = UMovieSceneLevelVisibilitySection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelNames", &UMovieSceneLevelVisibilitySection::execGetLevelNames },
			{ "GetVisibility", &UMovieSceneLevelVisibilitySection::execGetVisibility },
			{ "SetLevelNames", &UMovieSceneLevelVisibilitySection::execSetLevelNames },
			{ "SetVisibility", &UMovieSceneLevelVisibilitySection::execSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics
	{
		struct MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms
		{
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "GetLevelNames", sizeof(MovieSceneLevelVisibilitySection_eventGetLevelNames_Parms), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics
	{
		struct MovieSceneLevelVisibilitySection_eventGetVisibility_Parms
		{
			ELevelVisibility ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventGetVisibility_Parms, ReturnValue), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "GetVisibility", sizeof(MovieSceneLevelVisibilitySection_eventGetVisibility_Parms), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics
	{
		struct MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms
		{
			TArray<FName> InLevelNames;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InLevelNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InLevelNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames = { "InLevelNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms, InLevelNames), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_Inner = { "InLevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::NewProp_InLevelNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "SetLevelNames", sizeof(MovieSceneLevelVisibilitySection_eventSetLevelNames_Parms), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics
	{
		struct MovieSceneLevelVisibilitySection_eventSetVisibility_Parms
		{
			ELevelVisibility InVisibility;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneLevelVisibilitySection_eventSetVisibility_Parms, InVisibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::NewProp_InVisibility_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneLevelVisibilitySection, nullptr, "SetVisibility", sizeof(MovieSceneLevelVisibilitySection_eventSetVisibility_Parms), Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister()
	{
		return UMovieSceneLevelVisibilitySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetLevelNames, "GetLevelNames" }, // 4060203201
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_GetVisibility, "GetVisibility" }, // 2859755188
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetLevelNames, "SetLevelNames" }, // 4044635582
		{ &Z_Construct_UFunction_UMovieSceneLevelVisibilitySection_SetVisibility, "SetVisibility" }, // 3925297523
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "A section for use with the movie scene level visibility track, which controls streamed level visibility." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "The short names of the levels who's visibility is controlled by this section." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, LevelNames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "Whether or not the levels in this section should be visible or hidden." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, Visibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams = {
		&UMovieSceneLevelVisibilitySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLevelVisibilitySection, 3448698965);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneLevelVisibilitySection>()
	{
		return UMovieSceneLevelVisibilitySection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLevelVisibilitySection(Z_Construct_UClass_UMovieSceneLevelVisibilitySection, &UMovieSceneLevelVisibilitySection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneLevelVisibilitySection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
