#pragma once

#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"
#include "SceneCulling.h"
#include "TileLoadManager.h"
#include <queue>

#include "GridTileLoader.h"

#include "GameFramework/Actor.h"
#include "LandscapeMaterialInstanceConstant.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Kismet/GameplayStatics.h"

//实际的瓦片加载、卸载的执行类，基于UE数据结构，只做加载一个瓦片、卸载一个瓦片
class ITileLoadTaskExcutor
{
public:
	//加载一个瓦片的实现函数
	virtual bool LoadOneTile(const ITileInfo* thisTile, bool isAsyn) = 0;

	virtual bool UnloadOneTile(const ITileInfo* thisTile, bool isAsyn) = 0;

	AActor* rootActor;
};

class GridTileLoadTaskExcutor:public ITileLoadTaskExcutor
{
public:

	FString dataSourcePath;	

	//加载一个瓦片的实现函数
	bool LoadOneTile(const ITileInfo* thisTile, bool isAsyn);

	bool UnloadOneTile(const ITileInfo* thisTile, bool isAsyn);

	GridTileLoadTaskExcutor(FString basePath, AActor* pActor);
};

