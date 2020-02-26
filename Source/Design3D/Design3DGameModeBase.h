// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Design3DGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DESIGN3D_API ADesign3DGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADesign3DGameModeBase(const FObjectInitializer& ObjectInitializer);
	ADesign3DGameModeBase();
	~ADesign3DGameModeBase();

	virtual void StartPlay() override;

	int m = 0;
};
