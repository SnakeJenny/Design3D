// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_AnimDynamics.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AnimDynamics() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics();
// End Cross Module References
	void UAnimGraphNode_AnimDynamics::StaticRegisterNativesUAnimGraphNode_AnimDynamics()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister()
	{
		return UAnimGraphNode_AnimDynamics::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPreviewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastPreviewComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowCollisionSpheres_MetaData[];
#endif
		static void NewProp_bShowCollisionSpheres_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCollisionSpheres;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSphericalLimit_MetaData[];
#endif
		static void NewProp_bShowSphericalLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSphericalLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPlanarLimit_MetaData[];
#endif
		static void NewProp_bShowPlanarLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPlanarLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAngularLimits_MetaData[];
#endif
		static void NewProp_bShowAngularLimits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAngularLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLinearLimits_MetaData[];
#endif
		static void NewProp_bShowLinearLimits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLinearLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[];
#endif
		static void NewProp_bPreviewLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_AnimDynamics.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_LastPreviewComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_LastPreviewComponent = { "LastPreviewComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_AnimDynamics, LastPreviewComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_LastPreviewComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_LastPreviewComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "If planar limits are enabled and the collision mode isn't CoM, draw sphere collision sizes" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowCollisionSpheres = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres = { "bShowCollisionSpheres", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show spherical limits in the viewport (preview live only)" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowSphericalLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit = { "bShowSphericalLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show planar limit info (actual plane, plane normal) in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowPlanarLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit = { "bShowPlanarLimit", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show angular limit ranges in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowAngularLimits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits = { "bShowAngularLimits", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Show linear (prismatic) limits in the viewport" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bShowLinearLimits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits = { "bShowLinearLimits", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
		{ "ToolTip", "Preview the live physics object on the mesh" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
	{
		((UAnimGraphNode_AnimDynamics*)Obj)->bPreviewLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_AnimDynamics), &Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_AnimDynamics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_AnimDynamics, Node), Z_Construct_UScriptStruct_FAnimNode_AnimDynamics, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_LastPreviewComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowCollisionSpheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowSphericalLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowPlanarLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowAngularLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bShowLinearLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_bPreviewLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AnimDynamics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::ClassParams = {
		&UAnimGraphNode_AnimDynamics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_AnimDynamics, 2757677511);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_AnimDynamics>()
	{
		return UAnimGraphNode_AnimDynamics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_AnimDynamics(Z_Construct_UClass_UAnimGraphNode_AnimDynamics, &UAnimGraphNode_AnimDynamics::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_AnimDynamics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AnimDynamics);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_AnimDynamics)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
