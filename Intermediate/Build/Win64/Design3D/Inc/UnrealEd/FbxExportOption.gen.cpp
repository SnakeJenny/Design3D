// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/FbxExportOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxExportOption() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxExportOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EFbxExportCompatibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxExportCompatibility"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxExportCompatibility>()
	{
		return EFbxExportCompatibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFbxExportCompatibility(EFbxExportCompatibility_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EFbxExportCompatibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Hash() { return 72211090U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFbxExportCompatibility"), 0, Get_Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFbxExportCompatibility::FBX_2011", (int64)EFbxExportCompatibility::FBX_2011 },
				{ "EFbxExportCompatibility::FBX_2012", (int64)EFbxExportCompatibility::FBX_2012 },
				{ "EFbxExportCompatibility::FBX_2013", (int64)EFbxExportCompatibility::FBX_2013 },
				{ "EFbxExportCompatibility::FBX_2014", (int64)EFbxExportCompatibility::FBX_2014 },
				{ "EFbxExportCompatibility::FBX_2016", (int64)EFbxExportCompatibility::FBX_2016 },
				{ "EFbxExportCompatibility::FBX_2018", (int64)EFbxExportCompatibility::FBX_2018 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
				{ "ToolTip", "Fbx export compatibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EFbxExportCompatibility",
				"EFbxExportCompatibility",
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
	void UFbxExportOption::StaticRegisterNativesUFbxExportOption()
	{
	}
	UClass* Z_Construct_UClass_UFbxExportOption_NoRegister()
	{
		return UFbxExportOption::StaticClass();
	}
	struct Z_Construct_UClass_UFbxExportOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapSkeletalMotionToRoot_MetaData[];
#endif
		static void NewProp_MapSkeletalMotionToRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MapSkeletalMotionToRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportPreviewMesh_MetaData[];
#endif
		static void NewProp_bExportPreviewMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportPreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static void NewProp_Collision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelOfDetail_MetaData[];
#endif
		static void NewProp_LevelOfDetail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LevelOfDetail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static void NewProp_VertexColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bASCII_MetaData[];
#endif
		static void NewProp_bASCII_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bASCII;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FbxExportCompatibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FbxExportCompatibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FbxExportCompatibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxExportOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/FbxExportOption.h" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enable, Map skeletal actor motion to the root bone of the skeleton." },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->MapSkeletalMotionToRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot = { "MapSkeletalMotionToRoot", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enable, the preview mesh link to the exported animations will be also exported." },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bExportPreviewMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh = { "bExportPreviewMesh", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export collision" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->Collision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export the level of detail" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->LevelOfDetail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail = { "LevelOfDetail", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export vertex color" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->VertexColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, export with X axis as the front axis instead of default -Y" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bForceFrontXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "If enabled, save as ascii instead of binary" },
	};
#endif
	void Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_SetBit(void* Obj)
	{
		((UFbxExportOption*)Obj)->bASCII = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII = { "bASCII", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFbxExportOption), &Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Classes/Exporters/FbxExportOption.h" },
		{ "ToolTip", "This will set the fbx sdk compatibility when exporting to fbx file. The default value is 2013" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility = { "FbxExportCompatibility", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFbxExportOption, FbxExportCompatibility), Z_Construct_UEnum_UnrealEd_EFbxExportCompatibility, METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxExportOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_MapSkeletalMotionToRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bExportPreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_LevelOfDetail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_VertexColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bForceFrontXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_bASCII,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxExportOption_Statics::NewProp_FbxExportCompatibility_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxExportOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxExportOption>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFbxExportOption_Statics::ClassParams = {
		&UFbxExportOption::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxExportOption_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFbxExportOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxExportOption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFbxExportOption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFbxExportOption, 1340647073);
	template<> UNREALED_API UClass* StaticClass<UFbxExportOption>()
	{
		return UFbxExportOption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFbxExportOption(Z_Construct_UClass_UFbxExportOption, &UFbxExportOption::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFbxExportOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxExportOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
