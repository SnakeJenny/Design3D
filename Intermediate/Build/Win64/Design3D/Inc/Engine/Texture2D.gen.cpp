// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Texture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX();
	ENGINE_API UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
// End Cross Module References
	void UTexture2D::StaticRegisterNativesUTexture2D()
	{
		UClass* Class = UTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_GetSizeX", &UTexture2D::execBlueprint_GetSizeX },
			{ "Blueprint_GetSizeY", &UTexture2D::execBlueprint_GetSizeY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics
	{
		struct Texture2D_eventBlueprint_GetSizeX_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "DisplayName", "GetSizeX" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the X size of the texture, in pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeX", sizeof(Texture2D_eventBlueprint_GetSizeX_Parms), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics
	{
		struct Texture2D_eventBlueprint_GetSizeY_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Texture" },
		{ "DisplayName", "GetSizeY" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Gets the Y size of the texture, in pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, nullptr, "Blueprint_GetSizeY", sizeof(Texture2D_eventBlueprint_GetSizeY_Parms), Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTexture2D_NoRegister()
	{
		return UTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ForceMipLevelsToBeResidentTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenPaintedInEditor_MetaData[];
#endif
		static void NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenPaintedInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalForceMipLevelsToBeResident_MetaData[];
#endif
		static void NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalForceMipLevelsToBeResident;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStreamingMipBias_MetaData[];
#endif
		static void NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStreamingMipBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMiplevelsToBeResident_MetaData[];
#endif
		static void NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResident;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStreamingUpdatePending_MetaData[];
#endif
		static void NewProp_bHasStreamingUpdatePending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStreamingUpdatePending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStreamable_MetaData[];
#endif
		static void NewProp_bIsStreamable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStreamable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemporarilyDisableStreaming_MetaData[];
#endif
		static void NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemporarilyDisableStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstResourceMemMip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstResourceMemMip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTexture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX, "Blueprint_GetSizeX" }, // 987440158
		{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY, "Blueprint_GetSizeY" }, // 2713242389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/Texture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp = { "ForceMipLevelsToBeResidentTimestamp", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, ForceMipLevelsToBeResidentTimestamp), METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The imported size of the texture. Only valid on cooked builds when texture source is not\navailable. Access ONLY via the GetImportedSize() accessor!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize = { "ImportedSize", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, ImportedSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "Texture" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "Texture" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Whether the texture has been painted in the editor." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bHasBeenPaintedInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor = { "bHasBeenPaintedInEditor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "DisplayName", "Global Force Resident Mip Levels" },
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Global and serialized version of ForceMiplevelsToBeResident." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bGlobalForceMipLevelsToBeResident = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident = { "bGlobalForceMipLevelsToBeResident", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Ignores the streaming mip bias used to accommodate memory constraints." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bIgnoreStreamingMipBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias = { "bIgnoreStreamingMipBias", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Override whether to fully stream even if texture hasn't been rendered." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bForceMiplevelsToBeResident = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident = { "bForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bHasStreamingUpdatePending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending = { "bHasStreamingUpdatePending", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "Whether the texture is currently streamable or not." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bIsStreamable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable = { "bIsStreamable", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "True if streaming is temporarily disabled so we can update subregions of this texture's resource\n      without streaming clobbering it. Automatically cleared before saving." },
	};
#endif
	void Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit(void* Obj)
	{
		((UTexture2D*)Obj)->bTemporarilyDisableStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming = { "bTemporarilyDisableStreaming", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture2D), &Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "keep track of first mip level used for ResourceMem creation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip = { "FirstResourceMemMip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, FirstResourceMemMip), METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_LevelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "* Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n* Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n* It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids.\n* Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time,\n* -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n* After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000400202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, LevelIndex), METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_LevelIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_LevelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2D_Statics::NewProp_StreamingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
		{ "ToolTip", "FStreamingTexture index used by the texture streaming system." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture2D_Statics::NewProp_StreamingIndex = { "StreamingIndex", nullptr, (EPropertyFlags)0x0040000400202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture2D, StreamingIndex), METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::NewProp_StreamingIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::NewProp_StreamingIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_ImportedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_AddressX,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasBeenPaintedInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bGlobalForceMipLevelsToBeResident,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bIgnoreStreamingMipBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bForceMiplevelsToBeResident,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bHasStreamingUpdatePending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bIsStreamable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_bTemporarilyDisableStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_FirstResourceMemMip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_LevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2D_Statics::NewProp_StreamingIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexture2D_Statics::ClassParams = {
		&UTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTexture2D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexture2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexture2D, 1578992244);
	template<> ENGINE_API UClass* StaticClass<UTexture2D>()
	{
		return UTexture2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2D(Z_Construct_UClass_UTexture2D, &UTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2D);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
