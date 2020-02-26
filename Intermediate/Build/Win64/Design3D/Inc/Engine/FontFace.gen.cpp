// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/FontFace.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFontFace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFontFace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLayoutMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontLoadingPolicy();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFontHinting();
	SLATECORE_API UClass* Z_Construct_UClass_UFontFaceInterface_NoRegister();
// End Cross Module References
	void UFontFace::StaticRegisterNativesUFontFace()
	{
	}
	UClass* Z_Construct_UClass_UFontFace_NoRegister()
	{
		return UFontFace::StaticClass();
	}
	struct Z_Construct_UClass_UFontFace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubFaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubFaces;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubFaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontFaceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontFaceData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FontFaceData_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayoutMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayoutMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hinting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hinting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hinting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontFace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FontFace" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/FontFace.h" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A font face asset contains the raw payload data for a source TTF/OTF file as used by FreeType.\nDuring cook this asset type generates a \".ufont\" file containing the raw payload data (unless loaded \"Inline\")." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Transient cache of the sub-faces available within this face" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces = { "SubFaces", nullptr, (EPropertyFlags)0x0010040800022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, SubFaces), METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner = { "SubFaces", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The data associated with the font face. This should always be filled in providing the source filename is valid." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData = { "FontFaceData", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, FontFaceData_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner = { "FontFaceData", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Which method should we use when laying out the font? Try changing this if you notice clipping or height issues with your font." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod = { "LayoutMethod", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, LayoutMethod), Z_Construct_UEnum_SlateCore_EFontLayoutMethod, METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "Enum controlling how this font face should be loaded at runtime. See the enum for more explanations of the options." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy = { "LoadingPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, LoadingPolicy), Z_Construct_UEnum_SlateCore_EFontLoadingPolicy, METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The hinting algorithm to use with the font face." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting = { "Hinting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, Hinting), Z_Construct_UEnum_SlateCore_EFontHinting, METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename_MetaData[] = {
		{ "Category", "FontFace" },
		{ "ModuleRelativePath", "Classes/Engine/FontFace.h" },
		{ "ToolTip", "The filename of the font face we were created from. This may not always exist on disk, as we may have previously loaded and cached the font data inside this asset." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename = { "SourceFilename", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFontFace, SourceFilename), METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFontFace_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SubFaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_FontFaceData_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LayoutMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_LoadingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_Hinting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFontFace_Statics::NewProp_SourceFilename,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFontFace_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFontFaceInterface_NoRegister, (int32)VTABLE_OFFSET(UFontFace, IFontFaceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontFace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontFace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFontFace_Statics::ClassParams = {
		&UFontFace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFontFace_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFontFace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontFace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFontFace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFontFace, 244375862);
	template<> ENGINE_API UClass* StaticClass<UFontFace>()
	{
		return UFontFace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontFace(Z_Construct_UClass_UFontFace, &UFontFace::StaticClass, TEXT("/Script/Engine"), TEXT("UFontFace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFace);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
