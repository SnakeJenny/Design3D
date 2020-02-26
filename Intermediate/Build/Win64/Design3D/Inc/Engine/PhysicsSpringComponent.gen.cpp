// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsSpringComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSpringComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UPhysicsSpringComponent::StaticRegisterNativesUPhysicsSpringComponent()
	{
		UClass* Class = UPhysicsSpringComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNormalizedCompressionScalar", &UPhysicsSpringComponent::execGetNormalizedCompressionScalar },
			{ "GetSpringCurrentEndPoint", &UPhysicsSpringComponent::execGetSpringCurrentEndPoint },
			{ "GetSpringDirection", &UPhysicsSpringComponent::execGetSpringDirection },
			{ "GetSpringRestingPoint", &UPhysicsSpringComponent::execGetSpringRestingPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics
	{
		struct PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring compression as a normalized scalar along spring direction.\n0 implies spring is at rest\n1 implies fully compressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetNormalizedCompressionScalar", sizeof(PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms), Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics
	{
		struct PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring current end point in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringCurrentEndPoint", sizeof(PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics
	{
		struct PhysicsSpringComponent_eventGetSpringDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring direction from start to resting point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringDirection", sizeof(PhysicsSpringComponent_eventGetSpringDirection_Parms), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics
	{
		struct PhysicsSpringComponent_eventGetSpringRestingPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringRestingPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Returns the spring resting point in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, nullptr, "GetSpringRestingPoint", sizeof(PhysicsSpringComponent_eventGetSpringRestingPoint_Parms), Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister()
	{
		return UPhysicsSpringComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsSpringComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[];
#endif
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpringChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringLengthAtRest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringLengthAtRest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsSpringComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsSpringComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar, "GetNormalizedCompressionScalar" }, // 2781097658
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint, "GetSpringCurrentEndPoint" }, // 3031753670
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection, "GetSpringDirection" }, // 2895263497
		{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint, "GetSpringRestingPoint" }, // 2310419300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Note: this component is still work in progress. Uses raycast springs for simple vehicle forces\n   Used with objects that have physics to create a spring down the X direction\n   ie. point X in the direction you want generate spring." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "The current compression of the spring. A spring at rest will have SpringCompression 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression = { "SpringCompression", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringCompression), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "If true, the spring will ignore all components in its own actor" },
		{ "UIMin", "0.010000" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((UPhysicsSpringComponent*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsSpringComponent), &Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Strength of thrust force applied to the base object." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel = { "SpringChannel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Determines the radius of the spring." },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius = { "SpringRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringRadius), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Determines how long the spring will be along the X-axis at rest. The spring will apply 0 force on a body when it's at rest." },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest = { "SpringLengthAtRest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringLengthAtRest), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Specifies how quickly the spring can absorb energy of a body. The higher the damping the less oscillation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
		{ "ToolTip", "Specifies how much strength the spring has. The higher the SpringStiffness the more force the spring can push on a body with." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsSpringComponent, SpringStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringLengthAtRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSpringComponent_Statics::NewProp_SpringStiffness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsSpringComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSpringComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSpringComponent_Statics::ClassParams = {
		&UPhysicsSpringComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsSpringComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSpringComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsSpringComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsSpringComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsSpringComponent, 1471911272);
	template<> ENGINE_API UClass* StaticClass<UPhysicsSpringComponent>()
	{
		return UPhysicsSpringComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSpringComponent(Z_Construct_UClass_UPhysicsSpringComponent, &UPhysicsSpringComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsSpringComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSpringComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
