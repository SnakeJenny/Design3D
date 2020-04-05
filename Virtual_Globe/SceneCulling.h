#pragma once
#include "CoreMinimal.h"
#include "CoordinateSystem.h"
#include "TileInfo.h"


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

struct HalfLine
{
	FVector BasePoint;
	FRotator Direction;
};

//定义在当前世界的坐标系统中，相机相关操作的管理类，有别于UE自带的相机类
//主要职责为完成从UE相机获取得到相关参数后，实现基于视点位置的待载入瓦片数据集计算
class SceneCulling
{
public:
	//世界相机的状态
	CameraState GeoCameraState;

	//当前瓦片的坐标系统
	CoordinateSystem TileCoordinateSystem;

	//构造函数
	SceneCulling();		
};

class SceneCulling_CenterTileStrategy :SceneCulling
{
public:
	SceneCulling_CenterTileStrategy(CoordinateSystem coordinateSystem);
	//根据瓦片数据集（内含瓦片划分规则），相机位置，屏幕分辨率，
	//计算当前视口应该加载并显示的瓦片数据集
	//本方法基于四叉树索引
	TSet<TileNode> GetTilesShouldbeLoaded(CameraState UE_CameraState, FVector2D CurrentScreenResolution);

	//从ue相机状态，转换为当前地理场景的相机状态
	CameraState UEToGeoCameraState(CameraState UE_CameraState);

private:
	void GetCameraHalfLine(CameraState cameraState, TArray<HalfLine>& lines);

	FVector GetHalfLineIntersect(HalfLine line);

	TileInfo_Grid GetTileByDistance(CameraState cameraState, FVector xoyIntersect);

	TileInfo_Grid GetTileByCenterIntersect(CameraState cameraState, FVector &intersect);

	TSet<TileNode> GetTileSetBySeedTile(CameraState cameraState, TileInfo_Grid seedTile, int MaxIteration);
};




