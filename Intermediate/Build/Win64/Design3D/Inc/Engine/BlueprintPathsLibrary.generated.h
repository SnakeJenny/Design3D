// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlueprintPathsLibrary_generated_h
#error "BlueprintPathsLibrary.generated.h already included, missing '#pragma once' in BlueprintPathsLibrary.h"
#endif
#define ENGINE_BlueprintPathsLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCombine) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::Combine(Z_Param_Out_InPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativePathToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetRelativePathToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathPart); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FilenamePart); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ExtensionPart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::Split(Z_Param_InPath,Z_Param_Out_PathPart,Z_Param_Out_FilenamePart,Z_Param_Out_ExtensionPart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidatePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL_REF(Z_Param_Out_bDidSucceed); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::ValidatePath(Z_Param_InPath,Z_Param_Out_bDidSucceed,Z_Param_Out_OutReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeValidFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InReplacementChar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::MakeValidFileName(Z_Param_InString,Z_Param_InReplacementChar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvalidFileSystemChars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetInvalidFileSystemChars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTempFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Extension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CreateTempFilename(Z_Param_Path,Z_Param_Prefix,Z_Param_Extension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertFromSandboxPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSandboxName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertFromSandboxPath(Z_Param_InPath,Z_Param_InSandboxName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToSandboxPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSandboxName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertToSandboxPath(Z_Param_InPath,Z_Param_InSandboxName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRelativePathToFull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertRelativePathToFull(Z_Param_InPath,Z_Param_InBasePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePathRelativeTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativeTo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::MakePathRelativeTo(Z_Param_InPath,Z_Param_InRelativeTo,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePlatformFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::MakePlatformFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeStandardFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::MakeStandardFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveDuplicateSlashes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::RemoveDuplicateSlashes(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollapseRelativeDirectories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::CollapseRelativeDirectories(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeDirectoryName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::NormalizeDirectoryName(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSamePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsSamePath(Z_Param_PathA,Z_Param_PathB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::NormalizeFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRelative) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRelative(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDrive) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsDrive(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::DirectoryExists(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::FileExists(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InNewExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SetExtension(Z_Param_InPath,Z_Param_InNewExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InNewExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ChangeExtension(Z_Param_InPath,Z_Param_InNewExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetPath(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL(Z_Param_bRemovePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetBaseFilename(Z_Param_InPath,Z_Param_bRemovePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCleanFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetCleanFilename(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL(Z_Param_bIncludeDot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetExtension(Z_Param_InPath,Z_Param_bIncludeDot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewGameProjectFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::SetProjectFilePath(Z_Param_NewGameProjectFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetProjectFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProjectFilePathSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsProjectFilePathSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeaturePackDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::FeaturePackDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameSourceDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameSourceDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSourceDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSourceDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameAgnosticSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameAgnosticSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRestrictedPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRestrictedPath(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRestrictedFolderNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetRestrictedFolderNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetGameLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolTipLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetToolTipLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEditorLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEngineLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::DiffDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameUserDeveloperDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameUserDeveloperDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameDevelopersDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameDevelopersDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloudDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CloudDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationLogDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationLogDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationTransientDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationTransientDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectLogDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectLogDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVideoCaptureDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::VideoCaptureDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::BugItDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenShotDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ScreenShotDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProfilingDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProfilingDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSandboxesDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SandboxesDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratedConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GeneratedConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSourceConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SourceConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPersistentDownloadDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasProjectPersistentDownloadDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::HasProjectPersistentDownloadDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectModsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectModsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShaderWorkingDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ShaderWorkingDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectIntermediateDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectIntermediateDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectContentDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectContentDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::RootDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterpriseFeaturePackDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseFeaturePackDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterprisePluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterprisePluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterpriseDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnginePluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnginePluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineIntermediateDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineIntermediateDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineContentDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineContentDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineVersionAgnosticUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineVersionAgnosticUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::LaunchDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldSaveToUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::ShouldSaveToUserDir(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCombine) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InPaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::Combine(Z_Param_Out_InPaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRelativePathToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetRelativePathToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplit) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PathPart); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FilenamePart); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ExtensionPart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::Split(Z_Param_InPath,Z_Param_Out_PathPart,Z_Param_Out_FilenamePart,Z_Param_Out_ExtensionPart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidatePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL_REF(Z_Param_Out_bDidSucceed); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_OutReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::ValidatePath(Z_Param_InPath,Z_Param_Out_bDidSucceed,Z_Param_Out_OutReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeValidFileName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InReplacementChar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::MakeValidFileName(Z_Param_InString,Z_Param_InReplacementChar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvalidFileSystemChars) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetInvalidFileSystemChars(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTempFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Extension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CreateTempFilename(Z_Param_Path,Z_Param_Prefix,Z_Param_Extension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertFromSandboxPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSandboxName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertFromSandboxPath(Z_Param_InPath,Z_Param_InSandboxName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToSandboxPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InSandboxName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertToSandboxPath(Z_Param_InPath,Z_Param_InSandboxName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertRelativePathToFull) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InBasePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ConvertRelativePathToFull(Z_Param_InPath,Z_Param_InBasePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePathRelativeTo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InRelativeTo); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::MakePathRelativeTo(Z_Param_InPath,Z_Param_InRelativeTo,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePlatformFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::MakePlatformFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeStandardFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::MakeStandardFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveDuplicateSlashes) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::RemoveDuplicateSlashes(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollapseRelativeDirectories) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::CollapseRelativeDirectories(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeDirectoryName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::NormalizeDirectoryName(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSamePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsSamePath(Z_Param_PathA,Z_Param_PathB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizeFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::NormalizeFilename(Z_Param_InPath,Z_Param_Out_OutPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRelative) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRelative(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDrive) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsDrive(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDirectoryExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::DirectoryExists(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::FileExists(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InNewExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SetExtension(Z_Param_InPath,Z_Param_InNewExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InNewExtension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ChangeExtension(Z_Param_InPath,Z_Param_InNewExtension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetPath(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL(Z_Param_bRemovePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetBaseFilename(Z_Param_InPath,Z_Param_bRemovePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCleanFilename) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetCleanFilename(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtension) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_GET_UBOOL(Z_Param_bIncludeDot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetExtension(Z_Param_InPath,Z_Param_bIncludeDot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProjectFilePath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewGameProjectFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UBlueprintPathsLibrary::SetProjectFilePath(Z_Param_NewGameProjectFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GetProjectFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProjectFilePathSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsProjectFilePathSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeaturePackDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::FeaturePackDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameSourceDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameSourceDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSourceDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSourceDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameAgnosticSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameAgnosticSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRestrictedPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::IsRestrictedPath(Z_Param_InPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRestrictedFolderNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetRestrictedFolderNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetGameLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetToolTipLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetToolTipLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyNameLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEditorLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineLocalizationPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UBlueprintPathsLibrary::GetEngineLocalizationPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDiffDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::DiffDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameUserDeveloperDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameUserDeveloperDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGameDevelopersDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GameDevelopersDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloudDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::CloudDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationLogDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationLogDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationTransientDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationTransientDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutomationDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::AutomationDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectLogDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectLogDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVideoCaptureDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::VideoCaptureDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::BugItDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScreenShotDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ScreenShotDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProfilingDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProfilingDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSandboxesDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SandboxesDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratedConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::GeneratedConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSourceConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::SourceConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPersistentDownloadDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPersistentDownloadDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasProjectPersistentDownloadDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::HasProjectPersistentDownloadDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectModsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectModsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectPluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectPluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShaderWorkingDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ShaderWorkingDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectIntermediateDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectIntermediateDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectContentDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectContentDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProjectDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::ProjectDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRootDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::RootDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterpriseFeaturePackDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseFeaturePackDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterprisePluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterprisePluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterpriseDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnterpriseDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnginePluginsDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EnginePluginsDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineSavedDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineSavedDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineIntermediateDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineIntermediateDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineConfigDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineConfigDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineContentDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineContentDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineVersionAgnosticUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineVersionAgnosticUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineUserDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEngineDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::EngineDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UBlueprintPathsLibrary::LaunchDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldSaveToUserDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintPathsLibrary::ShouldSaveToUserDir(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintPathsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPathsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPathsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPathsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintPathsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintPathsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPathsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPathsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPathsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPathsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPathsLibrary(UBlueprintPathsLibrary&&); \
	NO_API UBlueprintPathsLibrary(const UBlueprintPathsLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintPathsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintPathsLibrary(UBlueprintPathsLibrary&&); \
	NO_API UBlueprintPathsLibrary(const UBlueprintPathsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintPathsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPathsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPathsLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintPathsLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintPathsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPathsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
