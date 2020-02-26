// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/LevelStreamingDynamic.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraPhotography.h"
#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/CameraActor.h"
#include "GameFramework/SpringArmComponent.h"

#include "MyCharacter.generated.h"

USTRUCT()
struct FParameter
{
	GENERATED_USTRUCT_BODY()

	int32 lodmax = 21;
	int32 latlontoued = 6300;
	int32 bitmapsize = 256;
	int32 heightmapsize = 64;
	FVector2D Resolution;
	float CamFOV;
	FVector Loc;
	FRotator Rotator;
	float radian;
	float fovmax;
	float DervativeofAngle;
	FVector2D focus;
	bool PitchisLon = true;
	bool isFirstFrame = true;
	bool isPreload = false;
	int32 lon_preload;
	int32 lat_preload;
	int32 sliceofPitch;
	int32 sliceofRoll;
	int32 preLOD = 1000;
	int32 LOD;
	FVector MapOffset;
	FVector MapScale;
	float step;

	TArray<int32> lonName;
	TArray<int32> latName;
	TArray<FString> levelsName;
	TArray<FString> levelsloaded;
	TMap<FString, ULevelStreamingDynamic *> levelStreamingMap;
	FVector cameraloc;
	float levelsize;

};

USTRUCT()
struct FRangeAixs
{
	GENERATED_USTRUCT_BODY()

	float min;
	float max;
};

USTRUCT()
struct FRect
{
	GENERATED_USTRUCT_BODY()

	// UE的坐标系统，x和roll表示前后方
	FRangeAixs	Roll;
	// UE的坐标系统，y和ptich表示右左方
	FRangeAixs	Pitch;
	// UE的坐标系统，z和yaw表示下上方
	FRangeAixs	Yaw;
};

USTRUCT()
struct FFOVBox
{
	GENERATED_USTRUCT_BODY()

	// 单位像素的物理距离
	float DistancePerPixelRoll;
	float DistancePerPixelPitch;
	float DistancePerPixelYaw;

	// UE的相机信息（位置，角度和FOV）
	FTransform Caminfo;
	// 相机视野内的矩阵
	FRect CamRect;
	// 相机机位角度限制
	FRect CameraStyleAngle;
};

UCLASS()
class DESIGN3D_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

	TMap<FString, ULevelStreamingDynamic *> levelStreamingMap;
	TArray<FString> levelsName;
	TArray<FString> levelNameLoaded;
	int32 levelNum;
	//TMap<FString, FRect> LandScapeInfo;

	FString RootPath = FString(R"(D:\Github\master_szu\ue4_project\Design3D\Content\)");
	FString levelPath = FString(R"(D:\Github\master_szu\ue4_project\Design3D\Content\)");

	/** PlayerController that owns this Camera actor */
	UPROPERTY(transient)
	AMyCharacter* MyCharacter;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere)
	UCameraComponent* Camera;
	UCameraComponent* InternalCamera;
	FVector InternalCameraOrigin;
	float ZoomFactor;
	bool bZoomingIn;

	void SetFlyMode();

	void MoveForward(float val);
	void MoveRight(float val);
	void OnStartJump();
	//void OnStopJump();
	void Flying();
	void TurnAround(float val);
	void LookUpAround(float val);
	void MoveUpDown(float val);
	void OnScrollWheelUpPress();
	void OnScrollWheelDownPress();


	void LoadMap();
	void UnLoadMap();

	FParameter levelpara;
	void GetCameraInfo(FParameter& para);
	void ComputeLOD(FParameter& para);
	void SetSliceMapOffset(FParameter& para, int32 lonfileName, int32 latfileName);
	void GetFovMaxDistance(FParameter& para);
	void GetFocusPosition(FParameter& para);
	void GetLevelFile(FParameter& para);
	void LoadLevelbyName(FParameter& para, FString levelName, FString LongPackageName, bool& bOutSuccess);
	void UnLoadLevelbyName(FParameter& para,FString levelName);
	void LoadLevelbyCameraInfo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
