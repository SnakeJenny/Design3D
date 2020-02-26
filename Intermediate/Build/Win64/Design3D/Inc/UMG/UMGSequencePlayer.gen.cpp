// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/UMGSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag();
	UMG_API UFunction* Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer()
	{
		UClass* Class = UUMGSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserTag", &UUMGSequencePlayer::execGetUserTag },
			{ "SetUserTag", &UUMGSequencePlayer::execSetUserTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics
	{
		struct UMGSequencePlayer_eventGetUserTag_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSequencePlayer_eventGetUserTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "GetUserTag", sizeof(UMGSequencePlayer_eventGetUserTag_Parms), Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics
	{
		struct UMGSequencePlayer_eventSetUserTag_Parms
		{
			FName InUserTag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InUserTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag = { "InUserTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSequencePlayer_eventSetUserTag_Parms, InUserTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "SetUserTag", sizeof(UMGSequencePlayer_eventSetUserTag_Parms), Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister()
	{
		return UUMGSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag, "GetUserTag" }, // 1608031050
		{ &Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag, "SetUserTag" }, // 1945378504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/UMGSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "Animation being played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSequencePlayer, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams = {
		&UUMGSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSequencePlayer, 618851860);
	template<> UMG_API UClass* StaticClass<UUMGSequencePlayer>()
	{
		return UUMGSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSequencePlayer(Z_Construct_UClass_UUMGSequencePlayer, &UUMGSequencePlayer::StaticClass, TEXT("/Script/UMG"), TEXT("UUMGSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
