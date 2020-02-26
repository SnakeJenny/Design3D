// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTexture() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetMediaPlayer();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaTexture_SetMediaPlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	void UMediaTexture::StaticRegisterNativesUMediaTexture()
	{
		UClass* Class = UMediaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAspectRatio", &UMediaTexture::execGetAspectRatio },
			{ "GetHeight", &UMediaTexture::execGetHeight },
			{ "GetMediaPlayer", &UMediaTexture::execGetMediaPlayer },
			{ "GetWidth", &UMediaTexture::execGetWidth },
			{ "SetMediaPlayer", &UMediaTexture::execSetMediaPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics
	{
		struct MediaTexture_eventGetAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetAspectRatio", sizeof(MediaTexture_eventGetAspectRatio_Parms), Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetHeight_Statics
	{
		struct MediaTexture_eventGetHeight_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetHeight", sizeof(MediaTexture_eventGetHeight_Parms), Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics
	{
		struct MediaTexture_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Get the media player that provides the video samples.\n\n@return The texture's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetMediaPlayer", sizeof(MediaTexture_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetWidth_Statics
	{
		struct MediaTexture_eventGetWidth_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetWidth", sizeof(MediaTexture_eventGetWidth_Parms), Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics
	{
		struct MediaTexture_eventSetMediaPlayer_Parms
		{
			UMediaPlayer* NewMediaPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaTexture_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Set the media player that provides the video samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "SetMediaPlayer", sizeof(MediaTexture_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaTexture_NoRegister()
	{
		return UMediaTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoClear_MetaData[];
#endif
		static void NewProp_AutoClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoClear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaTexture_GetAspectRatio, "GetAspectRatio" }, // 4156165243
		{ &Z_Construct_UFunction_UMediaTexture_GetHeight, "GetHeight" }, // 495545202
		{ &Z_Construct_UFunction_UMediaTexture_GetMediaPlayer, "GetMediaPlayer" }, // 2070644964
		{ &Z_Construct_UFunction_UMediaTexture_GetWidth, "GetWidth" }, // 298339142
		{ &Z_Construct_UFunction_UMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 2240510028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object" },
		{ "IncludePath", "MediaTexture.h" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UMediaPlayer assets." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The media player asset associated with this texture.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The color used to clear the texture if AutoClear is enabled (default = black)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Whether to clear the texture when no media is being played (default = enabled)." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->AutoClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear = { "AutoClear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaTexture_Statics::ClassParams = {
		&UMediaTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaTexture, 352380574);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaTexture>()
	{
		return UMediaTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaTexture(Z_Construct_UClass_UMediaTexture, &UMediaTexture::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
