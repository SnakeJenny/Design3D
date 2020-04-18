#include "TileLoadTaskExcutor.h"

GridTileLoadTaskExcutor::GridTileLoadTaskExcutor(FString basePath, AActor* pActor)
{
	this->dataSourcePath = basePath;
	this->rootActor = pActor;
}



//加载一个瓦片的实现函数
bool GridTileLoadTaskExcutor::LoadOneTile(const ITileInfo* thisTile, bool isAsyn)
{
	TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)thisTile;
	if (thisTileInfo_Grid)
	{
		AGridTileLoader* loader = (AGridTileLoader*)this->rootActor;
		if(loader->LoadStaticMesh_Tile(thisTileInfo_Grid))
			return true;
	}
	return false;
}

bool GridTileLoadTaskExcutor::UnloadOneTile(const ITileInfo* thisTile, bool isAsyn)
{
	TileInfo_Grid* thisTileInfo_Grid = (TileInfo_Grid*)thisTile;
	if (thisTileInfo_Grid)
	{
		AGridTileLoader* loader = (AGridTileLoader*)this->rootActor;
		if (loader->UnLoadStaticMesh_Tile(thisTileInfo_Grid))
			return true;
	}
	return false;
}