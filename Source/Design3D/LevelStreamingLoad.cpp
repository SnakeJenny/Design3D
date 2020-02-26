#include "LevelStreamingLoad.h"
#include "MyActor.h"
#include "Misc/PackageName.h"
#include "UObject/UObjectGlobals.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LatentActionManager.h"
#include "UObject/UObjectHash.h"


ULevelStreamingLoad::ULevelStreamingLoad()
{
	loadActionInfo.CallbackTarget = this;
	loadActionInfo.ExecutionFunction = "EndLoadWaitLevel";
	loadActionInfo.Linkage = 0;

	unloadActionInfo.CallbackTarget = this;
	unloadActionInfo.ExecutionFunction = "EndUnLoadWaitLevel";
	unloadActionInfo.Linkage = 0;

	waitForLoaded.Empty();
	waitForLoaded.Contains("abc");
	levelLoaded.Empty();
	waitForUnLoaded.Empty();
}


ULevelStreamingLoad::~ULevelStreamingLoad()
{
}


void ULevelStreamingLoad::BeginUnLoadWaitLevel()
{
	if (waitForUnLoaded.Num() == 0)
	{
		currentUnLoaded.Empty();
		return;
	}
	currentUnLoaded = waitForUnLoaded.Pop();

	levelLoaded.Remove(currentUnLoaded);

	UGameplayStatics::UnloadStreamLevel(GWorld, FName(*currentUnLoaded), unloadActionInfo,true);

}

void ULevelStreamingLoad::EndUnLoadWaitLevel()
{	
	BeginUnLoadWaitLevel();
	UE_LOG(LogClass, Log, TEXT("level %s has be unloaded!"), *currentUnLoaded);
	FString str = TEXT("level" + currentUnLoaded + "has be unloaded!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
}


void ULevelStreamingLoad::BeginLoadWaitLevel()
{
	if (waitForLoaded.Num() == 0)
	{
		currentLoaded.Empty();
		return;
	}
	currentLoaded = waitForLoaded.Pop();

	TArray<UObject*> result;
	GetObjectsOfClass(UClass::StaticClass(), result);   //获取所有的class和interface
	bool bSuccess;
	FVector vector;
	
	FRotator rotator;
	rotator.Normalize();
	ULevelStreamingDynamic* levelStreamingDynamic = ULevelStreamingDynamic::LoadLevelInstance(GWorld, currentLoaded, FVector::ZeroVector, FRotator::ZeroRotator, bSuccess);
	
//	UGameplayStatics::LoadStreamLevel(GWorld, FName(*currentLoaded), true, true, loadActionInfo);

}

void ULevelStreamingLoad::EndLoadWaitLevel()
{
	UE_LOG(LogClass, Log, TEXT("level %s has be loaded!"), *currentLoaded);
	FString str = TEXT("level" + currentLoaded + "has be loaded!");
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);

	levelLoaded.Push(currentLoaded);
	BeginLoadWaitLevel();

	/*UWorld* world;
	world = GWorld;
	ULevelStreaming* levelstreaming1 = world->GetLevelStreamingForPackageName(FName(*currentLoaded));
	ULevelStreaming* levelstreaming = GetWorld()->GetLevelStreamingForPackageName(FName(*currentLoaded));
	bool bl = levelstreaming->IsLevelVisible();
	bool b2 = levelstreaming->IsLevelLoaded();*/
}

void ULevelStreamingLoad::LoadMap(const FString & LevelName)
{
	bool bSuccess;
	ULevelStreamingDynamic* levelStreamingDynamic = ULevelStreamingDynamic::LoadLevelInstance(GWorld, LevelName, FVector::ZeroVector, FRotator::ZeroRotator, bSuccess);


	levelStreamingDynamic->SetIsRequestingUnloadAndRemoval(true);
	return;

	if (waitForLoaded.Contains(LevelName) || currentLoaded == LevelName || levelLoaded.Contains(LevelName))
		return;

	waitForLoaded.Push(LevelName);
	if (currentLoaded.IsEmpty())
	{
		BeginLoadWaitLevel();
	}
}


void ULevelStreamingLoad::UnLoadMap(const FString & LevelName)
{
	if (!levelLoaded.Contains(LevelName))
	{
		UE_LOG(LogClass, Log, TEXT("level %s has not be found!"), *LevelName);
		FString str = TEXT("level" + LevelName + "has not be found!");
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
		return;
	}

	if (waitForUnLoaded.Contains(LevelName) || currentUnLoaded == LevelName)
		return;

	waitForUnLoaded.Push(LevelName);
	if (currentUnLoaded.IsEmpty())
		BeginUnLoadWaitLevel();
}