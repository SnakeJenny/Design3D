// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InGameAdManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameAdManager() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate();
	ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInGameAdManager();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "Delegate called when user closes an ad (after clicking on banner). Base class already handles\npausing, so a delegate is only needed if you need extra handling.  If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserClosedAdvertisement__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "Delegate called when user clicks on an banner ad. Base class already handles pausing,\nso a delegate is only needed if you need extra handling. If you set it to a PC or other actor\nfunction, make sure to set it back when switching levels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserClickedBanner__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAdManagerDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdManagerDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("EAdManagerDelegate"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAdManagerDelegate>()
	{
		return EAdManagerDelegate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAdManagerDelegate(EAdManagerDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("EAdManagerDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAdManagerDelegate_Hash() { return 1192322713U; }
	UEnum* Z_Construct_UEnum_Engine_EAdManagerDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAdManagerDelegate"), 0, Get_Z_Construct_UEnum_Engine_EAdManagerDelegate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AMD_ClickedBanner", (int64)AMD_ClickedBanner },
				{ "AMD_UserClosedAd", (int64)AMD_UserClosedAd },
				{ "AMD_MAX", (int64)AMD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAdManagerDelegate",
				"EAdManagerDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UInGameAdManager::StaticRegisterNativesUInGameAdManager()
	{
	}
	UClass* Z_Construct_UClass_UInGameAdManager_NoRegister()
	{
		return UInGameAdManager::StaticClass();
	}
	struct Z_Construct_UClass_UInGameAdManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosedAdDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClosedAdDelegates;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ClosedAdDelegates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickedBannerDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClickedBannerDelegates;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ClickedBannerDelegates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseWhileAdOpen_MetaData[];
#endif
		static void NewProp_bShouldPauseWhileAdOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseWhileAdOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameAdManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAdManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InGameAdManager.h" },
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates = { "ClosedAdDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAdManager, ClosedAdDelegates), METADATA_PARAMS(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_Inner = { "ClosedAdDelegates", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UDelegateFunction_Engine_OnUserClosedAdvertisement__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates = { "ClickedBannerDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameAdManager, ClickedBannerDelegates), METADATA_PARAMS(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_Inner = { "ClickedBannerDelegates", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UDelegateFunction_Engine_OnUserClickedBanner__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InGameAdManager.h" },
		{ "ToolTip", "If true, the game will pause when the user clicks on the ad, which could take over the screen" },
	};
#endif
	void Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_SetBit(void* Obj)
	{
		((UInGameAdManager*)Obj)->bShouldPauseWhileAdOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen = { "bShouldPauseWhileAdOpen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInGameAdManager), &Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameAdManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClosedAdDelegates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_ClickedBannerDelegates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameAdManager_Statics::NewProp_bShouldPauseWhileAdOpen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameAdManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameAdManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameAdManager_Statics::ClassParams = {
		&UInGameAdManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInGameAdManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameAdManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInGameAdManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameAdManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameAdManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameAdManager, 966339741);
	template<> ENGINE_API UClass* StaticClass<UInGameAdManager>()
	{
		return UInGameAdManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameAdManager(Z_Construct_UClass_UInGameAdManager, &UInGameAdManager::StaticClass, TEXT("/Script/Engine"), TEXT("UInGameAdManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameAdManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
