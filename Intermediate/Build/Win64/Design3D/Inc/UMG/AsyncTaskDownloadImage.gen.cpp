// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/AsyncTaskDownloadImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskDownloadImage() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UAsyncTaskDownloadImage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UMG_API UFunction* Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics
	{
		struct _Script_UMG_eventDownloadImageDelegate_Parms
		{
			UTexture2DDynamic* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventDownloadImageDelegate_Parms, Texture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "DownloadImageDelegate__DelegateSignature", sizeof(_Script_UMG_eventDownloadImageDelegate_Parms), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage()
	{
		UClass* Class = UAsyncTaskDownloadImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadImage", &UAsyncTaskDownloadImage::execDownloadImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics
	{
		struct AsyncTaskDownloadImage_eventDownloadImage_Parms
		{
			FString URL;
			UAsyncTaskDownloadImage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncTaskDownloadImage_eventDownloadImage_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskDownloadImage, nullptr, "DownloadImage", sizeof(AsyncTaskDownloadImage_eventDownloadImage_Parms), Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncTaskDownloadImage_NoRegister()
	{
		return UAsyncTaskDownloadImage::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskDownloadImage_DownloadImage, "DownloadImage" }, // 2709051717
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AsyncTaskDownloadImage.h" },
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnFail), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/AsyncTaskDownloadImage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncTaskDownloadImage, OnSuccess), Z_Construct_UDelegateFunction_UMG_DownloadImageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskDownloadImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::ClassParams = {
		&UAsyncTaskDownloadImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTaskDownloadImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncTaskDownloadImage, 1857600000);
	template<> UMG_API UClass* StaticClass<UAsyncTaskDownloadImage>()
	{
		return UAsyncTaskDownloadImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncTaskDownloadImage(Z_Construct_UClass_UAsyncTaskDownloadImage, &UAsyncTaskDownloadImage::StaticClass, TEXT("/Script/UMG"), TEXT("UAsyncTaskDownloadImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskDownloadImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
