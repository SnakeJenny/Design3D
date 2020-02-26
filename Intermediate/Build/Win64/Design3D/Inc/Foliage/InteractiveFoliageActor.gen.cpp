// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/InteractiveFoliageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageActor() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInteractiveFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor()
	{
		UClass* Class = AInteractiveFoliageActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleTouched", &AInteractiveFoliageActor::execCapsuleTouched },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics
	{
		struct InteractiveFoliageActor_eventCapsuleTouched_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult OverlapInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverlapInfo;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo = { "OverlapInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlapInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo_MetaData)) };
	void Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InteractiveFoliageActor_eventCapsuleTouched_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractiveFoliageActor_eventCapsuleTouched_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlapInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Called when capsule is touched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractiveFoliageActor, nullptr, "CapsuleTouched", sizeof(InteractiveFoliageActor_eventCapsuleTouched_Parms), Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractiveFoliageActor_NoRegister()
	{
		return AInteractiveFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractiveFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTouchImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTouchImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDamageImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDamageImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffnessQuadratic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffnessQuadratic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageTouchImpulseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageTouchImpulseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageDamageImpulseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FoliageDamageImpulseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliagePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliagePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchingActorEntryPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TouchingActorEntryPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractiveFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractiveFoliageActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractiveFoliageActor_CapsuleTouched, "CapsuleTouched" }, // 2923888341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractiveFoliageActor.h" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo - hook this up     @todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, Mass), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of combined forces applied each update." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxForce), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each touch force applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse = { "MaxTouchImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxTouchImpulse), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Clamps the magnitude of each damage force applied." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse = { "MaxDamageImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, MaxDamageImpulse), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines the amount of energy lost by the spring as it oscillates.\nThis force is similar to air friction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping = { "FoliageDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamping), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Same as FoliageStiffness, but the strength of this force increases with the square of the distance to the spring's center.\nThis force is used to prevent the spring from extending past a certain point due to touch and damage forces." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic = { "FoliageStiffnessQuadratic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffnessQuadratic), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Determines how strong the force that pushes toward the spring's center will be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness = { "FoliageStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageStiffness), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from touch events." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale = { "FoliageTouchImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageTouchImpulseScale), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData[] = {
		{ "Category", "FoliagePhysics" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Scales forces applied from damage events." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale = { "FoliageDamageImpulseScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageDamageImpulseScale), METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition = { "FoliagePosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliagePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce = { "FoliageForce", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Simulated physics state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity = { "FoliageVelocity", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, FoliageVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Position of the last actor to enter the collision cylinder.\nThis currently does not handle multiple actors affecting the foliage simultaneously." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition = { "TouchingActorEntryPosition", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, TouchingActorEntryPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractiveFoliageActor.h" },
		{ "ToolTip", "Collision cylinder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractiveFoliageActor, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxTouchImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_MaxDamageImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffnessQuadratic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageTouchImpulseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageDamageImpulseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliagePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_FoliageVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_TouchingActorEntryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractiveFoliageActor_Statics::NewProp_CapsuleComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractiveFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractiveFoliageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams = {
		&AInteractiveFoliageActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInteractiveFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractiveFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractiveFoliageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractiveFoliageActor, 326944341);
	template<> FOLIAGE_API UClass* StaticClass<AInteractiveFoliageActor>()
	{
		return AInteractiveFoliageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractiveFoliageActor(Z_Construct_UClass_AInteractiveFoliageActor, &AInteractiveFoliageActor::StaticClass, TEXT("/Script/Foliage"), TEXT("AInteractiveFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractiveFoliageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
