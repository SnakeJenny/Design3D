// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/TexAligner/TexAligner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAligner() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ETexAlign();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETexAlign_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ETexAlign, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ETexAlign"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ETexAlign>()
	{
		return ETexAlign_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETexAlign(ETexAlign_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ETexAlign"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ETexAlign_Hash() { return 1939814755U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ETexAlign()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETexAlign"), 0, Get_Z_Construct_UEnum_UnrealEd_ETexAlign_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TEXALIGN_None", (int64)TEXALIGN_None },
				{ "TEXALIGN_Default", (int64)TEXALIGN_Default },
				{ "TEXALIGN_Box", (int64)TEXALIGN_Box },
				{ "TEXALIGN_Planar", (int64)TEXALIGN_Planar },
				{ "TEXALIGN_Fit", (int64)TEXALIGN_Fit },
				{ "TEXALIGN_PlanarAuto", (int64)TEXALIGN_PlanarAuto },
				{ "TEXALIGN_PlanarWall", (int64)TEXALIGN_PlanarWall },
				{ "TEXALIGN_PlanarFloor", (int64)TEXALIGN_PlanarFloor },
				{ "TEXALIGN_MAX", (int64)TEXALIGN_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
				{ "TEXALIGN_Box.ToolTip", "Aligns to best U and V axis based on polys normal." },
				{ "TEXALIGN_Default.ToolTip", "No special alignment (just derive from UV vectors)." },
				{ "TEXALIGN_Fit.ToolTip", "Fits texture to a polygon." },
				{ "TEXALIGN_None.ToolTip", "When passed to functions it means \"use whatever the aligners default is\"." },
				{ "TEXALIGN_Planar.ToolTip", "Maps the poly to the axis it is closest to laying parallel to." },
				{ "TEXALIGN_PlanarAuto.ToolTip", "Special version of TEXALIGN_Planar." },
				{ "TEXALIGN_PlanarFloor.ToolTip", "Special version of TEXALIGN_Planar." },
				{ "TEXALIGN_PlanarWall.ToolTip", "Special version of TEXALIGN_Planar." },
				{ "ToolTip", "Alignment types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ETexAlign",
				"ETexAlign",
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
	void UTexAligner::StaticRegisterNativesUTexAligner()
	{
	}
	UClass* Z_Construct_UClass_UTexAligner_NoRegister()
	{
		return UTexAligner::StaticClass();
	}
	struct Z_Construct_UClass_UTexAligner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefTexAlign_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefTexAlign;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAligner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TexAligner/TexAligner.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
		{ "ToolTip", "Description for the editor to display." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexAligner, Desc), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile = { "VTile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexAligner, VTile), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile = { "UTile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexAligner, UTile), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis = { "TAxis", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexAligner, TAxis), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
		{ "ToolTip", "The default alignment this aligner represents." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign = { "DefTexAlign", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexAligner, DefTexAlign), Z_Construct_UEnum_UnrealEd_ETexAlign, METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexAligner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAligner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAligner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexAligner_Statics::ClassParams = {
		&UTexAligner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexAligner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAligner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexAligner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexAligner, 3850994097);
	template<> UNREALED_API UClass* StaticClass<UTexAligner>()
	{
		return UTexAligner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexAligner(Z_Construct_UClass_UTexAligner, &UTexAligner::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UTexAligner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAligner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
