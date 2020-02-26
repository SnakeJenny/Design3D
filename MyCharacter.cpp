// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "misc/Paths.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/WorldSettings.h"


#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Controller.h"

#include "Landscape.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
// Sets default values


AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;


	levelpara.levelsName.Empty();

	levelsName = {"579", "578", "577", "576"};
	levelNum = levelsName.Num();

	USkeletalMeshComponent* DefMesh1P = Cast<USkeletalMeshComponent>(GetClass()->GetDefaultSubobjectByName(TEXT("CharacterMeshCom")));
	//const FMatrix DefMeshLS = FRotationTranslationMatrix(SpringArm->RelativeRotation, SpringArm->RelativeLocation);
	// Create a spring arm component for our chase camera
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 34.0f));
	SpringArm->SetWorldRotation(FRotator(-20.0f, 0.0f, 0.0f));
	//SpringArm->AttachTo(RootComponent);
	SpringArm->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->TargetArmLength = 125.0f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->bEnableCameraRotationLag = false;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bInheritRoll = true;

	// Create the chase camera component 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ChaseCamera"));
	//Camera->AttachTo(SpringArm, USpringArmComponent::SocketName);
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);
	Camera->SetRelativeRotation(FRotator(10.0f, 0.0f, 0.0f));
	Camera->bUsePawnControlRotation = false;
	Camera->FieldOfView = 90.f;
}

bool isBebin = false;
// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	isBebin = true;
}

int32  tick = 0;
// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//GEngine->bEnableOnScreenDebugMessagesDisplay = 0;
	GEngine->bDisableAILogging = 0;
	/*fminimalviewinfo newpov = viewtarget.pov;
	fstring str = text("begin load level" + currentname + "!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);*/
	bool bZoomingIn = true;
	
	//基于ZoomFActor来混合相机的视域和弹簧臂的长度
	//Camera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, (ZoomFactor += DeltaTime));
	//SpringArm->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, 100.0f* (ZoomFactor+= DeltaTime));//


	++tick;
	levelpara.step = 25 * DeltaTime * levelpara.latlontoued;
	if (isBebin && tick == 10)
	{
		LoadLevelbyCameraInfo();
		tick = 0;
	}

	//LoadLevelbyCameraInfo(DeltaTime, LandScapePath, mfovBox);

}

int GetMaxPlayerCount()
{
	int max = 1;
	return max;
}


void AMyCharacter::SetFlyMode()
{
	if (GetCharacterMovement()->IsFlying() == false)
	{
		// If we are not flying already then set our movement mode so that we are  
		//MyCharacter->GetCharacterMovement()->bCheatFlying = true;
		//MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		//MyCharacter->GetCharacterMovement()->bUseControllerDesiredRotation = true;
		// 设置对象沿Z轴随移动方向自动转向：
		//MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
		//bUseControllerRotationYaw = false;
		MyCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
	}
	else
	{
		// Set the new movement mode to walking  
		MyCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LoadMap", IE_Pressed, this, &AMyCharacter::LoadMap);
	PlayerInputComponent->BindAction("UnLoadMap", IE_Pressed, this, &AMyCharacter::UnLoadMap);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::OnStartJump);
	PlayerInputComponent->BindAction("Flying", IE_Pressed, this, &AMyCharacter::Flying);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMyCharacter::TurnAround);//绑定MouseX到Z轴旋转    左右视角
	PlayerInputComponent->BindAxis("Lookup", this, &AMyCharacter::LookUpAround);//绑定MouseY到Y轴旋转   俯仰视角
	PlayerInputComponent->BindAxis("Zoom", this, &AMyCharacter::MoveUpDown);

}

void AMyCharacter::OnStartJump()
{
	bPressedJump = true;
}

//void AMyCharacter::OnStopJump()
//{
//	bPressedJump = false;
//}

void AMyCharacter::Flying()
{
	MyCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
}

void AMyCharacter::MoveForward(float val)
{
	if (MyCharacter != NULL && val != 0.0f)
	{
		//FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(levelpara.Rotator).GetScaledAxis(EAxis::X);
		FVector Delta = FVector(0.0, 0.0, 0.0);
		Delta.X = 28 * levelpara.latlontoued;
		Delta.Y = 87 * levelpara.latlontoued;
		SetActorLocation(Delta);
		Delta.Z = val * levelpara.step;
		RootComponent->MoveComponent(Delta, GetActorQuat(), true);

		//SetActorLocation(NewLocation);

	}
}

void AMyCharacter::MoveRight(float val)
{
	if (MyCharacter != NULL && val != 0.0f)
	{
		//const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(levelpara.Rotator).GetScaledAxis(EAxis::Y);
		//AddMovementInput(Direction, val * levelpara.step);
		FVector NewLocation = GetActorLocation();
		NewLocation += Direction * val * levelpara.step;
		SetActorLocation(NewLocation);
	}
}

void AMyCharacter::TurnAround(float val)
{
	if (MyCharacter != NULL && val != 0.0f)
	{
		// 为了保证不同机器的帧率刷新体验一样GetWorld()->GetDeltaSeconds()
		AddControllerYawInput(val);
	}
}

void AMyCharacter::LookUpAround(float val)
{
	if (MyCharacter != NULL && val != 0.0f)
	{
		AddControllerPitchInput(val);
	}
}

void AMyCharacter::OnScrollWheelUpPress(float val)
{
	FVector2D CursorPos;
	FVector WorldPos;
	FVector MoveDirction = FVector::ZeroVector;

	if (FMath::Abs(val) > KINDA_SMALL_NUMBER)
	{
		GetWorld()->GetFirstPlayerController()->GetMousePosition(CursorPos.X, CursorPos.Y);
		UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(GWorld, 0), CursorPos, WorldPos, MoveDirction);
	}
	AddMovementInput(MoveDirction, val * levelpara.step);
}

void AMyCharacter::MoveUpDown(float val)
{
	if (MyCharacter != NULL && val != 0.0f)
	{
		//const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(levelpara.Rotator).GetScaledAxis(EAxis::Z);
		AddMovementInput(Direction, val);
	}
}

void AMyCharacter::LoadMap()
{
	bool bSuccess;
	for (int32 i = 0; i < levelNum; ++i)
	{
		// 长名称的限定仅为“/”，否则遍历短名称的目录，出现重复则选择第一个排序
		FString currentName = levelsName[i];
		FString levelmapPath = levelPath + currentName + ".umap";
		FVector MapOffset = FVector(0, 63 * 100 * i, 0);
		if (FPaths::FileExists(levelmapPath))
		{
			FString str = TEXT("Begin Load level" + currentName + "!");
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
			ULevelStreamingDynamic* StreamingLevel = NewObject<ULevelStreamingDynamic>(GWorld, ULevelStreamingDynamic::StaticClass(), NAME_None, RF_Transient, NULL);
			StreamingLevel = ULevelStreamingDynamic::LoadLevelInstance(GWorld, currentName, MapOffset, FRotator::ZeroRotator, bSuccess);
			//FString UniqueLevelPackageName = "levelStreamingDynamic";
			//UniqueLevelPackageName += TEXT("_") + FString::FromInt(++i);
			//StreamingLevel->LevelTransform = FTransform(FRotator::ZeroRotator, MapOffset, FVector(1.0f, 1.0f, 1.0f));
			levelStreamingMap.Add(currentName, StreamingLevel);
		}
		else
		{
			FString str = TEXT("level map " + currentName + "can not be found!");
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
			levelsName.Remove(levelsName[i]);
		}

	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Load level finished!"));
}

void AMyCharacter::UnLoadMap()
{
	for (int32 i = 0; i < levelNum; ++i)
	{
		FString currentName = levelsName[i];
		FString str = TEXT("Begin Unload level" + currentName + "!");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
		if (levelsName.Contains(currentName) && levelStreamingMap[currentName])
		{
			levelStreamingMap[currentName]->SetIsRequestingUnloadAndRemoval(true);
			levelStreamingMap.Remove(currentName);
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Unload level finished!"));

}

//bool AMyCharacter::RectCollision(FRect& rect1, FRect& rect2)
//{
//	float x1 = rect1.Roll.min;
//	float y1 = rect1.Pitch.min;
//	float x2 = rect1.Roll.max;
//	float y2 = rect1.Pitch.max;
//
//	float x3 = rect2.Roll.min;
//	float y3 = rect2.Pitch.min;
//	float x4 = rect2.Roll.max;
//	float y4 = rect2.Pitch.max;
//
//	return (((x1 >= x3 && x1 < x4) || (x3 >= x1 && x3 <= x2)) &&
//		((y1 >= y3 && y1 < y4) || (y3 >= y1 && y3 <= y2))) ? true : false;
//
//}


//
//void AMyCharacter::GetCameraInfo(float DeltaSeconds, FFOVBox& fovBox)
//{
//	UWorld* CurWorld = GetWorld();
//	if (!CurWorld)
//	{
//		return;
//	}
//
//	// Default CameraStyle
//	fovBox.CameraStyleAngle.Roll.min = -0;
//	fovBox.CameraStyleAngle.Roll.max = 0;
//	fovBox.CameraStyleAngle.Pitch.min = -10;
//	fovBox.CameraStyleAngle.Pitch.max = -10;
//	fovBox.CameraStyleAngle.Yaw.min = -180;
//	fovBox.CameraStyleAngle.Yaw.max = 180;
//
//	// Find our player index
//	int32 IterIndex = 0;
//	int32 PlayerIndex = INDEX_NONE;
//	bool bIsPaused = GetWorld()->IsPaused();
//
//	for (FConstPlayerControllerIterator Iterator = CurWorld->GetPlayerControllerIterator(); Iterator; ++Iterator, ++IterIndex)
//	{
//		const APlayerController* PlayerController = Iterator->Get();
//
//		if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
//		{
//			PlayerIndex = IterIndex;
//
//			/*FMinimalViewInfo CurrentPOV = PlayerController->PlayerCameraManager->GetCameraCachePOV();
//			CurrentPOV.Rotation = FRotator(20, 20, 20);
//			CurrentPOV.Location.X = 20;
//			CurrentPOV.Location.Y = 20;
//			CurrentPOV.Location.Z = 20;
//			PlayerController->PlayerCameraManager->SetCameraCachePOV(CurrentPOV);
//			FTViewTarget ViewTarget = PlayerController->PlayerCameraManager->ViewTarget;
//			ViewTarget.Target->CalcCamera(DeltaSeconds, CurrentPOV);
//			PlayerController->PlayerCameraManager->ViewTarget = ViewTarget;
//			PlayerController->PlayerCameraManager->SetViewTarget(PlayerController->GetOwner());*/
//
//			float CamFOV = PlayerController->PlayerCameraManager->GetFOVAngle();
//			FVector Loc = PlayerController->PlayerCameraManager->GetCameraLocation();
//			FRotator Rotator = PlayerController->PlayerCameraManager->GetCameraRotation();
//
//			/*FName CameraStyle = PlayerController->PlayerCameraManager->CameraStyle;
//			static const FName NAME_Default = FName(TEXT("Default"));;
//			static const FName NAME_Fixed = FName(TEXT("Fixed"));
//			static const FName NAME_ThirdPerson = FName(TEXT("ThirdPerson"));
//			static const FName NAME_FreeCam = FName(TEXT("FreeCam"));
//			static const FName NAME_FreeCam_Default = FName(TEXT("FreeCam_Default"));
//			static const FName NAME_FirstPerson = FName(TEXT("FirstPerson"));
//			if (CameraStyle == NAME_FreeCam || CameraStyle == NAME_FreeCam_Default || CameraStyle == NAME_FirstPerson)
//			{
//				fovBox.CameraStyleAngle.Pitch.min = -90;
//				fovBox.CameraStyleAngle.Pitch.max = -90;
//			}
//			else if (CameraStyle == NAME_ThirdPerson)
//			{
//				fovBox.CameraStyleAngle.Pitch.min = -0;
//				fovBox.CameraStyleAngle.Pitch.max = 0;
//			}
//			else if (CameraStyle == NAME_Fixed)
//			{
//				fovBox.CameraStyleAngle.Roll.min = Rotator.Roll;
//				fovBox.CameraStyleAngle.Roll.max = Rotator.Roll;
//				fovBox.CameraStyleAngle.Pitch.min = Rotator.Pitch;
//				fovBox.CameraStyleAngle.Pitch.max = Rotator.Pitch;
//				fovBox.CameraStyleAngle.Yaw.min = Rotator.Yaw;
//				fovBox.CameraStyleAngle.Yaw.max = Rotator.Yaw;
//			}*/
//
//			//Loc.Z = pre.z;
//			PreCompute(Loc.Z);
//			GetFOVboxInfo(Loc, Rotator, CamFOV, fovBox);
//			fovBox.Caminfo = FTransform(Rotator, Loc);
//			break;
//		}
//	}
//
//}
//
//void AMyCharacter::DoCameraUpdate(const FVector & CameraLocation, const FRotator & CameraRotation)
//{
//	//USkeletalMeshComponent* DefMesh1P = Cast<USkeletalMeshComponent>(GetClass()->GetDefaultSubobjectByName(TEXT("CharacterMeshCom")));
//	const FMatrix DefMeshLS = FRotationTranslationMatrix(SpringArm->RelativeRotation, SpringArm->RelativeLocation);
//	const FMatrix LocalToWorld = ActorToWorld().ToMatrixWithScale();
//
//	// Mesh rotating code expect uniform scale in LocalToWorld matrix
//
//	const FRotator RotCameraPitch(CameraRotation.Pitch, 0.0f, 0.0f);
//	const FRotator RotCameraYaw(0.0f, CameraRotation.Yaw, 0.0f);
//
//	const FMatrix LeveledCameraLS = FRotationTranslationMatrix(RotCameraYaw, CameraLocation) * LocalToWorld.Inverse();
//	const FMatrix PitchedCameraLS = FRotationMatrix(RotCameraPitch) * LeveledCameraLS;
//	const FMatrix MeshRelativeToCamera = DefMeshLS * LeveledCameraLS.Inverse();
//	const FMatrix PitchedMesh = MeshRelativeToCamera * PitchedCameraLS;
//
//	SpringArm->SetRelativeLocationAndRotation(PitchedMesh.GetOrigin(), PitchedMesh.Rotator());
//}
//
//void AMyCharacter::GetFOVboxInfo(FVector Loc, FRotator Rotator, float CamFOV, FFOVBox& fovBox)
//{
//	float radian = PI / 180;
//	float FOVofHorizontal = radian * CamFOV;
//	float FOVofVertical = 2 * atan(pre.Resolution.Y * tan (FOVofHorizontal / 2.0) / pre.Resolution.X);
//	float HalfCamFOVPitch = FOVofVertical * 180 / (2 * PI);
//	float HalfCamFOVYaw = CamFOV / 2;
//
//	// 偏航角在蓝图中设置范围为（-180~180），C++读取范围为（0~360）
//	// 俯仰角在蓝图中设置范围为（-90~90），C++读取范围为（0~90）和（270-360）
//	// 视点默认位置：偏航角为0，俯仰角为0，视野朝向为沿着UE4的x轴
//	// 视野区域计算以（-90，90）为一个单位按照偏航角计算，逆时针为负值，顺时针为正值
//	// 视点到焦点的距离为最大距离，以此距离为半径、视点为圆心画圆，圆的区域为视野区域
//	float AnglePitch = Rotator.Pitch < 180 ? Rotator.Pitch : Rotator.Pitch - 360;
//	float offsetPitch = radian * AnglePitch;
//	float fovpitch = Loc.Z / abs(tan(offsetPitch));
//	//float fovmax = fovpitch < para.fovmax_lon ? fovpitch : para.fovmax_lon;
//	float fovmax = 0;
//
//	float AngleYaw = Rotator.Yaw;
//	float offsetYaw = radian * AngleYaw;
//	if (AngleYaw >= 0 && AngleYaw < 45)
//	{
//		fovBox.CamRect.Roll.min = Loc.X;
//		fovBox.CamRect.Roll.max = Loc.X + fovmax * cos(offsetPitch);
//		fovBox.CamRect.Pitch.min = Loc.Y - fovmax * sin(CamFOV / 2.0 - offsetYaw);
//		fovBox.CamRect.Pitch.max = Loc.Y + fovmax * sin(CamFOV / 2.0 + offsetYaw);
//	}
//	else if (AngleYaw >= 45 && AngleYaw < 135)
//	{
//		offsetYaw = radian * (AngleYaw- 90);
//		fovBox.CamRect.Roll.min = Loc.X - pre.fovmax_lat * sin(CamFOV / 2.0 + offsetYaw);
//		fovBox.CamRect.Roll.max = Loc.X + pre.fovmax_lon * sin(CamFOV / 2.0 - offsetYaw);
//		fovBox.CamRect.Pitch.min = Loc.Y;
//		fovBox.CamRect.Pitch.max = Loc.Y + pre.fovmax_lon * cos(offsetPitch);
//		
//	}
//	else if (AngleYaw >= 135 && AngleYaw < 225)
//	{
//		offsetYaw = radian * (AngleYaw - 180);
//		fovBox.CamRect.Roll.min = Loc.X - pre.fovmax_lat * cos(offsetPitch);
//		fovBox.CamRect.Roll.max = Loc.X;
//		fovBox.CamRect.Pitch.min = Loc.Y - pre.fovmax_lon * sin(CamFOV / 2.0 - offsetYaw);
//		fovBox.CamRect.Pitch.max = Loc.Y + pre.fovmax_lon * sin(CamFOV / 2.0 + offsetYaw);
//	}
//	else if (AngleYaw >= 225 && AngleYaw < 315)
//	{
//		offsetYaw = radian * (AngleYaw - 270);
//		fovBox.CamRect.Roll.min = Loc.X - pre.fovmax_lat * sin(CamFOV / 2.0 - offsetYaw);;
//		fovBox.CamRect.Roll.max = Loc.X + pre.fovmax_lat * sin(CamFOV / 2.0 + offsetYaw);
//		fovBox.CamRect.Pitch.min = Loc.Y - pre.fovmax_lon * cos(offsetPitch);
//		fovBox.CamRect.Pitch.max = Loc.Y;
//	}
//	else if (AngleYaw >= 315 && AngleYaw <= 360)
//	{
//		offsetYaw = radian * (AngleYaw - 360);
//		fovBox.CamRect.Roll.min = Loc.X;
//		fovBox.CamRect.Roll.max = Loc.X + pre.fovmax_lat * cos(offsetPitch);
//		fovBox.CamRect.Pitch.min = Loc.Y - pre.fovmax_lon * sin(CamFOV / 2.0 - offsetYaw);
//		fovBox.CamRect.Pitch.max = Loc.Y + pre.fovmax_lon * sin(CamFOV / 2.0 + offsetYaw);
//	}
//
//	//GetDistancePerPixel(FOVofVertical, offsetPitch, Resolution.Y, fovBox.DistancePerPixelRoll);
//	GetDistancePerPixel(FOVofHorizontal, offsetYaw, pre.Resolution.X, fovBox.DistancePerPixelPitch);
//}
//
//void AMyCharacter::GetDistancePerPixel(float CamFOV, float offsetangle, float resolution, float& DistancePerPixel)
//{
//	// lim deta(theta) {tan(theta-deta(theta)) - tan(theta)};
//	float DervativeofAngle = 1.0 / pow(cos(offsetangle), 2);
//	DistancePerPixel = DervativeofAngle * CamFOV * pre.z / resolution;
//}
//
//void AMyCharacter::GetLandScapeInfo(TArray<FString>& levels)
//{
//	LandScapeInfo.Empty();
//
//	FRect rect;
//	rect.Roll.min = 0;
//	rect.Roll.max = 0;
//	rect.Pitch.min = 0;
//	rect.Pitch.max = 0;
//
//	int32 latstart = floor(FileNameRect.Roll.min);
//	int32 latend = floor(FileNameRect.Roll.max);
//	int32 lonstart = floor(FileNameRect.Pitch.min);
//	int32 lonend = floor(FileNameRect.Pitch.max);
//	int32 latnum = latend - latstart + 1;
//	int32 lonnum = lonend - lonstart + 1;
//
//	if (latnum * lonnum != levels.Num())
//	{
//		UE_LOG(LogClass, Log, TEXT("Current levels num is wrong!"));
//		return;
//	}
//
//	if (pre.LOD == 0)
//	{
//		float halflevelsize = 90 * pre.latlontoued;
//		rect.Roll.min = -halflevelsize;
//		rect.Roll.max = halflevelsize;
//		rect.Pitch.min = -2 * halflevelsize * pre.latlontoued;
//		rect.Pitch.max = 0;
//		LandScapeInfo.Add(levels[0], rect);
//		rect.Pitch.min = 0;
//		rect.Pitch.max = 2 * halflevelsize * pre.latlontoued;
//		LandScapeInfo.Add(levels[1], rect);
//		return;
//	}
//
//	int32 halflatnum = pow(2, pre.LOD - 1);
//	int32 halflonnum = pow(2, 1 + pre.LOD -1);
//	//float levelsize = 180.0 / halflonnum * pre.latlontoued;
//	int32 levelsize = 180 * pre.latlontoued / pow(2, pre.LOD);
//
//
//	for (int32 y = 0; y < lonnum; ++y)
//	{
//		for (int32 x = 0; x < latnum; ++x)
//		{
//			FString currentName = levels[x * lonnum + y];
//			FString filePath = RootPath + currentName + ".umap";
//			if (FPaths::FileExists(filePath))
//			{
//				// 每个切片的大小
//				rect.Roll.min = (x - halflatnum - pre.lat_preload) * levelsize;
//				rect.Roll.max = rect.Pitch.min + levelsize;
//				rect.Pitch.min = (y - halflonnum - -pre.lon_preload) * levelsize;
//				rect.Pitch.max = rect.Pitch.min + levelsize;
//				LandScapeInfo.Add(currentName, rect);
//			}
//			else
//			{
//				//LandScapeInfo.Remove(currentName);
//				levels.Remove(currentName);
//			}
//		}
//	}
//	levelNum = levels.Num();
//}

bool bIsFirst = true;
void AMyCharacter::GetCameraInfo(FParameter& para)
{
	UWorld* CurWorld = GetWorld();
	if (!CurWorld)
	{
		return;
	}
	//LoadPlayers();
	para.Resolution = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());

	// Find our player index
	int32 IterIndex = 0;
	int32 PlayerIndex = INDEX_NONE;
	bool bIsPaused = GetWorld()->IsPaused();
	//Controller = SpawnActor<AController>(GetLocation(), GetRotation(), NULL, Instigator, true);

	for (FConstPlayerControllerIterator Iterator = CurWorld->GetPlayerControllerIterator(); Iterator; ++Iterator, ++IterIndex)
	{
		APlayerController* PlayerController = Iterator->Get();

		if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
		{
			if (bIsFirst)
			{
				FMinimalViewInfo CurrentPOV = PlayerController->PlayerCameraManager->GetCameraCachePOV();
				CurrentPOV.Rotation = FRotator(0.0, 0.0, 0.0);
				CurrentPOV.Location.X = 28 * para.latlontoued;
				CurrentPOV.Location.Y = 87 * para.latlontoued;
				CurrentPOV.Location.Z = 1 * 380000.0;
				PlayerController->PlayerCameraManager->SetCameraCachePOV(CurrentPOV);
				//FActorSpawnParameters SpawnInfo;
				//SpawnInfo.Owner = this;
				//SpawnInfo.Instigator = Instigator;
				//SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save HUDs into a map
				//MyCharacter = GetWorld()->SpawnActor<AMyCharacter>(AMyCharacter::GetClass(), CurrentPOV.Location, CurrentPOV.Rotation, SpawnInfo);
				//MyCharacter = Cast<AMyCharacter>(CurWorld->GetFirstPlayerController()->GetPawnOrSpectator());

				/*MyCharacter = GetWorld()->SpawnActor<AMyCharacter>(AMyCharacter::GetClass(), CurrentPOV.Location, CurrentPOV.Rotation);*/
				//MyCharacter = Cast<AMyCharacter>(CurWorld->GetFirstPlayerController()->GetPawnOrSpectator());
				MyCharacter = Cast<AMyCharacter>(PlayerController->GetPawnOrSpectator());
				PlayerController->Possess(MyCharacter);
				bIsFirst = false;
			}

			PlayerIndex = IterIndex;
			float CamFOV = PlayerController->PlayerCameraManager->GetFOVAngle();
			FVector Loc = PlayerController->PlayerCameraManager->GetCameraLocation();
			FRotator Rotator = PlayerController->PlayerCameraManager->GetCameraRotation();

			MyCharacter->GetCharacterMovement()->bCheatFlying = true;
			MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
			MyCharacter->GetCharacterMovement()->bUseControllerDesiredRotation = true;
			MyCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
			para.CamFOV = CamFOV;
			para.Loc = Loc;
			para.Rotator = Rotator;
			break;
		}
	}

}

void AMyCharacter::GetFovMaxDistance(FParameter& para)
{
	para.radian = PI / 180;

	// 当前屏幕宽度方向切片个数n=width/bitmap，切片总个数=pow(2,1+LOD)
	float SliceofWidth = para.Resolution.X / para.bitmapsize;
	para.lon_preload = ceil(SliceofWidth / 2.0);
	para.sliceofPitch = ceil(SliceofWidth) + 2 * para.lon_preload;
	float SliceofHeight = para.Resolution.Y / para.bitmapsize;
	para.lat_preload = ceil(SliceofHeight) / 2.0;
	para.sliceofRoll = ceil(SliceofHeight) + 2 * para.lat_preload;

	float fovmin = para.Loc.Z;
	float AngleMax = atan(para.sliceofPitch / SliceofWidth * tan(para.radian * para.CamFOV / 2.0)) - para.radian * para.CamFOV / 2.0;
	float fovmax = 0.0;
	for (int32 i = 0; i < para.lodmax; ++i)
	{
		float max = para.sliceofPitch / 2.0 * 360 / pow(2, 1 + i) * para.latlontoued / tan(para.radian * para.CamFOV / 2);
		if (para.Loc.Z > max)
		{
			fovmax = max * 2 / cos(AngleMax);
			break;
		}

	}

	float AnglePitch = para.Rotator.Pitch;
	float offsetPitch = para.radian * AnglePitch;
	float fovpitch = para.Loc.Z / abs(tan(offsetPitch));

	fovpitch = fovpitch < fovmin ? fovmin : fovpitch;
	para.fovmax = fovpitch < fovmax ? fovpitch : fovmax;
}

bool AMyCharacter::GetFocusPosition(FParameter& para)
{
	para.radian = PI / 180;
	// 按照正常朝下的视野，焦距则只跟（x方向）俯仰角有关
	float CamYaw = para.CamFOV * para.radian / 2.0;
	// 最远距离为人眼最大双眼重合视域124°时的距离
	float CamPitch = atan(tan(para.radian * para.CamFOV / 2.0) * para.Resolution.Y / para.Resolution.X);
	float CamFOVPitch = CamPitch / para.radian;
	// (x方向)最远焦距为相机高度除以最远视域与俯仰角最大张角之差（一半）的余弦值
	float AngleMaxPitch = para.AngleMax / 2.0 * para.Resolution.Y / para.Resolution.X;
	float fovmax = para.Loc.Z / cos(para.radian * (AngleMaxPitch - CamFOVPitch));
	// 最短焦距为相机高度
	float fovmin = para.Loc.Z;
	// 相机实际焦距与俯仰角有关
	float AnglePitch = para.Rotator.Pitch < 180 ? para.Rotator.Pitch : para.Rotator.Pitch - 360;
	float offsetPitch = para.radian * AnglePitch;
	float fovpitch = para.Loc.Z / abs(sin(offsetPitch));
	fovpitch = fovpitch < fovmin ? fovmin : fovpitch;
	para.fovBox.focusdistance = fovpitch < fovmax ? fovpitch : fovmax;

	// 偏航角在蓝图中设置范围为（-180~180），C++读取范围为（0~360）
	// 俯仰角在蓝图中设置范围为（-90~90），C++读取范围为（0~90）和（270-360）
	// 视点默认位置：偏航角为0，俯仰角为0，视野朝向为沿着UE4的x轴
	// 视野区域计算以（-90，90）为一个单位按照偏航角计算，逆时针为负值，顺时针为正值
	// 视点到焦点的距离为最大距离，以此距离为半径、视点为圆心画圆，圆的区域为视野区域
	float AngleYaw = para.Rotator.Yaw > 0 ? para.Rotator.Yaw : para.Rotator.Yaw + 360;
	float offsetYaw = para.radian * AngleYaw;
	// 在xoy平面要有投影，则俯仰角朝下的角度要大于validpitch
	float ValidPitch = -(90 - AngleMaxPitch - CamFOVPitch);
	if (AnglePitch > ValidPitch)
	{
		return false;
	}
	// 有效俯仰张角
	para.focus.X = 0.0;
	para.focus.Y = 0.0;
	para.PitchisLon = true;
	// 最大距离在xoy平面的投影，为人眼最大视域时当前高度与tan角度的乘积
	float DistanceMaxX = para.Loc.Z * tan(para.radian * para.AngleMax / 2.0) * para.Resolution.Y / para.Resolution.Y;
	float DistanceMaxY = para.Loc.Z * tan(para.radian * para.AngleMax / 2.0);
	// 最小距离在xoy平面的投影，为当前最大张角时当前高度与tan角度的乘积
	//float DistanceMinX = -para.Loc.Z * tan(para.radian * CamPitch);
	//float DistanceMinY = -para.Loc.Z * tan(para.radian * CamYaw);
	// 任意角度下的视野范围为[min,max]，当张角等于人眼最大视域时，min(<0) = -max(>0)

	// 如果俯仰角偏移后的视域超过人眼视域，则为人眼视域
	ValidPitch = -(90 - AngleMaxPitch);
	float longside = DistanceMaxX;
	float shortside = para.Loc.Z / tan(abs(offsetPitch) + CamPitch);
	if (AnglePitch <= ValidPitch)
	{
		// 不合并的原因是防止Max.X < Min.X
		longside = para.Loc.Z / abs(tan(abs(offsetPitch) - CamPitch));
	}

	float frontside;
	float backside;
	float rightside = 0.0;
	float leftside = 0.0;
	if (AngleYaw >= 0 && AngleYaw < 45)
	{
		// x正方向的投影距离 = 俯仰角视野在xoy平面构成的三角形的长边与偏航角的余弦分量
		frontside = longside * cos(offsetYaw);
		frontside = frontside < DistanceMaxX ? frontside : DistanceMaxX;
		para.fovBox.Max.X = para.Loc.X + frontside;
		// x负方向的投影距离 = 俯仰角视野在xoy平面构成的三角形的短边与偏航角的余弦分量
		backside = shortside * cos(offsetYaw);
		backside = backside > -DistanceMaxX ? backside : -DistanceMaxX;
		para.fovBox.Min.X = para.Loc.X + backside;

		// y正方向的投影距离 = 偏航角视野在xoy平面构成的三角形的长边与偏航角的正切分量
		rightside = para.Loc.Z * tan(CamYaw + offsetYaw);
		rightside = rightside < DistanceMaxY ? rightside : DistanceMaxY;
		para.fovBox.Max.Y = para.Loc.Y + rightside;
		// y负方向的投影距离 = 偏航角视野在xoy平面构成的三角形的短边与偏航角的正切分量
		leftside = para.Loc.Z * tan(CamYaw - offsetYaw);
		leftside = leftside < DistanceMaxY ? leftside : DistanceMaxY;
		para.fovBox.Min.Y = para.Loc.Y - leftside;
		// lim deta(theta) {tan(theta-deta(theta)) - tan(theta)};
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovBox.focusdistance * cos(offsetPitch);
		para.focus.Y = para.Loc.Y + para.fovBox.focusdistance * sin(offsetYaw);
	}
	else if (AngleYaw >= 45 && AngleYaw < 135)
	{
		offsetYaw = para.radian * (AngleYaw - 90);

		// y正方向的投影距离，注意此时y方向最远距离为MaxX，
		frontside = longside * cos(offsetYaw);
		frontside = frontside < DistanceMaxX ? frontside : DistanceMaxX;
		para.fovBox.Max.Y = para.Loc.Y + frontside;
		// y负方向的投影距离
		backside = shortside * cos(offsetYaw);
		backside = backside > -DistanceMaxX ? backside : -DistanceMaxX;
		para.fovBox.Min.Y = para.Loc.Y + backside;

		// x负方向的投影距离
		rightside = para.Loc.Z * tan(CamYaw + offsetYaw);
		rightside = rightside < DistanceMaxY ? rightside : DistanceMaxY;
		para.fovBox.Min.X = para.Loc.X - rightside;
		// x正方向的投影距离
		leftside = para.Loc.Z * tan(CamYaw - offsetYaw);
		leftside = leftside > -DistanceMaxY ? leftside : -DistanceMaxY;
		para.fovBox.Max.X = para.Loc.X - leftside;

		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X - para.fovBox.focusdistance * sin(offsetYaw);
		para.focus.Y = para.Loc.Y + para.fovBox.focusdistance * cos(offsetPitch);
		para.PitchisLon = false;
	}
	else if (AngleYaw >= 135 && AngleYaw < 225)
	{
		offsetYaw = para.radian * (AngleYaw - 180);

		// x负方向的投影距离
		frontside = longside * cos(offsetYaw);
		frontside = frontside < DistanceMaxX ? frontside : DistanceMaxX;
		para.fovBox.Min.X = para.Loc.X - frontside;
		// x正方向的投影距离
		backside = shortside * cos(offsetYaw);
		backside = backside > -DistanceMaxX ? backside : -DistanceMaxX;
		para.fovBox.Max.X = para.Loc.X - backside;

		// y负方向的投影距离
		rightside = para.Loc.Z * tan(CamYaw + offsetYaw);
		rightside = rightside < DistanceMaxY ? rightside : DistanceMaxY;
		para.fovBox.Min.Y = para.Loc.Y - rightside;
		// y正方向的投影距离
		leftside = para.Loc.Z * tan(CamYaw - offsetYaw);
		leftside = leftside < DistanceMaxY ? leftside : DistanceMaxY;
		para.fovBox.Max.Y = para.Loc.Y + leftside;

		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X - para.fovBox.focusdistance * cos(offsetPitch);
		para.focus.Y = para.Loc.Y - para.fovBox.focusdistance * sin(offsetYaw);
	}
	else if (AngleYaw >= 225 && AngleYaw < 315)
	{
		offsetYaw = para.radian * (AngleYaw - 270);

		// y负方向的投影距离
		frontside = longside * cos(offsetYaw);
		frontside = frontside < DistanceMaxX ? frontside : DistanceMaxX;
		para.fovBox.Min.Y = para.Loc.Y - frontside;
		// y正方向的投影距离
		backside = shortside * cos(offsetYaw);
		backside = backside > -DistanceMaxX ? backside : -DistanceMaxX;
		para.fovBox.Max.Y = para.Loc.Y - backside;

		// x正方向的投影距离
		rightside = para.Loc.Z * tan(CamYaw + offsetYaw);
		rightside = rightside < DistanceMaxY ? rightside : DistanceMaxY;
		para.fovBox.Max.X = para.Loc.X + rightside;
		// x负方向的投影距离
		leftside = para.Loc.Z * tan(CamYaw - offsetYaw);
		leftside = leftside < DistanceMaxY ? leftside : DistanceMaxY;
		para.fovBox.Min.X = para.Loc.X - leftside;

		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovBox.focusdistance * sin(offsetYaw);
		para.focus.Y = para.Loc.Y - para.fovBox.focusdistance * cos(offsetPitch);
		para.PitchisLon = false;
	}
	else if (AngleYaw >= 315 && AngleYaw <= 360)
	{
		offsetYaw = para.radian * (AngleYaw - 360);

		// x正方向的投影距离 = 俯仰角视野在xoy平面构成的三角形的长边与偏航角的余弦分量
		frontside = longside * cos(offsetYaw);
		frontside = frontside < DistanceMaxX ? frontside : DistanceMaxX;
		para.fovBox.Max.X = para.Loc.X + frontside;
		// x负方向的投影距离 = 俯仰角视野在xoy平面构成的三角形的短边与偏航角的余弦分量
		backside = shortside * cos(offsetYaw);
		backside = backside > -DistanceMaxX ? backside : -DistanceMaxX;
		para.fovBox.Min.X = para.Loc.X + backside;

		// y正方向的投影距离 = 偏航角视野在xoy平面构成的三角形的长边与偏航角的正切分量
		rightside = para.Loc.Z * tan(CamYaw + offsetYaw);
		rightside = rightside < DistanceMaxY ? rightside : DistanceMaxY;
		para.fovBox.Max.Y = para.Loc.Y + rightside;
		// y负方向的投影距离 = 偏航角视野在xoy平面构成的三角形的短边与偏航角的正切分量
		leftside = para.Loc.Z * tan(CamYaw - offsetYaw);
		leftside = leftside < DistanceMaxY ? leftside : DistanceMaxY;
		para.fovBox.Min.Y = para.Loc.Y - leftside;

		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovBox.focusdistance * cos(offsetPitch);
		para.focus.Y = para.Loc.Y + para.fovBox.focusdistance * sin(offsetYaw);
	}

	if (para.fovBox.Min.Y > para.fovBox.Max.Y || para.fovBox.Min.X > para.fovBox.Max.X || para.fovBox.Min.Y > para.focus.Y || para.focus.Y > para.fovBox.Max.Y || para.focus.X > para.fovBox.Max.X || para.focus.X < para.fovBox.Min.X)
	{
		int i = 3;
	}
	return true;
}

void AMyCharacter::GetFocusPosition(FParameter& para)
{
	// 偏航角在蓝图中设置范围为（-180~180），C++读取范围为（0~360）
	// 俯仰角在蓝图中设置范围为（-90~90），C++读取范围为（0~90）和（270-360）
	// 视点默认位置：偏航角为0，俯仰角为0，视野朝向为沿着UE4的x轴
	// 视野区域计算以（-90，90）为一个单位按照偏航角计算，逆时针为负值，顺时针为正值
	// 视点到焦点的距离为最大距离，以此距离为半径、视点为圆心画圆，圆的区域为视野区域
	float AngleYaw = para.Rotator.Yaw > 0 ? para.Rotator.Yaw : para.Rotator.Yaw + 360;
	float offsetYaw = para.radian * AngleYaw;
	float AnglePitch = para.Rotator.Pitch < 180 ? para.Rotator.Pitch : para.Rotator.Pitch - 360;
	float offsetPitch = para.radian * AnglePitch;

	para.focus.X = 0.0;
	para.focus.Y = 0.0;
	para.PitchisLon = true;
	if (AngleYaw >= 0 && AngleYaw < 45)
	{
		// lim deta(theta) {tan(theta-deta(theta)) - tan(theta)};
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovmax * cos(offsetPitch);
		para.focus.Y = para.Loc.Y + para.fovmax * sin(offsetYaw);
	}
	else if (AngleYaw >= 45 && AngleYaw < 135)
	{
		offsetYaw = para.radian * (AngleYaw - 90);
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X - para.fovmax * sin(offsetYaw);
		para.focus.Y = para.Loc.Y + para.fovmax * cos(offsetPitch);
		para.PitchisLon = false;
	}
	else if (AngleYaw >= 135 && AngleYaw < 225)
	{
		offsetYaw = para.radian * (AngleYaw - 180);
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X - para.fovmax * cos(offsetPitch);
		para.focus.Y = para.Loc.Y - para.fovmax * sin(offsetYaw);
	}
	else if (AngleYaw >= 225 && AngleYaw < 315)
	{
		offsetYaw = para.radian * (AngleYaw - 270);
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovmax * sin(offsetYaw);
		para.focus.Y = para.Loc.Y - para.fovmax * cos(offsetPitch);
		para.PitchisLon = false;
	}
	else if (AngleYaw >= 315 && AngleYaw <= 360)
	{
		offsetYaw = para.radian * (AngleYaw - 360);
		para.DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		para.focus.X = para.Loc.X + para.fovmax * cos(offsetPitch);
		para.focus.Y = para.Loc.Y + para.fovmax * sin(offsetYaw);
	}

}

void AMyCharacter::ComputeLOD(FParameter& para)
{
	// 当前屏幕宽度方向切片个数n=width/bitmap，切片总个数=pow(2,1+LOD)
	float SliceofWidth = para.Resolution.X / para.bitmapsize;
	float SilcesAngle = para.radian * para.CamFOV * para.DervativeofAngle * para.fovmax / para.latlontoued;
	float lod = log(360 * SliceofWidth / SilcesAngle) / log(2) - 1;
	para.LOD = ceil(lod) > 0 ? ceil(lod) : 0;
}

void AMyCharacter::SetSliceMapOffset(FParameter& para, int32 lonfileName, int32 latfileName)
{
	int32 latNum = pow(2, para.LOD);
	float lon = (lonfileName - latNum + 0.5) * 360 / (2 * latNum);
	float lat = (latfileName - latNum / 2.0 + 0.5) * 180 / latNum;
	if (para.LOD==0)
	{
		lon = 0;
		lat = 0;
	}

	para.MapOffset.X = lat * para.latlontoued * 63 / 64;
	para.MapOffset.Y = lon * para.latlontoued * 63 / 64;

	//para.MapOffset.X = lat * para.latlontoued;
	//para.MapOffset.Y = lon * para.latlontoued;

	//para.MapScale.X = 360 * para.latlontoued / (pow(2, para.LOD) * para.heightmapsize);
	//para.MapScale.Y = 360 * para.latlontoued / (pow(2, para.LOD) * para.heightmapsize);
	//para.MapScale.Z = 360 * para.latlontoued / (pow(2, para.LOD) * para.heightmapsize * 5);
}

void AMyCharacter::GetLevelFile(FParameter& para)
{
	float Slicedegree = 360.0 / pow(2, 1 + para.LOD);
	float Slicesize = Slicedegree * para.latlontoued;
	//float lat_center = floor(para.focus.X / Slicesize);
	//float lon_center = floor(para.focus.Y / Slicesize);
	int32 lat_index = floor(para.focus.X / Slicesize) + pow(2, para.LOD - 1);
	int32 lon_index = floor(para.focus.Y / Slicesize) + pow(2, para.LOD);

	if (!para.PitchisLon)
	{
		int32 slicenum = para.sliceofPitch;
		para.sliceofPitch = para.sliceofRoll;
		para.sliceofRoll = slicenum;
	}

	//int32 lat_index = floor((lat_center + 90) / Slicedegree);
	//int32 lon_index = floor((lon_center + 180) / Slicedegree);
	int32 lat_start = lat_index - floor(para.sliceofRoll / 2.0);
	int32 lat_end = lat_index + ceil(para.sliceofRoll / 2.0);
	int32 lon_start = lon_index - floor(para.sliceofPitch / 2.0);
	int32 lon_end = lon_index + ceil(para.sliceofPitch / 2.0);

	para.lonName.Empty();
	para.latName.Empty();
	para.levelsName.Empty();
	for (int32 lon = lon_start; lon < lon_end; ++lon)
	{
		para.lonName.Add(lon);
		for (int32 lat = lat_start; lat < lat_end; ++lat)
		{
			FString levelName = FString::FromInt(para.LOD) + R"(\)" + FString::FromInt(lon) + R"(\u)" + FString::FromInt(lat);

			if (lon == lon_start)
			{
				para.latName.Add(lat);
			}
			para.levelsName.Add(levelName);
		}
	}
	
}

int32 UniqueLevelInstanceId = 0;
void AMyCharacter::LoadLevelbyName(FParameter& para, FString levelName, FString LongPackageName, bool& bOutSuccess)
{
	bOutSuccess = false;

	UWorld* const World = GEngine->GetWorldFromContextObject(GWorld, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return;
	}

	FString str = TEXT("Begin Load level" + levelName + "!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);

	// Create Unique Name for sub-level package
	const FString ShortPackageName = FPackageName::GetShortName(LongPackageName);
	const FString PackagePath = FPackageName::GetLongPackagePath(LongPackageName);
	FString UniqueLevelPackageName = PackagePath + TEXT("/") + World->StreamingLevelsPrefix + ShortPackageName;
	UniqueLevelPackageName += TEXT("_LevelInstance_") + FString::FromInt(++UniqueLevelInstanceId);

	// Setup streaming level object that will load specified map
	ULevelStreamingDynamic* StreamingLevel = NewObject<ULevelStreamingDynamic>(World, ULevelStreamingDynamic::StaticClass(), NAME_None, RF_Transient, NULL);
	StreamingLevel->SetWorldAssetByPackageName(FName(*UniqueLevelPackageName));
	StreamingLevel->LevelColor = FColor::MakeRandomColor();
	StreamingLevel->SetShouldBeLoaded(true);
	StreamingLevel->SetShouldBeVisible(true);
	StreamingLevel->bShouldBlockOnLoad = false;
	StreamingLevel->bInitiallyLoaded = true;
	StreamingLevel->bInitiallyVisible = true;
	// Transform
	StreamingLevel->LevelTransform = FTransform(FRotator::ZeroRotator, para.MapOffset, para.MapScale);
	// Map to Load
	StreamingLevel->PackageNameToLoad = FName(*LongPackageName);
	// Add the new level to world.
	World->AddStreamingLevel(StreamingLevel);

	para.levelStreamingMap.Add(levelName, StreamingLevel);
	para.levelsloaded.Add(levelName);

	bOutSuccess = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Load level finished!"));
}

void AMyCharacter::UnLoadLevelbyName(FParameter& para, FString levelName)
{
	FString str = TEXT("Begin Unload level" + levelName + "!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	if (para.levelStreamingMap[levelName])
	{
		para.levelStreamingMap[levelName]->SetIsRequestingUnloadAndRemoval(true);
		para.levelStreamingMap.Remove(levelName);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Unload level finished!"));

}

void AMyCharacter::LoadLevelbyCameraInfo()
{
	GetCameraInfo(levelpara);
	GetFovMaxDistance(levelpara);
	GetFocusPosition(levelpara);

	if (levelpara.isFirstFrame)
	{
		levelpara.levelsloaded.Empty();
		ComputeLOD(levelpara);
		levelpara.preLOD = levelpara.LOD;
		levelpara.isFirstFrame = false;
	}

	GetLevelFile(levelpara);

	bool bSuccess;
	for (int32 lon = 0; lon < levelpara.sliceofPitch; ++lon)
	{
		for (int32 lat = 0; lat < levelpara.sliceofRoll; ++lat)
		{
			FString filepath = levelpara.levelsName[lon * levelpara.sliceofRoll + lat];
			FString levelmapPath = RootPath + filepath + ".umap";
			int32 lonName = levelpara.lonName[lon];
			int32 latName = levelpara.latName[lat];
			FString currentName = levelpara.levelsName[lon * levelpara.sliceofRoll + lat];
			FString longPackageName = "/Game/" + FString::FromInt(levelpara.LOD) + "/" + FString::FromInt(lonName)  + "/u" +FString::FromInt(latName);

			//if (!FPaths::FileExists(levelmapPath))
			//{
			//	// 加载空关卡
			//	longPackageName = "/Game/" + FString::FromInt(levelpara.LOD) + "/emptylevel";
			//}

			//// UE的长名称的限定为“/”，否则遍历短名称的目录，出现重复则选择第一个排序
			//if (levelpara.levelsloaded.Contains(currentName) && !levelpara.levelsName.Contains(currentName))
			//{
			//	UnLoadLevelbyName(levelpara, currentName);
			//}
			//if (!levelpara.levelsloaded.Contains(currentName))
			//{
			//	SetSliceMapOffset(levelpara, lonName, latName);
			//	LoadLevelbyName(levelpara, currentName, longPackageName, bSuccess);
			//}



			if (FPaths::FileExists(levelmapPath))
			{
				// UE的长名称的限定为“/”，否则遍历短名称的目录，出现重复则选择第一个排序
				if (levelpara.levelsloaded.Contains(currentName) && !levelpara.levelsName.Contains(currentName))
				{
					UnLoadLevelbyName(levelpara, currentName);
				}
				if (!levelpara.levelsloaded.Contains(currentName))
				{
					SetSliceMapOffset(levelpara, lonName, latName);
					LoadLevelbyName(levelpara, currentName, longPackageName, bSuccess);
				}
			}

		}
	}
	
	ComputeLOD(levelpara);
	if (levelpara.preLOD != levelpara.LOD)
	{
		int32 levelnum = levelpara.levelsloaded.Num();
		levelpara.isFirstFrame = true;
		for (int32 i = levelnum - 1; i >= 0; --i)
		{
			FString currentName = levelpara.levelsloaded[i];
			UnLoadLevelbyName(levelpara, currentName);
		}
	}
}



void AMyCharacter::GetWorldLevels(FParameter& para)
{
	if (!para.PitchisLon)
	{
		int32 slicenum = para.sliceofPitch;
		para.sliceofPitch = para.sliceofRoll;
		para.sliceofRoll = slicenum;
	}

	para.levelInfoMap.Empty();
	para.levelInfo.levelsName.Empty();

	float Slicedegree = 360.0 / pow(2, 1 + para.LOD);
	float Slicesize = Slicedegree * para.latlontoued;
	int32 lat_index = floor(para.focus.X / Slicesize) + pow(2, para.LOD - 1);
	int32 lon_index = floor(para.focus.Y / Slicesize) + pow(2, para.LOD);
	int32 lodscale = 0;
	int32 levelnum = 0;
	FLandScapeInfo landScapeInfo;

	if (para.LOD < 3)
	{
		for (int32 lon = 0; lon < pow(2, para.LOD + 1); ++lon)
		{
			for (int32 lat = 0; lat < pow(2, para.LOD); ++lat)
			{
				landScapeInfo.lodName = para.LOD;
				landScapeInfo.lonName = lon;
				landScapeInfo.latName = lat;
				para.levelInfoMap.Add(levelnum, landScapeInfo);
				levelnum += 1;

				FString levelName = FString::FromInt(para.LOD) + R"(\)" + FString::FromInt(lon) + R"(\u)" + FString::FromInt(lat);
				para.levelInfo.levelsName.Add(levelName);
			}
		}
	}
	else
	{
		for (int32 lod = para.LOD; lod >= 0; --lod)
		{
			lodscale += 1;
			int32 lon_start = 2 * lon_index / pow(2, lodscale);
			int32 lat_start = 2 * lat_index / pow(2, lodscale);
			FString levelName = FString::FromInt(para.LOD) + R"(\)" + FString::FromInt(lon) + R"(\u)" + FString::FromInt(lat);
			landScapeInfo.lodName = lod;
			if (lod == para.LOD)
			{
				for (int32 lon = lon_start; lon < lon_start + 2; ++lon)
				{
					for (int32 lat = lat_start; lat < lat_start + 2; ++lat)
					{
						landScapeInfo.lonName = lon;
						landScapeInfo.latName = lat;
						para.levelInfoMap.Add(levelnum, landScapeInfo);
						levelnum += 1;

						FString levelName = FString::FromInt(para.LOD) + R"(\)" + FString::FromInt(lon) + R"(\u)" + FString::FromInt(lat);
						para.levelInfo.levelsName.Add(levelName);
					}
				}
			}
			else
			{
				for (int32 lon = lon_start; lon < lon_start + 2; ++lon)
				{
					for (int32 lat = lat_start; lat < lat_start + 2; ++lat)
					{
						if (!(lon == lon_start && lat == lat_start))
						{
							landScapeInfo.lonName = lon;
							landScapeInfo.latName = lat;
							para.levelInfoMap.Add(levelnum, landScapeInfo);
							levelnum += 1;

							FString levelName = FString::FromInt(para.LOD) + R"(\)" + FString::FromInt(lon) + R"(\u)" + FString::FromInt(lat);
							para.levelInfo.levelsName.Add(levelName);
						}
					}
				}
			}

		}
	}

}

int32 UniqueLevelInstanceId = 0;
void AMyCharacter::LoadLevelbyName(FParameter& para, FString levelName, FString LongPackageName, bool& bOutSuccess)
{
	bOutSuccess = false;

	UWorld* const World = GEngine->GetWorldFromContextObject(GWorld, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		return;
	}

	FString str = TEXT("Begin Load level" + levelName + "!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);

	// Create Unique Name for sub-level package
	const FString ShortPackageName = FPackageName::GetShortName(LongPackageName);
	const FString PackagePath = FPackageName::GetLongPackagePath(LongPackageName);
	FString UniqueLevelPackageName = PackagePath + TEXT("/") + World->StreamingLevelsPrefix + ShortPackageName;
	UniqueLevelPackageName += TEXT("_LevelInstance_") + FString::FromInt(++UniqueLevelInstanceId);

	// Setup streaming level object that will load specified map
	ULevelStreamingDynamic* StreamingLevel = NewObject<ULevelStreamingDynamic>(World, ULevelStreamingDynamic::StaticClass(), NAME_None, RF_Transient, NULL);
	StreamingLevel->SetWorldAssetByPackageName(FName(*UniqueLevelPackageName));
	StreamingLevel->LevelColor = FColor::MakeRandomColor();
	StreamingLevel->SetShouldBeLoaded(true);
	StreamingLevel->SetShouldBeVisible(true);
	StreamingLevel->bShouldBlockOnLoad = false;
	StreamingLevel->bInitiallyLoaded = true;
	StreamingLevel->bInitiallyVisible = true;
	// Transform
	StreamingLevel->LevelTransform = FTransform(FRotator::ZeroRotator, para.MapOffset, para.MapScale);
	// Map to Load
	StreamingLevel->PackageNameToLoad = FName(*LongPackageName);
	// Add the new level to world.
	World->AddStreamingLevel(StreamingLevel);
	//UGameplayStatics::LoadStreamLevel(World, FName(*levelName), true, true, FLatentActionInfo());
	levelpara.levelStreamingMap.Add(levelName, StreamingLevel);
	levelpara.levelInfo.levelsloaded.Add(levelName);
	bOutSuccess = true;
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Load level finished!"));
}

void AMyCharacter::UnLoadLevelbyName(FParameter& para, FString levelName)
{
	FString str = TEXT("Begin Unload level" + levelName + "!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	if (para.levelStreamingMap[levelName])
	{
		para.levelStreamingMap[levelName]->SetIsRequestingUnloadAndRemoval(true);
		para.levelStreamingMap.Remove(levelName);
	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Unload level finished!"));

}

void AMyCharacter::LoadLevelbyCameraInfo()
{
	UWorld* World = GetWorld();
	GetCameraInfo(levelpara);
	GetFovMaxDistance(levelpara);

	if (!GetFocusPosition(levelpara))
	{
		return;
	}
	ComputeLOD(levelpara);

	GetLevelFile(levelpara);

	return;
	if (levelpara.isFirstFrame)
	{
		levelpara.levelInfo.levelsloaded.Empty();
		levelpara.preLOD = levelpara.LOD;
		levelpara.isFirstFrame = false;
	}

	bool bSuccess;
	if (levelpara.preLOD != levelpara.LOD)
	{
		levelpara.levelInfoBuffer.lonName.Empty();
		levelpara.levelInfoBuffer.latName.Empty();
		levelpara.levelInfoBuffer.levelsloaded.Empty();
		int32 maxnum = levelpara.levelInfo.lonName.Num();
		int32 num = 0;
		for (num = 0; num < maxnum; ++num)
		{
			levelpara.levelInfoBuffer.lonName.Add(levelpara.levelInfo.lonName[num]);
		}
		maxnum = levelpara.levelInfo.latName.Num();
		for (num = 0; num < maxnum; ++num)
		{
			levelpara.levelInfoBuffer.latName.Add(levelpara.levelInfo.latName[num]);
		}
		maxnum = levelpara.levelInfo.levelsloaded.Num();
		for (int32 num = 0; num < maxnum; ++num)
		{
			levelpara.levelInfoBuffer.levelsloaded.Add(levelpara.levelInfo.levelsloaded[num]);
		}
		levelpara.levelInfo.levelsloaded.Empty();

		GetLevelFile(levelpara);
		for (int32 lon = 0; lon < levelpara.sliceofPitch; ++lon)
		{
			for (int32 lat = 0; lat < levelpara.sliceofRoll; ++lat)
			{
				FString currentName = levelpara.levelInfo.levelsName[lon * levelpara.sliceofRoll + lat];
				FString levelmapPath = RootPath + currentName + ".umap";
				int32 lonName = levelpara.levelInfo.lonName[lon];
				int32 latName = levelpara.levelInfo.latName[lat];
				FString longPackageName = "/Game/" + FString::FromInt(levelpara.LOD) + "/" + FString::FromInt(lonName) + "/u" + FString::FromInt(latName);
				if (FPaths::FileExists(levelmapPath))
				{
					SetSliceMapOffset(levelpara, lonName, latName);
					LoadLevelbyName(levelpara, currentName, longPackageName, bSuccess);
				}
			}
		}
		World->FlushLevelStreaming(); // 保证加载后再卸载

		for (num = maxnum - 1; num >= 0; --num)
		{
			FString currentName = levelpara.levelInfoBuffer.levelsloaded[num];
			UnLoadLevelbyName(levelpara, currentName);
		}
		levelpara.preLOD = levelpara.LOD;
	}
	else
	{
		GetLevelFile(levelpara);

		for (int32 lon = 0; lon < levelpara.sliceofPitch; ++lon)
		{
			for (int32 lat = 0; lat < levelpara.sliceofRoll; ++lat)
			{
				FString currentName = levelpara.levelInfo.levelsName[lon * levelpara.sliceofRoll + lat];
				FString levelmapPath = RootPath + currentName + ".umap";
				int32 lonName = levelpara.levelInfo.lonName[lon];
				int32 latName = levelpara.levelInfo.latName[lat];
				FString longPackageName = "/Game/" + FString::FromInt(levelpara.LOD) + "/" + FString::FromInt(lonName) + "/u" + FString::FromInt(latName);

				if (FPaths::FileExists(levelmapPath))
				{
					// UE的长名称的限定为“/”，否则遍历短名称的目录，出现重复则选择第一个排序
					if (levelpara.levelInfo.levelsloaded.Contains(currentName) && !levelpara.levelInfo.levelsName.Contains(currentName))
					{
						UnLoadLevelbyName(levelpara, currentName);
					}
					if (!levelpara.levelInfo.levelsloaded.Contains(currentName))
					{
						SetSliceMapOffset(levelpara, lonName, latName);
						LoadLevelbyName(levelpara, currentName, longPackageName, bSuccess);
					}
				}
			}

		}
	}

}