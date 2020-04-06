#pragma once

#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"
#include "SceneCulling.h"
#include "TileLoadManager.h"
#include <queue>

//实际的瓦片加载、卸载的执行类，基于UE数据结构，只做加载一个瓦片、卸载一个瓦片
class TileLoadTaskExcutor
{
	//瓦片数据的坐标系统信息，用于执行从瓦片坐标系统到UE坐标系统的变换转换
	CoordinateSystem tileDataCoordinateSystem;

	//是否异步处理任务
	bool isAsyn;

	TileLoadTaskExcutor(CoordinateSystem tileDataCoordinateSystem);

	//加载一个瓦片的实现函数
	void LoadOneTile(TileInfo thisTile, bool isAsyn, FVector tilePositionInUE
	,FRotator tileRotationInUE, FVector tileScaleInUE);

	void UnloadOneTile(TileInfo thisTile, bool isAsyn);
};

class LandscapeTileLoadTaskExcutor :TileLoadTaskExcutor
{
public:
	//维护当前场景中已加载的landscape瓦片的对象集合，
	//便于后续根据tileinfo找到对应的场景中的实际对象，并卸载
	//TMap<TileInfo*, LandscapeComponent*> landscapeInScene;

	//重载该函数
	void LoadOneTile(TileInfo thisTile, bool isAsyn, FVector tilePositionInUE
		, FRotator tileRotationInUE, FVector tileScaleInUE);

	void UnloadOneTile(TileInfo thisTile, bool isAsyn);
};

class StaticmeshTileLoadTaskExcutor :TileLoadTaskExcutor
{
public:
	//维护当前场景中已加载的landscape瓦片的对象集合，
	//便于后续根据tileinfo找到对应的场景中的实际对象，并卸载
	//TMap<TileInfo*, StaticmeshCompontent*> staticmeshInScene;

	//重载该函数
	void LoadOneTile(TileInfo thisTile, bool isAsyn, FVector tilePositionInUE
		, FRotator tileRotationInUE, FVector tileScaleInUE);

	void UnloadOneTile(TileInfo thisTile, bool isAsyn);
};

