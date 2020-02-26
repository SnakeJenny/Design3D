// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARTextures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTextures() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube();
// End Cross Module References
	static UEnum* EARDepthAccuracy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARDepthAccuracy"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARDepthAccuracy>()
	{
		return EARDepthAccuracy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARDepthAccuracy(EARDepthAccuracy_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARDepthAccuracy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Hash() { return 2946531910U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARDepthAccuracy"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARDepthAccuracy::Unkown", (int64)EARDepthAccuracy::Unkown },
				{ "EARDepthAccuracy::Approximate", (int64)EARDepthAccuracy::Approximate },
				{ "EARDepthAccuracy::Accurate", (int64)EARDepthAccuracy::Accurate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accurate.ToolTip", "Accurate depth values that match the physical world" },
				{ "Approximate.ToolTip", "Suitable for gross sorting of depths" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTextures.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARDepthAccuracy",
				"EARDepthAccuracy",
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
	static UEnum* EARDepthQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthQuality, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARDepthQuality"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARDepthQuality>()
	{
		return EARDepthQuality_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARDepthQuality(EARDepthQuality_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARDepthQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Hash() { return 3619210013U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARDepthQuality"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARDepthQuality::Unkown", (int64)EARDepthQuality::Unkown },
				{ "EARDepthQuality::Low", (int64)EARDepthQuality::Low },
				{ "EARDepthQuality::High", (int64)EARDepthQuality::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "High.ToolTip", "Suitable for rendering against or for use in scene reconstruction" },
				{ "Low.ToolTip", "Not suitable to use as part of a rendering pass or for scene reconstruction" },
				{ "ModuleRelativePath", "Public/ARTextures.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARDepthQuality",
				"EARDepthQuality",
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
	static UEnum* EARTextureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTextureType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTextureType"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTextureType>()
	{
		return EARTextureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARTextureType(EARTextureType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARTextureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARTextureType_Hash() { return 3367329840U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARTextureType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARTextureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARTextureType::CameraImage", (int64)EARTextureType::CameraImage },
				{ "EARTextureType::CameraDepth", (int64)EARTextureType::CameraDepth },
				{ "EARTextureType::EnvironmentCapture", (int64)EARTextureType::EnvironmentCapture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARTextures.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARTextureType",
				"EARTextureType",
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
	void UARTexture::StaticRegisterNativesUARTexture()
	{
	}
	UClass* Z_Construct_UClass_UARTexture_NoRegister()
	{
		return UARTexture::StaticClass();
	}
	struct Z_Construct_UClass_UARTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTextureGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTextureGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR texture types.\nDerived from UTexture instead of UTexture2D because UTexture2D is all about streaming and source art" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The width and height of the texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTexture, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The guid of texture that gets registered as an external texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid = { "ExternalTextureGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTexture, ExternalTextureGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The timestamp this texture was captured at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTexture, Timestamp), METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The type of texture this is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTexture, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTexture_Statics::ClassParams = {
		&UARTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTexture, 709093800);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTexture>()
	{
		return UARTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTexture(Z_Construct_UClass_UARTexture, &UARTexture::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTexture);
	void UARTextureCameraImage::StaticRegisterNativesUARTextureCameraImage()
	{
	}
	UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister()
	{
		return UARTextureCameraImage::StaticClass();
	}
	struct Z_Construct_UClass_UARTextureCameraImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTextureCameraImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the camera image data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTextureCameraImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTextureCameraImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTextureCameraImage_Statics::ClassParams = {
		&UARTextureCameraImage::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTextureCameraImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTextureCameraImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTextureCameraImage, 4065127140);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTextureCameraImage>()
	{
		return UARTextureCameraImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTextureCameraImage(Z_Construct_UClass_UARTextureCameraImage, &UARTextureCameraImage::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTextureCameraImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTextureCameraImage);
	void UARTextureCameraDepth::StaticRegisterNativesUARTextureCameraDepth()
	{
	}
	UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister()
	{
		return UARTextureCameraDepth::StaticClass();
	}
	struct Z_Construct_UClass_UARTextureCameraDepth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTemporallySmoothed_MetaData[];
#endif
		static void NewProp_bIsTemporallySmoothed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTemporallySmoothed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthAccuracy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthAccuracy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthAccuracy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthQuality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTextureCameraDepth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the camera depth data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Whether or not the depth information is temporally smoothed" },
	};
#endif
	void Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_SetBit(void* Obj)
	{
		((UARTextureCameraDepth*)Obj)->bIsTemporallySmoothed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed = { "bIsTemporallySmoothed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARTextureCameraDepth), &Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The accuracy of the depth information captured this frame" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy = { "DepthAccuracy", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTextureCameraDepth, DepthAccuracy), Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The quality of the depth information captured this frame" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality = { "DepthQuality", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARTextureCameraDepth, DepthQuality), Z_Construct_UEnum_AugmentedReality_EARDepthQuality, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTextureCameraDepth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTextureCameraDepth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARTextureCameraDepth_Statics::ClassParams = {
		&UARTextureCameraDepth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTextureCameraDepth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARTextureCameraDepth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARTextureCameraDepth, 2659244475);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTextureCameraDepth>()
	{
		return UARTextureCameraDepth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARTextureCameraDepth(Z_Construct_UClass_UARTextureCameraDepth, &UARTextureCameraDepth::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARTextureCameraDepth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTextureCameraDepth);
	void UAREnvironmentCaptureProbeTexture::StaticRegisterNativesUAREnvironmentCaptureProbeTexture()
	{
	}
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister()
	{
		return UAREnvironmentCaptureProbeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalTextureGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalTextureGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextureType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureCube,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the environment for lighting and reflection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The width and height of the texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The guid of texture that gets registered as an external texture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid = { "ExternalTextureGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The timestamp this texture was captured at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, Timestamp), METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The type of texture this is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentCaptureProbeTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::ClassParams = {
		&UAREnvironmentCaptureProbeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAREnvironmentCaptureProbeTexture, 1674517320);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentCaptureProbeTexture>()
	{
		return UAREnvironmentCaptureProbeTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAREnvironmentCaptureProbeTexture(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture, &UAREnvironmentCaptureProbeTexture::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UAREnvironmentCaptureProbeTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentCaptureProbeTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
