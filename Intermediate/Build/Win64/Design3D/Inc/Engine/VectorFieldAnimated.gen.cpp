// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VectorField/VectorFieldAnimated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EVectorFieldConstructionOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, Z_Construct_UPackage__Script_Engine(), TEXT("EVectorFieldConstructionOp"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVectorFieldConstructionOp>()
	{
		return EVectorFieldConstructionOp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorFieldConstructionOp(EVectorFieldConstructionOp_StaticEnum, TEXT("/Script/Engine"), TEXT("EVectorFieldConstructionOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Hash() { return 2038156020U; }
	UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorFieldConstructionOp"), 0, Get_Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VFCO_Extrude", (int64)VFCO_Extrude },
				{ "VFCO_Revolve", (int64)VFCO_Revolve },
				{ "VFCO_MAX", (int64)VFCO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "Operation used to construct the vector field from a 2D texture." },
				{ "VFCO_Extrude.DisplayName", "Extrude" },
				{ "VFCO_Revolve.DisplayName", "Revolve" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVectorFieldConstructionOp",
				"EVectorFieldConstructionOp",
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
	void UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated()
	{
	}
	UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister()
	{
		return UVectorFieldAnimated::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldAnimated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImagesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImagesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImagesX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImagesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstructionOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldAnimated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVectorField,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VectorField/VectorFieldAnimated.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The maximum magnitude of noise vectors to apply." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax = { "NoiseMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseMax), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Scale to apply to vectors in the noise field." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData[] = {
		{ "Category", "Noise" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "A static vector field used to add noise." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField = { "NoiseField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, NoiseField), Z_Construct_UClass_UVectorFieldStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "Whether or not the simulation should loop." },
	};
#endif
	void Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UVectorFieldAnimated*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVectorFieldAnimated), &Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The rate at which to interpolate between frames." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of frames in the atlas." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, FrameCount), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of vertical subimages in the texture atlas." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY = { "SubImagesY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The number of horizontal subimages in the texture atlas." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX = { "SubImagesX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ = { "VolumeSizeZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeZ), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY = { "VolumeSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX = { "VolumeSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The operation used to construct the vector field." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp = { "ConstructionOp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, ConstructionOp), Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Reconstruction" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
		{ "ToolTip", "The texture from which to create the vector field." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVectorFieldAnimated, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_NoiseField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FramesPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_FrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_SubImagesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_VolumeSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_ConstructionOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldAnimated_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldAnimated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldAnimated>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams = {
		&UVectorFieldAnimated::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldAnimated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldAnimated()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVectorFieldAnimated_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVectorFieldAnimated, 2058052559);
	template<> ENGINE_API UClass* StaticClass<UVectorFieldAnimated>()
	{
		return UVectorFieldAnimated::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorFieldAnimated(Z_Construct_UClass_UVectorFieldAnimated, &UVectorFieldAnimated::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorFieldAnimated"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldAnimated);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
