// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/FrameGrabberProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameGrabberProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UFrameGrabberProtocol::StaticRegisterNativesUFrameGrabberProtocol()
	{
	}
	UClass* Z_Construct_UClass_UFrameGrabberProtocol_NoRegister()
	{
		return UFrameGrabberProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UFrameGrabberProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFrameGrabberProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/FrameGrabberProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/FrameGrabberProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFrameGrabberProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrameGrabberProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFrameGrabberProtocol_Statics::ClassParams = {
		&UFrameGrabberProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFrameGrabberProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFrameGrabberProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFrameGrabberProtocol, 2561267160);
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UFrameGrabberProtocol>()
	{
		return UFrameGrabberProtocol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFrameGrabberProtocol(Z_Construct_UClass_UFrameGrabberProtocol, &UFrameGrabberProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UFrameGrabberProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrameGrabberProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
