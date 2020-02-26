// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaSource_GetUrl();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaSource_Validate();
// End Cross Module References
	void UMediaSource::StaticRegisterNativesUMediaSource()
	{
		UClass* Class = UMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUrl", &UMediaSource::execGetUrl },
			{ "Validate", &UMediaSource::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSource_GetUrl_Statics
	{
		struct MediaSource_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Get the media source's URL string (must be implemented in child classes).\n\n@return The media URL.\n@see GetProxies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "GetUrl", sizeof(MediaSource_eventGetUrl_Parms), Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_Validate_Statics
	{
		struct MediaSource_eventValidate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaSource_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSource_eventValidate_Parms), &Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Validate the media source settings (must be implemented in child classes).\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "Validate", sizeof(MediaSource_eventValidate_Parms), Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaSource_NoRegister()
	{
		return UMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSource_GetUrl, "GetUrl" }, // 3426505040
		{ &Z_Construct_UFunction_UMediaSource_Validate, "Validate" }, // 3841441230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaSource.h" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Abstract base class for media sources.\n\nMedia sources describe the location and/or settings of media objects that can\nbe played in a media player, such as a video file on disk, a video stream on\nthe internet, or a web cam attached to or built into the target device. The\nlocation is encoded as a media URL string, whose URI scheme and optional file\nextension will be used to locate a suitable media player." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaSource_Statics::ClassParams = {
		&UMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaSource, 3538732706);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaSource>()
	{
		return UMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaSource(Z_Construct_UClass_UMediaSource, &UMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
