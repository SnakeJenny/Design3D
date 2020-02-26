// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Viewport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewport() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UViewport_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UViewport();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_GetViewLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_GetViewportWorld();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_GetViewRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_SetViewLocation();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_SetViewRotation();
	UMG_API UFunction* Z_Construct_UFunction_UViewport_Spawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UViewport::StaticRegisterNativesUViewport()
	{
		UClass* Class = UViewport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewLocation", &UViewport::execGetViewLocation },
			{ "GetViewportWorld", &UViewport::execGetViewportWorld },
			{ "GetViewRotation", &UViewport::execGetViewRotation },
			{ "SetViewLocation", &UViewport::execSetViewLocation },
			{ "SetViewRotation", &UViewport::execSetViewRotation },
			{ "Spawn", &UViewport::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewport_GetViewLocation_Statics
	{
		struct Viewport_eventGetViewLocation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventGetViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewLocation", sizeof(Viewport_eventGetViewLocation_Parms), Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_GetViewportWorld_Statics
	{
		struct Viewport_eventGetViewportWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventGetViewportWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewportWorld", sizeof(Viewport_eventGetViewportWorld_Parms), Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewportWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_GetViewRotation_Statics
	{
		struct Viewport_eventGetViewRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewRotation", sizeof(Viewport_eventGetViewRotation_Parms), Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_SetViewLocation_Statics
	{
		struct Viewport_eventSetViewLocation_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventSetViewLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewLocation", sizeof(Viewport_eventSetViewLocation_Parms), Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_SetViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_SetViewRotation_Statics
	{
		struct Viewport_eventSetViewRotation_Parms
		{
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewRotation", sizeof(Viewport_eventSetViewRotation_Parms), Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_SetViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_Spawn_Statics
	{
		struct Viewport_eventSpawn_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "Spawn", sizeof(Viewport_eventSpawn_Parms), Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewport_NoRegister()
	{
		return UViewport::StaticClass();
	}
	struct Z_Construct_UClass_UViewport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewport_GetViewLocation, "GetViewLocation" }, // 2092953852
		{ &Z_Construct_UFunction_UViewport_GetViewportWorld, "GetViewportWorld" }, // 4041497454
		{ &Z_Construct_UFunction_UViewport_GetViewRotation, "GetViewRotation" }, // 3555761746
		{ &Z_Construct_UFunction_UViewport_SetViewLocation, "SetViewLocation" }, // 2725881619
		{ &Z_Construct_UFunction_UViewport_SetViewRotation, "SetViewRotation" }, // 988361580
		{ &Z_Construct_UFunction_UViewport_Spawn, "Spawn" }, // 2205332780
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/Viewport.h" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewport, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewport_Statics::ClassParams = {
		&UViewport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewport_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewport, 1780978980);
	template<> UMG_API UClass* StaticClass<UViewport>()
	{
		return UViewport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewport(Z_Construct_UClass_UViewport, &UViewport::StaticClass, TEXT("/Script/UMG"), TEXT("UViewport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
