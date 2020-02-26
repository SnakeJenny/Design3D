// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/LevelStreamingDynamic.h"
#include "Landscape/Classes/Landscape.h"

#include <queue>
#include "LevelLoadCharacter.generated.h"



// 相机状态
struct ProjectedCameraState {
	float FOV;
	FVector Location;
	FRotator Rotator;
	float AspectRatio;
};


struct Tile
{
	int32 layer;
	int32 col;
	int32 row;

	FString TileToString();
	static Tile FromString(FString name);
	static Tile GetTileByLayerAndCoord(int layer, FVector2D coord);

	void CalcTileGeographicPosition(FVector2D &center, FVector2D &size);

	FString GetLevelDiskPath();
	bool IsLevelFileExist();

	bool IsPositionIn(const FVector2D& pos);
};

struct HalfLine
{
	FVector BasePoint;
	FRotator Direction;
};

class ULevelLoaderOneByOne;
class SceneLevelTreeManager
{
public:

	enum TileNodeState
	{
		UNLOADED,
		LOADED,
		REPLACED_BY_CHILDREN,
		
	};
	struct TileNode
	{
		Tile tile;
		TileNode *child00;
		TileNode *child01;
		TileNode *child10;
		TileNode *child11;
		TileNode *parent;
		TileNodeState state;
		bool IsAllChildrenMiss()
		{
			CreateSubTileNode();
			if ((!child00->tile.IsLevelFileExist() &&
				!child01->tile.IsLevelFileExist() &&
				!child10->tile.IsLevelFileExist() &&
				!child11->tile.IsLevelFileExist()))
				return true;
			return false;
		}

		TileNode()
		{
			state = TileNodeState::UNLOADED;
			child00 = NULL;
			child01 = NULL;
			child10 = NULL;
			child11 = NULL;
		}

		TileNode(int layer, int row, int col, TileNode *par)
		{
			tile.layer = layer;
			tile.row = row;
			tile.col = col;
			state = TileNodeState::UNLOADED;
			child00 = NULL;
			child01 = NULL;
			child10 = NULL;
			child11 = NULL;
			parent = par;
		}

		void CreateSubTileNode()
		{
			if (child00 == NULL)
			{
				child00 = new TileNode(this->tile.layer + 1, this->tile.row * 2, this->tile.col * 2, this);
			}
			if (child01 == NULL)
			{
				child01 = new TileNode(this->tile.layer + 1, this->tile.row * 2, this->tile.col * 2 + 1, this);
			}
			if (child10 == NULL)
			{
				child10 = new TileNode(this->tile.layer + 1, this->tile.row * 2 + 1, this->tile.col * 2, this);
			}
			if (child11 == NULL)
			{
				child11 = new TileNode(this->tile.layer + 1, this->tile.row * 2 + 1, this->tile.col * 2 + 1, this);
			}
		}
	};

	
	FVector2D position;
	int layer;
	Tile tile;	

	std::queue<TileNode *> queueTile;

	ULevelLoaderOneByOne* levelLoaderOneByOne;

	// 同步加载图层 原子操作
	void LoadLevelChangeState(SceneLevelTreeManager::TileNode* tile);
	void UnLoadLevelNoChangeState(SceneLevelTreeManager::TileNode* tile);


	// 按广度优先的次序遍历图层树，获取需要加载的图层操作	
	std::queue<TileNode *> BFS_Load_Iteration();
	void BFS_Load_Iteration_Oper();
	void BFS_Load_Iteration_ShenZhen();
	void ReplaceParentNode(TileNode* tileNode);

	// 加载Level，加载同一个父节点下的兄弟level，同时删除父节点
	void DoLoadTile(SceneLevelTreeManager::TileNode *tileNode);

	// Thread Function
	void Run();


	// 场景树跟节点
	TileNode *RootNode;

	SceneLevelTreeManager();

	void SetRefineTo(int layer, const FVector2D& pos);

};



UCLASS()
class DESIGN3D_API UGeographicMath : public UObject
{
	GENERATED_BODY()

private:
	UGeographicMath();

	

	UPROPERTY()
	float earthRadius;


	FVector UEToGeoPosition(FVector position);
	FRotator UEToGeoRotator(FRotator rotator);
	ProjectedCameraState UEToGeoCameraState(ProjectedCameraState cameraState);

	void GetCameraHalfLine(ProjectedCameraState cameraState, TArray<HalfLine>& lines);
	FVector2D GetHalfLineXOYIntersect(HalfLine line);
	Tile GetTileByDistance(ProjectedCameraState cameraState, FVector2D xoyIntersect);

public:
	
	Tile GetTileByCenterIntersect(ProjectedCameraState cameraState, FVector2D &intersect);
	UPROPERTY()
	FTransform transform;


	UPROPERTY()
	FTransform inverseTransform;
	
};





UCLASS()
class DESIGN3D_API ULevelTranform : public UObject
{
	GENERATED_BODY()

private:
	ULevelTranform();
	FTransform GetTransform(Tile tile);

	UPROPERTY()
	float initTileSize;

	UPROPERTY()
	UGeographicMath* geographicMath;

public:
	void TransformLevel(ULevel *Level, Tile tile);

};


class ULevelLoaderOneByOne;

UCLASS()
class DESIGN3D_API ULevelLoadedFunClass : public UObject
{
	GENERATED_BODY()

public:
	ULevelLoadedFunClass();

	UFUNCTION(BlueprintCallable)
		void OnLevelLoadedFun();

	UFUNCTION(BlueprintCallable)
		void OnLevelUnLoadedFun();

	UPROPERTY()
		ULevelStreamingDynamic *levelStream;

	UPROPERTY()
		ULevelLoaderOneByOne *levelLoaderOneByOne;

	UPROPERTY()
		ULevelTranform *levelTranform;


	Tile tile;

};


UCLASS()
class DESIGN3D_API ULevelLoaderOneByOne : public UObject
{
	GENERATED_BODY()

	friend class ULevelLoadedFunClass;
private:
	UPROPERTY()
	TMap<FString, ULevelStreamingDynamic*> levelLoaded;


	struct LevelOper
	{
		bool isLoaded;
		FString tileName;

		LevelOper(bool isload, const FString& name)
		{
			isLoaded = isload;
			tileName = name;
		}
	};

	std::queue<LevelOper> levelOperQueue;

	bool isLoadingOrUnLoading;

	void LoadLevelInternal(const FString& levelName);

	void UnLoadLevelInternal(const FString& levelName);


public:


	void LoadLevel(const FString& levelName);

	void UnLoadLevel(const FString& levelName);

	void OnTick();

	ULevelLoaderOneByOne();
};



UCLASS()
class DESIGN3D_API ULevelLoaderStrategic : public UObject
{
	GENERATED_BODY()

private:

	ULevelLoaderStrategic();

	UPROPERTY()
	UGeographicMath *geographicMath;

	SceneLevelTreeManager *sceneLevelTreeManager;



public:
	


	void DoLevelLoadStrategic(ProjectedCameraState cameraState);

};



UCLASS()
class DESIGN3D_API UNavigationManger : public UObject
{
	GENERATED_BODY()

private:	

	UNavigationManger();

	UPROPERTY()
	ULevelLoaderStrategic* levelLoaderStrategic;
public:
	void OnTick(ProjectedCameraState cameraState);

};





UCLASS()
class DESIGN3D_API ALevelLoadCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALevelLoadCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//
	//UPROPERTY()
	//AActor* Acotrptr;
	//UPROPERTY(EditAnywhere, Category = "levelLoadCharacter")
	//TSubclassOf<class ALevelLoadCharacter> levelLoadCharacter;
	//UPROPERTY(EditAnywhere, Category = "levelLoadactor")
	//ALevelLoadCharacter* levelLoadactor;
	UPROPERTY(transient)
	ALevelLoadCharacter* MyCharacter;

private:	
	UPROPERTY()
	UNavigationManger* navigationManger;

	ProjectedCameraState GetCameraState();
};
