// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/CookOnTheSide/CookOnTheFlyServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookOnTheFlyServer() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECookTickFlags();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECookMode();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECookTickFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECookTickFlags, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECookTickFlags"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECookTickFlags>()
	{
		return ECookTickFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECookTickFlags(ECookTickFlags_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ECookTickFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ECookTickFlags_Hash() { return 3486375565U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ECookTickFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECookTickFlags"), 0, Get_Z_Construct_UEnum_UnrealEd_ECookTickFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECookTickFlags::None", (int64)ECookTickFlags::None },
				{ "ECookTickFlags::MarkupInUsePackages", (int64)ECookTickFlags::MarkupInUsePackages },
				{ "ECookTickFlags::HideProgressDisplay", (int64)ECookTickFlags::HideProgressDisplay },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HideProgressDisplay.ToolTip", "Markup packages for partial gc" },
				{ "MarkupInUsePackages.ToolTip", "no flags" },
				{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ECookTickFlags",
				"ECookTickFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECookMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECookMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECookMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECookMode::Type>()
	{
		return ECookMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECookMode(ECookMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ECookMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ECookMode_Hash() { return 2852191915U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ECookMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECookMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ECookMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECookMode::CookOnTheFly", (int64)ECookMode::CookOnTheFly },
				{ "ECookMode::CookOnTheFlyFromTheEditor", (int64)ECookMode::CookOnTheFlyFromTheEditor },
				{ "ECookMode::CookByTheBookFromTheEditor", (int64)ECookMode::CookByTheBookFromTheEditor },
				{ "ECookMode::CookByTheBook", (int64)ECookMode::CookByTheBook },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CookByTheBook.ToolTip", "Cooking by the book (not in the editor)." },
				{ "CookByTheBookFromTheEditor.ToolTip", "Precook all resources while in the editor." },
				{ "CookOnTheFly.ToolTip", "Default mode, handles requests from network." },
				{ "CookOnTheFlyFromTheEditor.ToolTip", "Cook on the side." },
				{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ECookMode",
				"ECookMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCookOnTheFlyServer::StaticRegisterNativesUCookOnTheFlyServer()
	{
	}
	UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister()
	{
		return UCookOnTheFlyServer::StaticClass();
	}
	struct Z_Construct_UClass_UCookOnTheFlyServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookOnTheFlyServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CookOnTheSide/CookOnTheFlyServer.h" },
		{ "ModuleRelativePath", "Classes/CookOnTheSide/CookOnTheFlyServer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookOnTheFlyServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookOnTheFlyServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookOnTheFlyServer_Statics::ClassParams = {
		&UCookOnTheFlyServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCookOnTheFlyServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookOnTheFlyServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookOnTheFlyServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookOnTheFlyServer, 3174323911);
	template<> UNREALED_API UClass* StaticClass<UCookOnTheFlyServer>()
	{
		return UCookOnTheFlyServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookOnTheFlyServer(Z_Construct_UClass_UCookOnTheFlyServer, &UCookOnTheFlyServer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCookOnTheFlyServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookOnTheFlyServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
