// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneEventTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
	static UEnum* EFireEventsAtPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EFireEventsAtPosition"));
		}
		return Singleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EFireEventsAtPosition>()
	{
		return EFireEventsAtPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFireEventsAtPosition(EFireEventsAtPosition_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EFireEventsAtPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Hash() { return 2281269172U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFireEventsAtPosition"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFireEventsAtPosition::AtStartOfEvaluation", (int64)EFireEventsAtPosition::AtStartOfEvaluation },
				{ "EFireEventsAtPosition::AtEndOfEvaluation", (int64)EFireEventsAtPosition::AtEndOfEvaluation },
				{ "EFireEventsAtPosition::AfterSpawn", (int64)EFireEventsAtPosition::AfterSpawn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterSpawn.ToolTip", "Fire events right after any spawn tracks have been evaluated" },
				{ "AtEndOfEvaluation.ToolTip", "Fire events after everything else has been evaluated in the sequence" },
				{ "AtStartOfEvaluation.ToolTip", "Fire events before anything else is evaluated in the sequence" },
				{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
				{ "ToolTip", "Indicates at what point in the sequence evaluation events should fire" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				nullptr,
				"EFireEventsAtPosition",
				"EFireEventsAtPosition",
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
	void UMovieSceneEventTrack::StaticRegisterNativesUMovieSceneEventTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister()
	{
		return UMovieSceneEventTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneEventTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Implements a movie scene track that triggers discrete events during playback." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "The track's sections." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEventTrack, Sections), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Defines a list of object bindings on which to trigger the events in this track. When empty, events will trigger in the default event contexts for the playback environment (such as the level blueprint, or widget)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers = { "EventReceivers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEventTrack, EventReceivers), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers_Inner = { "EventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Defines where in the evaluation to trigger events" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition = { "EventPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneEventTrack, EventPosition), Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UMovieSceneEventTrack*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneEventTrack), &Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UMovieSceneEventTrack*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMovieSceneEventTrack), &Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::ClassParams = {
		&UMovieSceneEventTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventTrack, 3025194197);
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventTrack>()
	{
		return UMovieSceneEventTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventTrack(Z_Construct_UClass_UMovieSceneEventTrack, &UMovieSceneEventTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
