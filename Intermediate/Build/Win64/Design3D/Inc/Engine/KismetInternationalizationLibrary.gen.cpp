// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetInternationalizationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInternationalizationLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale();
// End Cross Module References
	void UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary()
	{
		UClass* Class = UKismetInternationalizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture },
			{ "GetCultureDisplayName", &UKismetInternationalizationLibrary::execGetCultureDisplayName },
			{ "GetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture },
			{ "GetCurrentCulture", &UKismetInternationalizationLibrary::execGetCurrentCulture },
			{ "GetCurrentLanguage", &UKismetInternationalizationLibrary::execGetCurrentLanguage },
			{ "GetCurrentLocale", &UKismetInternationalizationLibrary::execGetCurrentLocale },
			{ "GetLocalizedCultures", &UKismetInternationalizationLibrary::execGetLocalizedCultures },
			{ "GetNativeCulture", &UKismetInternationalizationLibrary::execGetNativeCulture },
			{ "GetSuitableCulture", &UKismetInternationalizationLibrary::execGetSuitableCulture },
			{ "SetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture },
			{ "SetCurrentCulture", &UKismetInternationalizationLibrary::execSetCurrentCulture },
			{ "SetCurrentLanguage", &UKismetInternationalizationLibrary::execSetCurrentLanguage },
			{ "SetCurrentLanguageAndLocale", &UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale },
			{ "SetCurrentLocale", &UKismetInternationalizationLibrary::execSetCurrentLocale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			bool SaveToConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Clear the given asset group category culture.\n@param AssetGroup The asset group to clear the culture for.\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "ClearCurrentAssetGroupCulture", sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms
		{
			FString Culture;
			bool Localized;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Localized_MetaData[];
#endif
		static void NewProp_Localized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Localized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms*)Obj)->Localized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized = { "Localized", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Localized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_Localized", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the display name of the given culture.\n@param Culture The culture to get the display name of, as an IETF language tag (eg, \"zh-Hans-CN\")\n@param Localized True to get the localized display name (the name of the culture in its own language), or False to get the display name in the current language.\n@return The display name of the culture, or the given culture code on failure." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCultureDisplayName", sizeof(KismetInternationalizationLibrary_eventGetCultureDisplayName_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the given asset group category culture.\n@note Returns the current language if the group category doesn't have a culture override.\n@param AssetGroup The asset group to get the culture for.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentAssetGroupCulture", sizeof(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentCulture_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current culture as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentCulture", sizeof(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current language (for localization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The language as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLanguage", sizeof(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLocale_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current locale (for internationalization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The locale as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetCurrentLocale", sizeof(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics
	{
		struct KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms
		{
			bool IncludeGame;
			bool IncludeEngine;
			bool IncludeEditor;
			bool IncludeAdditional;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeAdditional_MetaData[];
#endif
		static void NewProp_IncludeAdditional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeAdditional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeEditor_MetaData[];
#endif
		static void NewProp_IncludeEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeEngine_MetaData[];
#endif
		static void NewProp_IncludeEngine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeGame_MetaData[];
#endif
		static void NewProp_IncludeGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeAdditional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional = { "IncludeAdditional", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor = { "IncludeEditor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeEngine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine = { "IncludeEngine", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms*)Obj)->IncludeGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame = { "IncludeGame", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeAdditional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::NewProp_IncludeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_IncludeAdditional", "false" },
		{ "CPP_Default_IncludeEditor", "false" },
		{ "CPP_Default_IncludeEngine", "false" },
		{ "CPP_Default_IncludeGame", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the list of cultures that have localization data available for them.\n@param IncludeGame Check for localized game resources.\n@param IncludeEngine Check for localized engine resources.\n@param IncludeEditor Check for localized editor resources.\n@param IncludeAdditional Check for localized additional (eg, plugin) resources.\n@return The list of cultures as IETF language tags (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetLocalizedCultures", sizeof(KismetInternationalizationLibrary_eventGetLocalizedCultures_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetNativeCulture_Parms
		{
			ELocalizedTextSourceCategory TextCategory;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory = { "TextCategory", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetNativeCulture_Parms, TextCategory), Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::NewProp_TextCategory_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the native culture for the given localization category.\n@param Category The localization category to query.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetNativeCulture", sizeof(KismetInternationalizationLibrary_eventGetNativeCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetSuitableCulture_Parms
		{
			TArray<FString> AvailableCultures;
			FString CultureToMatch;
			FString FallbackCulture;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackCulture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FallbackCulture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CultureToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CultureToMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableCultures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableCultures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvailableCultures_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture = { "FallbackCulture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, FallbackCulture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch = { "CultureToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, CultureToMatch), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures = { "AvailableCultures", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms, AvailableCultures), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner = { "AvailableCultures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_FallbackCulture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_CultureToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::NewProp_AvailableCultures_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_FallbackCulture", "en" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Given a list of available cultures, try and find the most suitable culture from the list based on culture prioritization.\n  eg) If your list was [en, fr, de] and the given culture was \"en-US\", this function would return \"en\".\n  eg) If your list was [zh, ar, pl] and the given culture was \"en-US\", this function would return the fallback culture.\n@param AvailableCultures List of available cultures to filter against (see GetLocalizedCultures).\n@param CultureToMatch Culture to try and match (see GetCurrentLanguage).\n@param FallbackCulture The culture to return if there is no suitable match in the list (typically your native culture, see GetNativeCulture).\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "GetSuitableCulture", sizeof(KismetInternationalizationLibrary_eventGetSuitableCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { "AssetGroup", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n@param AssetGroup The asset group to set the culture for.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentAssetGroupCulture", sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentCulture_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current culture.\n@note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentCulture", sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current language (for localization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguage", sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current language (for localization) and locale (for internationalization).\n@param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language and locale were set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLanguageAndLocale", sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig = { "SaveToConfig", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current locale (for internationalization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the locale was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, nullptr, "SetCurrentLocale", sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture, "ClearCurrentAssetGroupCulture" }, // 3963607506
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCultureDisplayName, "GetCultureDisplayName" }, // 1155814887
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture, "GetCurrentAssetGroupCulture" }, // 624881126
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture, "GetCurrentCulture" }, // 2668613957
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage, "GetCurrentLanguage" }, // 834051919
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale, "GetCurrentLocale" }, // 3793199549
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetLocalizedCultures, "GetLocalizedCultures" }, // 4053979576
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetNativeCulture, "GetNativeCulture" }, // 3142930126
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetSuitableCulture, "GetSuitableCulture" }, // 2040230451
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture, "SetCurrentAssetGroupCulture" }, // 1515487795
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture, "SetCurrentCulture" }, // 2221737118
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage, "SetCurrentLanguage" }, // 1039639502
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale, "SetCurrentLanguageAndLocale" }, // 1700011814
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale, "SetCurrentLocale" }, // 2878223947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetInternationalizationLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ScriptName", "InternationalizationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInternationalizationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams = {
		&UKismetInternationalizationLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetInternationalizationLibrary, 2445219184);
	template<> ENGINE_API UClass* StaticClass<UKismetInternationalizationLibrary>()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetInternationalizationLibrary(Z_Construct_UClass_UKismetInternationalizationLibrary, &UKismetInternationalizationLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetInternationalizationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInternationalizationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
