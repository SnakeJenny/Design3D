#pragma once

#include "SceneCulling.h"
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"


SceneCulling::SceneCulling()
{
}

SceneCulling_CenterTileStrategy::SceneCulling_CenterTileStrategy()
{}

SceneCulling_CenterTileStrategy::SceneCulling_CenterTileStrategy(Sphere_CoordinateSystem coordinateSystem, CameraState UE_CameraState)
{
	this->TileCoordinateSystem = coordinateSystem;

	this->rootNode = new TileNode(-1, 0, 0, NULL);

	this->GeoCameraState = UEToGeoCameraState(UE_CameraState);
}




//UE相机状态到地理相机状态
CameraState SceneCulling_CenterTileStrategy::UEToGeoCameraState(CameraState UE_CameraState)
{
	CameraState geoCameraState;
	//geoCameraState.Location = UEToGeoPosition(UE_CameraState.Location);
	geoCameraState.Location = this->TileCoordinateSystem.FromUE_CoordinateSystem(UE_CameraState.Location);
	//geoCameraState.Rotator = UEToGeoRotator(UE_CameraState.Rotator);
	geoCameraState.Rotator = UE_CameraState.Rotator;
	geoCameraState.AspectRatio = UE_CameraState.AspectRatio;
	geoCameraState.FOV = UE_CameraState.FOV;
	geoCameraState.screenResolution = UE_CameraState.screenResolution;
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
	//使用深圳市附近的参数作为参考，后续可以修改，地球上一度经度对应于多少米，不同纬度，值不一致，此处取深圳附近的数值
	//实际运算时，该参数为纬度的函数
	float meterPerDegree = 111318.0;
	float pixelPerTile = 256;

	float distance = Intersect.Z;
	float groundLengthInMeter = distance * FMath::Abs(FMath::Tan(cameraState.FOV * PI / 360.0));
	float degreePerPixel = groundLengthInMeter / (meterPerDegree* pixelPerTile);

	int level_i;
	for (level_i = 0; level_i < 20; ++level_i)
	{
		float degreePerPixelInLevle_i = 180.0f / (pixelPerTile * FMath::Pow(2, level_i));
		float degreePerPixelInNextLevle = 180.0f / (pixelPerTile * FMath::Pow(2, level_i + 1));

		if (degreePerPixel >= degreePerPixelInLevle_i)
			break;

		if (degreePerPixel < degreePerPixelInLevle_i && degreePerPixel > degreePerPixelInNextLevle)
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

	return TileInfo_Grid::GetTileByLevelNumAndCoord(level_i, Geographic2D(Intersect.X, Intersect.Y));
}

//通过相机射线，计算其与地球的交点
//当前采用简单计算方式，仅仅计算相机点与球心连线在地球表面的交点,经纬度，弧度制
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
	//若当前计算的最精细瓦片层级小于3，加载全部当前层级瓦片
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
	}//若当前最精细瓦片层级大于3，则按照核心4*4方阵，外扩策略，递归算法加载
	else
	{
		//1.基于种子瓦片计算其15邻域瓦片,存入结果数组
		TileNode seedTileNode = TileNode(seedTile);
		resultArray.Add(&seedTileNode);

		TArray<TileInfo_Grid*> neighbor_15_tiles;
		seedTile.GetNeighbor_15(neighbor_15_tiles);

		for (TileInfo_Grid* val : neighbor_15_tiles)
			resultArray.Add(new TileNode(val));

		//设定基于屏幕分辨率的外扩停止判定条件
		int breakScreenSize = FMath::Max(cameraState.screenResolution.X, cameraState.screenResolution.Y);
		//当前默认为当个瓦片256*256分辨率，后续改成通用变量
		int currentTotalTileSize = 4 * 256;
		int currentIterationIndex = 0;






		//currentIterationIndex += 1;
		//currentTotalTileSize *= 2;

		//while (currentTotalTileSize < breakScreenSize && currentIterationIndex <= MaxIteration)
		//{
		//	thisLevelNeighborTiles = upLevelBoundary12_Tile;
		//	for (int i = 0; i < thisLevelNeighborTiles.Num(); i++)
		//	{				
		//		TileNode currentTileNode = TileNode(thisLevelNeighborTiles[i]);
		//		resultArray.Add(&currentTileNode);
		//	}			
		//	upLevelBoundary12_Tile.RemoveAt(0, upLevelBoundary12_Tile.Num());

		//	thisLevelNeighborTiles[0].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		//	thisLevelNeighborTiles[3].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		//	thisLevelNeighborTiles[6].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		//	thisLevelNeighborTiles[9].GetParent().GetNeighbor_3(upLevelBoundary12_Tile);
		//	currentIterationIndex += 1;
		//	currentTotalTileSize *= 2;			
		//}
	}
	return resultArray;
}

//判定依据为当前屏幕的实际经纬度坐标是否与当前瓦片相交，如果相交，则调取其子瓦片，继续加载
TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTilesByBFS_Iterations2()
{
	//FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);
	this->GeoRangeInScreen = GetGeoRangeInScreen();
	
		TSet<TileNode*> resultTileSet;
	std::queue<TileNode *> BFS_Iteration_Queue;
	if (this->rootNode != NULL)
	{
		rootNode->CreateSubTileNode();
		for (TileNode* child : rootNode->children)
		{
			//0级两个瓦片不加载，最开始加载1级瓦片
			//BFS_Iteration_Queue.push(child);
			child->CreateSubTileNode();
			for (TileNode* childChild : child->children)
			{
				BFS_Iteration_Queue.push(childChild);
			}
		}

		while (!BFS_Iteration_Queue.empty())
		{
			TileNode *tileNode = BFS_Iteration_Queue.front();
			TileInfo_Grid * thisTileInfo_Grid = (TileInfo_Grid *)(tileNode->tileInfo);

			BFS_Iteration_Queue.pop();
			if (tileNode == NULL || thisTileInfo_Grid == NULL)
				continue;

			if (thisTileInfo_Grid->LevelNum > this->FinestLevelNum)
				continue;

			if (!thisTileInfo_Grid->IsGeoRangeIntersect(this->GeoRangeInScreen))
			{
				resultTileSet.Add(tileNode);
			}
			else
			{
				//若当前加载层级跟需要加载的最精细层级相同，且屏幕中心点在该瓦片内，只加载该瓦片，不加载该瓦片子瓦片
				if (thisTileInfo_Grid->LevelNum == this->FinestLevelNum)
				{
					resultTileSet.Add(tileNode);
					continue;
				}
				tileNode->CreateSubTileNode();
				for (TileNode* tileNode_Child : tileNode->children)
				{
					BFS_Iteration_Queue.push(tileNode_Child);
				}
			}
		}
	}
	return resultTileSet;
}

//判定依据为屏幕中心点是否落在当前瓦片中，如果落在当前瓦片中，则加载其子瓦片
TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTilesByBFS_Iterations()
{
	FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);

	TSet<TileNode*> resultTileSet;
	std::queue<TileNode *> BFS_Iteration_Queue;
	if (this->rootNode != NULL)
	{
		rootNode->CreateSubTileNode();
		for (TileNode* child : rootNode->children)
		{
			//0级两个瓦片不加载，最开始加载1级瓦片
			//BFS_Iteration_Queue.push(child);
			child->CreateSubTileNode();
			for (TileNode* childChild : child->children)
			{
				BFS_Iteration_Queue.push(childChild);
			}
		}

		while (!BFS_Iteration_Queue.empty())
		{
			TileNode *tileNode = BFS_Iteration_Queue.front();
			TileInfo_Grid * thisTileInfo_Grid = (TileInfo_Grid *)(tileNode->tileInfo);

			BFS_Iteration_Queue.pop();
			if (tileNode == NULL || thisTileInfo_Grid == NULL)
				continue;

			if (thisTileInfo_Grid->LevelNum > this->FinestLevelNum)
				continue;

			if (!thisTileInfo_Grid->IsPositionIn(screenCenterPtInDegree))
			{
				resultTileSet.Add(tileNode);
			}
			else
			{
				//若当前加载层级跟需要加载的最精细层级相同，且屏幕中心点在该瓦片内，只加载该瓦片，不加载该瓦片子瓦片
				if (thisTileInfo_Grid->LevelNum == this->FinestLevelNum)
				{
					resultTileSet.Add(tileNode);
					continue;
				}
				tileNode->CreateSubTileNode();
				for (TileNode* tileNode_Child : tileNode->children)
				{
					BFS_Iteration_Queue.push(tileNode_Child);
				}
			}
		}
	}
	return resultTileSet;
}

//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别
int  SceneCulling_CenterTileStrategy::GetTilesLevelInScreen()
{
	//使用深圳市附近的参数作为参考，后续可以修改，地球上一度经度对应于多少米，不同纬度，值不一致，此处取深圳附近的数值
	//实际运算时，该参数为纬度的函数
	float meterPerDegree = 111318.0;
	//tile的pixel参数
	float pixelPerTile = 256;

	//目前仅考虑相机位置作为相机射线与地面交点，相机与地面交点的距离用相机高度代替，后续会根据相机的方位具体来计算
	float distance = this->GeoCameraState.Location.Z;

	//屏幕宽度/长度对应的地理距离（单位，米）
	float groundLengthInMeter = distance * FMath::Abs(FMath::Tan(this->GeoCameraState.FOV * PI / 360.0)) * 2;
	//屏幕宽度/长度对应的地理距离（单位，度）
	float groundLengthInDegree = groundLengthInMeter / meterPerDegree;

	//基于屏幕分辨率，确定屏幕单个像素对应于地理距离（单位，度）
	float degreePerPixelInScreen = groundLengthInDegree / (FMath::Max(this->GeoCameraState.screenResolution.X, this->GeoCameraState.screenResolution.Y));

	int level_i;
	for (level_i = 0; level_i < 20; ++level_i)
	{
		float degreePerPixelInLevle_i = 180.0f / (pixelPerTile * FMath::Pow(2, level_i));
		float degreePerPixelInNextLevle = 180.0f / (pixelPerTile * FMath::Pow(2, level_i + 1));

		if (degreePerPixelInScreen >= degreePerPixelInLevle_i)
			break;
		if (degreePerPixelInScreen < degreePerPixelInLevle_i && degreePerPixelInScreen > degreePerPixelInNextLevle)
			break;
	}

	return level_i;
}

//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别,基于此计算当前屏幕实际的经纬度范围
//返回结果为四个点pt0(minX,minY) pt1(maxX,minY) pt2(maxX,maxY) pt3(minX,maxY)
TArray<FVector2D>  SceneCulling_CenterTileStrategy::GetGeoRangeInScreen()
{
	TArray<FVector2D> result;
	FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);

	float pixelLengthInDegree = GetDegreePerPixelInScreen();

	if (pixelLengthInDegree == 0||this->GeoCameraState.screenResolution.X ==0|| this->GeoCameraState.screenResolution.Y == 0)
		return result;

	FVector2D minPt = FVector2D(screenCenterPtInDegree.X - (this->GeoCameraState.screenResolution.X * pixelLengthInDegree) / 2
		, screenCenterPtInDegree.Y - (this->GeoCameraState.screenResolution.Y * pixelLengthInDegree) / 2);
	if (minPt.X < -180.0)
		minPt.X += 360.0;
	if (minPt.Y < -90.0)
		minPt.Y = (minPt.Y + 180.0)*-1.0;
	result.Add(minPt);


	FVector2D maxPt = FVector2D(screenCenterPtInDegree.X + (this->GeoCameraState.screenResolution.X * pixelLengthInDegree) / 2
		, screenCenterPtInDegree.Y + (this->GeoCameraState.screenResolution.Y * pixelLengthInDegree) / 2);
	if (maxPt.X > 180.0)
		maxPt.X -= 360.0;
	if (maxPt.Y > 90.0)
		maxPt.Y = 180.0 - maxPt.Y;	

	result.Add(FVector2D(maxPt.X,minPt.Y));
	result.Add(maxPt);
	result.Add(FVector2D(minPt.X, maxPt.Y));

	return result;
}

//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别
float  SceneCulling_CenterTileStrategy::GetDegreePerPixelInScreen()
{
	//使用深圳市附近的参数作为参考，后续可以修改，地球上一度经度对应于多少米，不同纬度，值不一致，此处取深圳附近的数值
	//实际运算时，该参数为纬度的函数
	float meterPerDegree = 111318.0;
	//tile的pixel参数
	float pixelPerTile = 256;

	//目前仅考虑相机位置作为相机射线与地面交点，相机与地面交点的距离用相机高度代替，后续会根据相机的方位具体来计算
	float distance = this->GeoCameraState.Location.Z;

	//屏幕宽度/长度对应的地理距离（单位，米）
	float groundLengthInMeter = distance * FMath::Abs(FMath::Tan(this->GeoCameraState.FOV * PI / 360.0)) * 2;
	//屏幕宽度/长度对应的地理距离（单位，度）
	float groundLengthInDegree = groundLengthInMeter / meterPerDegree;

	//基于屏幕分辨率，确定屏幕单个像素对应于地理距离（单位，度）
	float degreePerPixelInScreen = groundLengthInDegree / (FMath::Max(this->GeoCameraState.screenResolution.X, this->GeoCameraState.screenResolution.Y));

	return degreePerPixelInScreen;
}

//计算当前应该加载的瓦片
TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTilesShouldbeLoaded(CameraState UE_CameraState, FVector2D CurrentScreenResolution)
{
	//1，通过变换将ue相机状态转为地理相机状态
	this->GeoCameraState = UEToGeoCameraState(UE_CameraState);
	//FString Message = "X = " + FString::SanitizeFloat(FMath::RadiansToDegrees(this->GeoCameraState.Location.X)) + "; Y = " + FString::SanitizeFloat(FMath::RadiansToDegrees(this->GeoCameraState.Location.Y)) + "; Z = " + FString::SanitizeFloat(this->GeoCameraState.Location.Z);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Message);

	//2.根据UE相机位置，角度参数，计算相机射线与地球表面交点的经纬度坐标
	HalfLine CameraShootToEarthSurface;
	CameraShootToEarthSurface.BasePoint = UE_CameraState.Location;
	CameraShootToEarthSurface.Direction = UE_CameraState.Rotator;

	this->screenCenterPt = GetHalfLineIntersect(CameraShootToEarthSurface);

	//3.根据相机方位、FOV，计算当前帧屏幕所需要加载的最精细瓦片的层级
	this->FinestLevelNum = GetTilesLevelInScreen();

	//4.获取当前帧，屏幕地理范围
	this->GeoRangeInScreen = GetGeoRangeInScreen();

	TSet<TileNode*> resultArray = GetTilesByBFS_Iterations2();

	return resultArray;
}

void SceneCulling_CenterTileStrategy::UpdateGeoCameraLocation(FVector &inLocation)
{
	this->GeoCameraState.Location = inLocation;
}