// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DPathSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
	static UEnum* MovieScene3DPathSection_Axis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DPathSection_Axis"));
		}
		return Singleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<MovieScene3DPathSection_Axis>()
	{
		return MovieScene3DPathSection_Axis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MovieScene3DPathSection_Axis(MovieScene3DPathSection_Axis_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("MovieScene3DPathSection_Axis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Hash() { return 862000596U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MovieScene3DPathSection_Axis"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MovieScene3DPathSection_Axis::X", (int64)MovieScene3DPathSection_Axis::X },
				{ "MovieScene3DPathSection_Axis::Y", (int64)MovieScene3DPathSection_Axis::Y },
				{ "MovieScene3DPathSection_Axis::Z", (int64)MovieScene3DPathSection_Axis::Z },
				{ "MovieScene3DPathSection_Axis::NEG_X", (int64)MovieScene3DPathSection_Axis::NEG_X },
				{ "MovieScene3DPathSection_Axis::NEG_Y", (int64)MovieScene3DPathSection_Axis::NEG_Y },
				{ "MovieScene3DPathSection_Axis::NEG_Z", (int64)MovieScene3DPathSection_Axis::NEG_Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
				{ "NEG_X.DisplayName", "-X" },
				{ "NEG_Y.DisplayName", "-Y" },
				{ "NEG_Z.DisplayName", "-Z" },
				{ "X.DisplayName", "X" },
				{ "Y.DisplayName", "Y" },
				{ "Z.DisplayName", "Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				"MovieScene3DPathSection_Axis",
				"MovieScene3DPathSection_Axis",
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
	void UMovieScene3DPathSection::StaticRegisterNativesUMovieScene3DPathSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathSection_NoRegister()
	{
		return UMovieScene3DPathSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DPathSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceUpright_MetaData[];
#endif
		static void NewProp_bForceUpright_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpAxisEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpAxisEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpAxisEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrontAxisEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrontAxisEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrontAxisEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimingCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DPathSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DPathSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "A 3D Path section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Force Upright" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_SetBit(void* Obj)
	{
		((UMovieScene3DPathSection*)Obj)->bForceUpright = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright = { "bForceUpright", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Reverse Timing" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((UMovieScene3DPathSection*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Follow Curve" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((UMovieScene3DPathSection*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieScene3DPathSection), &Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Up Axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum = { "UpAxisEnum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DPathSection, UpAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Front Axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum = { "FrontAxisEnum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DPathSection, FrontAxisEnum), Z_Construct_UEnum_MovieSceneTracks_MovieScene3DPathSection_Axis, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DPathSection.h" },
		{ "ToolTip", "Timing Curve" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve = { "TimingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieScene3DPathSection, TimingCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bForceUpright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_bFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_UpAxisEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_FrontAxisEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DPathSection_Statics::NewProp_TimingCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DPathSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DPathSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DPathSection_Statics::ClassParams = {
		&UMovieScene3DPathSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DPathSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DPathSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DPathSection, 479102640);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DPathSection>()
	{
		return UMovieScene3DPathSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DPathSection(Z_Construct_UClass_UMovieScene3DPathSection, &UMovieScene3DPathSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DPathSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
