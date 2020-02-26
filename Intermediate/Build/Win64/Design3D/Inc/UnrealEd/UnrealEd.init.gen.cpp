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
void EmptyLinkFunctionForGeneratedCodeUnrealEd_init() {}
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealEd()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealEd",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x48F1C96B,
				0x1D746A15,
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
