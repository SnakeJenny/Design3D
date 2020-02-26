// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/EngineBaseTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineBaseTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkLagState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENetworkFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FURL();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineBaseTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EViewModeIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EViewModeIndex, Z_Construct_UPackage__Script_Engine(), TEXT("EViewModeIndex"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EViewModeIndex>()
	{
		return EViewModeIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewModeIndex(EViewModeIndex_StaticEnum, TEXT("/Script/Engine"), TEXT("EViewModeIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EViewModeIndex_Hash() { return 2008026485U; }
	UEnum* Z_Construct_UEnum_Engine_EViewModeIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewModeIndex"), 0, Get_Z_Construct_UEnum_Engine_EViewModeIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VMI_BrushWireframe", (int64)VMI_BrushWireframe },
				{ "VMI_Wireframe", (int64)VMI_Wireframe },
				{ "VMI_Unlit", (int64)VMI_Unlit },
				{ "VMI_Lit", (int64)VMI_Lit },
				{ "VMI_Lit_DetailLighting", (int64)VMI_Lit_DetailLighting },
				{ "VMI_LightingOnly", (int64)VMI_LightingOnly },
				{ "VMI_LightComplexity", (int64)VMI_LightComplexity },
				{ "VMI_ShaderComplexity", (int64)VMI_ShaderComplexity },
				{ "VMI_LightmapDensity", (int64)VMI_LightmapDensity },
				{ "VMI_LitLightmapDensity", (int64)VMI_LitLightmapDensity },
				{ "VMI_ReflectionOverride", (int64)VMI_ReflectionOverride },
				{ "VMI_VisualizeBuffer", (int64)VMI_VisualizeBuffer },
				{ "VMI_StationaryLightOverlap", (int64)VMI_StationaryLightOverlap },
				{ "VMI_CollisionPawn", (int64)VMI_CollisionPawn },
				{ "VMI_CollisionVisibility", (int64)VMI_CollisionVisibility },
				{ "VMI_LODColoration", (int64)VMI_LODColoration },
				{ "VMI_QuadOverdraw", (int64)VMI_QuadOverdraw },
				{ "VMI_PrimitiveDistanceAccuracy", (int64)VMI_PrimitiveDistanceAccuracy },
				{ "VMI_MeshUVDensityAccuracy", (int64)VMI_MeshUVDensityAccuracy },
				{ "VMI_ShaderComplexityWithQuadOverdraw", (int64)VMI_ShaderComplexityWithQuadOverdraw },
				{ "VMI_HLODColoration", (int64)VMI_HLODColoration },
				{ "VMI_GroupLODColoration", (int64)VMI_GroupLODColoration },
				{ "VMI_MaterialTextureScaleAccuracy", (int64)VMI_MaterialTextureScaleAccuracy },
				{ "VMI_RequiredTextureResolution", (int64)VMI_RequiredTextureResolution },
				{ "VMI_PathTracing", (int64)VMI_PathTracing },
				{ "VMI_RayTracingDebug", (int64)VMI_RayTracingDebug },
				{ "VMI_Max", (int64)VMI_Max },
				{ "VMI_Unknown", (int64)VMI_Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Define view modes to get specific show flag settings (some on, some off and some are not altered)\nDon't change the order, the ID is serialized with the editor" },
				{ "VMI_BrushWireframe.ToolTip", "Wireframe w/ brushes." },
				{ "VMI_GroupLODColoration.ToolTip", "Group item for LOD and HLOD coloration" },
				{ "VMI_HLODColoration.ToolTip", "Colored according to the current HLOD index." },
				{ "VMI_LightComplexity.ToolTip", "Colored according to light count." },
				{ "VMI_LightingOnly.ToolTip", "Lit wo/ materials." },
				{ "VMI_LightmapDensity.ToolTip", "Colored according to world-space LightMap texture density." },
				{ "VMI_Lit.ToolTip", "Lit." },
				{ "VMI_LitLightmapDensity.ToolTip", "Colored according to light count - showing lightmap texel density on texture mapped objects." },
				{ "VMI_LODColoration.ToolTip", "Colored according to the current LOD index." },
				{ "VMI_MaterialTextureScaleAccuracy.ToolTip", "Visualize the accuracy of the material texture scales used for texture streaming." },
				{ "VMI_Max.Hidden", "" },
				{ "VMI_MeshUVDensityAccuracy.ToolTip", "Visualize the accuracy of the mesh UV densities computed for texture streaming." },
				{ "VMI_PathTracing.ToolTip", "Run path tracing pipeline" },
				{ "VMI_PrimitiveDistanceAccuracy.ToolTip", "Visualize the accuracy of the primitive distance computed for texture streaming." },
				{ "VMI_QuadOverdraw.ToolTip", "Colored according to the quad coverage." },
				{ "VMI_RayTracingDebug.ToolTip", "Run ray tracing debug pipeline" },
				{ "VMI_RequiredTextureResolution.ToolTip", "Compare the required texture resolution to the actual resolution." },
				{ "VMI_ShaderComplexity.ToolTip", "Colored according to shader complexity." },
				{ "VMI_ShaderComplexityWithQuadOverdraw.ToolTip", "Colored according to shader complexity, including quad overdraw." },
				{ "VMI_StationaryLightOverlap.ToolTip", "Colored according to stationary light overlap." },
				{ "VMI_Unknown.Hidden", "" },
				{ "VMI_Unlit.ToolTip", "Unlit." },
				{ "VMI_Wireframe.ToolTip", "Wireframe w/ BSP." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EViewModeIndex",
				"EViewModeIndex",
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
	static UEnum* EDemoPlayFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDemoPlayFailure, Z_Construct_UPackage__Script_Engine(), TEXT("EDemoPlayFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDemoPlayFailure::Type>()
	{
		return EDemoPlayFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDemoPlayFailure(EDemoPlayFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("EDemoPlayFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_Hash() { return 544683814U; }
	UEnum* Z_Construct_UEnum_Engine_EDemoPlayFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDemoPlayFailure"), 0, Get_Z_Construct_UEnum_Engine_EDemoPlayFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDemoPlayFailure::Generic", (int64)EDemoPlayFailure::Generic },
				{ "EDemoPlayFailure::DemoNotFound", (int64)EDemoPlayFailure::DemoNotFound },
				{ "EDemoPlayFailure::Corrupt", (int64)EDemoPlayFailure::Corrupt },
				{ "EDemoPlayFailure::InvalidVersion", (int64)EDemoPlayFailure::InvalidVersion },
				{ "EDemoPlayFailure::InitBase", (int64)EDemoPlayFailure::InitBase },
				{ "EDemoPlayFailure::GameSpecificHeader", (int64)EDemoPlayFailure::GameSpecificHeader },
				{ "EDemoPlayFailure::ReplayStreamerInternal", (int64)EDemoPlayFailure::ReplayStreamerInternal },
				{ "EDemoPlayFailure::LoadMap", (int64)EDemoPlayFailure::LoadMap },
				{ "EDemoPlayFailure::Serialization", (int64)EDemoPlayFailure::Serialization },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Corrupt.ToolTip", "Demo is corrupt." },
				{ "DemoNotFound.ToolTip", "Demo was not found." },
				{ "GameSpecificHeader.ToolTip", "Failed to process game specific header." },
				{ "Generic.ToolTip", "A Generic failure." },
				{ "InitBase.ToolTip", "InitBase failed." },
				{ "InvalidVersion.ToolTip", "Invalid version." },
				{ "LoadMap.ToolTip", "LoadMap failed." },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ReplayStreamerInternal.ToolTip", "Replay streamer had an internal error." },
				{ "Serialization.ToolTip", "Error serializing data stream." },
				{ "ToolTip", "Types of demo play failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDemoPlayFailure",
				"EDemoPlayFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETravelType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelType, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelType>()
	{
		return ETravelType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelType(ETravelType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelType_Hash() { return 2308956262U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelType"), 0, Get_Z_Construct_UEnum_Engine_ETravelType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRAVEL_Absolute", (int64)TRAVEL_Absolute },
				{ "TRAVEL_Partial", (int64)TRAVEL_Partial },
				{ "TRAVEL_Relative", (int64)TRAVEL_Relative },
				{ "TRAVEL_MAX", (int64)TRAVEL_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ToolTip", "Traveling from server to server." },
				{ "TRAVEL_Absolute.ToolTip", "Absolute URL." },
				{ "TRAVEL_Partial.ToolTip", "Partial (carry name, reset server)." },
				{ "TRAVEL_Relative.ToolTip", "Relative URL." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETravelType",
				"ETravelType",
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
	static UEnum* ETravelFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETravelFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ETravelFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETravelFailure::Type>()
	{
		return ETravelFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETravelFailure(ETravelFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ETravelFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETravelFailure_Hash() { return 1566826468U; }
	UEnum* Z_Construct_UEnum_Engine_ETravelFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETravelFailure"), 0, Get_Z_Construct_UEnum_Engine_ETravelFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETravelFailure::NoLevel", (int64)ETravelFailure::NoLevel },
				{ "ETravelFailure::LoadMapFailure", (int64)ETravelFailure::LoadMapFailure },
				{ "ETravelFailure::InvalidURL", (int64)ETravelFailure::InvalidURL },
				{ "ETravelFailure::PackageMissing", (int64)ETravelFailure::PackageMissing },
				{ "ETravelFailure::PackageVersion", (int64)ETravelFailure::PackageVersion },
				{ "ETravelFailure::NoDownload", (int64)ETravelFailure::NoDownload },
				{ "ETravelFailure::TravelFailure", (int64)ETravelFailure::TravelFailure },
				{ "ETravelFailure::CheatCommands", (int64)ETravelFailure::CheatCommands },
				{ "ETravelFailure::PendingNetGameCreateFailure", (int64)ETravelFailure::PendingNetGameCreateFailure },
				{ "ETravelFailure::CloudSaveFailure", (int64)ETravelFailure::CloudSaveFailure },
				{ "ETravelFailure::ServerTravelFailure", (int64)ETravelFailure::ServerTravelFailure },
				{ "ETravelFailure::ClientTravelFailure", (int64)ETravelFailure::ClientTravelFailure },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CheatCommands.ToolTip", "Cheat commands have been used disabling travel" },
				{ "ClientTravelFailure.ToolTip", "There was an error during a client travel to a new map" },
				{ "CloudSaveFailure.ToolTip", "Failed to save before travel" },
				{ "InvalidURL.ToolTip", "Invalid URL specified" },
				{ "LoadMapFailure.ToolTip", "LoadMap failed on travel (about to Browse to default map)" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoDownload.ToolTip", "A package is missing and the client is unable to download the file" },
				{ "NoLevel.ToolTip", "No level found in the loaded package" },
				{ "PackageMissing.ToolTip", "A package is missing on the client" },
				{ "PackageVersion.ToolTip", "A package version mismatch has occurred between client and server" },
				{ "PendingNetGameCreateFailure.ToolTip", "Failed to create the pending net game for travel" },
				{ "ServerTravelFailure.ToolTip", "There was an error during a server travel to a new map" },
				{ "ToolTip", "Types of server travel failures broadcast by the engine" },
				{ "TravelFailure.ToolTip", "General travel failure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETravelFailure",
				"ETravelFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkLagState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkLagState, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkLagState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENetworkLagState::Type>()
	{
		return ENetworkLagState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkLagState(ENetworkLagState_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkLagState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkLagState_Hash() { return 1747793169U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkLagState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkLagState"), 0, Get_Z_Construct_UEnum_Engine_ENetworkLagState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkLagState::NotLagging", (int64)ENetworkLagState::NotLagging },
				{ "ENetworkLagState::Lagging", (int64)ENetworkLagState::Lagging },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Lagging.ToolTip", "The net driver is in the process of timing out all of the client connections" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NotLagging.ToolTip", "The net driver is operating normally or it is not possible to tell if it is lagging" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENetworkLagState",
				"ENetworkLagState::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENetworkFailure_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENetworkFailure, Z_Construct_UPackage__Script_Engine(), TEXT("ENetworkFailure"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENetworkFailure::Type>()
	{
		return ENetworkFailure_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENetworkFailure(ENetworkFailure_StaticEnum, TEXT("/Script/Engine"), TEXT("ENetworkFailure"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENetworkFailure_Hash() { return 3285991892U; }
	UEnum* Z_Construct_UEnum_Engine_ENetworkFailure()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENetworkFailure"), 0, Get_Z_Construct_UEnum_Engine_ENetworkFailure_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENetworkFailure::NetDriverAlreadyExists", (int64)ENetworkFailure::NetDriverAlreadyExists },
				{ "ENetworkFailure::NetDriverCreateFailure", (int64)ENetworkFailure::NetDriverCreateFailure },
				{ "ENetworkFailure::NetDriverListenFailure", (int64)ENetworkFailure::NetDriverListenFailure },
				{ "ENetworkFailure::ConnectionLost", (int64)ENetworkFailure::ConnectionLost },
				{ "ENetworkFailure::ConnectionTimeout", (int64)ENetworkFailure::ConnectionTimeout },
				{ "ENetworkFailure::FailureReceived", (int64)ENetworkFailure::FailureReceived },
				{ "ENetworkFailure::OutdatedClient", (int64)ENetworkFailure::OutdatedClient },
				{ "ENetworkFailure::OutdatedServer", (int64)ENetworkFailure::OutdatedServer },
				{ "ENetworkFailure::PendingConnectionFailure", (int64)ENetworkFailure::PendingConnectionFailure },
				{ "ENetworkFailure::NetGuidMismatch", (int64)ENetworkFailure::NetGuidMismatch },
				{ "ENetworkFailure::NetChecksumMismatch", (int64)ENetworkFailure::NetChecksumMismatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ConnectionLost.ToolTip", "A connection to the net driver has been lost" },
				{ "ConnectionTimeout.ToolTip", "A connection to the net driver has timed out" },
				{ "FailureReceived.ToolTip", "The net driver received an NMT_Failure message" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NetChecksumMismatch.ToolTip", "Network checksum mismatch" },
				{ "NetDriverAlreadyExists.ToolTip", "A relevant net driver has already been created for this service" },
				{ "NetDriverCreateFailure.ToolTip", "The net driver creation failed" },
				{ "NetDriverListenFailure.ToolTip", "The net driver failed its Listen() call" },
				{ "NetGuidMismatch.ToolTip", "NetGuid mismatch" },
				{ "OutdatedClient.ToolTip", "The client needs to upgrade their game" },
				{ "OutdatedServer.ToolTip", "The server needs to upgrade their game" },
				{ "PendingConnectionFailure.ToolTip", "There was an error during connection to the game" },
				{ "ToolTip", "Types of network failures broadcast from the engine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENetworkFailure",
				"ENetworkFailure::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETickingGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETickingGroup, Z_Construct_UPackage__Script_Engine(), TEXT("ETickingGroup"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETickingGroup>()
	{
		return ETickingGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETickingGroup(ETickingGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("ETickingGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETickingGroup_Hash() { return 122626034U; }
	UEnum* Z_Construct_UEnum_Engine_ETickingGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETickingGroup"), 0, Get_Z_Construct_UEnum_Engine_ETickingGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TG_PrePhysics", (int64)TG_PrePhysics },
				{ "TG_StartPhysics", (int64)TG_StartPhysics },
				{ "TG_DuringPhysics", (int64)TG_DuringPhysics },
				{ "TG_EndPhysics", (int64)TG_EndPhysics },
				{ "TG_PostPhysics", (int64)TG_PostPhysics },
				{ "TG_PostUpdateWork", (int64)TG_PostUpdateWork },
				{ "TG_LastDemotable", (int64)TG_LastDemotable },
				{ "TG_NewlySpawned", (int64)TG_NewlySpawned },
				{ "TG_MAX", (int64)TG_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "TG_DuringPhysics.DisplayName", "During Physics" },
				{ "TG_DuringPhysics.ToolTip", "Any item that can be run in parallel with our physics simulation work." },
				{ "TG_EndPhysics.DisplayName", "End Physics" },
				{ "TG_EndPhysics.Hidden", "" },
				{ "TG_EndPhysics.ToolTip", "Special tick group that ends physics simulation." },
				{ "TG_LastDemotable.DisplayName", "Last Demotable" },
				{ "TG_LastDemotable.Hidden", "" },
				{ "TG_LastDemotable.ToolTip", "Catchall for anything demoted to the end." },
				{ "TG_NewlySpawned.DisplayName", "Newly Spawned" },
				{ "TG_NewlySpawned.Hidden", "" },
				{ "TG_NewlySpawned.ToolTip", "Special tick group that is not actually a tick group. After every tick group this is repeatedly re-run until there are no more newly spawned items to run." },
				{ "TG_PostPhysics.DisplayName", "Post Physics" },
				{ "TG_PostPhysics.ToolTip", "Any item that needs rigid body and cloth simulation to be complete before being executed." },
				{ "TG_PostUpdateWork.DisplayName", "Post Update Work" },
				{ "TG_PostUpdateWork.ToolTip", "Any item that needs the update work to be done before being ticked." },
				{ "TG_PrePhysics.DisplayName", "Pre Physics" },
				{ "TG_PrePhysics.ToolTip", "Any item that needs to be executed before physics simulation starts." },
				{ "TG_StartPhysics.DisplayName", "Start Physics" },
				{ "TG_StartPhysics.Hidden", "" },
				{ "TG_StartPhysics.ToolTip", "Special tick group that starts physics simulation." },
				{ "ToolTip", "Determines which ticking group a tick function belongs to." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETickingGroup",
				"ETickingGroup",
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
	static UEnum* EMouseLockMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseLockMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseLockMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseLockMode>()
	{
		return EMouseLockMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseLockMode(EMouseLockMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseLockMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseLockMode_Hash() { return 1957086508U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseLockMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseLockMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseLockMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseLockMode::DoNotLock", (int64)EMouseLockMode::DoNotLock },
				{ "EMouseLockMode::LockOnCapture", (int64)EMouseLockMode::LockOnCapture },
				{ "EMouseLockMode::LockAlways", (int64)EMouseLockMode::LockAlways },
				{ "EMouseLockMode::LockInFullscreen", (int64)EMouseLockMode::LockInFullscreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoNotLock.ToolTip", "Do not lock the mouse cursor to the viewport" },
				{ "LockAlways.ToolTip", "Always lock the mouse cursor to the viewport" },
				{ "LockInFullscreen.ToolTip", "Lock the cursor if we're in fullscreen" },
				{ "LockOnCapture.ToolTip", "Only lock the mouse cursor to the viewport when the mouse is captured" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMouseLockMode",
				"EMouseLockMode",
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
	static UEnum* EMouseCaptureMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMouseCaptureMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMouseCaptureMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMouseCaptureMode>()
	{
		return EMouseCaptureMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMouseCaptureMode(EMouseCaptureMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMouseCaptureMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_Hash() { return 2079074461U; }
	UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMouseCaptureMode"), 0, Get_Z_Construct_UEnum_Engine_EMouseCaptureMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMouseCaptureMode::NoCapture", (int64)EMouseCaptureMode::NoCapture },
				{ "EMouseCaptureMode::CapturePermanently", (int64)EMouseCaptureMode::CapturePermanently },
				{ "EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown", (int64)EMouseCaptureMode::CapturePermanently_IncludingInitialMouseDown },
				{ "EMouseCaptureMode::CaptureDuringMouseDown", (int64)EMouseCaptureMode::CaptureDuringMouseDown },
				{ "EMouseCaptureMode::CaptureDuringRightMouseDown", (int64)EMouseCaptureMode::CaptureDuringRightMouseDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CaptureDuringMouseDown.ToolTip", "Capture the mouse during a mouse down, releases on mouse up" },
				{ "CaptureDuringRightMouseDown.ToolTip", "Capture only when the right mouse button is down, not any of the other mouse buttons" },
				{ "CapturePermanently.ToolTip", "Capture the mouse permanently when the viewport is clicked, and consume the initial mouse down that caused the capture so it isn't processed by player input" },
				{ "CapturePermanently_IncludingInitialMouseDown.ToolTip", "Capture the mouse permanently when the viewport is clicked, and allow player input to process the mouse down that caused the capture" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "NoCapture.ToolTip", "Do not capture the mouse at all" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMouseCaptureMode",
				"EMouseCaptureMode",
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
	static UEnum* EInputEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInputEvent, Z_Construct_UPackage__Script_Engine(), TEXT("EInputEvent"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInputEvent>()
	{
		return EInputEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputEvent(EInputEvent_StaticEnum, TEXT("/Script/Engine"), TEXT("EInputEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInputEvent_Hash() { return 906359854U; }
	UEnum* Z_Construct_UEnum_Engine_EInputEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputEvent"), 0, Get_Z_Construct_UEnum_Engine_EInputEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IE_Pressed", (int64)IE_Pressed },
				{ "IE_Released", (int64)IE_Released },
				{ "IE_Repeat", (int64)IE_Repeat },
				{ "IE_DoubleClick", (int64)IE_DoubleClick },
				{ "IE_Axis", (int64)IE_Axis },
				{ "IE_MAX", (int64)IE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
				{ "ScriptName", "InputEventType" },
				{ "ToolTip", "EInputEvent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInputEvent",
				"EInputEvent",
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
class UScriptStruct* FExposureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExposureSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExposureSettings>()
{
	return FExposureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExposureSettings(FExposureSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ExposureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExposureSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFExposureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExposureSettings")),new UScriptStruct::TCppStructOps<FExposureSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExposureSettings;
	struct Z_Construct_UScriptStruct_FExposureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFixed_MetaData[];
#endif
		static void NewProp_bFixed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFixed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedEV100_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedEV100;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Settings to allow designers to override the automatic expose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExposureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "true: fixed exposure using the LogOffset value, false: automatic eye adaptation" },
	};
#endif
	void Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit(void* Obj)
	{
		((FExposureSettings*)Obj)->bFixed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed = { "bFixed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FExposureSettings), &Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "EV100 settings for fixed mode" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100 = { "FixedEV100", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExposureSettings, FixedEV100), METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_bFixed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExposureSettings_Statics::NewProp_FixedEV100,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExposureSettings",
		sizeof(FExposureSettings),
		alignof(FExposureSettings),
		Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExposureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExposureSettings"), sizeof(FExposureSettings), Get_Z_Construct_UScriptStruct_FExposureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExposureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExposureSettings_Hash() { return 2349439568U; }
class UScriptStruct* FURL::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FURL_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FURL, Z_Construct_UPackage__Script_Engine(), TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FURL>()
{
	return FURL::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FURL(FURL::StaticStruct, TEXT("/Script/Engine"), TEXT("URL"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFURL
{
	FScriptStruct_Engine_StaticRegisterNativesFURL()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("URL")),new UScriptStruct::TCppStructOps<FURL>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFURL;
	struct Z_Construct_UScriptStruct_FURL_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Portal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Op;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Op_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "URL structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FURL_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FURL>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Portal to enter through, default is \"\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Portal), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Options." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Op), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner = { "Op", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional place to download Map if client does not possess it" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, RedirectURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Map name, i.e. \"SkyCity\", default is \"Entry\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Valid), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional host port." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Optional hostname, i.e. \"204.157.115.40\" or \"unreal.epicgames.com\", blank if local." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Protocol, i.e. \"unreal\" or \"http\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FURL, Protocol), METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Portal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Op_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_RedirectURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Valid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Host,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FURL_Statics::NewProp_Protocol,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"URL",
		sizeof(FURL),
		alignof(FURL),
		Z_Construct_UScriptStruct_FURL_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FURL_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FURL()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FURL_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("URL"), sizeof(FURL), Get_Z_Construct_UScriptStruct_FURL_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FURL_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FURL_Hash() { return 3842082613U; }
class UScriptStruct* FPrimitiveComponentPostPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("PrimitiveComponentPostPhysicsTickFunction"), sizeof(FPrimitiveComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrimitiveComponentPostPhysicsTickFunction>()
{
	return FPrimitiveComponentPostPhysicsTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction(FPrimitiveComponentPostPhysicsTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimitiveComponentPostPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrimitiveComponentPostPhysicsTickFunction")),new UScriptStruct::TCppStructOps<FPrimitiveComponentPostPhysicsTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimitiveComponentPostPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls UPrimitiveComponent::PostPhysicsTick\n//DEPRECATED: This struct has been deprecated. Please use your own tick functions if you need something other than the primary tick function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimitiveComponentPostPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"PrimitiveComponentPostPhysicsTickFunction",
		sizeof(FPrimitiveComponentPostPhysicsTickFunction),
		alignof(FPrimitiveComponentPostPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimitiveComponentPostPhysicsTickFunction"), sizeof(FPrimitiveComponentPostPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimitiveComponentPostPhysicsTickFunction_Hash() { return 1739111555U; }
class UScriptStruct* FActorComponentTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentTickFunction>()
{
	return FActorComponentTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentTickFunction(FActorComponentTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorComponentTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentTickFunction")),new UScriptStruct::TCppStructOps<FActorComponentTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorComponentTickFunction;
	struct Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls UActorComponent::ConditionalTick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorComponentTickFunction",
		sizeof(FActorComponentTickFunction),
		alignof(FActorComponentTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentTickFunction"), sizeof(FActorComponentTickFunction), Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorComponentTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentTickFunction_Hash() { return 4056297118U; }
class UScriptStruct* FActorTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorTickFunction>()
{
	return FActorTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorTickFunction(FActorTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFActorTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorTickFunction")),new UScriptStruct::TCppStructOps<FActorTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorTickFunction;
	struct Z_Construct_UScriptStruct_FActorTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Tick function that calls AActor::TickActor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ActorTickFunction",
		sizeof(FActorTickFunction),
		alignof(FActorTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorTickFunction"), sizeof(FActorTickFunction), Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorTickFunction_Hash() { return 979193369U; }
class UScriptStruct* FTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickFunction>()
{
	return FTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickFunction(FTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("TickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickFunction")),new UScriptStruct::TCppStructOps<FTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickFunction;
	struct Z_Construct_UScriptStruct_FTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTickOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTickOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithTickEnabled_MetaData[];
#endif
		static void NewProp_bStartWithTickEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithTickEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickEvenWhenPaused_MetaData[];
#endif
		static void NewProp_bTickEvenWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickEvenWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTickGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndTickGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Abstract Base class for all tick functions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "DisplayName", "Tick Interval (secs)" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "The frequency in seconds at which this tick function will be executed.  If less than or equal to 0 then it will tick every frame" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, TickInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If we allow this tick to run on a dedicated server" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bAllowTickOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer = { "bAllowTickOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If true, this tick function will start enabled, but can be disabled later on." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bStartWithTickEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled = { "bStartWithTickEnabled", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "If false, this tick function will never be registered and will never tick. Only settable in defaults." },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bCanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Bool indicating that this function should execute even if the game is paused. Pause ticks are very limited in capabilities. *" },
	};
#endif
	void Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit(void* Obj)
	{
		((FTickFunction*)Obj)->bTickEvenWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused = { "bTickEvenWhenPaused", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTickFunction), &Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the tick group that this tick function must finish in. These groups determine the relative order of when objects tick during a frame update.\n\n@see ETickingGroup" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup = { "EndTickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, EndTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "Defines the minimum tick group for this tick function. These groups determine the relative order of when objects tick during a frame update.\nGiven prerequisites, the tick may be delayed.\n\n@see ETickingGroup\n@see FTickFunction::AddPrerequisite()" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTickFunction, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bAllowTickOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bStartWithTickEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bCanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_bTickEvenWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_EndTickGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTickFunction_Statics::NewProp_TickGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickFunction",
		sizeof(FTickFunction),
		alignof(FTickFunction),
		Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickFunction"), sizeof(FTickFunction), Get_Z_Construct_UScriptStruct_FTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickFunction_Hash() { return 2076768908U; }
class UScriptStruct* FTickPrerequisite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickPrerequisite, Z_Construct_UPackage__Script_Engine(), TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTickPrerequisite>()
{
	return FTickPrerequisite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickPrerequisite(FTickPrerequisite::StaticStruct, TEXT("/Script/Engine"), TEXT("TickPrerequisite"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite
{
	FScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickPrerequisite")),new UScriptStruct::TCppStructOps<FTickPrerequisite>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTickPrerequisite;
	struct Z_Construct_UScriptStruct_FTickPrerequisite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
		{ "ToolTip", "This is small structure to hold prerequisite tick functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickPrerequisite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickPrerequisite>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TickPrerequisite",
		sizeof(FTickPrerequisite),
		alignof(FTickPrerequisite),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTickPrerequisite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickPrerequisite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickPrerequisite"), sizeof(FTickPrerequisite), Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTickPrerequisite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickPrerequisite_Hash() { return 1203477304U; }
	void UEngineBaseTypes::StaticRegisterNativesUEngineBaseTypes()
	{
	}
	UClass* Z_Construct_UClass_UEngineBaseTypes_NoRegister()
	{
		return UEngineBaseTypes::StaticClass();
	}
	struct Z_Construct_UClass_UEngineBaseTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineBaseTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/EngineBaseTypes.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineBaseTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineBaseTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineBaseTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams = {
		&UEngineBaseTypes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngineBaseTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineBaseTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineBaseTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineBaseTypes, 1133682479);
	template<> ENGINE_API UClass* StaticClass<UEngineBaseTypes>()
	{
		return UEngineBaseTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineBaseTypes(Z_Construct_UClass_UEngineBaseTypes, &UEngineBaseTypes::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineBaseTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineBaseTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
