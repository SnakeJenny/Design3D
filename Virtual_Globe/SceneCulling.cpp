#pragma once

#include "SceneCulling.h"
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"


SceneCulling::SceneCulling()
{	
}



SceneCulling_CenterTileStrategy::SceneCulling_CenterTileStrategy(Sphere_CoordinateSystem coordinateSystem)
{
	this->TileCoordinateSystem = coordinateSystem;
}


//UE相机状态到地理相机状态
CameraState SceneCulling_CenterTileStrategy::UEToGeoCameraState(CameraState UE_CameraState)
{
	CameraState geoCameraState;
	//geoCameraState.Location = UEToGeoPosition(UE_CameraState.Location);
	geoCameraState.Location = UE_CameraState.Location;
	//geoCameraState.Rotator = UEToGeoRotator(UE_CameraState.Rotator);
	geoCameraState.Rotator = UE_CameraState.Rotator;
	geoCameraState.AspectRatio = UE_CameraState.AspectRatio;
	geoCameraState.FOV = UE_CameraState.FOV;
	return geoCameraState;
}

//基于相机状态，获取其朝向的射线
void SceneCulling_CenterTileStrategy::GetCameraHalfLine(CameraState cameraState, TArray<HalfLine>& lines)
{
	HalfLine centerHalfLine;
	centerHalfLine.BasePoint = cameraState.Location;
	centerHalfLine.Direction = cameraState.Rotator;

	lines.Add(centerHalfLine);
}

//基于相机位置、方位，计算当前相机中心视点与地理坐标的交点
//xoyIntersect ， lon是x， lat是y,height是z
TileInfo_Grid SceneCulling_CenterTileStrategy::GetTileByDistance(CameraState cameraState, FVector Intersect)
{
	float distance = Intersect.Z;
	float pixelDegree = distance * FMath::Abs(FMath::Tan(cameraState.FOV * PI / 360.0)) / 500;
	int i;
	for (i = 0; i < 20; ++i)
	{
		float degree = 180.0f / (256 * FMath::Pow(2, i));
		float degreeNext = 180.0f / (256 * FMath::Pow(2, i + 1));

		if (pixelDegree >= degree)
			break;

		if (pixelDegree < degree && pixelDegree > degreeNext)
			break;
	}

	//将经纬度弧度转角度
	FVector2D IntersectInDegree = FVector2D((Intersect.X / PI)*180.0, (Intersect.Y / PI)*180.0);

	if (IntersectInDegree.Y < -90 || IntersectInDegree.Y > 90 || IntersectInDegree.X < -180 || IntersectInDegree.X > 180)
	{
		TileInfo_Grid tile;
		tile.LevelNum = 1;
		tile.Row = 1;

		tile.Col = 2;
		return tile;
	}

	return TileInfo_Grid::GetTileByLevelNumAndCoord(i, Geographic2D(Intersect.X, Intersect.Y));
}

//通过相机射线，计算其与地球的交点
//当前采用简单计算方式，仅仅计算相机点与球心连线在地球表面的交点
FVector SceneCulling_CenterTileStrategy::GetHalfLineIntersect(HalfLine line)
{
	//FQuat quat = line.Direction.Quaternion();
	//quat.Normalize();
	//FVector endPoint = quat.Vector() + line.BasePoint;

	//FVector intersect;
	////if (endPoint.Z >= line.BasePoint.Z)
	////{
	////	intersect.X = INFINITY; 
	////	intersect.Y = INFINITY;		 
	////}
	////else
	//{
	//	intersect.Z = 0.0f;
	//	intersect.X = (endPoint.X - line.BasePoint.X) * (intersect.Z - line.BasePoint.Z) / (endPoint.Z - line.BasePoint.Z) + line.BasePoint.X;
	//	intersect.Y = (endPoint.Y - line.BasePoint.Y) * (intersect.Z - line.BasePoint.Z) / (endPoint.Z - line.BasePoint.Z) + line.BasePoint.Y;
	//}

	//return FVector2D(intersect);

	//返回值，lon是x，lat是y	
	FVector intersect = this->TileCoordinateSystem.FromUE_CoordinateSystem(line.BasePoint);
	return intersect;
}

//通过相机中心射线与地球交点，计算中心交点应该加载的最精细瓦片
TileInfo_Grid SceneCulling_CenterTileStrategy::GetTileByCenterIntersect(CameraState GeoCameraState, FVector &IntersectPt)
{ 
	TArray<HalfLine> lines;

	GetCameraHalfLine(GeoCameraState, lines);
	HalfLine centerLine = lines[0];

	IntersectPt = GetHalfLineIntersect(centerLine);

	TileInfo_Grid tile = GetTileByDistance(GeoCameraState, IntersectPt);
	return tile;
}

//根据种子瓦片，计算应该加载的所有其他瓦片，存入集合
TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTileSetBySeedTile(CameraState cameraState, TileInfo_Grid seedTile, int MaxIteration)
{
	TSet<TileNode*> resultArray;
	//若当前计算的最精细瓦片层级小于3，加载全部第二层级瓦片
	if (seedTile.LevelNum < 3)
	{
		int totalRow = seedTile.GetTileRowCountInGlobe();
		int totalCol = seedTile.GetTileColCountInGlobe();
		for (int i = 0; i < totalRow; i++)
		{
			for (int j = 0; j < totalCol; j++)
			{
				TileNode currentTileNode = TileNode(seedTile.LevelNum, i, j);
				resultArray.Add(&currentTileNode);
			}
		}
	}//若当前最精细瓦片层级大于3，则按照核心4*4方阵，外扩策略加载
	else
	{
		TileNode seedTileNode = TileNode(seedTile);
		resultArray.Add(&seedTileNode);

		TArray<TileInfo_Grid> Neighbor_15_Tile;
		seedTile.GetNeighbor_15(Neighbor_15_Tile);
		for (int i = 0; i < Neighbor_15_Tile.Num(); i++)
		{
			TileNode currentTileNode = TileNode(Neighbor_15_Tile[i]);
			resultArray.Add(&currentTileNode);			
		}
		//设定基于屏幕分辨率的外扩停止判定条件
		int breakScreenSize = FMath::Max(cameraState.screenResolution.X, cameraState.screenResolution.Y);
				
		//当前默认为当个瓦片256*256分辨率，后续改成通用变量
		int currentTotalTileSize = 4 * 256;
		int currentIterationIndex = 0;

		TArray<TileInfo_Grid> thisLevelNeighborTiles = Neighbor_15_Tile;
		TArray<TileInfo_Grid> upLevelBoundary12_Tile;

		thisLevelNeighborTiles[0].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		thisLevelNeighborTiles[3].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		thisLevelNeighborTiles[11].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		thisLevelNeighborTiles[14].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		currentIterationIndex += 1;
		currentTotalTileSize *= 2;
		
		while (currentTotalTileSize < breakScreenSize && currentIterationIndex <= MaxIteration)
		{
			thisLevelNeighborTiles = upLevelBoundary12_Tile;
			for (int i = 0; i < thisLevelNeighborTiles.Num(); i++)
			{				
				TileNode currentTileNode = TileNode(thisLevelNeighborTiles[i]);
				resultArray.Add(&currentTileNode);
			}			
			upLevelBoundary12_Tile.RemoveAt(0, upLevelBoundary12_Tile.Num());

			thisLevelNeighborTiles[0].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
			thisLevelNeighborTiles[3].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
			thisLevelNeighborTiles[6].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
			thisLevelNeighborTiles[9].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
			currentIterationIndex += 1;
			currentTotalTileSize *= 2;			
		}
	}
	return resultArray;
}


//计算当前应该加载的瓦片
TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTilesShouldbeLoaded(CameraState UE_CameraState, FVector2D CurrentScreenResolution)
{
	//1，通过变换将ue相机状态转为地理相机状态
	this->GeoCameraState = UEToGeoCameraState(UE_CameraState);

	//2，通过当前的坐标系统信息，将笛卡尔椭球坐标系中的相机位置，转换为经纬度/高度，便于后续计算中心瓦片
	FVector GeoGlobePosition = this->TileCoordinateSystem.FromUE_CoordinateSystem(GeoCameraState.Location);

	//3, 根据当前相机与地球交点的距离，屏幕分辨率，确定加载最精细瓦片的级别和对应的种子瓦片
	FVector Intersect;
	TileInfo_Grid seedTile = GetTileByCenterIntersect(GeoCameraState, Intersect);

	//4，根据种子瓦片，计算当前视角需要加载的所有瓦片集合
	TSet<TileNode*> resultArray = GetTileSetBySeedTile(GeoCameraState, seedTile,4);
		
	return resultArray;
}

