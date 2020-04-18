#include "TileInfo.h"

/////////////////////////////////////////////////////////////TileInfo_Grid/////////////////////////////////////////////////////////////
TileInfo_Grid TileInfo_Grid::GetTileByLevelNumAndCoord(const int32 thisLevelNum, const Geographic2D Coordinate)
{
	int rowNum = pow(2, thisLevelNum);
	// 根据输入点，确定该点所属行列号，
	int Col = Coordinate.Longitude  * (2 * rowNum) / (2 * PI) + rowNum; // lon
	int Row = Coordinate.Latitude * rowNum / PI + rowNum / 2.0;   // lat

	return TileInfo_Grid(thisLevelNum, Row, Col, FTransform());
}

//代表空瓦片的构造函数
TileInfo_Grid::TileInfo_Grid()
{
	this->LevelNum = -1;
	this->Row = -1;
	this->Col = -1;
}

double TileInfo_Grid::GetTileGridSize() { return 180.0 / FMath::Pow(2.0, LevelNum); }

//返回整个椭球范围内，该层级瓦片的总行数
int32 TileInfo_Grid::GetTileRowCountInGlobe() { return FMath::Pow(2.0, LevelNum); }

//返回整个椭球范围内，该层级瓦片的总列数
int32 TileInfo_Grid::GetTileColCountInGlobe() { return FMath::Pow(2.0, LevelNum + 1); }

//根据当前瓦片层级、行号，列号，构建该瓦片对象
TileInfo_Grid::TileInfo_Grid(const int32 levelNum, const int32 row, const int32 col, const FTransform inTransform)
{
	this->LevelNum = levelNum;
	this->Row = row;
	this->Col = col;
	this->tileTransform = inTransform;

	if (this->LevelNum == -1)
		return;

	double tileGridSize = GetTileGridSize();

	FVector2D GeographicGridOriginPt = GetGeographicGridOriginPt();

	this->DownLeftPt = FVector2D(GeographicGridOriginPt.X + col * tileGridSize, GeographicGridOriginPt.Y + row * tileGridSize);

	this->UpRightPt = FVector2D(GeographicGridOriginPt.X + (col + 1)*tileGridSize, GeographicGridOriginPt.Y + (row + 1)*tileGridSize);
}


//根据当前瓦片层级、行号，列号，构建该瓦片对象
TileInfo_Grid::TileInfo_Grid(const int32 levelNum, const int32 row, const int32 col)
{
	this->LevelNum = levelNum;
	this->Row = row;
	this->Col = col;	

	if (this->LevelNum == -1)
		return;

	double tileGridSize = GetTileGridSize();

	FVector2D GeographicGridOriginPt = GetGeographicGridOriginPt();

	this->DownLeftPt = FVector2D(GeographicGridOriginPt.X + col * tileGridSize, GeographicGridOriginPt.Y + row * tileGridSize);

	this->UpRightPt = FVector2D(GeographicGridOriginPt.X + (col + 1)*tileGridSize, GeographicGridOriginPt.Y + (row + 1)*tileGridSize);
}

FVector2D TileInfo_Grid::GetGeographicGridOriginPt(){	return FVector2D(-180.0, -90.0);}

//用于记录瓦片存储的路径
FString TileInfo_Grid::GetTilePath(){	return FString();}

//返回当前瓦片相对于外部坐标系统的变化矩阵
FTransform TileInfo_Grid::GetTileTransform(){	return this->tileTransform;}

//判定该瓦片文件是否存在
bool TileInfo_Grid::IsTileFileExist() { return false; }

//返回瓦片信息
FString TileInfo_Grid::TileToString() { return FString(); }

//判断当前瓦片是否是合法瓦片
bool TileInfo_Grid::IsTileValid()
{
	if (this->LevelNum == -1 && this->Row == -1 && this->Col == -1)
		return false;
	return true;
}

//返回该瓦片的四个子瓦片构成的数组
// 01
// 23
void TileInfo_Grid::GetChildren(TArray<TileInfo_Grid*>& children)
{
	//若当前瓦片为空，直接返回
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	//添加西北角子瓦片
	children.Add(new TileInfo_Grid(this->LevelNum + 1, this->Row * 2 + 1, this->Col * 2,this->tileTransform));

	//添加东北角子瓦片
	children.Add(new TileInfo_Grid(this->LevelNum + 1, this->Row * 2 + 1, this->Col * 2 + 1, this->tileTransform));

	//添加西南角子瓦片
	children.Add(new TileInfo_Grid(this->LevelNum + 1, this->Row * 2, this->Col * 2, this->tileTransform));

	//添加东南角自瓦片
	children.Add(new TileInfo_Grid(this->LevelNum + 1, this->Row * 2, this->Col * 2 + 1, this->tileTransform));
}

//返回当前瓦片的父瓦片
//若当前瓦片为0级瓦片，父瓦片为空瓦片
TileInfo_Grid* TileInfo_Grid::GetParent()
{
	TileInfo_Grid* result_TileInfo_Grid = new TileInfo_Grid();
	//返回空瓦片
	if (this->LevelNum == 0)
	{
		return result_TileInfo_Grid;
	}

	result_TileInfo_Grid = new TileInfo_Grid(this->LevelNum - 1, FMath::FloorToInt(this->Row / 2), FMath::FloorToInt(this->Col / 2),this->tileTransform);

	return result_TileInfo_Grid;
}

//判断两个瓦片是否是同一个瓦片
bool TileInfo_Grid::Equal(const TileInfo_Grid *other)
{
	if (this->LevelNum == other->LevelNum && this->Row == other->Row && this->Col == other->Col)
		return true;
	return false;
}

//奇偶  奇奇  偶偶  偶奇
// *0   0*    01    01
// 12   12    *2    2*
// northwest northeast southwest southeast
TileInfo_Grid::TilePositionInParent TileInfo_Grid::GetTilePositionInParent()
{
	if (this->Row % 2 == 0)
	{
		if (this->Col % 2 == 0)
			return TileInfo_Grid::TilePositionInParent::SouthWest;
		else
			return TileInfo_Grid::TilePositionInParent::SouthEast;
	}
	else
	{
		if (this->Col % 2 == 0)
			return TileInfo_Grid::TilePositionInParent::NorthWest;
		else
			return TileInfo_Grid::TilePositionInParent::NorthEast;
	}
}



bool TileInfo_Grid::IsPositionIn(const FVector testPt)
{
	if (testPt.X < this->DownLeftPt.X || testPt.X > this->UpRightPt.X
		|| testPt.Y < this->DownLeftPt.Y || testPt.Y > this->UpRightPt.Y)
		return false;
	return true;
}

bool TileInfo_Grid::IsPositionIn(const FVector2D testPt)
{
	if (testPt.X < this->DownLeftPt.X || testPt.X > this->UpRightPt.X
		|| testPt.Y < this->DownLeftPt.Y || testPt.Y > this->UpRightPt.Y)
		return false;
	return true;
}

//判断给定地理范围（矩形）是否与本瓦片相交
bool TileInfo_Grid::IsGeoRangeIntersect(const TArray<FVector2D> geoRange)
{	
	float MaxLeft = 0;
	float MaxBottom = 0;
	float MinRight = 0;
	float MinTop = 0;

	//計算兩矩形可能的相交矩形的邊界  
	MaxLeft = FMath::Max(this->DownLeftPt.X, geoRange[0].X);
	MaxBottom = FMath::Max(this->DownLeftPt.Y, geoRange[0].Y);
	MinRight = FMath::Min(this->UpRightPt.X, geoRange[2].X);
	MinTop = FMath::Min(this->UpRightPt.Y, geoRange[2].Y);
	// 判斷是否相交  
	if (MaxLeft > MinRight || MaxBottom > MinTop)
	{
		return false;
	}
	else
	{
		return true;
	}
}


//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的八邻域瓦片的描述信息
//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
//      012
//      3*4
//      567	
void TileInfo_Grid::GetNeighbor_8(TArray<TileInfo_Grid*>& neighbor_8)
{
	neighbor_8.AddDefaulted(8);
	//若当前tile为空tile，返回空邻域
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	if (this->Row != (GetTileRowCountInGlobe() - 1))
	{
		if (this->Col != 0)
		{
			neighbor_8[0] = new TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col - 1);
			neighbor_8[3] = new TileInfo_Grid(this->LevelNum, this->Row, this->Col - 1);
		}			
		else
		{
			neighbor_8[0] = new TileInfo_Grid(this->LevelNum, this->Row + 1, GetTileColCountInGlobe() - 1);
			neighbor_8[3] = new TileInfo_Grid(this->LevelNum, this->Row, GetTileColCountInGlobe() - 1);
		}

		neighbor_8[1] = new TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col);

		if (this->Col != GetTileColCountInGlobe() - 1)
		{
			neighbor_8[2] = new TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col + 1);
			neighbor_8[4] = new TileInfo_Grid(this->LevelNum, this->Row, this->Col + 1);
		}
		else
		{
			neighbor_8[2] = new TileInfo_Grid(this->LevelNum, this->Row + 1, 0);
			neighbor_8[4] = new TileInfo_Grid(this->LevelNum, this->Row, 0);
		}
	}
	else if (this->Row != 0)
	{
		if (this->Col != 0)
		{
			neighbor_8[5] = new TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col - 1);				
		}
		else
		{
			neighbor_8[5] = new TileInfo_Grid(this->LevelNum, this->Row - 1, GetTileColCountInGlobe() - 1);			
		}

		neighbor_8[6] = new TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col);

		if (this->Col != GetTileColCountInGlobe() - 1)
		{
			neighbor_8[7] = new TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col + 1);			
		}
		else
		{
			neighbor_8[7] = new TileInfo_Grid(this->LevelNum, this->Row - 1, 0);			
		}
	}
}



//基于当前瓦片，返回紧邻的三个瓦片，并且紧邻三个瓦片和本瓦片共同构成上一级的父瓦片
//可能情况：*为本瓦片
//   *0       0*       01       01
//   12       12       *2       2*
void TileInfo_Grid::GetNeighbor_3(TArray<TileInfo_Grid*>& neighbor_3)
{
	//neighbor_3.AddDefaulted(3);

	TArray<TileInfo_Grid*> all4ChildrenTileFromParent;	
	this->GetParent()->GetChildren(all4ChildrenTileFromParent);
	if (all4ChildrenTileFromParent.Num() == 4)
	{		
		for (TileInfo_Grid* thisNeighbor : all4ChildrenTileFromParent)
		{
			if (!this->Equal(thisNeighbor))
				neighbor_3.Add(thisNeighbor);
		}		
	}	
}


//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的四邻域瓦片的描述信息
//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
//       0    
//      1*2    
//       3 	 
void TileInfo_Grid::GetNeighbor_4(TArray<TileInfo_Grid*>& neighbor_4)
{
	neighbor_4.AddDefaulted(4);
	//若当前tile为空tile，返回空邻域
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	if (this->Row != (GetTileRowCountInGlobe() - 1))
		neighbor_4[0] = new TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col);

	if (this->Col != 0)
		neighbor_4[1] = new TileInfo_Grid(this->LevelNum, this->Row, this->Col - 1);
	else
		neighbor_4[1] = new TileInfo_Grid(this->LevelNum, this->Row, GetTileColCountInGlobe() - 1);

	if (this->Col != GetTileColCountInGlobe() - 1)
		neighbor_4[2] = new TileInfo_Grid(this->LevelNum, this->Row, this->Col + 1);
	else
		neighbor_4[2] = new TileInfo_Grid(this->LevelNum, this->Row, 0);

	if (this->Row != 0)
		neighbor_4[3] = new TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col);
}

//返回当前瓦片上方瓦片
TileInfo_Grid* TileInfo_Grid::GetUpTile()
{
	//若处于整个地球顶端，则返回北极另一侧瓦片
	if (this->Row == this->GetTileRowCountInGlobe() - 1)
		return new TileInfo_Grid(this->LevelNum, this->Row, this->GetTileRowCountInGlobe() - 1 - this->Col);
	else
		return new TileInfo_Grid(this->LevelNum, this->Row+1, this->Col);
}

//返回当前瓦片下方瓦片
TileInfo_Grid* TileInfo_Grid::GetDownTile()
{
	//若处于整个地球底端，则返回南极另一侧瓦片
	if (this->Row == 0)
		return new TileInfo_Grid(this->LevelNum, 0, this->GetTileRowCountInGlobe() - 1 - this->Col);
	else
		return new TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col);
}
//返回当前瓦片左侧瓦片
TileInfo_Grid* TileInfo_Grid::GetLeftTile()
{
	//若处于整个地球最左端，则返回最右端一侧瓦片
	if (this->Col == 0)
		return new TileInfo_Grid(this->LevelNum, this->Row, this->GetTileRowCountInGlobe() - 1);
	else
		return new TileInfo_Grid(this->LevelNum, this->Row, this->Col - 1);
}

//返回当前瓦片右侧瓦片
TileInfo_Grid* TileInfo_Grid::GetRightTile()
{
	//若处于整个地球最右端，则返回最左端一侧瓦片
	if (this->Col == this->GetTileColCountInGlobe() - 1)
		return new TileInfo_Grid(this->LevelNum, this->Row, 0);
	else
		return new TileInfo_Grid(this->LevelNum, this->Row, this->Col + 1);
}

//返回当前瓦片上移两行瓦片
TileInfo_Grid* TileInfo_Grid::GetUpUpTile()
{
	//若处于整个地球顶端，则返回北极另一侧瓦片
	if (this->Row == this->GetTileRowCountInGlobe() - 1)
		return this->GetUpTile()->GetDownTile();
	else
		return this->GetUpTile()->GetUpTile();
}

//返回当前瓦片下移两行瓦片
TileInfo_Grid* TileInfo_Grid::GetDownDownTile()
{
	//若处于整个地球底端，则返回南极另一侧瓦片
	if (this->Row == 0)
		return this->GetDownTile()->GetUpTile();
	else
		return this->GetDownTile()->GetDownTile();
}


void TileInfo_Grid::GetNeighbor_15(TArray<TileInfo_Grid*>& neighbor_15)
{
	if (this->LevelNum < 3)
		return;
	//根据seed瓦片，计算其在该层级所属的瓦片类型，根据行列号，决定了其在其父瓦片中的位置,决定如何计算其15邻域的其他兄弟瓦片
	//      0   1  2  3 
    //      4   *  5  6
	//      7   8  9 10 
	//      11 12 13 14
	if (this->GetTilePositionInParent() == TileInfo_Grid::TilePositionInParent::NorthWest)
	{
		//0
		neighbor_15.Add(this->GetLeftTile()->GetUpTile());
		//1
		neighbor_15.Add(this->GetUpTile());
		//2
		neighbor_15.Add(this->GetRightTile()->GetUpTile());
		//3
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetUpTile());
		//4
		neighbor_15.Add(this->GetLeftTile());
		//5
		neighbor_15.Add(this->GetRightTile());
		//6
		neighbor_15.Add(this->GetRightTile()->GetRightTile());
		//7
		neighbor_15.Add(this->GetLeftTile()->GetDownTile());
		//8
		neighbor_15.Add(this->GetDownTile());
		//9
		neighbor_15.Add(this->GetRightTile()->GetDownTile());
		//10
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetDownTile());
		//11
		neighbor_15.Add(this->GetLeftTile()->GetDownDownTile());
		//12
		neighbor_15.Add(this->GetDownDownTile());
		//13
		neighbor_15.Add(this->GetRightTile()->GetDownDownTile());
		//14
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetDownDownTile());

	}
	// 0   1  2  3   
	// 4   5  *  6    
	// 7   8  9 10   
	// 11 12 13 14   
	if (this->GetTilePositionInParent() == TileInfo_Grid::TilePositionInParent::NorthEast)
	{
		//0
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetUpTile());
		//1
		neighbor_15.Add(this->GetLeftTile()->GetUpTile());
		//2
		neighbor_15.Add(this->GetUpTile());
		//3
		neighbor_15.Add(this->GetRightTile()->GetUpTile());
		//4
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile());
		//5
		neighbor_15.Add(this->GetLeftTile());
		//6
		neighbor_15.Add(this->GetRightTile());
		//7
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetDownTile());
		//8
		neighbor_15.Add(this->GetLeftTile()->GetDownTile());
		//9
		neighbor_15.Add(this->GetDownTile());
		//10
		neighbor_15.Add(this->GetRightTile()->GetDownTile());
		//11
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetDownDownTile());
		//12
		neighbor_15.Add(this->GetLeftTile()->GetDownDownTile());
		//13
		neighbor_15.Add(this->GetDownDownTile());
		//14
		neighbor_15.Add(this->GetRightTile()->GetDownDownTile());
	}

	// 0   1  2  3   
	// 4   5  6  7    
	// 8   *  9 10   
	// 11 12 13 14   
	if (this->GetTilePositionInParent() == TileInfo_Grid::TilePositionInParent::SouthWest)
	{
		//0
		neighbor_15.Add(this->GetLeftTile()->GetUpUpTile());
		//1
		neighbor_15.Add(this->GetUpUpTile());
		//2
		neighbor_15.Add(this->GetRightTile()->GetUpUpTile());
		//3
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetUpUpTile());
		//4
		neighbor_15.Add(this->GetLeftTile()->GetUpTile());
		//5
		neighbor_15.Add(this->GetUpTile());
		//6
		neighbor_15.Add(this->GetRightTile()->GetUpTile());
		//7
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetUpTile());
		//8
		neighbor_15.Add(this->GetLeftTile());
		//9
		neighbor_15.Add(this->GetRightTile());
		//10
		neighbor_15.Add(this->GetRightTile()->GetRightTile());
		//11
		neighbor_15.Add(this->GetLeftTile()->GetDownTile());
		//12
		neighbor_15.Add(this->GetDownTile());
		//13
		neighbor_15.Add(this->GetRightTile()->GetDownTile());
		//14
		neighbor_15.Add(this->GetRightTile()->GetRightTile()->GetDownTile());
	}

	// 0   1  2  3   
	// 4   5  6  7    
	// 8   9  * 10   
	// 11 12 13 14   
	if (this->GetTilePositionInParent() == TileInfo_Grid::TilePositionInParent::SouthWest)
	{
		//0
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetUpUpTile());
		//1
		neighbor_15.Add(this->GetLeftTile()->GetUpUpTile());
		//2
		neighbor_15.Add(this->GetUpUpTile());
		//3
		neighbor_15.Add(this->GetRightTile()->GetUpUpTile());
		//4
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetUpTile());
		//5
		neighbor_15.Add(this->GetLeftTile()->GetUpTile());
		//6
		neighbor_15.Add(this->GetUpTile());
		//7
		neighbor_15.Add(this->GetLeftTile()->GetUpTile());
		//8
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile());
		//9
		neighbor_15.Add(this->GetLeftTile());
		//10
		neighbor_15.Add(this->GetRightTile());
		//11
		neighbor_15.Add(this->GetLeftTile()->GetLeftTile()->GetDownTile());
		//12
		neighbor_15.Add(this->GetLeftTile()->GetDownTile());
		//13
		neighbor_15.Add(this->GetDownTile());
		//14
		neighbor_15.Add(this->GetRightTile()->GetDownTile());
	}
}