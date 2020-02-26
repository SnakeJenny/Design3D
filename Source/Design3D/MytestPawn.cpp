// Fill out your copyright notice in the Description page of Project Settings.


#include "MytestPawn.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "misc/Paths.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/WorldSettings.h"
#include "Camera/CameraPhotography.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Controller.h"
// Sets default values
int32 _MAX_LEVEL = 32;
AMytestPawn::AMytestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//AutoPossessPlayer = EAutoReceiveInput::Player0;
	//// 我们的根组件是一个会对物理行为进行响应的球体
	//USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	//RootComponent = SphereComponent;
	//SphereComponent->InitSphereRadius(40.0f);
	//SphereComponent->SetCollisionProfileName(TEXT("Pawn"));
	////  使用弹簧臂来让相机获得一种平滑、自然的运动。
	//USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	//SpringArm->AttachTo(RootComponent);
	//SpringArm->RelativeRotation = FRotator(-45.f, 0.f, 0.f);
	//SpringArm->TargetArmLength = 400.0f;
	//SpringArm->bEnableCameraLag = true;
	//SpringArm->CameraLagSpeed = 3.0f;
	//// 创建相机并附加到弹簧臂
	//UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("ActualCamera"));
	//Camera->AttachTo(SpringArm, USpringArmComponent::SocketName);

	levelName = {"579", "578" ,"577" ,"576" };
	levelNum = levelName.Num();
	//levelName = ["StarterMap", "Advanced_Lighting"];
	if (levelNum > _MAX_LEVEL)
		return;

	//AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

bool isBebin = false;
// Called when the game starts or when spawned
void AMytestPawn::BeginPlay()
{
	Super::BeginPlay();

	/*AMytestPawn* MyCharacter = Cast<AMytestPawn>(GetPawn());
	if (MyCharacter == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("ERROR:Controlled Character is NULL"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled Character is %s"), *MyCharacter->GetName());
	}*/


	isBebin = true;
	
}


int  tick = 0;
// Called every frame
void AMytestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UpdateViewTarget(DeltaTime);

	++tick;
	if (isBebin && tick == 1000)
	{
		LoadMap();

		UE_LOG(LogClass, Log, TEXT("tick is equal to %d!"), tick);
	}

	if (isBebin && tick == 4000)
	{
		UnLoadMap();
		UE_LOG(LogClass, Log, TEXT("tick is equal to %d!"), tick);
		tick = 0;

	}

}

void AMytestPawn::LoadMap()
{
	bool bSuccess;
	for (int32 i = 0; i < levelNum; ++i)
	{
		// 长名称的限定仅为“/”，否则遍历短名称的目录，出现重复则选择第一个排序
		FString currentName = levelName[i];
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
			levelStreamingMap.Add(currentName, StreamingLevel);
		}
		else
		{
			FString str = TEXT("level map " + currentName + "can not be found!");
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
			//levelName.Remove(levelName[i]);
		}

	}
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Load level finished!"));
}

void AMytestPawn::UnLoadMap()
{
	for (int32 i = 0; i < levelNum; ++i)
	{
		FString currentName = levelName[i];
		FString str = TEXT("Begin Unload level" + currentName + "!");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
		if (levelName.Contains(currentName))
		{
			levelStreamingMap[currentName]->SetIsRequestingUnloadAndRemoval(true);
			//levelName.Remove(currentName);
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Unload level finished!"));

	//ULevelStreamingLoad* LevelStreaming = NewObject<ULevelStreamingLoad>();
	//LevelStreaming->UnLoadMap("StarterMap");
	//LevelStreaming->UnLoadMap("191118");

}

// Called to bind functionality to input
void AMytestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LoadMap", IE_Pressed, this, &AMytestPawn::LoadMap);
	PlayerInputComponent->BindAction("UnLoadMap", IE_Pressed, this, &AMytestPawn::UnLoadMap);

}

void AMytestPawn::UpdateViewTarget(float DeltaSeconds)
{
	AWorldSettings* Info = GetWorldSettings();
	// apply time multipliers
	float RealDeltaSeconds = DeltaSeconds;
	DeltaSeconds *= Info->GetEffectiveTimeDilation();
	// Handle clamping of time to an acceptable value
	const float GameDeltaSeconds = Info->FixupDeltaSeconds(DeltaSeconds, RealDeltaSeconds);
	check(GameDeltaSeconds >= 0.0f);
	DeltaSeconds = GameDeltaSeconds;
	bool bIsPaused = GetWorld()->IsPaused();

	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		if (APlayerController* PlayerController = Iterator->Get())
		{
			if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
			{
				PlayerController->UpdateCameraManager(DeltaSeconds);
			}
		}
	}
	

	//APawn* Apawn;
	//AMytestPawn* Pawn = Cast<AMytestPawn>(Apawn);
	//if (Pawn)
	//{
	//	int bCalView = true;
	//	APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());
	//	if (Controller)
	//	{
	//		FName OriginMode = Controller->PlayerCameraManager->CameraStyle;
	//		Controller->SetCameraMode(FName("SceneFixed"));
	//		//reset view using controller class
	//		Controller->SetControlRotation(FRotator(0.0f, 90.0f, 0.0f));
	//		Controller->SetIgnoreLookInput(true);
	//	}
	//}
}
