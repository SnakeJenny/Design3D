// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneFolder.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFolder() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
// End Cross Module References
	void UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister()
	{
		return UMovieSceneFolder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildObjectBindingStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildObjectBindingStrings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildObjectBindingStrings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildMasterTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildMasterTracks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildMasterTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildFolders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneFolder.h" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Represents a folder used for organizing objects in tracks in a movie scene." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's desired sorting order" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, SortingOrder), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "This folder's color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor = { "FolderColor", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, FolderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The guid strings used to serialize the guids for the object bindings contained by this folder." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildObjectBindingStrings), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner = { "ChildObjectBindingStrings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The master tracks contained by this folder." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildMasterTracks), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner = { "ChildMasterTracks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The folders contained by this folder." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders = { "ChildFolders", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, ChildFolders), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner = { "ChildFolders", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
		{ "ToolTip", "The name of this folder." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneFolder, FolderName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_SortingOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildObjectBindingStrings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildMasterTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_ChildFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFolder_Statics::NewProp_FolderName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams = {
		&UMovieSceneFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneFolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneFolder, 728873031);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneFolder>()
	{
		return UMovieSceneFolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFolder(Z_Construct_UClass_UMovieSceneFolder, &UMovieSceneFolder::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneFolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFolder);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFolder)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
