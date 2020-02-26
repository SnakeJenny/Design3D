// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaAssets_init() {}
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature();
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature();
	MEDIAASSETS_API UFunction* Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MediaAssets()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MediaAssets_OnMediaPlayerMediaOpenFailed__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MediaAssets",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDCF31E13,
				0x18EAA4F6,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
