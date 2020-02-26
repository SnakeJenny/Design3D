// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePlayer/Public/MoviePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayer() {}
// Cross Module References
	MOVIEPLAYER_API UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType();
	UPackage* Z_Construct_UPackage__Script_MoviePlayer();
// End Cross Module References
	static UEnum* EMoviePlaybackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType, Z_Construct_UPackage__Script_MoviePlayer(), TEXT("EMoviePlaybackType"));
		}
		return Singleton;
	}
	template<> MOVIEPLAYER_API UEnum* StaticEnum<EMoviePlaybackType>()
	{
		return EMoviePlaybackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoviePlaybackType(EMoviePlaybackType_StaticEnum, TEXT("/Script/MoviePlayer"), TEXT("EMoviePlaybackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Hash() { return 636116091U; }
	UEnum* Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoviePlayer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoviePlaybackType"), 0, Get_Z_Construct_UEnum_MoviePlayer_EMoviePlaybackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MT_Normal", (int64)MT_Normal },
				{ "MT_Looped", (int64)MT_Looped },
				{ "MT_LoadingLoop", (int64)MT_LoadingLoop },
				{ "MT_MAX", (int64)MT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MoviePlayer.h" },
				{ "MT_LoadingLoop.DisplayName", "Looped Last Playback" },
				{ "MT_LoadingLoop.ToolTip", "Alternate Looped mode.  Play all of the movies in the play list and loop just the last movie until loading is finished." },
				{ "MT_Looped.DisplayName", "Looped Playback" },
				{ "MT_Looped.ToolTip", "Looped playback mode.  Play all movies in the play list in order then start over until manually canceled" },
				{ "MT_MAX.Hidden", "" },
				{ "MT_Normal.DisplayName", "Normal Playback" },
				{ "MT_Normal.ToolTip", "Normal playback mode.  Play each movie in the play list a single time" },
				{ "ToolTip", "In order for a platform to support early movie playback, the platform must support the rendering thread\nstarting very early and support rendering as soon as it is started and the module containing the movie streamer for the platform must already be loaded" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoviePlayer,
				nullptr,
				"EMoviePlaybackType",
				"EMoviePlaybackType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
