// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/VideoCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UVideoCaptureProtocol::StaticRegisterNativesUVideoCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister()
	{
		return UVideoCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UVideoCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "Video" },
		{ "DisplayName", "Video Sequence (avi)" },
		{ "IncludePath", "Protocols/VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseCompression" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoCaptureProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	void Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((UVideoCaptureProtocol*)Obj)->bUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVideoCaptureProtocol), &Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams = {
		&UVideoCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideoCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVideoCaptureProtocol, 1294603700);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UVideoCaptureProtocol>()
	{
		return UVideoCaptureProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideoCaptureProtocol(Z_Construct_UClass_UVideoCaptureProtocol, &UVideoCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UVideoCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
