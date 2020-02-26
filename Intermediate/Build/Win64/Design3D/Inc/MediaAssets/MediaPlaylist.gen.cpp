// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaPlaylist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlaylist() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Add();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_AddFile();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_AddUrl();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Get();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetNext();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetPrevious();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_GetRandom();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Insert();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Num();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Remove();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_RemoveAt();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaPlaylist_Replace();
// End Cross Module References
	void UMediaPlaylist::StaticRegisterNativesUMediaPlaylist()
	{
		UClass* Class = UMediaPlaylist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UMediaPlaylist::execAdd },
			{ "AddFile", &UMediaPlaylist::execAddFile },
			{ "AddUrl", &UMediaPlaylist::execAddUrl },
			{ "Get", &UMediaPlaylist::execGet },
			{ "GetNext", &UMediaPlaylist::execGetNext },
			{ "GetPrevious", &UMediaPlaylist::execGetPrevious },
			{ "GetRandom", &UMediaPlaylist::execGetRandom },
			{ "Insert", &UMediaPlaylist::execInsert },
			{ "Num", &UMediaPlaylist::execNum },
			{ "Remove", &UMediaPlaylist::execRemove },
			{ "RemoveAt", &UMediaPlaylist::execRemoveAt },
			{ "Replace", &UMediaPlaylist::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Add_Statics
	{
		struct MediaPlaylist_eventAdd_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventAdd_Parms), &Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventAdd_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_MediaSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media source to the play list.\n\n@param MediaSource The media source to append.\n@return true if the media source was added, false otherwise.\n@see AddFile, AddUrl, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Add", sizeof(MediaPlaylist_eventAdd_Parms), Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics
	{
		struct MediaPlaylist_eventAddFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAddFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventAddFile_Parms), &Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventAddFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media file path to the play list.\n\n@param FilePath The file path to add.\n@return true if the file was added, false otherwise.\n@see Add, AddUrl, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "AddFile", sizeof(MediaPlaylist_eventAddFile_Parms), Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics
	{
		struct MediaPlaylist_eventAddUrl_Parms
		{
			FString Url;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAddUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventAddUrl_Parms), &Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventAddUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media URL to the play list.\n\n@param Url The URL to add.\n@return true if the URL was added, false otherwise.\n@see Add, AddFile, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "AddUrl", sizeof(MediaPlaylist_eventAddUrl_Parms), Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Get_Statics
	{
		struct MediaPlaylist_eventGet_Parms
		{
			int32 Index;
			UMediaSource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the media source at the specified index.\n\n@param Index The index of the media source to get.\n@return The media source, or nullptr if the index doesn't exist.\n@see GetNext, GetRandom" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Get", sizeof(MediaPlaylist_eventGet_Parms), Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics
	{
		struct MediaPlaylist_eventGetNext_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_InOutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the next media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source after the current one, or nullptr if the list is empty.\n@see , GetPrevious, GetRandom" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetNext", sizeof(MediaPlaylist_eventGetNext_Parms), Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics
	{
		struct MediaPlaylist_eventGetPrevious_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_InOutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the previous media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source before the current one, or nullptr if the list is empty.\n@see , GetNext, GetRandom" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetPrevious", sizeof(MediaPlaylist_eventGetPrevious_Parms), Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics
	{
		struct MediaPlaylist_eventGetRandom_Parms
		{
			int32 OutIndex;
			UMediaSource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_OutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get a random media source in the play list.\n\n@param OutIndex Will contain the index of the returned media source.\n@return The random media source, or nullptr if the list is empty.\n@see Get, GetNext, GetPrevious" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetRandom", sizeof(MediaPlaylist_eventGetRandom_Parms), Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Insert_Statics
	{
		struct MediaPlaylist_eventInsert_Parms
		{
			UMediaSource* MediaSource;
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_MediaSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Insert a media source into the play list at the given position.\n\n@param MediaSource The media source to insert.\n@param Index The index to insert into.\n@see Add, Remove, RemoveAll, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Insert", sizeof(MediaPlaylist_eventInsert_Parms), Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Insert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Num_Statics
	{
		struct MediaPlaylist_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the number of media sources in the play list.\n\n@return Number of media sources." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Num", sizeof(MediaPlaylist_eventNum_Parms), Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Remove_Statics
	{
		struct MediaPlaylist_eventRemove_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventRemove_Parms), &Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventRemove_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_MediaSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Remove all occurrences of the given media source in the play list.\n\n@param MediaSource The media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, Remove, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Remove", sizeof(MediaPlaylist_eventRemove_Parms), Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics
	{
		struct MediaPlaylist_eventRemoveAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventRemoveAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventRemoveAt_Parms), &Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Remove the media source at the specified position.\n\n@param Index The index of the media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, RemoveAll, Replace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "RemoveAt", sizeof(MediaPlaylist_eventRemoveAt_Parms), Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_RemoveAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Replace_Statics
	{
		struct MediaPlaylist_eventReplace_Parms
		{
			int32 Index;
			UMediaSource* Replacement;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replacement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventReplace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaPlaylist_eventReplace_Parms), &Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Replacement = { "Replacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Replacement), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Replacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Replace the media source at the specified position.\n\n@param Index The index of the media source to replace.\n@param Replacement The replacement media source.\n@return true if the media source was replaced, false otherwise.\n@see Add, Insert, RemoveAll, RemoveAt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Replace", sizeof(MediaPlaylist_eventReplace_Parms), Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Replace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister()
	{
		return UMediaPlaylist::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlaylist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlaylist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPlaylist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPlaylist_Add, "Add" }, // 497558698
		{ &Z_Construct_UFunction_UMediaPlaylist_AddFile, "AddFile" }, // 265501457
		{ &Z_Construct_UFunction_UMediaPlaylist_AddUrl, "AddUrl" }, // 3951151644
		{ &Z_Construct_UFunction_UMediaPlaylist_Get, "Get" }, // 2456105193
		{ &Z_Construct_UFunction_UMediaPlaylist_GetNext, "GetNext" }, // 2083227158
		{ &Z_Construct_UFunction_UMediaPlaylist_GetPrevious, "GetPrevious" }, // 2554612623
		{ &Z_Construct_UFunction_UMediaPlaylist_GetRandom, "GetRandom" }, // 2138367540
		{ &Z_Construct_UFunction_UMediaPlaylist_Insert, "Insert" }, // 2834084205
		{ &Z_Construct_UFunction_UMediaPlaylist_Num, "Num" }, // 3948540200
		{ &Z_Construct_UFunction_UMediaPlaylist_Remove, "Remove" }, // 621497186
		{ &Z_Construct_UFunction_UMediaPlaylist_RemoveAt, "RemoveAt" }, // 2765680149
		{ &Z_Construct_UFunction_UMediaPlaylist_Replace, "Replace" }, // 421770454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaPlaylist.h" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Implements a media play list." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Playlist" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "List of media sources to play." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaPlaylist, Items), METADATA_PARAMS(Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlaylist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlaylist>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlaylist_Statics::ClassParams = {
		&UMediaPlaylist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlaylist()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaPlaylist_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaPlaylist, 208646051);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaPlaylist>()
	{
		return UMediaPlaylist::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaPlaylist(Z_Construct_UClass_UMediaPlaylist, &UMediaPlaylist::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaPlaylist"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlaylist);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
