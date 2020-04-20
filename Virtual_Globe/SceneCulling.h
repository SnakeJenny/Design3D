#pragma once
#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"
#include "Engine/Engine.h"
#include <queue>


// 相机状态
struct CameraState {
	//field of view,弧度制，角度
	float FOV;
	//相机位置
	FVector Location;
	//相机旋转角度
	FRotator Rotator;
	//屏幕视口的横纵比
	float AspectRatio;
	//屏幕分辨率
	FVector2D screenResolution;
};

//用于描述相机射线的数据结构
struct HalfLine
{
	//相机点位
	FVector BasePoint;
	//相机射线角度
	FRotator Direction;
};

//定义在当前世界的坐标系统中，相机相关操作的管理类，有别于UE自带的相机类
//主要职责为完成从UE相机获取得到相关参数后，实现基于视点位置的待载入瓦片数据集计算
class ISceneCulling
{
public:
	CameraState currentCameraState;
	FVector currentGeoCameraLocation;
	virtual void GetTilesShouldbeLoaded(const CameraState &inCameraState, TSet<ITileInfo*> & outTileSet) = 0;
};

class SceneCulling_CenterTileStrategy :public ISceneCulling
{
public:

	Sphere_CoordinateSystem* TileCoordinateSystem;	

	SceneCulling_CenterTileStrategy(CoordinateSystem* inCoordinateSystem);

	//virtual ~SceneCulling_CenterTileStrategy();

	//根据瓦片数据集（内含瓦片划分规则），相机位置，屏幕分辨率，
	//计算当前视口应该加载并显示的瓦片数据集
	//本方法基于四叉树索引
	void GetTilesShouldbeLoaded(const CameraState &inCameraState, TSet<ITileInfo*> & outTileSet);	

	//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别
	float  GetDegreePerPixelInScreen(const float meterPerDegree, const float pixelPerTile);

private:

	

	TileInfo_Grid* rootTile;

	int FinestLevelNum = 1;

	TArray<FVector2D>  GeoRangeInScreen;

	FVector screenCenterPt;		

	void GetCameraHalfLine(CameraState cameraState, TArray<HalfLine>& lines);

	FVector GetHalfLineIntersect(HalfLine line);

	TileInfo_Grid GetTileByDistance(CameraState cameraState, FVector xoyIntersect);

	TileInfo_Grid GetTileByCenterIntersect(CameraState cameraState, FVector &intersect);

	void  GetGeoRangeInScreen(const float meterPerDegree, const float pixelPerTile, TArray<FVector2D> &outGeoRange);

	int GetTilesLevelInScreen(const float meterPerDegree, const float pixelPerTile);

	void GetTilesByBFS_Iterations(TSet<ITileInfo*> &outTileSet);	
};