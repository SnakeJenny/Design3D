// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Public/MovieSceneToolsUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneToolsUserSettings() {}
// Cross Module References
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings();
// End Cross Module References
	static UEnum* EThumbnailQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality, Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("EThumbnailQuality"));
		}
		return Singleton;
	}
	template<> MOVIESCENETOOLS_API UEnum* StaticEnum<EThumbnailQuality>()
	{
		return EThumbnailQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EThumbnailQuality(EThumbnailQuality_StaticEnum, TEXT("/Script/MovieSceneTools"), TEXT("EThumbnailQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Hash() { return 1684465156U; }
	UEnum* Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EThumbnailQuality"), 0, Get_Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EThumbnailQuality::Draft", (int64)EThumbnailQuality::Draft },
				{ "EThumbnailQuality::Normal", (int64)EThumbnailQuality::Normal },
				{ "EThumbnailQuality::Best", (int64)EThumbnailQuality::Best },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTools,
				nullptr,
				"EThumbnailQuality",
				"EThumbnailQuality",
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
	void UMovieSceneUserThumbnailSettings::StaticRegisterNativesUMovieSceneUserThumbnailSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings_NoRegister()
	{
		return UMovieSceneUserThumbnailSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSingleThumbnails_MetaData[];
#endif
		static void NewProp_bDrawSingleThumbnails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSingleThumbnails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawThumbnails_MetaData[];
#endif
		static void NewProp_bDrawThumbnails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawThumbnails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneToolsUserSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Quality to render the thumbnails with" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneUserThumbnailSettings, Quality), Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Size at which to draw thumbnails on thumbnail sections" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize = { "ThumbnailSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneUserThumbnailSettings, ThumbnailSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to draw a single thumbnail for this section or as many as can fit" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_SetBit(void* Obj)
	{
		((UMovieSceneUserThumbnailSettings*)Obj)->bDrawSingleThumbnails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails = { "bDrawSingleThumbnails", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserThumbnailSettings), &Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to draw thumbnails or not" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_SetBit(void* Obj)
	{
		((UMovieSceneUserThumbnailSettings*)Obj)->bDrawThumbnails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails = { "bDrawThumbnails", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserThumbnailSettings), &Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneUserThumbnailSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::ClassParams = {
		&UMovieSceneUserThumbnailSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneUserThumbnailSettings, 3745581350);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneUserThumbnailSettings>()
	{
		return UMovieSceneUserThumbnailSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneUserThumbnailSettings(Z_Construct_UClass_UMovieSceneUserThumbnailSettings, &UMovieSceneUserThumbnailSettings::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UMovieSceneUserThumbnailSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneUserThumbnailSettings);
	void UMovieSceneUserImportFBXSettings::StaticRegisterNativesUMovieSceneUserImportFBXSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister()
	{
		return UMovieSceneUserImportFBXSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReduceKeysTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReduceKeysTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateCameras_MetaData[];
#endif
		static void NewProp_bCreateCameras_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCameras;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchByNameOnly_MetaData[];
#endif
		static void NewProp_bMatchByNameOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchByNameOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneToolsUserSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData[] = {
		{ "Category", "Import" },
		{ "EditCondition", "bReduceKeys" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The tolerance for reduce keys" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance = { "ReduceKeysTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneUserImportFBXSettings, ReduceKeysTolerance), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to remove keyframes within a tolerance from the imported tracks" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bReduceKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to create cameras if they don't already exist in the level." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bCreateCameras = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras = { "bCreateCameras", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE4 coordinate system with front X axis instead of -Y" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bForceFrontXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Match fbx node names to sequencer node names" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bMatchByNameOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly = { "bMatchByNameOnly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneUserImportFBXSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::ClassParams = {
		&UMovieSceneUserImportFBXSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneUserImportFBXSettings, 3087805349);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneUserImportFBXSettings>()
	{
		return UMovieSceneUserImportFBXSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneUserImportFBXSettings(Z_Construct_UClass_UMovieSceneUserImportFBXSettings, &UMovieSceneUserImportFBXSettings::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UMovieSceneUserImportFBXSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneUserImportFBXSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
