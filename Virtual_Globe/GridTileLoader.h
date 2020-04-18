// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileLoadTaskExcutor.h"
#include "TileInfo.h"

#include "LandscapeMaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"

#include "GridTileLoader.generated.h"

UCLASS()
class VIRTUAL_GLOBE_API AGridTileLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridTileLoader();

	//bool LoadStaticMesh_Tile_1(int32 LevelNum, int32 XNum, int32 YNum);
	//bool UnLoadStaticMesh_Tile_1(int32 LevelNum, int32 XNum, int32 YNum);

	bool LoadStaticMesh_Tile(TileInfo_Grid* tileLoading);
	bool UnLoadStaticMesh_Tile(TileInfo_Grid* tileUnloading);
	   
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMeshComponent;

	UMaterialInstance* MeshMaterial;
	//用mXYtoComponentMap记录各TileMeshComponent的层号和行列号
	TMap<FVector, UStaticMeshComponent*> mXYtoComponentMap;



	
private:
	int Frame_id = -50;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

//TEMPLATE Load Obj From Path
template <typename ObjClass>
FORCEINLINE ObjClass* LoadObjFromPath(const FName& Path)
{
	if (Path == NAME_None) return NULL;
	//~

	return Cast<ObjClass>(StaticLoadObject(ObjClass::StaticClass(), NULL, *Path.ToString()));
}

// Load Static Mesh From Path 
FORCEINLINE UStaticMesh* LoadMeshFromPath(const FName& Path)
{
	if (Path == NAME_None) return NULL;
	//~

	return LoadObjFromPath<UStaticMesh>(Path);
}
