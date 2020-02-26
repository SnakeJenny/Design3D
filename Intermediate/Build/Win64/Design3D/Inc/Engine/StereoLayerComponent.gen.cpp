// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/StereoLayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerType();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetUVRect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetUVRect();
// End Cross Module References
	static UEnum* EStereoLayerShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerShape, Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerShape"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStereoLayerShape>()
	{
		return EStereoLayerShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoLayerShape(EStereoLayerShape_StaticEnum, TEXT("/Script/Engine"), TEXT("EStereoLayerShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStereoLayerShape_Hash() { return 1397593170U; }
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoLayerShape"), 0, Get_Z_Construct_UEnum_Engine_EStereoLayerShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLSH_QuadLayer", (int64)SLSH_QuadLayer },
				{ "SLSH_CylinderLayer", (int64)SLSH_CylinderLayer },
				{ "SLSH_CubemapLayer", (int64)SLSH_CubemapLayer },
				{ "SLSH_MAX", (int64)SLSH_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "SLSH_CubemapLayer.DisplayName", "Cubemap Layer" },
				{ "SLSH_CubemapLayer.ToolTip", "Cubemap layer" },
				{ "SLSH_CylinderLayer.DisplayName", "Cylinder Layer" },
				{ "SLSH_CylinderLayer.ToolTip", "Cylinder layer" },
				{ "SLSH_QuadLayer.DisplayName", "Quad Layer" },
				{ "SLSH_QuadLayer.ToolTip", "Quad layer" },
				{ "ToolTip", "The shape to use for the stereo layer.  Note that some shapes might not be supported on all platforms!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EStereoLayerShape",
				"EStereoLayerShape",
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
	static UEnum* EStereoLayerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerType, Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStereoLayerType>()
	{
		return EStereoLayerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoLayerType(EStereoLayerType_StaticEnum, TEXT("/Script/Engine"), TEXT("EStereoLayerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStereoLayerType_Hash() { return 475203088U; }
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoLayerType"), 0, Get_Z_Construct_UEnum_Engine_EStereoLayerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLT_WorldLocked", (int64)SLT_WorldLocked },
				{ "SLT_TrackerLocked", (int64)SLT_TrackerLocked },
				{ "SLT_FaceLocked", (int64)SLT_FaceLocked },
				{ "SLT_MAX", (int64)SLT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "SLT_FaceLocked.DisplayName", "Face Locked" },
				{ "SLT_FaceLocked.ToolTip", "Location within the view space" },
				{ "SLT_TrackerLocked.DisplayName", "Tracker Locked" },
				{ "SLT_TrackerLocked.ToolTip", "Location within the HMD tracking space" },
				{ "SLT_WorldLocked.DisplayName", "World Locked" },
				{ "SLT_WorldLocked.ToolTip", "Location within the world" },
				{ "ToolTip", "Used by IStereoLayer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EStereoLayerType",
				"EStereoLayerType",
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
	void UStereoLayerComponent::StaticRegisterNativesUStereoLayerComponent()
	{
		UClass* Class = UStereoLayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &UStereoLayerComponent::execGetPriority },
			{ "GetQuadSize", &UStereoLayerComponent::execGetQuadSize },
			{ "GetTexture", &UStereoLayerComponent::execGetTexture },
			{ "GetUVRect", &UStereoLayerComponent::execGetUVRect },
			{ "MarkTextureForUpdate", &UStereoLayerComponent::execMarkTextureForUpdate },
			{ "SetPriority", &UStereoLayerComponent::execSetPriority },
			{ "SetQuadSize", &UStereoLayerComponent::execSetQuadSize },
			{ "SetTexture", &UStereoLayerComponent::execSetTexture },
			{ "SetUVRect", &UStereoLayerComponent::execSetUVRect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics
	{
		struct StereoLayerComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the render priority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetPriority", sizeof(StereoLayerComponent_eventGetPriority_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics
	{
		struct StereoLayerComponent_eventGetQuadSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventGetQuadSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the height and width of the rendered quad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetQuadSize", sizeof(StereoLayerComponent_eventGetQuadSize_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics
	{
		struct StereoLayerComponent_eventGetTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the texture mapped to the stereo layer quad" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetTexture", sizeof(StereoLayerComponent_eventGetTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics
	{
		struct StereoLayerComponent_eventGetUVRect_Parms
		{
			FBox2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventGetUVRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "@return the UV coordinates mapped to the quad face" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "GetUVRect", sizeof(StereoLayerComponent_eventGetUVRect_Parms), Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetUVRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_GetUVRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Manually mark the stereo layer texture for updating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "MarkTextureForUpdate", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics
	{
		struct StereoLayerComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param       InPriority: Priority value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetPriority", sizeof(StereoLayerComponent_eventSetPriority_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics
	{
		struct StereoLayerComponent_eventSetQuadSize_Parms
		{
			FVector2D InQuadSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuadSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::NewProp_InQuadSize = { "InQuadSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventSetQuadSize_Parms, InQuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::NewProp_InQuadSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the quad size. This is the unscaled height and width, before component scale is applied.\n@param       InQuadSize: new quad size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetQuadSize", sizeof(StereoLayerComponent_eventSetQuadSize_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics
	{
		struct StereoLayerComponent_eventSetTexture_Parms
		{
			UTexture* InTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventSetTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the texture displayed on the stereo layer quad\n@param       InTexture: new Texture2D" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetTexture", sizeof(StereoLayerComponent_eventSetTexture_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics
	{
		struct StereoLayerComponent_eventSetUVRect_Parms
		{
			FBox2D InUVRect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUVRect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::NewProp_InUVRect = { "InUVRect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StereoLayerComponent_eventSetUVRect_Parms, InUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::NewProp_InUVRect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Change the UV coordinates mapped to the quad face\n@param       InUVRect: Min and Max UV coordinates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, nullptr, "SetUVRect", sizeof(StereoLayerComponent_eventSetUVRect_Parms), Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetUVRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStereoLayerComponent_SetUVRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister()
	{
		return UStereoLayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoLayerShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoLayerShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoLayerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoLayerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CylinderHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderOverlayArc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderOverlayArc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVRect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVRect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[];
#endif
		static void NewProp_bSupportsDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLiveTexture_MetaData[];
#endif
		static void NewProp_bLiveTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLiveTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStereoLayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetPriority, "GetPriority" }, // 3354241154
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize, "GetQuadSize" }, // 3528196321
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetTexture, "GetTexture" }, // 1880819225
		{ &Z_Construct_UFunction_UStereoLayerComponent_GetUVRect, "GetUVRect" }, // 1482814336
		{ &Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate, "MarkTextureForUpdate" }, // 172949442
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetPriority, "SetPriority" }, // 1994965421
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize, "SetQuadSize" }, // 2623901883
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetTexture, "SetTexture" }, // 3109202339
		{ &Z_Construct_UFunction_UStereoLayerComponent_SetUVRect, "SetUVRect" }, // 705894887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "HeadMountedDisplay" },
		{ "DisplayName", "Stereo Layer" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "Components/StereoLayerComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "A geometry layer within the stereo rendered viewport." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Specifies which type of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape = { "StereoLayerShape", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerShape), Z_Construct_UEnum_Engine_EStereoLayerShape, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Specifies how and where the quad is rendered to the screen *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType = { "StereoLayerType", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerType), Z_Construct_UEnum_Engine_EStereoLayerType, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData[] = {
		{ "Category", "StereoLayer | Cylinder Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Height of the stereo layer cylinder *" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight = { "CylinderHeight", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, CylinderHeight), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData[] = {
		{ "Category", "StereoLayer | Cylinder Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Arc angle for the stereo layer cylinder *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc = { "CylinderOverlayArc", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, CylinderOverlayArc), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData[] = {
		{ "Category", "StereoLayer | Cylinder Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Radial size of the rendered stereo layer cylinder *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius = { "CylinderRadius", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, CylinderRadius), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData[] = {
		{ "Category", "StereoLayer | Quad Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "UV coordinates mapped to the quad face *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect = { "UVRect", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, UVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData[] = {
		{ "Category", "StereoLayer | Quad Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Size of the rendered stereo layer quad *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize = { "QuadSize", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, QuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData[] = {
		{ "Category", "StereoLayer | Cubemap Overlay Properties" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Texture displayed on the stereo layer for left eye, if stereoscopic textures are supported on the platform *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture = { "LeftTexture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, LeftTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "Texture displayed on the stereo layer (is stereocopic textures are supported on the platfrom and more than one texture is provided, this will be the right eye) *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bSupportsDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth = { "bSupportsDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
		{ "ToolTip", "True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_SetBit(void* Obj)
	{
		((UStereoLayerComponent*)Obj)->bLiveTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture = { "bLiveTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerComponent), &Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_StereoLayerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderOverlayArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_CylinderRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_UVRect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_QuadSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_LeftTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bNoAlphaChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bSupportsDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerComponent_Statics::NewProp_bLiveTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerComponent_Statics::ClassParams = {
		&UStereoLayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoLayerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoLayerComponent, 3856804701);
	template<> ENGINE_API UClass* StaticClass<UStereoLayerComponent>()
	{
		return UStereoLayerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerComponent(Z_Construct_UClass_UStereoLayerComponent, &UStereoLayerComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UStereoLayerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
