#pragma once

#include "SceneCulling.h"
#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"


SceneCulling_CenterTileStrategy::SceneCulling_CenterTileStrategy()
{
	
}



//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别
float  SceneCulling_CenterTileStrategy::GetDegreePerPixelInScreen(const float meterPerDegree,const float pixelPerTile)
{
	//使用深圳市附近的参数作为参考，后续可以修改，地球上一度经度对应于多少米，不同纬度，值不一致，此处取深圳附近的数值
	//实际运算时，该参数为纬度的函数
	//float meterPerDegree = 111318.0;
	//tile的pixel参数
	//float pixelPerTile = 256;
	
	//目前仅考虑相机位置作为相机射线与地面交点，相机与地面交点的距离用相机高度代替，后续会根据相机的方位具体来计算
	float distance = this->currentCameraState.Location.Z;

	//屏幕宽度/长度对应的地理距离（单位，米）
	float groundLengthInMeter = distance * FMath::Abs(FMath::Tan(this->currentCameraState.FOV * PI / 360.0)) * 2;
	//屏幕宽度/长度对应的地理距离（单位，度）
	float groundLengthInDegree = groundLengthInMeter / meterPerDegree;

	//基于屏幕分辨率，确定屏幕单个像素对应于地理距离（单位，度）
	float degreePerPixelInScreen = groundLengthInDegree / (FMath::Max(this->currentCameraState.screenResolution.X, this->currentCameraState.screenResolution.Y));

	return degreePerPixelInScreen;
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
	return line.BasePoint;
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

//判定依据为当前屏幕的实际经纬度坐标是否与当前瓦片相交，如果相交，则调取其子瓦片，继续加载
void SceneCulling_CenterTileStrategy::GetTilesByBFS_Iterations(TSet<ITileInfo*> & outTiles)
{
	//FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);
	
	if (this->GeoRangeInScreen.Num() != 4)
		return;

	//构建0层两个瓦片，作为初始遍历瓦片
	TArray<TileInfo_Grid*> rootTiles;
	rootTiles.Add(new TileInfo_Grid(0, 0, 0));
	rootTiles.Add(new TileInfo_Grid(0, 0, 1));

	std::queue<TileInfo_Grid * > BFS_Iteration_Queue;
	if (rootTiles.Num() > 0)
	{		
		for (TileInfo_Grid* level0Tile : rootTiles)
		{
			//0级两个瓦片不加载，最开始加载1级瓦片			
			TArray<TileInfo_Grid*> level0Children;
			level0Tile->GetChildren(level0Children);

			for (TileInfo_Grid* level1Tile : level0Children)
			{
				BFS_Iteration_Queue.push(level1Tile);
			}
		}

		//遍历待检索队列
		while (!BFS_Iteration_Queue.empty())
		{
			//获取队列中首位瓦片
			TileInfo_Grid * currentTile = BFS_Iteration_Queue.front();		
			BFS_Iteration_Queue.pop();

			//若该瓦片为空，或该瓦片层级大于当前应该加载的最精细一级瓦片层级，则跳过
			if (currentTile == NULL)
				continue;
			if (currentTile->LevelNum > this->FinestLevelNum)
				continue;

			//若该瓦片在当前屏幕中不可见，加载该瓦片，不加载其子瓦片
			if (!currentTile->IsGeoRangeIntersect(this->GeoRangeInScreen))
			{
				outTiles.Add(currentTile);
			}
			//若该瓦片在当前屏幕范围中可见，则加载该瓦片下一级瓦片，不加载该瓦片
			else
			{
				//若当前瓦片即为应该加载的最精细一级瓦片,则只加载该瓦片，不加载该瓦片子瓦片
				if (currentTile->LevelNum == this->FinestLevelNum)
				{
					outTiles.Add(currentTile);
					continue;
				}

				//获取该瓦片子瓦片并加入待检索队列
				TArray<TileInfo_Grid*> currentTileChildren;
				currentTile->GetChildren(currentTileChildren);
				
				for (TileInfo_Grid* currentTile_Child : currentTileChildren)
				{
					BFS_Iteration_Queue.push(currentTile_Child);
				}
			}
		}
	}	
}

//基于相机方位、屏幕分辨率计算当前屏幕下的实际需要载入的最精细瓦片级别
int  SceneCulling_CenterTileStrategy::GetTilesLevelInScreen(const float meterPerDegree, const float pixelPerTile)
{
	//目前仅考虑相机位置作为相机射线与地面交点，相机与地面交点的距离用相机高度代替，后续会根据相机的方位具体来计算
	float distance = this->currentCameraState.Location.Z;

	//屏幕宽度/长度对应的地理距离（单位，米）
	float groundLengthInMeter = distance * FMath::Abs(FMath::Tan(this->currentCameraState.FOV * PI / 360.0)) * 2;
	//屏幕宽度/长度对应的地理距离（单位，度）
	float groundLengthInDegree = groundLengthInMeter / meterPerDegree;

	//基于屏幕分辨率，确定屏幕单个像素对应于地理距离（单位，度）
	float degreePerPixelInScreen = groundLengthInDegree / (FMath::Max(this->currentCameraState.screenResolution.X, this->currentCameraState.screenResolution.Y));

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
void SceneCulling_CenterTileStrategy::GetGeoRangeInScreen(const float meterPerDegree, const float pixelPerTile, TArray<FVector2D> &outGeoRange)
{
	//最精细的瓦片占整个屏幕范围比率
	float finestRatio = 1.0;

	FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);

	float pixelLengthInDegree = GetDegreePerPixelInScreen(meterPerDegree, pixelPerTile);

	if (pixelLengthInDegree == 0 || this->currentCameraState.screenResolution.X == 0 || this->currentCameraState.screenResolution.Y == 0)
		return;

	FVector2D minPt = FVector2D(screenCenterPtInDegree.X - (this->currentCameraState.screenResolution.X * pixelLengthInDegree) * finestRatio*0.5
		, screenCenterPtInDegree.Y - (this->currentCameraState.screenResolution.Y * pixelLengthInDegree) * finestRatio*0.5);
	//考虑零度经线、南北极极端情况
	if (minPt.X < -180.0)
		minPt.X += 360.0;
	if (minPt.Y < -90.0)
		minPt.Y = (minPt.Y + 180.0)*-1.0;
	outGeoRange.Add(minPt);


	FVector2D maxPt = FVector2D(screenCenterPtInDegree.X + (this->currentCameraState.screenResolution.X * pixelLengthInDegree) * finestRatio*0.5
		, screenCenterPtInDegree.Y + (this->currentCameraState.screenResolution.Y * pixelLengthInDegree) * finestRatio*0.5);
	//考虑零度经线、南北极极端情况
	if (maxPt.X > 180.0)
		maxPt.X -= 360.0;
	if (maxPt.Y > 90.0)
		maxPt.Y = 180.0 - maxPt.Y;

	outGeoRange.Add(FVector2D(maxPt.X, minPt.Y));
	outGeoRange.Add(maxPt);
	outGeoRange.Add(FVector2D(minPt.X, maxPt.Y));
}



//计算当前应该加载的瓦片
void SceneCulling_CenterTileStrategy::GetTilesShouldbeLoaded(const CameraState &inCameraState, TSet<ITileInfo*> & outTileSet)
{
	//1，通过变换将ue相机状态转为地理相机状态
	this->currentCameraState = inCameraState;
	//FString Message = "X = " + FString::SanitizeFloat(FMath::RadiansToDegrees(this->GeoCameraState.Location.X)) + "; Y = " + FString::SanitizeFloat(FMath::RadiansToDegrees(this->GeoCameraState.Location.Y)) + "; Z = " + FString::SanitizeFloat(this->GeoCameraState.Location.Z);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Message);

	//2.根据UE相机位置，角度参数，计算相机射线与地球表面交点的经纬度坐标
	HalfLine CameraShootToEarthSurface;
	CameraShootToEarthSurface.BasePoint = currentCameraState.Location;
	CameraShootToEarthSurface.Direction = currentCameraState.Rotator;

	//使用深圳市附近的参数作为参考，后续可以修改，地球上一度经度对应于多少米，不同纬度，值不一致，此处取深圳附近的数值
	//实际运算时，该参数为纬度的函数
	float meterPerDegree = 111318.0;
	//tile的pixel参数
	float pixelPerTile = 256;

	this->screenCenterPt = GetHalfLineIntersect(CameraShootToEarthSurface);

	//3.根据相机方位、FOV，计算当前帧屏幕所需要加载的最精细瓦片的层级
	this->FinestLevelNum = GetTilesLevelInScreen(meterPerDegree, pixelPerTile);

	//4.获取当前帧，屏幕地理范围
	TArray<FVector2D> currentGeoRange;
	GetGeoRangeInScreen(meterPerDegree, pixelPerTile, currentGeoRange);
	if (currentGeoRange.Num() == 4)
		this->GeoRangeInScreen = currentGeoRange;

	GetTilesByBFS_Iterations(outTileSet);
}

////判定依据为屏幕中心点是否落在当前瓦片中，如果落在当前瓦片中，则加载其子瓦片
//TSet<TileNode*> SceneCulling_CenterTileStrategy::GetTilesByBFS_Iterations()
//{
//	FVector screenCenterPtInDegree = FVector(FMath::RadiansToDegrees(this->screenCenterPt.X), FMath::RadiansToDegrees(this->screenCenterPt.Y), screenCenterPt.Z);
//
//	TSet<TileNode*> resultTileSet;
//	std::queue<TileNode *> BFS_Iteration_Queue;
//	if (this->rootNode != NULL)
//	{
//		rootNode->CreateSubTileNode();
//		for (TileNode* child : rootNode->children)
//		{
//			//0级两个瓦片不加载，最开始加载1级瓦片
//			//BFS_Iteration_Queue.push(child);
//			child->CreateSubTileNode();
//			for (TileNode* childChild : child->children)
//			{
//				BFS_Iteration_Queue.push(childChild);
//			}
//		}
//
//		while (!BFS_Iteration_Queue.empty())
//		{
//			TileNode *tileNode = BFS_Iteration_Queue.front();
//			TileInfo_Grid * thisTileInfo_Grid = (TileInfo_Grid *)(tileNode->tileInfo);
//
//			BFS_Iteration_Queue.pop();
//			if (tileNode == NULL || thisTileInfo_Grid == NULL)
//				continue;
//
//			if (thisTileInfo_Grid->LevelNum > this->FinestLevelNum)
//				continue;
//
//			if (!thisTileInfo_Grid->IsPositionIn(screenCenterPtInDegree))
//			{
//				resultTileSet.Add(tileNode);
//			}
//			else
//			{
//				//若当前加载层级跟需要加载的最精细层级相同，且屏幕中心点在该瓦片内，只加载该瓦片，不加载该瓦片子瓦片
//				if (thisTileInfo_Grid->LevelNum == this->FinestLevelNum)
//				{
//					resultTileSet.Add(tileNode);
//					continue;
//				}
//				tileNode->CreateSubTileNode();
//				for (TileNode* tileNode_Child : tileNode->children)
//				{
//					BFS_Iteration_Queue.push(tileNode_Child);
//				}
//			}
//		}
//	}
//	return resultTileSet;
//}

