// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Engine/LevelStreamingDynamic.h"
#include "GameFramework/PlayerController.h"
#include "MytestPawn.generated.h"

UCLASS()
class DESIGN3D_API AMytestPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMytestPawn();
	TMap<FString, ULevelStreamingDynamic *> levelStreamingMap;
	TArray<FString> levelName;
	int32 levelNum;
	FString levelPath = FString(R"(D:\Github\master_szu\ue4_project\Design3D\Content\)");


	/** PlayerController that owns this Camera actor */
	UPROPERTY(transient)
	class APlayerController* PCOwner;
	void UpdateViewTarget(float DeltaSeconds);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void LoadMap();
	void UnLoadMap();

};
