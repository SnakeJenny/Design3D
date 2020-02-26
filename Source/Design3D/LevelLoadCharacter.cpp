// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelLoadCharacter.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "misc/Paths.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "Camera/PlayerCameraManager.h"
#include <time.h>  
#include "Logging/LogMacros.h"
#include "CoreUObject/Public/UObject/Package.h"
#include "CoreUObject/Public/UObject/LinkerLoad.h"
#include "GameFramework/CharacterMovementComponent.h"

#define CLOCKS_PER_SEC ((clock_t)1000) 


////////////////////////////////////////////// Tile  Functions ///////////////////////////////////////////////////////////

FString Tile::TileToString()
{	
	FString filename = FString::Printf(TEXT("%02d_%010d_%010d"), layer, row, col);
	return filename;
}


Tile Tile::FromString(FString name)
{
	FString layer = name.Mid(0, 2);
	FString row = name.Mid(3, 10);
	FString col = name.Mid(14, 10);
	Tile tile;
	tile.layer = FCString::Atoi(*layer);
	tile.row = FCString::Atoi(*row);
	tile.col = FCString::Atoi(*col);

	return tile;
}


bool Tile::IsLevelFileExist()
{
	FString RootPath = FString(R"(D:\Github\master_szu\ue4_project\Design3D\Content\)");
	FString levelmapPath = RootPath + FString::FromInt(layer) + R"(\)" + FString::FromInt(col) + R"(\u)" + FString::FromInt(row) + ".umap";
	if (FPaths::FileExists(levelmapPath))
	{
		return true;
	}
	else
	{
		return false;
	}

}


Tile Tile::GetTileByLayerAndCoord(int layer, FVector2D coord)
{
	Tile tile;
	tile.layer = layer;

	int rowNum = pow(2, layer);
	// 计算切片中心的实际经纬度
	tile.col = coord.Y  * (2 * rowNum) / 360 + rowNum; // lon
	tile.row = coord.X * rowNum / 180 + rowNum / 2.0;   // lat
	return tile;
}


void Tile::CalcTileGeographicPosition(FVector2D &center, FVector2D &size)
{
	int rowNum = pow(2, this->layer);
	size.X = 180.0 / rowNum;
	size.Y = size.X;
	// 计算切片中心的实际经纬度
	float lon = (this->col - rowNum + 0.5) * 360 / (2 * rowNum);
	float lat = (this->row - rowNum / 2.0 + 0.5) * 180 / rowNum;
	if (this->layer == 0)
	{
		lon = 180 * (this->col - 0.5);
		lat = 0;
	}
	center.X = lat;
	center.Y = lon;
}


FString Tile::GetLevelDiskPath()
{
	FString fileName = FString::FromInt(layer) + R"(/)" + FString::FromInt(col) + R"(/u)" + FString::FromInt(row);

	FString LongPackageName = "/Game/" + fileName;

	return LongPackageName;
}


bool Tile::IsPositionIn(const FVector2D& pos)
{
	FVector2D c, s;
	CalcTileGeographicPosition(c, s);
	if (pos.X >= (c.X - s.X) && pos.X < (c.X + s.X)
		&& pos.Y >= (c.Y - s.Y) && pos.Y < (c.Y + s.Y))
		return true;
	return false;

}



/////////////////////////////////////////////////////////////////////







ULevelLoadedFunClass::ULevelLoadedFunClass()
{
	levelTranform = NewObject<ULevelTranform>();
	levelTranform->AddToRoot();
}


void ULevelLoadedFunClass::OnLevelLoadedFun()
{
	if (levelStream->IsLevelLoaded())
	{
		levelTranform->TransformLevel(levelStream->GetLoadedLevel(), tile);
		levelStream->SetShouldBeVisible(true);
		
	}

	this->levelLoaderOneByOne->isLoadingOrUnLoading = false;
	//FString str = TEXT("End Load level" + tile.TileToString() + "!");


	UE_LOG(LogTemp, Warning, TEXT("End Load level %s!"), *(tile.TileToString()));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	
}

void ULevelLoadedFunClass::OnLevelUnLoadedFun()
{

	FString tileName = tile.TileToString();
	

	

}



void ULevelLoaderOneByOne::LoadLevelInternal(const FString& levelName)
{
	//FString str = TEXT("Begin Load level" + levelName + "!");
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	UE_LOG(LogTemp, Warning, TEXT("Begin Load level %s!"), *levelName);

	Tile tile = Tile::FromString(levelName);
	if (!tile.IsLevelFileExist())
	{
		isLoadingOrUnLoading = false;
		return;
	}
	FString LongPackageName = tile.GetLevelDiskPath();

	ULevelStreamingDynamic* StreamingLevel = NewObject<ULevelStreamingDynamic>(GWorld, ULevelStreamingDynamic::StaticClass(), NAME_None, RF_Transient, NULL);
	StreamingLevel->AddToRoot();
	StreamingLevel->SetWorldAssetByPackageName(FName(*LongPackageName));
	StreamingLevel->LevelColor = FColor::MakeRandomColor();
	StreamingLevel->SetShouldBeLoaded(true);
	StreamingLevel->SetShouldBeVisible(false);
	StreamingLevel->bShouldBlockOnLoad = false;
	StreamingLevel->bInitiallyLoaded = true;
	StreamingLevel->bInitiallyVisible = false;

	ULevelLoadedFunClass *funClass = NewObject<ULevelLoadedFunClass>();
	funClass->AddToRoot();
	
	funClass->levelStream = StreamingLevel;
	funClass->tile = tile;
	funClass->levelLoaderOneByOne = this;

	FScriptDelegate *fsd = new FScriptDelegate();

	fsd->BindUFunction(funClass, "OnLevelLoadedFun");
	StreamingLevel->OnLevelLoaded.Add(*fsd);
	

	// Map to Load
	StreamingLevel->PackageNameToLoad = FName(*LongPackageName);
	// Add the new level to world.
	GWorld->AddStreamingLevel(StreamingLevel);

	levelLoaded.Add(tile.TileToString(), StreamingLevel);
	
	return;
}


void ULevelLoaderOneByOne::UnLoadLevelInternal(const FString& levelName)
{	
	//FString str = TEXT("Begin UnLoad level" + levelName + "!");
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	UE_LOG(LogTemp, Warning, TEXT("Begin UnLoad level %s!"), *levelName);
	if (!levelLoaded.Contains(levelName))
	{
		isLoadingOrUnLoading = false;
		//FString str = TEXT("End UnLoad level" + levelName + "!");
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
		UE_LOG(LogTemp, Warning, TEXT("End UnLoad level %s!"), *levelName);
		return;
	}

	ULevelStreamingDynamic* StreamingLevel = levelLoaded[levelName];

	StreamingLevel->SetShouldBeVisible(false);
	StreamingLevel->SetIsRequestingUnloadAndRemoval(true);
	isLoadingOrUnLoading = false;
	//str = TEXT("End UnLoad level" + levelName + "!");
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	UE_LOG(LogTemp, Warning, TEXT("End UnLoad level %s!"), *levelName);
	
	return;
}




void  ULevelLoaderOneByOne::OnTick()
{
	if (!isLoadingOrUnLoading)
	{
		if (!levelOperQueue.empty())
		{
			LevelOper oper = levelOperQueue.front();
			levelOperQueue.pop();
			isLoadingOrUnLoading = true;

			

			if (oper.isLoaded)
			{
				LoadLevelInternal(oper.tileName);
			}
			else
			{
				UnLoadLevelInternal(oper.tileName);
			}
		}
	}
}


void ULevelLoaderOneByOne::LoadLevel(const FString& levelName)
{

	levelOperQueue.push(LevelOper(true,levelName));
}


void ULevelLoaderOneByOne::UnLoadLevel(const FString& levelName)
{
	levelOperQueue.push(LevelOper(false, levelName));	
}


ULevelLoaderOneByOne::ULevelLoaderOneByOne()
{
	isLoadingOrUnLoading = false;
}

////////////////////////////////////////////// SceneLevelTreeManager  Functions ///////////////////////////////////////////////////////////




SceneLevelTreeManager::SceneLevelTreeManager()
{
	RootNode = new TileNode();
	RootNode->tile.layer = -1;
	RootNode->tile.row = 0;
	RootNode->tile.col = 0;

	RootNode->child00 = new TileNode(0, 0, 0, RootNode);
	RootNode->child01 = new TileNode(0, 0, 1, RootNode);	

	levelLoaderOneByOne = NewObject<ULevelLoaderOneByOne>();
	levelLoaderOneByOne->AddToRoot();

}


void SceneLevelTreeManager::LoadLevelChangeState(SceneLevelTreeManager::TileNode* tileNode)
{
	//FString str = TEXT("Begin Load level" + tileNode->tile.TileToString() + "!");
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);



	levelLoaderOneByOne->LoadLevel(tileNode->tile.TileToString());
	tileNode->state = SceneLevelTreeManager::TileNodeState::LOADED;
	ReplaceParentNode(tileNode);
	

}
void SceneLevelTreeManager::UnLoadLevelNoChangeState(SceneLevelTreeManager::TileNode* tileNode)
{
	//FString str = TEXT("Begin UnLoad level" + tileNode->tile.TileToString() + "!");
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, str);
	levelLoaderOneByOne->UnLoadLevel(tileNode->tile.TileToString());
}



std::queue<SceneLevelTreeManager::TileNode *> SceneLevelTreeManager::BFS_Load_Iteration()
{
	std::queue<TileNode *> queueLoadTile;

	// 当前瓦片加载成功	


	std::queue<SceneLevelTreeManager::TileNode *> tileQueue;
	tileQueue.push(RootNode->child00);
	tileQueue.push(RootNode->child01);

	while (!tileQueue.empty())
	{
		SceneLevelTreeManager::TileNode *tileNode = tileQueue.front();
		tileQueue.pop();
		if (tileNode == NULL)
			continue;
			   		
		if (tileNode->tile.layer == 0 && tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
		{
			queueLoadTile.push(tileNode);
		}


		if (tileNode->tile.IsPositionIn(this->position) && tileNode->tile.layer <= layer) // 命中瓦片
		{
			if (tileNode->tile.layer != 0 && tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
			{
				queueLoadTile.push(tileNode);
			}			

			if (tileNode->state == SceneLevelTreeManager::TileNodeState::REPLACED_BY_CHILDREN)
			{
				continue;
			}

			tileNode->CreateSubTileNode();
			tileQueue.push(tileNode->child00);
			tileQueue.push(tileNode->child01);
			tileQueue.push(tileNode->child10);
			tileQueue.push(tileNode->child11);
			
		}
	}
	return queueLoadTile;
}


void SceneLevelTreeManager::ReplaceParentNode(SceneLevelTreeManager::TileNode* tileNode)
{
	if (tileNode && tileNode->parent && tileNode->parent->state == SceneLevelTreeManager::TileNodeState::LOADED)
	{
		bool load00 = false;
		if (tileNode->parent->child00 == NULL || !tileNode->parent->child00->tile.IsLevelFileExist() || tileNode->parent->child00->state != SceneLevelTreeManager::TileNodeState::UNLOADED)
			load00 = true;
		bool load01 = false;
		if (tileNode->parent->child01 == NULL || !tileNode->parent->child00->tile.IsLevelFileExist() || tileNode->parent->child00->state != SceneLevelTreeManager::TileNodeState::UNLOADED)
			load01 = true;
		bool load10 = false;
		if (tileNode->parent->child10 == NULL || !tileNode->parent->child00->tile.IsLevelFileExist() || tileNode->parent->child00->state != SceneLevelTreeManager::TileNodeState::UNLOADED)
			load10 = true;
		bool load11 = false;
		if (tileNode->parent->child11 == NULL || !tileNode->parent->child00->tile.IsLevelFileExist() || tileNode->parent->child00->state != SceneLevelTreeManager::TileNodeState::UNLOADED)
			load11 = true;
		
		if (load00 && load01 && load10 && load11)
		{
			levelLoaderOneByOne->UnLoadLevel(tileNode->parent->tile.TileToString());
			tileNode->parent->state = SceneLevelTreeManager::TileNodeState::REPLACED_BY_CHILDREN;
		}
	}

}

void SceneLevelTreeManager::BFS_Load_Iteration_Oper()
{
	std::queue<TileNode *> queueLoadTile;

	// 当前瓦片加载成功	


	std::queue<SceneLevelTreeManager::TileNode *> tileQueue;
	tileQueue.push(RootNode->child00);
	RootNode->child00->CreateSubTileNode();
	tileQueue.push(RootNode->child00->child00);
	tileQueue.push(RootNode->child00->child01);
	tileQueue.push(RootNode->child00->child10);
	tileQueue.push(RootNode->child00->child11);
	tileQueue.push(RootNode->child01);
	RootNode->child01->CreateSubTileNode();
	tileQueue.push(RootNode->child01->child00);
	tileQueue.push(RootNode->child01->child01);
	tileQueue.push(RootNode->child01->child10);
	tileQueue.push(RootNode->child01->child11);

	while (!tileQueue.empty())
	{
		SceneLevelTreeManager::TileNode *tileNode = tileQueue.front();
		tileQueue.pop();
		if (tileNode == NULL || !tileNode->tile.IsLevelFileExist())
			continue;

		if (tileNode->tile.layer > this->layer)
			continue;

		if (!tileNode->tile.IsPositionIn(position))
		{
			if (tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
			{
				LoadLevelChangeState(tileNode);
			}

		}
		else
		{
			if (tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
			{
				LoadLevelChangeState(tileNode);

				if (tileNode->IsAllChildrenMiss())
					continue;

				tileQueue.push(tileNode->child00);
				tileQueue.push(tileNode->child01);
				tileQueue.push(tileNode->child10);
				tileQueue.push(tileNode->child11);
			}
			else
			{
				tileNode->CreateSubTileNode();
				tileQueue.push(tileNode->child00);
				tileQueue.push(tileNode->child01);
				tileQueue.push(tileNode->child10);
				tileQueue.push(tileNode->child11);
			}
			
		}
		

	}
	return ;
}

void SceneLevelTreeManager::BFS_Load_Iteration_ShenZhen()
{
	std::queue<SceneLevelTreeManager::TileNode *> queueLoadTile;
	// 当前瓦片加载成功
	std::queue<SceneLevelTreeManager::TileNode *> tileQueue;
	int layer = 11;
	for (int row = 1278; row < 1285; ++row)
	{
		for (int col = 3342; col < 3353; ++col)
		{
			SceneLevelTreeManager::TileNode *node = new SceneLevelTreeManager::TileNode(layer, row, col, NULL);
			tileQueue.push(node);
		}
	}

	while (!tileQueue.empty())
	{
		SceneLevelTreeManager::TileNode *tileNode = tileQueue.front();
		tileQueue.pop();
		if (tileNode == NULL || !tileNode->tile.IsLevelFileExist())
			continue;

		if (tileNode->tile.layer > this->layer)
			continue;

		if (!tileNode->tile.IsPositionIn(position))
		{
			if (tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
			{
				LoadLevelChangeState(tileNode);
			}

		}
		else
		{
			if (tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
			{
				LoadLevelChangeState(tileNode);

				if (tileNode->IsAllChildrenMiss())
					continue;

				tileQueue.push(tileNode->child00);
				tileQueue.push(tileNode->child01);
				tileQueue.push(tileNode->child10);
				tileQueue.push(tileNode->child11);
			}
			else
			{
				tileNode->CreateSubTileNode();
				tileQueue.push(tileNode->child00);
				tileQueue.push(tileNode->child01);
				tileQueue.push(tileNode->child10);
				tileQueue.push(tileNode->child11);
			}

		}


	}

	return;
}
void SceneLevelTreeManager::DoLoadTile(SceneLevelTreeManager::TileNode *tileNode)
{
	if (tileNode->tile.layer == 0) // 第0层，只加载
	{
		LoadLevelChangeState(tileNode);
		
	}
	else
	{
		if (tileNode->state == SceneLevelTreeManager::TileNodeState::UNLOADED)
		{
			TileNode *tileParent = tileNode->parent;
			
			
			if ((!tileParent->child00->tile.IsLevelFileExist() &&
				!tileParent->child01->tile.IsLevelFileExist() &&
				!tileParent->child10->tile.IsLevelFileExist() &&
				!tileParent->child11->tile.IsLevelFileExist() ))
			{
				//tileParent->state = SceneLevelTreeManager::TileNodeState::CHILDRENFILEMISSING;
				return;
			}
			
			
			LoadLevelChangeState(tileParent->child00);
			tileParent->child00->state = SceneLevelTreeManager::TileNodeState::LOADED;

			LoadLevelChangeState(tileParent->child01);
			tileParent->child01->state = SceneLevelTreeManager::TileNodeState::LOADED;

			LoadLevelChangeState(tileParent->child10);
			tileParent->child10->state = SceneLevelTreeManager::TileNodeState::LOADED;

			LoadLevelChangeState(tileParent->child11);
			tileParent->child11->state = SceneLevelTreeManager::TileNodeState::LOADED;



			//if (tileParent->tile.layer != 1)
			UnLoadLevelNoChangeState(tileParent);
			tileParent->state = SceneLevelTreeManager::TileNodeState::REPLACED_BY_CHILDREN;
		}
	}
}


void SceneLevelTreeManager::Run()
{	
	while (!queueTile.empty())
	{
		TileNode* tileNode = queueTile.front();
		queueTile.pop();
		DoLoadTile(tileNode);
		break;
	}
}


void SceneLevelTreeManager::SetRefineTo(int l, const FVector2D& pos)
{
	levelLoaderOneByOne->OnTick();
	this->layer = l;
	this->position = pos;
	Tile tileNew = Tile::GetTileByLayerAndCoord(layer, pos);
	if (tileNew.layer != this->tile.layer ||
		tileNew.row != this->tile.row ||
		tileNew.col != this->tile.col
		)
	{
		this->tile = tileNew;
		BFS_Load_Iteration_Oper();
		//BFS_Load_Iteration_ShenZhen();

	}

	
}





////////////////////////////////////////////// UGeographicMath  Functions ///////////////////////////////////////////////////////////


UGeographicMath::UGeographicMath()
{
	transform = FTransform::Identity;

	earthRadius = 6378.2 * 1000; // m
	float c = 2 * PI * earthRadius;
	float meterPerDegree = c / 360.0f;

	float UedPerDegree = 100.0f;

	float meterPerR16 = 5.0f / 128.0f;
	transform.SetScale3D(FVector(UedPerDegree, UedPerDegree, UedPerDegree));


	inverseTransform = transform.Inverse();
}




FVector UGeographicMath::UEToGeoPosition(FVector position)
{
	return inverseTransform.TransformPosition(position);
}

FRotator UGeographicMath::UEToGeoRotator(FRotator rotator)
{

	return FRotator(inverseTransform.TransformRotation(rotator.Quaternion()));
}


ProjectedCameraState UGeographicMath::UEToGeoCameraState(ProjectedCameraState cameraState)
{
	ProjectedCameraState geoCameraState;
	geoCameraState.Location = UEToGeoPosition(cameraState.Location);
	geoCameraState.Rotator = UEToGeoRotator(cameraState.Rotator);
	geoCameraState.AspectRatio = cameraState.AspectRatio;
	geoCameraState.FOV = cameraState.FOV;
	return geoCameraState;
}


void UGeographicMath::GetCameraHalfLine(ProjectedCameraState cameraState, TArray<HalfLine>& lines)
{
	HalfLine centerHalfLine;
	centerHalfLine.BasePoint = cameraState.Location;
	centerHalfLine.Direction = cameraState.Rotator;

	lines.Add(centerHalfLine);
}


FVector2D UGeographicMath::GetHalfLineXOYIntersect(HalfLine line)
{
	FQuat quat= line.Direction.Quaternion();
	quat.Normalize();
	FVector endPoint = quat.Vector() + line.BasePoint;

	FVector intersect;
	//if (endPoint.Z >= line.BasePoint.Z)
	//{
	//	intersect.X = INFINITY; 
	//	intersect.Y = INFINITY;		 
	//}
	//else
	{
		intersect.Z = 0.0f;
		intersect.X = (endPoint.X - line.BasePoint.X) * (intersect.Z - line.BasePoint.Z) / (endPoint.Z - line.BasePoint.Z) + line.BasePoint.X;
		intersect.Y = (endPoint.Y - line.BasePoint.Y) * (intersect.Z - line.BasePoint.Z) / (endPoint.Z - line.BasePoint.Z) + line.BasePoint.Y;
	}

	return FVector2D(intersect);
}


Tile UGeographicMath::GetTileByDistance(ProjectedCameraState cameraState, FVector2D xoyIntersect)
{
	float distance = FVector::Distance(cameraState.Location, FVector(xoyIntersect,0.0f));
	float pixelDegree = distance * abs(tan(cameraState.FOV * PI / 360.0)) / 500;
	int i;
	for(i = 0; i < 20; ++i)
	{
		float degree = 180.0f / (256 * pow(2, i));
		float degreeNext = 180.0f / (256 * pow(2, i + 1));

		if (pixelDegree >= degree)
			break;

		if (pixelDegree < degree && pixelDegree > degreeNext)
			break;
	}
	if (xoyIntersect.X < -90 || xoyIntersect.X > 90 || xoyIntersect.Y < -180 || xoyIntersect.Y > 180)
	{
		Tile tile;
		tile.layer = 1;
		tile.row = 1;

		tile.col = 2;
		return tile;
	}
	return Tile::GetTileByLayerAndCoord(i, xoyIntersect);
}




Tile UGeographicMath::GetTileByCenterIntersect(ProjectedCameraState cameraState, FVector2D &intersect)
{
	TArray<HalfLine> lines;

	cameraState = UEToGeoCameraState(cameraState);

	GetCameraHalfLine(cameraState, lines);
	HalfLine centerLine = lines[0];
	intersect = GetHalfLineXOYIntersect(centerLine);


	Tile tile = GetTileByDistance(cameraState, intersect);	
	return tile;
}


////////////////////////////////////////////// ULevelTranform  Functions ///////////////////////////////////////////////////////////

ULevelTranform::ULevelTranform()
{
	initTileSize = 63.0f;

	geographicMath = NewObject<UGeographicMath>();
	geographicMath->AddToRoot();
}

FTransform ULevelTranform::GetTransform(Tile tile)
{
	FVector2D center;
	FVector2D size;
	tile.CalcTileGeographicPosition(center, size);
	center.X = center.X - size.X / 2.0f;
	center.Y = center.Y - size.Y / 2.0f;
	
	FTransform geoTransform = geographicMath->transform;

	/*
	size.X = size.X * this->TileScale;
	size.Y = size.Y * this->TileScale;
	center.X = center.X * this->TileScale + this->OffsetXY.X;
	center.Y = center.Y * this->TileScale + this->OffsetXY.Y;
	*/

	float scale = size.X / initTileSize;

	center.X = center.X * geoTransform.GetScale3D().X;
	center.Y = center.Y * geoTransform.GetScale3D().Y;

	FTransform transform(geoTransform);

	float earthRadius = 6378.2 * 1000; // m
	float c = 2 * PI * earthRadius;
	float meterPerDegree = c / 360.0f;

	float UedPerDegree = 100.0f;

	float meterPerR16 = 5.0f / 128.0f;	

	float zOffset = 0;//215.9375f;
	transform.MultiplyScale3D(FVector(scale, scale, 5 * 1.0f / (meterPerDegree * meterPerR16)));
	transform.AddToTranslation(FVector(center, zOffset));
	
	FTransform a;
	return transform;
}


void ULevelTranform::TransformLevel(ULevel *Level, Tile tile)
{
	FTransform LevelTransform = GetTransform(tile);
	for (int32 ActorIndex = 0; ActorIndex < Level->Actors.Num(); ActorIndex++)
	{
		AActor* Actor = Level->Actors[ActorIndex];

		// Don't want to transform children they should stay relative to there parents.
		if (Actor && Actor->GetAttachParentActor() == NULL)
		{
			// Has to modify root component directly as GetActorPosition is incorrect this early
			USceneComponent *RootComponent = Actor->GetRootComponent();
			if (RootComponent)
			{
				
				RootComponent->SetRelativeLocationAndRotation(LevelTransform.GetLocation(), LevelTransform.Rotator());
				RootComponent->SetRelativeScale3D(LevelTransform.GetScale3D());

			}
		}
	}
}





////////////////////////////////////////////// ULevelLoaderStrategic  Functions ///////////////////////////////////////////////////////////

ULevelLoaderStrategic::ULevelLoaderStrategic()
{
	
	geographicMath = NewObject<UGeographicMath>();
	geographicMath->AddToRoot();

	sceneLevelTreeManager = new SceneLevelTreeManager();
}



TSet<FString>  GetLevelNTile(int n)
{
	Tile tile;
	tile.layer = n;
	TSet<FString> levelSet;
	for (int i = 0; i < pow(2, n); ++i)
	{
		for (int j = 0; j < pow(2, n + 1); ++j)
		{
			tile.row = i;
			tile.col = j;
			levelSet.Add(tile.TileToString());
		}
	}
	return levelSet;
}

void ULevelLoaderStrategic::DoLevelLoadStrategic(ProjectedCameraState cameraState)
{
	FVector2D intersect;

	Tile tile = geographicMath->GetTileByCenterIntersect(cameraState, intersect);

	sceneLevelTreeManager->SetRefineTo(tile.layer, intersect);
}




////////////////////////////////////////////// UNavigationManger  Functions ///////////////////////////////////////////////////////////

void UNavigationManger::OnTick(ProjectedCameraState cameraState)
{	
	if (levelLoaderStrategic)
		levelLoaderStrategic->DoLevelLoadStrategic(cameraState);	
}


UNavigationManger::UNavigationManger()
{
	levelLoaderStrategic = NewObject<ULevelLoaderStrategic>();
	levelLoaderStrategic->AddToRoot();
}

////////////////////////////////////////////// ALevelLoadCharacter  Functions ///////////////////////////////////////////////////////////

// Sets default values
ALevelLoadCharacter::ALevelLoadCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	navigationManger = NewObject<UNavigationManger>();
	navigationManger->AddToRoot();
}



// Called when the game starts or when spawned
void ALevelLoadCharacter::BeginPlay()
{
	this->AddToRoot();
	Super::BeginPlay();
	Super::PostRegisterAllComponents();
}
void ALevelLoadCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	this->RemoveFromRoot();
}
	


ProjectedCameraState ALevelLoadCharacter::GetCameraState()
{
	UWorld* CurWorld = GetWorld();
	if (!CurWorld)
	{
		return ProjectedCameraState();
	}

	// Find our player index
	int32 IterIndex = 0;
	int32 PlayerIndex = INDEX_NONE;
	bool bIsPaused = GetWorld()->IsPaused();
	ProjectedCameraState cameraState;
	static bool isframefirst = true;
	for (FConstPlayerControllerIterator Iterator = CurWorld->GetPlayerControllerIterator(); Iterator; ++Iterator, ++IterIndex)
	{
		APlayerController* PlayerController = Iterator->Get();

		if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
		{
			PlayerIndex = IterIndex;

			if (isframefirst)
			{
				FMinimalViewInfo CurrentPOV = PlayerController->PlayerCameraManager->GetCameraCachePOV();
			
			
				CurrentPOV.Rotation = FRotator(-89.89, 0.0, 0.0);
				CurrentPOV.Location.X = 2332;
				CurrentPOV.Location.Y = 11404;
				CurrentPOV.Location.Z = 1000.0;
				PlayerController->PlayerCameraManager->SetCameraCachePOV(CurrentPOV);
				isframefirst = false;
				
				//MyCharacter = GetWorld()->SpawnActor<ALevelLoadCharacter>(ALevelLoadCharacter::GetClass(), CurrentPOV.Location, CurrentPOV.Rotation);
				//PlayerController->Possess(MyCharacter);
				//MyCharacter->GetCharacterMovement()->bCheatFlying = true;
				//MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
				//MyCharacter->GetCharacterMovement()->bUseControllerDesiredRotation = true;
				//MyCharacter->GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
				//isframefirst = false;
			
				
			}
			
			float CamFOV = PlayerController->PlayerCameraManager->GetFOVAngle();
			FVector Loc = PlayerController->PlayerCameraManager->GetCameraLocation();
			FRotator Rotator = PlayerController->PlayerCameraManager->GetCameraRotation();
			float AspectRatio = PlayerController->PlayerCameraManager->GetCameraCachePOV().AspectRatio;

			

			/*
			if (PlayerController->PlayerCameraManager != NULL)
			{
				OutViewInfo = PlayerController->PlayerCameraManager->GetCameraCachePOV();
				OutViewInfo.FOV = PlayerController->PlayerCameraManager->GetFOVAngle();
				PlayerController->GetPlayerViewPoint( OutViewInfo.Location,  OutViewInfo.Rotation);
			}
			else
			{
				PlayerController->GetPlayerViewPoint( OutViewInfo.Location,  OutViewInfo.Rotation);
			}
			*/

			cameraState.FOV = CamFOV;
			cameraState.Location = Loc;
			cameraState.Rotator = Rotator;	
			cameraState.AspectRatio = AspectRatio;
			break;
		}
	}
	return cameraState;
}

// Called every frame

COREUOBJECT_API int32 LoadPackageAsync(const FString& InName, const FGuid* InGuid, const TCHAR* InPackageToLoadFrom, FLoadPackageAsyncDelegate InCompletionDelegate, EPackageFlags InPackageFlags, int32 InPIEInstanceID, TAsyncLoadPriority InPackagePriority);
void ALevelLoadCharacter::Tick(float DeltaTime)
{
	static int k = 0;
	if (k == 0)
	{
		this->AddToRoot();
		this->Role = ENetRole::ROLE_MAX;
		k++;
	}
	Super::Tick(DeltaTime);
	if (navigationManger)
		navigationManger->OnTick(GetCameraState());
	/*
	static int k = 0;
	UWorld* World = GetWorld();

	FString RootPath = "/Game/3/12/u5";
	UWorld* obj = (UWorld*)StaticLoadObject(UWorld::StaticClass(), NULL, *RootPath);

	ULevel* Level = obj->GetCurrentLevel();
	if (k == 0)
	{

		//const FString longPackageName = "/Game/3/12/u5";
		//UObject* loadObj = StaticLoadObject(UBlueprint::StaticClass(), NULL, TEXT("Blueprint'/Game/3/12/u5.u5'"));
		//AActor* spawnActor = GetWorld()->SpawnActor<AActor>(loadObj->GeneratedClass);

		
		TArray<UObject*> ObjectArray;

		//UObject* loadObj = StaticLoadObject(ALandscape::StaticClass(), NULL, TEXT("Material'/Game/StarterContent/Materials/10.10'"));
		//AActor* spawnActor = GetWorld()->SpawnActor<AActor>(loadObj->LandscapeActor.Get());
		
	for (int i = 0; i < Level->Actors.Num(); ++i)
		{
			// Find our player index
			int32 IterIndex = 0;
			int32 PlayerIndex = INDEX_NONE;
			bool bIsPaused = GetWorld()->IsPaused();
			if(Level->Actors[i]->GetActorLabel() == "Landscape")
			//if (Acotrptr->GetName().Contains("12", ESearchCase::CaseSensitive))
			{
				// Transform MuzzleOffset from camera space to world space.

				// Rotation = {0,0,0,1)
				FRotator Rotation = FRotator(0, 0, 0);
				// Translation = {0,0,0,0)
				FVector Translation = FVector(0, 0, 0);
				// Scale3D = {1,1,1,0);
				FVector Scale3D = FVector(1, 1, 1);
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = Acotrptr;
				SpawnParams.Instigator = Instigator;

				for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator, ++IterIndex)
				{
					APlayerController* PlayerController = Iterator->Get();

					if (!bIsPaused || PlayerController->ShouldPerformFullTickWhenPaused())
					{

						FMinimalViewInfo CurrentPOV = PlayerController->PlayerCameraManager->GetCameraCachePOV();
						CurrentPOV.Rotation = FRotator(0.0, -89.0, 0.0);
						CurrentPOV.Location.X = 28 * para.latlontoued;
						CurrentPOV.Location.Y = 87 * para.latlontoued;
						CurrentPOV.Location.Z = 1 * 760000.0;
						PlayerController->PlayerCameraManager->SetCameraCachePOV(CurrentPOV);
						//MyCharacter = GetWorld()->SpawnActor<AMyCharacter>(AMyCharacter::GetClass(), CurrentPOV.Location, CurrentPOV.Rotation);
						levelLoadactor = World->SpawnActor<ALevelLoadCharacter>(ALevelLoadCharacter::StaticClass(), Translation, Rotation);
						//levelLoadactor = Level->Actors[i];
						PlayerController->Possess(levelLoadactor);
						break;
					}
				}
				Acotrptr = Level->Actors[i];


				//UObject* loadObj = StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Material'/Game/StarterContent/Materials/10.10'"));
				//levelLoadCharacter = loadObj->RegenerateClass;
				//ALandscape* fb = LoadObject<ALandscape>(NULL, TEXT("/Game/StarterContent/Materials/10"), NULL, LOAD_None, NULL);
				levelLoadactor = World->SpawnActor<ALevelLoadCharacter>(ALevelLoadCharacter::StaticClass(), Translation, Rotation, SpawnParams);
				ParentComponent = levelLoadactor->GetDefaultAttachComponent();
				ChildComponent = Acotrptr->GetDefaultAttachComponent();
				ChildComponent->SetupAttachment(ParentComponent);
				RootComponent->UpdateComponentToWorld(EUpdateTransformFlags::SkipPhysicsUpdate, ETeleportType::None);

				//Acotrptr = World->SpawnActor<AActor>(loadObj->RegenerateClass, Translation, Rotation, SpawnParams);

				//levelLoadactor = World->SpawnActor<ALevelLoadCharacter>(loadObj->RegenerateClass, Translation, Rotation, SpawnParams);



				//Acotrptr = World->SpawnActorDeferred(
				//	ALandscape::StaticClass(),
				//	FTransform(Rotation, Translation, Scale3D),
				//	Acotrptr,
				//	nullptr,
				//	ESpawnActorCollisionHandlingMethod::Undefined
				//)
				//Acotrptr = World->SpawnActor(ALandscape::StaticClass(),);
				Acotrptr->bExchangedRoles = true;
				Acotrptr->bNetLoadOnClient = true;
				Acotrptr->bRelevantForLevelBounds = true;
				Acotrptr->bRelevantForNetworkReplays = true;
				Acotrptr->bCanBeDamaged = true;
				Acotrptr->bFindCameraComponentWhenViewTarget = true;
				Acotrptr->bEnableAutoLODGeneration = true;
				World->GetCurrentLevel()->Actors.Add(Acotrptr);
				Acotrptr->AddToRoot();
				ParentDefaultAttachComponent = Acotrptr->GetDefaultAttachComponent();
				RootComponent = ParentDefaultAttachComponent;
				RootComponent->UpdateComponentToWorld(EUpdateTransformFlags::SkipPhysicsUpdate, ETeleportType::None);

				RegisterAllComponents();
				RegisterAllActorTickFunctions(true, true); // register all tick functions


				//World->AddPawn(static_cast<APawn*>(Acotrptr));
			}

			World->AddToRoot();
			if (!World->bIsWorldInitialized)
			{
				World->InitWorld();
			}
			FCoreUObjectDelegates::PostLoadMapWithWorld.Broadcast(World);
			GWorld = World;
			Super::PostRegisterAllComponents();
			k++;
		}

		
		FString longPackageName = "/Game/" + FString::FromInt(3) + "/" + FString::FromInt(12) + "/u" + FString::FromInt(5);


		const FGuid* Guid = nullptr;
		const TCHAR* PackageToLoadFrom = nullptr;
		FLoadPackageAsyncDelegate InCompletionDelegate = FLoadPackageAsyncDelegate();
		EPackageFlags InPackageFlags = PKG_None;
		int32 InPIEInstanceID = INDEX_NONE;
		int32 InPackagePriority = 0;


		int32 RequestID = LoadPackageAsync(longPackageName, FLoadPackageAsyncDelegate::CreateLambda([=]
		(const FName& PackageName, UPackage* LoadedPackage, EAsyncLoadingResult::Type Result)
		{

			FName flodName = LoadedPackage->GetFolderName();

			//LoadedPackage->IsAsset();
			UMetaData* metadata = LoadedPackage->GetMetaData();
			FLinker* linker = LoadedPackage->LinkerLoad;
			TArray<FObjectExport> Extable = linker->ExportMap;
			TArray<FObjectImport> Imtable = linker->ImportMap;
			return;

			TArray<FObjectImport> ImAssettable;
			TArray<FObjectExport> ExAssettable;

			for (int i = 0; i < Imtable.Num(); ++i)
			{
				if (Imtable[i].XObject->IsAsset())
					ImAssettable.Add(Imtable[i]);
			}
			for (int i = 0; i < Extable.Num(); ++i)
			{
				if (Extable[i].Object->IsAsset())
					ExAssettable.Add(Extable[i]);
			}

		}), 0, PKG_ContainsMap);
	}*/

}

// Called to bind functionality to input
void ALevelLoadCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}





/*
bool ALevelLoadCharacter::GetFocusPosition(ProjectedCameraState cameraState, FVector2D focus, bool bPitchisLon, float DervativeofAngle)
{
	radian = PI / 180;
	float AngleMax = 124;
	FVector2D Resolution = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	// 偏航角在蓝图中设置范围为（-180~180），C++读取范围为（0~360）
	// 俯仰角在蓝图中设置范围为（-90~90），C++读取范围为（0~90）和（270-360）
	// 视点默认位置：偏航角为0，俯仰角为0，视野朝向为沿着UE4的x轴
	// 视野区域计算以（-90，90）为一个单位按照偏航角计算，逆时针为负值，顺时针为正值
	// 视点到焦点的距离为最大距离，以此距离为半径、视点为圆心画圆，圆的区域为视野区域
	float AngleYaw = cameraState.Rotator.Yaw > 0 ? cameraState.Rotator.Yaw : cameraState.Rotator.Yaw + 360;
	float offsetYaw = radian * AngleYaw;

	// 按照正常朝下的视野，焦距则只跟（x方向）俯仰角有关
	float CamYaw = cameraState.FOV * radian / 2.0;
	// 最远距离为人眼最大双眼重合视域124°时的距离
	float CamPitch = atan(tan(radian * cameraState.FOV / 2.0) * Resolution.Y / Resolution.X);
	float CamFOVPitch = CamPitch / radian;
	// (x方向)最远焦距为相机高度除以最远视域与俯仰角最大张角之差（一半）的余弦值
	//float AngleMaxPitch = AngleMax / 2.0 * Resolution.Y / Resolution.X;
	// 在xoy平面要有投影，则俯仰角朝下的角度要大于validpitch
	float ValidPitch = -(90 - AngleMax / 2.0 - CamFOVPitch);
	float AnglePitch = cameraState.Rotator.Pitch < 180 ? cameraState.Rotator.Pitch : cameraState.Rotator.Pitch - 360;
	if (AnglePitch > ValidPitch)
	{
		return false;
	}

	// 最远距离为人眼最大双眼重合视域124°时的距离
	// (x方向)最远焦距在xoy平面的投影，为相机高度除以最远视域与偏航角最大张角之差（一半）的正切值
	float fovmax = cameraState.Location.Z * tan(radian * ((AngleMax - CamFOVPitch) / 2.0));
	// 最短焦距在xoy平面的投影，为焦点在该处的投影
	float fovmin = 0;
	// 相机实际焦距在xoy平面投影与俯仰角有关
	float offsetPitch = radian * AnglePitch;
	float fovpitch = cameraState.Location.Z / tan(abs(offsetPitch));
	fovpitch = fovpitch < fovmin ? fovmin : fovpitch;
	float focusdistance = fovpitch < fovmax ? fovpitch : fovmax;

	bPitchisLon = true;
	if (AngleYaw >= 0 && AngleYaw < 45)
	{
		// lim deta(theta) {tan(theta-deta(theta)) - tan(theta)};
		DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		focus.X = cameraState.Location.X + focusdistance * cos(offsetYaw);
		focus.Y = cameraState.Location.Y + focusdistance * sin(offsetYaw);
	}
	else if (AngleYaw >= 45 && AngleYaw < 135)
	{
		offsetYaw = radian * (AngleYaw - 90);
		DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		// 相机位置右边（offsetYaw:0~45°）为X的负方向，左边（offsetYaw:-45°~0）为X的正方向
		focus.X = cameraState.Location.X - focusdistance * sin(offsetYaw);
		focus.Y = cameraState.Location.Y + focusdistance * cos(offsetYaw);
		bPitchisLon = false;
	}
	else if (AngleYaw >= 135 && AngleYaw < 225)
	{
		offsetYaw = radian * (AngleYaw - 180);
		DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		focus.X = cameraState.Location.X - focusdistance * cos(offsetYaw);
		focus.Y = cameraState.Location.Y - focusdistance * sin(offsetYaw);
	}
	else if (AngleYaw >= 225 && AngleYaw < 315)
	{
		offsetYaw = radian * (AngleYaw - 270);
		DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		focus.X = cameraState.Location.X + focusdistance * sin(offsetYaw);
		focus.Y = cameraState.Location.Y - focusdistance * cos(offsetYaw);
		bPitchisLon = false;
	}
	else if (AngleYaw >= 315 && AngleYaw <= 360)
	{
		offsetYaw = radian * (AngleYaw - 360);
		DervativeofAngle = 1.0 / pow(cos(offsetYaw), 2);
		focus.X = cameraState.Location.X + focusdistance * cos(offsetYaw);
		focus.Y = cameraState.Location.Y + focusdistance * sin(offsetYaw);
	}
	return true;
}

*/


/*
void  ALevelLoadCharacter::GetSeedLevel(Tile tile, ProjectedCameraState cameraState, float DervativeofAngle, float focusdistance)
{
	float latlontoued = 6300;
	int32 bitmapsize = 256;
	float radian = PI / 180;
	FVector2D Resolution = FVector2D(GEngine->GameViewport->Viewport->GetSizeXY());
	// 当前屏幕宽度方向切片个数n=width/bitmap，切片总个数=pow(2,1+LOD)
	float SliceofWidth = Resolution.X / bitmapsize;
	float SilcesAngle = radian * cameraState.FOV * DervativeofAngle * focusdistance / latlontoued;
	float layer = log(360 * SliceofWidth / SilcesAngle) / log(2) - 1;
	tile.layer = ceil(layer) > 0 ? ceil(layer) : 0;

	FVector2D focus;
	if (GetFocusPosition(focus, bPitchisLon, DervativeofAngle))
	{
		float Slicedegree = 360.0 / pow(2, 1 + layer);
		float Slicesize = Slicedegree * latlontoued;
		tile.row = floor(focus.X / Slicesize) + pow(2, layer - 1);
		tile.col = floor(focus.Y / Slicesize) + pow(2, layer);
	}
}

*/
