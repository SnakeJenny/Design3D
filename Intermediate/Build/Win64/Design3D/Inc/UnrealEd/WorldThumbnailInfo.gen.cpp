// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/WorldThumbnailInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldThumbnailInfo() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailInfo_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
// End Cross Module References
	static UEnum* EOrthoThumbnailDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EOrthoThumbnailDirection"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EOrthoThumbnailDirection::Type>()
	{
		return EOrthoThumbnailDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrthoThumbnailDirection(EOrthoThumbnailDirection_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EOrthoThumbnailDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Hash() { return 2357199842U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrthoThumbnailDirection"), 0, Get_Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrthoThumbnailDirection::Top", (int64)EOrthoThumbnailDirection::Top },
				{ "EOrthoThumbnailDirection::Bottom", (int64)EOrthoThumbnailDirection::Bottom },
				{ "EOrthoThumbnailDirection::Left", (int64)EOrthoThumbnailDirection::Left },
				{ "EOrthoThumbnailDirection::Right", (int64)EOrthoThumbnailDirection::Right },
				{ "EOrthoThumbnailDirection::Front", (int64)EOrthoThumbnailDirection::Front },
				{ "EOrthoThumbnailDirection::Back", (int64)EOrthoThumbnailDirection::Back },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EOrthoThumbnailDirection",
				"EOrthoThumbnailDirection::Type",
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
	void UWorldThumbnailInfo::StaticRegisterNativesUWorldThumbnailInfo()
	{
	}
	UClass* Z_Construct_UClass_UWorldThumbnailInfo_NoRegister()
	{
		return UWorldThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_UWorldThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrthoDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrthoDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ToolTip", "The direction of the camera when in Orthographic CameraMode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection = { "OrthoDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldThumbnailInfo, OrthoDirection), Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ToolTip", "The type of projection to use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldThumbnailInfo, CameraMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldThumbnailInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::ClassParams = {
		&UWorldThumbnailInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldThumbnailInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldThumbnailInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldThumbnailInfo, 2955382651);
	template<> UNREALED_API UClass* StaticClass<UWorldThumbnailInfo>()
	{
		return UWorldThumbnailInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldThumbnailInfo(Z_Construct_UClass_UWorldThumbnailInfo, &UWorldThumbnailInfo::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UWorldThumbnailInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldThumbnailInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
