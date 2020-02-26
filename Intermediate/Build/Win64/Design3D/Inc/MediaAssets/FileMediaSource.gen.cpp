// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/FileMediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UFileMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UFileMediaSource_SetFilePath();
// End Cross Module References
	void UFileMediaSource::StaticRegisterNativesUFileMediaSource()
	{
		UClass* Class = UFileMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilePath", &UFileMediaSource::execSetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics
	{
		struct FileMediaSource_eventSetFilePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FileMediaSource_eventSetFilePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|FileMediaSource" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "Set the path to the media file that this source represents.\n\nAutomatically converts full paths to media sources that reside in the\nEngine's or project's /Content/Movies directory into relative paths.\n\n@param Path The path to set.\n@see FilePath, GetFilePath" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileMediaSource, nullptr, "SetFilePath", sizeof(FileMediaSource_eventSetFilePath_Parms), Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileMediaSource_SetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFileMediaSource_SetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFileMediaSource_NoRegister()
	{
		return UFileMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecacheFile_MetaData[];
#endif
		static void NewProp_PrecacheFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrecacheFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileMediaSource_SetFilePath, "SetFilePath" }, // 1468472288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FileMediaSource.h" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_MetaData[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "Load entire media file into memory and play from there (if possible)." },
	};
#endif
	void Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_SetBit(void* Obj)
	{
		((UFileMediaSource*)Obj)->PrecacheFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile = { "PrecacheFile", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFileMediaSource), &Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "File" },
		{ "ModuleRelativePath", "Public/FileMediaSource.h" },
		{ "ToolTip", "The path to the media file to be played.\n\n@see SetFilePath" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFileMediaSource, FilePath), METADATA_PARAMS(Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileMediaSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaSource_Statics::NewProp_PrecacheFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaSource_Statics::NewProp_FilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaSource_Statics::ClassParams = {
		&UFileMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFileMediaSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFileMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFileMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFileMediaSource, 1863523905);
	template<> MEDIAASSETS_API UClass* StaticClass<UFileMediaSource>()
	{
		return UFileMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFileMediaSource(Z_Construct_UClass_UFileMediaSource, &UFileMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UFileMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
