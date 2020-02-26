#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelStreamingDynamic.h"

#include "LevelStreamingLoad.generated.h"


//class ULevelStreamingLoad
//{
//
//public:
//	ULevelStreamingLoad();
//	~ULevelStreamingLoad();
//
//
//
//public:
//
//	void LoadMap(const FString & LevelName);
//	void UnLoadMap(const FString & LevelName);
//
//public:
//
//	// level loaded 
//
//		TArray<FString> levelLoaded;
//
//	// used for aysn load
//		TArray<FString> waitForLoaded;
//
//		FString currentLoaded;
//
//		FLatentActionInfo loadActionInfo;
//
//		void BeginLoadWaitLevel();
//
//		void EndLoadWaitLevel();
//
//	// used for aysn unload
//		TArray<FString> waitForUnLoaded;
//
//		FString currentUnLoaded;
//
//		FLatentActionInfo unloadActionInfo;
//
//		void BeginUnLoadWaitLevel();
//
//		void EndUnLoadWaitLevel();
//
//};


UCLASS()
class DESIGN3D_API ULevelStreamingLoad : public UObject
{
	// https://www.codetd.com/article/5871882
	GENERATED_BODY()

public:
	ULevelStreamingLoad();
	~ULevelStreamingLoad();



public:

	void LoadMap(const FString & LevelName);
	void UnLoadMap(const FString & LevelName);

public:

	// level loaded 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	TArray<FString> levelLoaded;
	/*TMap<FString, ULevelStreamingDynamic> levelLoaded;*/
	// used for aysn load
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	TArray<FString> waitForLoaded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	FString currentLoaded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	FLatentActionInfo loadActionInfo;
	UFUNCTION(BlueprintCallable, Category = "levelload")
	void BeginLoadWaitLevel();
	UFUNCTION(BlueprintCallable, Category = "levelload")
	void EndLoadWaitLevel();

	// used for aysn unload
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	TArray<FString> waitForUnLoaded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	FString currentUnLoaded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "levelload")
	FLatentActionInfo unloadActionInfo;
	UFUNCTION(BlueprintCallable, Category = "levelload")
	void BeginUnLoadWaitLevel();
	UFUNCTION(BlueprintCallable, Category = "levelload")
	void EndUnLoadWaitLevel();

};


//#include "LevelStreamingLoad.generated.h"
//
//UCLASS(abstract, editinlinenew, BlueprintType, Within = World)
//class DESIGN3D_API ULevelStreamingLoad : public UObject
//{
//	GENERATED_BODY()
//
//public:
//	ULevelStreamingLoad();
//	~ULevelStreamingLoad();
//
//	
//
//public:
//
//	void LoadMap(const FString & LevelName);
//	void UnLoadMap(const FString & LevelName);
//
//public:
//	
//	// level loaded 
//	UPROPERTY(EditAnywhere)
//	TArray<FString> levelLoaded;
//
//	// used for aysn load
//	UPROPERTY(EditAnywhere)
//	TArray<FString> waitForLoaded;
//
//	UPROPERTY(EditAnywhere)
//	FString currentLoaded;
//
//	UPROPERTY(EditAnywhere)
//	FLatentActionInfo loadActionInfo;
//
//	UFUNCTION()
//	void BeginLoadWaitLevel();
//
//	UFUNCTION()
//	void EndLoadWaitLevel();
//
//	// used for aysn unload
//	UPROPERTY(EditAnywhere)
//	TArray<FString> waitForUnLoaded;
//
//	UPROPERTY(EditAnywhere)
//	FString currentUnLoaded;
//
//	UPROPERTY(EditAnywhere)
//	FLatentActionInfo unloadActionInfo;
//
//	UFUNCTION()
//	void BeginUnLoadWaitLevel();
//
//	UFUNCTION()
//	void EndUnLoadWaitLevel();
//
//};
//
//
//
//
