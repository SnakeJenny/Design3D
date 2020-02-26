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
void EmptyLinkFunctionForGeneratedCodeAnimationModifiers_init() {}
	ANIMATIONMODIFIERS_API UFunction* Z_Construct_UDelegateFunction_AnimationModifiers_OnNotifyReplaced__DelegateSignature();
	ANIMATIONMODIFIERS_API UFunction* Z_Construct_UDelegateFunction_AnimationModifiers_OnNotifyStateReplaced__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimationModifiers_OnNotifyReplaced__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimationModifiers_OnNotifyStateReplaced__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnimationModifiers",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0x458F5AF8,
				0x29CFFCA1,
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
