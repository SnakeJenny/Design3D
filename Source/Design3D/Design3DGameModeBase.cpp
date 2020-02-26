// Fill out your copyright notice in the Description page of Project Settings.


#include "Design3DGameModeBase.h"
#include "MyCharacter.h"



ADesign3DGameModeBase::ADesign3DGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultPawnClass = AMyCharacter::StaticClass();
}

ADesign3DGameModeBase::ADesign3DGameModeBase()
{

}

ADesign3DGameModeBase::~ADesign3DGameModeBase()
{

}


void ADesign3DGameModeBase::StartPlay()
{
	Super::BeginPlay();
}