// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationSkelVertSurface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static UEnum* ELocationSkelVertSurfaceSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationSkelVertSurfaceSource"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELocationSkelVertSurfaceSource>()
	{
		return ELocationSkelVertSurfaceSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationSkelVertSurfaceSource(ELocationSkelVertSurfaceSource_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationSkelVertSurfaceSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Hash() { return 52558724U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationSkelVertSurfaceSource"), 0, Get_Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VERTSURFACESOURCE_Vert", (int64)VERTSURFACESOURCE_Vert },
				{ "VERTSURFACESOURCE_Surface", (int64)VERTSURFACESOURCE_Surface },
				{ "VERTSURFACESOURCE_MAX", (int64)VERTSURFACESOURCE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "VERTSURFACESOURCE_Surface.DisplayName", "Surfaces" },
				{ "VERTSURFACESOURCE_Vert.DisplayName", "Vertices" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ELocationSkelVertSurfaceSource",
				"ELocationSkelVertSurfaceSource",
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
	void UParticleModuleLocationSkelVertSurface::StaticRegisterNativesUParticleModuleLocationSkelVertSurface()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister()
	{
		return UParticleModuleLocationSkelVertSurface::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritUVChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InheritUVChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritUV_MetaData[];
#endif
		static void NewProp_bInheritUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritVertexColor_MetaData[];
#endif
		static void NewProp_bInheritVertexColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritVertexColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidMaterialIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidMaterialIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidMaterialIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCheckTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalCheckTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCheckToleranceDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalCheckToleranceDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalToCompare_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalToCompare;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnforceNormalCheck_MetaData[];
#endif
		static void NewProp_bEnforceNormalCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnforceNormalCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidAssociatedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidAssociatedBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ValidAssociatedBones_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSkelMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[];
#endif
		static void NewProp_bInheritBoneVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[];
#endif
		static void NewProp_bOrientMeshEmitters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[];
#endif
		static void NewProp_bUpdatePositionEachFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniversalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Skel Vert/Surf Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "UV channel to inherit from the spawn mesh, internally clamped to those available." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel = { "InheritUVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritUVChannel), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated UV data on spawn. Accessed through dynamic parameter module X and Y, must be a \"Spawn Time Only\" parameter on \"AutoSet\" mode. This feature is not supported for GPU particles." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV = { "bInheritUV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated vertex color on spawn. This feature is not supported for GPU particles." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritVertexColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor = { "bInheritVertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Array of material indices that are valid materials to spawn from.\nIf empty, any material will be considered valid" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices = { "ValidMaterialIndices", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_Inner = { "ValidMaterialIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Normal tolerance.  Value between 1.0 and -1.0 with 1.0 being exact match, 0.0 being everything up to\n              perpendicular and -1.0 being any direction or don't restrict at all." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance = { "NormalCheckTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckTolerance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Normal tolerance.  0 degrees means it must be an exact match, 180 degrees means it can be any angle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees = { "NormalCheckToleranceDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckToleranceDegrees), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Use this normal to restrict spawning locations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare = { "NormalToCompare", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalToCompare), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "When true use the RestrictToNormal and NormalTolerance values to check surface normals" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bEnforceNormalCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck = { "bEnforceNormalCheck", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "This module will only spawn from verts or surfaces associated with the bones in this list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones = { "ValidAssociatedBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_Inner = { "ValidAssociatedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh = { "EditorSkelMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName = { "SkelMeshActorParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritBoneVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity = { "bInheritBoneVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the vert/surface" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bOrientMeshEmitters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters = { "bOrientMeshEmitters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "If true, update the particle locations each frame with that of the vert/surface" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_SetBit(void* Obj)
	{
		((UParticleModuleLocationSkelVertSurface*)Obj)->bUpdatePositionEachFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame = { "bUpdatePositionEachFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleLocationSkelVertSurface), &Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "An offset to apply to each vert/surface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset = { "UniversalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "VertSurface" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
		{ "ToolTip", "Whether the module uses Verts or Surfaces for locations.\n\nVERTSURFACESOURCE_Vert          - Use Verts as the source locations.\nVERTSURFACESOURCE_Surface       - Use Surfaces as the source locations." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SourceType), Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritUVChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritVertexColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidMaterialIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalCheckToleranceDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_NormalToCompare,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bEnforceNormalCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_ValidAssociatedBones_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SkelMeshActorParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_InheritVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bInheritBoneVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bOrientMeshEmitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_bUpdatePositionEachFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_UniversalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::NewProp_SourceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationSkelVertSurface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::ClassParams = {
		&UParticleModuleLocationSkelVertSurface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationSkelVertSurface, 3412875221);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationSkelVertSurface>()
	{
		return UParticleModuleLocationSkelVertSurface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationSkelVertSurface(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface, &UParticleModuleLocationSkelVertSurface::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationSkelVertSurface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationSkelVertSurface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
